# Pola DIFF draf m2c → agbcc (katalog terbukti)

Katalog pola perbaikan draf saat `fomt`/`judge` menjawab **DIFF**. Ini
tempat **satu-satunya** untuk menambah pola baru — **jangan** menumpuk
pola di `AGENTS.md` (AGENTS.md hanya aturan operasional + pointer).

Setiap butir mencantumkan fungsi pembukti (nama `func_*`) supaya bisa
dicek ulang ke `decomp/promoted/` atau `asm/`, bukan klaim.

Alur singkat: buka `decomp/drafts/<nama>.c` + log
`decomp/logs/judge_<nama>/<agent>/func.{c,s}`, kenali gejala di bawah,
edit draf, lalu jalankan `fomt` lagi (draf yang mtime > `judged_mtime`
otomatis ikut antre).

---

## 1. Gagal kompilasi agbcc

### 1.1 `request for member 'unk*' in something not a structure or union`
Argumen masih `void *` tapi dipakai `arg->unkX` (paling sering di fungsi
C++: `intro_scene.s`, `new_game.s`, `game_state.s`).

- Kalau draf belum punya `typedef struct GenObj`, jalankan `fomt` sekali
  lagi (resanitasi menulis ulang draf mentah).
- Kalau ada `?` di tipe, ganti dari asm (lihat 1.4).
- Amati operand asm untuk lebar field: `ldrb`/`strb`=u8, `ldrh`/`strh`=u16,
  `ldrsb`=s8, `ldrsh`=s16, `ldr`=s32/pointer.
- Virtual-call: cast eksplisit
  `((s32 (*)(void *,...))(m->unk40))(t, ...)`.
- Pembukti: `func_080122A0`, `func_08020130`, `func_08015950`.

### 1.2 `extern s32 .Lxxxxxx` / `syntax error before '.'`
Label literal-pool bocor ke C. Sanitizer `_label_addrs` mestinya sudah
mengganti dengan nilai heksa dari blok asm; kalau masih ada, `fomt` lagi
untuk resanitasi. Kalau nilainya tak ketemu (label lompatan), ganti manual
dengan konstanta dari ekor blok asm.

### 1.3 `unksp0 undeclared` / `sp +` di badan
m2c gagal merekonstruksi stack (umum di fungsi dekompresi `Unpack`).
Tulis ulang rangka stack manual dari asm, betulkan tipe/urutan parameter.
Akses struct stack lewat pointer khusus (`p = &sp0`) supaya sp dipin sekali
ke register saved.

### 1.4 `argN undeclared` / `?` di daftar parameter
`?` bukan C valid. Tentukan tipe dari asm: deref pointer → `void *`/tipe
struct, ada `lsls`+`lsrs` pada argumen → tipe sempit (u16/u8), konstanta
saja → lebar apa pun boleh (pembukti: `func_08009674`).
Untuk `?` di **call site**, lihat juga `docs/decomp/MIGRATE.md` (kalau
callee belum MATCH) dan butir 2.2 (argumen yang dibuang m2c).

### 1.5 `M2C_ERROR` di draf
Kontrol aliran m2c gagal total — regenerasi tidak membantu. Tulis ulang
fungsi dari asm.

### 1.6 `syntax error before '<nama>'` pada baris deklarasi `i32 ...`
Harness judge/verify menyediakan `u8/u16/u32/s8/s16/s32` — **tidak ada
`i32`**. Dua efek berbeda, dan yang kedua mematikan:

- `void *GetMapData(i32);` → cuma **warning** `parameter names (without
  types) in function declaration`. GCC 2.9 membacanya sebagai deklarasi
  K&R dengan parameter bernama `i32` (implicit int) → lolos tanpa error,
  tapi menyesatkan. (Terbukti pada blok `func_08017C00/08019F7C/08019FE8`.)
- `i32 SetAnim__12AActorEntityUi(void *, u16);` → **hard error**
  `syntax error before 'SetAnim__12AActorEntityUi'` karena `i32` di posisi
  tipe-return tak bisa ditafsirkan. (Terbukti `func_080299D0`, bikin
  `fomt verify` merah padahal `make compare` hijau.)

Aturan: **tipe di draf dan blok promoted selalu `s32`** (huruf kecil `s`).
`i32` hanya milik `src/` (diterjemahkan otomatis oleh migrate). Cek massal:
`grep -rn "\bi32\b" decomp/drafts decomp/promoted` harus kosong.

---

## 2. Sudah kompilasi, sisa byte-DIFF (codegen)

### 2.1 Epilog `pop {r1}; bx r1` ⇒ fungsi MENGEMBALIKAN nilai (`s32`)
**Gejala:** `byte +0x1a: 0x1 vs ref 0x2 [regalloc @r pop {r1} | pop {r0}]`
— badan identik, hanya register scratch epilog beda.

Ref memakai `pop {r1}; bx r1` karena **r0 masih hidup sebagai nilai
balik**. m2c menulis `void f(...) { call(...); }`.

```c
/* salah (m2c) */        void f(A *a) { g(a); }
/* benar        */        s32  f(A *a) { return g(a); }
```

**Varian ekor baca-nilai:** ref berakhir `bl ...; ldr r1,[r0,#N]; asrs
r0,r1,#0x10` ⇒ fungsi mengembalikan `s32` hasil pergeseran, dan variabel
penampung **diinisialisasi SETELAH call**:

```c
s32 f(A *a) {
    A *x = call(a);
    s32 r = 0;             /* jangan dipindah sebelum call: gcc spill ke r4
                              + push {r4} => +2 byte lagi */
    if (x != 0) r = x->unk8;
    return r >> 0x10;
}
```

Pembukti: `func_08014234`, `func_08014D7C`, `func_08015950`,
`func_080ADB78`, `func_080AAF3C`, `func_080120A4`, `func_080120C4`.

> Ini **bukan** wall regalloc (sebelumnya salah tercatat begitu di skill).

### 2.2 Target indirect call di `r2` walau `r1` bebas ⇒ ada argumen ke-2
**Gejala:** `byte +0x8: 0x1 vs ref 0x2`, hanya `bl _call_via_r1` vs
`_call_via_r2`.

Fungsi aslinya punya parameter ke-2 (`s32 arg1`) yang **diteruskan apa
adanya** ke call; m2c membuangnya karena badan tak pernah membacanya.
Passthrough ini zero-codegen (r1 memang sudah berisi arg1):

```c
s32 f(A *a, s32 arg1) {                     /* tambah arg1 */
    T *t = a->unk4->unkA8;
    x = ((T *(*)(T *, s32)) (*(void **) t ? ... ))(t, arg1);   /* teruskan */
    r = 0;                                    /* = movs r1,#0 di ref */
    if (x != 0) r = x->unk8;
    return r >> 0x10;
}
```

Konsekuensi lain: `movs r1,#0` di ref sering **inisialisasi variabel
hasil**, bukan bagian dari call.

Pembukti: `func_080120A4`, `func_080120C4` (MATCH hanya karena ini).
Catatan: pin `register ... __asm__("rN")`, temp tambahan, dan hoisting
**tidak** memindahkan residual ini — jangan diulang.

### 2.3 `byte +0x4/+0x8: 0x8x vs ref 0xa8` ⇒ padding struct salah
Offset field meleset karena lebar/pad sebelumnya salah. Hitung ulang dari
offset asm (`u8 _padN[...]` sebelum field berikutnya); jangan menambal di
ekspresi pemakaian. Contoh: `_pad44[64]` vs `_pad44[100]` pada
`func_08015950` menggeser `unkA8` dari 0x84 ke 0xA8.

Tips aman: tulis struct dengan offset eksplisit di komentar
(`unk40; /*0x40*/`) lalu cek `ldr/ldrh` di asm ref.

### 2.4 Nilai balik call dipakai sebagai argumen berikutnya (r0 gratis)
**Gejala:** `bl GetMapData` muncul tanpa setup r0, padahal C-nya
`GetMapData(arg)`.

Ref membiarkan r0 = nilai balik call sebelumnya. Tulis sebagai satu
variabel sekali-pakai:

```c
t = func_0803A8A4(...);                       /* hasil di r0 */
return ((MapData *) GetMapData(t))->unk20 << 3;
```

Tanpa variabel (`GetMapData()` polos) ≠ tanda tangan `src`; dengan
variabel, kodegen tetap sama **dan** tanda tangannya bisa disamakan
dengan `src` (lihat `docs/decomp/MIGRATE.md`). Pembukti: `func_08019F7C`,
`func_08019FE8`, `func_08017C00`.

### 2.5 Kondisi `||`/`&&` satu baris ⇒ pecah jadi `if` bertingkat
Urutan evaluasi ref mengikuti asm. Pecah `if (a && b && c)` menjadi `if`
bertingkat sesuai urutan instruksi, dan jaga polaritas cabang
(`== 0`→`beq`, `!= 0`→`bne`) karena sumber yang ekuivalen logika sering
beda 1 byte.

### 2.6 Urutan/rumah temp harus sama dengan ref
Hoist subekspresi ke temp bernama pada titik ref menghitungnya;
memindahkan atau menggabungkan temp mengubah alokasi downstream (biasanya
jadi lebih mahal daripada menghemat). Chained store (`a = b = v`) menyala
kanan-ke-kiri — pecah sesuai urutan store ref.

---

## 3. Wall sungguhan (parkir, jangan iterasi buta)

- Satu temp yang selalu di-home satu register lebih tinggi daripada semua
  varian (urutan assignment, temp ekstra, hoisting tak memindahkan).
- Cek unsigned yang mati tapi tetap diemit ref (`cmp r5,#0; bcc`).
- Mask negatif kecil di ref lewat `movs`+`rsbs` sementara agbcc melipat
  `(x & -0x80)` ⇒ `(x & 0x80)` — **bukan wall lagi**: tahan konstanta di
  temp ber-pin, beri fence, baru dinegasi:
  `register s32 neg __asm__("rN"); neg = 0x40; __asm__ volatile("" : "+r"(neg));
  neg = -neg;` lalu pakai compound (`neg &= x; neg |= y;`). Pembukti:
  `func_080D3870` (0x80) dan `func_08050E98` (0x40).
- Lottery scheduler: pool literal sebelum vs sesudah cabang; tail
  inline vs cross-jump; padding ekor (`movs r0,r0` vs `.byte 0xff,0xff`).
- Konstanta offset besar yang di-home register scratch berbeda.
- Prolog `push` yang menolak menyimpan register yang di-pin.
- Fragmen/tail bersama (ref tanpa prolog: mulai `add sp,#N; pop {...}`,
  atau berakhir `b .L<label>` ke fungsi lain): **tidak ada C mandiri yang
  bisa MATCH** — deteksi dari dua instruksi pertama/terakhir asm, skip.
- Varian vtable-call yang **nilai balik call-nya dipakai** setelah call
  (`bl; cmp r0; ldr r1,[r0,#N]`): pin tidak pernah menutup residual.
- Poke multi-alamat dengan base hidup di register tinggi: ref menyalin
  argumen ke saved reg (`adds r2,r0`) SEKALI di prolog lalu menurunkan
  semua alamat dari sana; agbcc selalu `push {r2}`/`pop {r2}` (+2 byte)
  untuk pin `register ... __asm__("r2")`, dan fence sebelum/sesudah tidak
  bisa meniru prolog tanpa merusak ekor. Pembukti: `func_080CECD0`.
- Bentuk akumulator + r8-save: argumen di-forward ke saved reg di prolog
  (`ldr r4,[r0]; mov r8,r4`) SEBELUM komputasi, lalu register yang sama
  dipakai ulang sebagai akumulator `mul` (`mul r4,r4,r5`). Kombinasi
  prolog-save + reuse sebagai akumulator selalu 2 byte off. Pembukti:
  `func_0803AE58`.
- Double-load u8 dari satu kata stack: kompilator menaruh kata di stack
  sekali (`str r0,[sp,#0xc]`), lalu dua `ldrb` terpisah; kalkulasi `(u8)x`
  ganda di C memaksa slot stack ekstra (`sub sp,#0x10` vs `#0xc`). Satu
  variabel `u8 b0, b1` + fence-after-use meniru urutan reload tapi tak
  cukup bila digabung wall lain. Pembukti: `func_080CB9DC`.

**Verifikasi blok vs draf:** bila `fomt verify` dijalankan (hanya atas
permintaan) dan melaporkan `promoted != draft` untuk fungsi yang bloknya
sudah **tidak ada** di `promoted/` padahal fungsinya sudah di `src/`, itu
bukan kerusakan —
kebenarannya dipegang `make compare`. Jangan “memperbaiki” dengan
menambal draf; kalau blok promoted masih ada tapi berbeda, itu baru
sinyal resync (lihat `MIGRATE.md` §7).

Aturan berhenti (budget skala ukuran, adopsi decompdecomp STALL_BUDGET):
ref_len ≤32 → 3 judge; ≤64 → 4; ≤128 → 6; ≤256 → 8; di atas → 10.
Tanpa perbaikan note antar-judge = wall struktural → parkir, regenerasi
draf mentah (`r.draft(name)`) supaya tidak mengantre ulang, catat wall di
log sesi, pindah fungsi.

---

## 4. Transfer antar-saudara (hemat judge)

Kalau beberapa fungsi satu modul memberi gejalan DIFF identik, diagnosis
satu fungsi sampai tuntas terhadap asm lengkap keduanya, lalu **terapkan
verbatim** ke saudaranya dengan hanya mengganti pin/offset. Contoh nyata:
`func_08015950` → `func_08015970`/`08015990`/`080167AC` (offset vtable
0x84/0x88/0x8c/0x90) semuanya MATCH dalam satu batch.

Cara cepat membangun daftar keluarga: grep asm modul untuk baris khas
pola (`_call_via_r`, dsb), iris dengan daftar `--migratable` dan status
belum-di-src, lalu buang fragmen (lihat bagian 3).

---

## 5. Pola stack-local & bit-count (2026-11-10)

### 5.1 `sp0` lokal + alamat stack dihoist (hardware.s)

Gejala ref: `push {r4,r5,r6,lr}; mov r6,r8; push {r6}; sub sp,#4;
adds r6,r0; mov r8,r1; mov r5,sp; movs r4,#1; bl ...; ands r4,r0;
strh r4,[r5]`, lalu `adds r0,r6; mov r1,r8; bl ...; mov r1,sp;
ldrh r0,[r1]`.

Resep (5 MATCH, 6 migrasi):

- `volatile u16 sp0;` + `volatile u16 *p = &sp0;`, store lewat `*p` supaya
  alamat stack dihoist ke `r5` SEBELUM call pertama.
- Flag dibuat variabel lebih dulu: `s32 t = 1; t &= f(1); *p = (u16) t;`
  (konstanta `1` harus dialokasikan ke `r4` sebelum `bl`; menulis
  `1 & f(1)` membuat konstanta dievaluasi sesudah call).
- Reload lewat pointer yang di-pin: `register volatile u16 *q
  __asm__("r1"); ... q = &sp0; if (*q != 0) ...`. Tanpa pin, gcc memakai
  `r0` untuk alamat dan sisa diff `mov r0,sp` vs `mov r1,sp` (1 byte).
- `arg1` di `r8`: `register s32 a1 __asm__("r8"); a1 = arg1;` lalu
  diteruskan ke call.

Pembukti: `func_08009638`, `func_08009674`, `func_080095FC`,
`func_080095C0`, `func_0800956C`.

### 5.2 Bit-count byte berderet (code_actor_0809BFE8.s)

Gejala ref: `push {lr}` saja, `adds r3,r0`, `ldr r1,=0x624;
adds r0,r3,r1; ldrb r2,[r0]`, lalu deret `lsls r0,r2,#N;
lsrs r1,r0,#0x1f` dan `cmp r0,#0; bge`.

Resep (2 MATCH):

- Field adalah `u8` (ref `ldrb`). m2c menebak `s32` sehingga muncul
  `ldr`+`lsl/lsr` DAN `push` saved-reg yang tidak ada di ref.
- Simpan byte di temp `u32` (bukan `u8`): `b = arg0->unk624;` — tetap di
  `r2` dan fungsi menjadi `push {lr}`.
- Bentuk per bit: bit pertama `(b << 0x1E) >> 0x1F`; bit berikut
  `if ((s32) (b << N) < 0) count += 1;`; bit-7 `if ((b >> 7) != 0)`.
- Increment pertama tanpa cast `(u8)`, increment berikut dengan `(u8)`
  (ref memakai `lsls/lsrs` zero-extend setelah increment).

Pembukti: `func_0809E02C`, `func_0809DFAC` (transfer, offset 0x625/0x626).

### 5.3 Tipe balik: baca ekor asm sebelum memilih

`pop {r0}; bx r0` = **void**; `pop {r1}; bx r1` = mengembalikan nilai.
Blok promoted hasil edit manual belum tervalidasi oleh judge — cocokkan
tipe balik dengan ekor asm lalu buktikan lewat `make compare`, jangan
memilih `s32` hanya karena extern `src` menulis `i32` (kasus
`func_0805E860`: `s32` membuat SHA1 beda, `void` hijau).

---

## 6. Vtable call & cleanup (2026-11-10)

### 6.1 Tiga bentuk akses fn — jangan dicampur

Bentuk ditentukan oleh dua load berantai di ref, bukan oleh tebakan tipe:

| Ref | Sumber | Contoh |
|---|---|---|
| `ldr r0,[obj]; ldr r2,[r0,#0x40]` | `((Vt *) *(void **) obj)->fn40` | `func_08014BD8`, `func_08016F60`, `func_0801223C` |
| `ldr r0,[p,#4]; ldr r2,[r0,#8]` | `((Vt *) p->unk4)->fn8` (p bertipe `GenObj *`) | `func_080125EC`, `func_080124D0` |
| `ldr r1,[o]; ldr r2,[r1,#8]` | `((Vt *) *(void **) o)->fn8` | `func_08012028` |

`Vt` cukup `{ u8 _pad0[N]; void *fnN; }` dengan nama unik per fungsi
(konflik dengan `common.h` = `syntax error before`). Kalau operand masih
`void *`, m2c menghasilkan `request for member 'unk4' in something not a
structure or union`; kalau offset salah, muncul satu `ldr` ekstra dan
geser 1 instruksi. Cast argumen ke tipe struct hasil typedef, bukan
`void *`.

Argumen berbeda bisa memakai layout berbeda di offset yang sama: objek
parameter kedua punya `s32` di +0x20 sementara objek utama punya `u8` di
+0x20 (pembukti `func_08020310`). Jangan memaksa satu typedef untuk semua
parameter — buat struct per peran lalu cast di call site. Salinan lokal
ctor (`__5ActorRC5Actor(&sp, ...)`) juga menentukan frame: objek 8 byte
memberi `sub sp,#8`, objek 12 byte + 8 byte memberi `sub sp,#0x14`
(`func_08020310`, `func_080212C0`).

### 6.2 Cleanup: dua compare + slot pointer

Ref blok bersih-bersih field:

```asm
movs r6, #0
ldr  r1, [r5]
cmp  r6, r1        @ 0 != p
beq  skip
cmp  r1, #0        @ p != 0
beq  skip
... bl _call_via_r2 ...
str  r6, [r5]      @ *slot = 0
```

Resep:

- `z` **variabel** (bukan literal `0`): `if ((z != (s32) p) && (p != 0))`.
  Dua compare literal yang sama akan di-CSE jadi satu oleh agbcc.
- Slot dihitung sekali dari base: `base = arg->unk4; slot = (T **)
  ((u8 *) base + OFF);` lalu `p = *slot; ... *slot = (T *) z;` — store
  lewat `z` supaya memakai register nol yang sama (`str r6`).
- Urutan ref: base, `movs z,#0`, lalu load slot. Menaruh inisialisasi `z`
  setelah akses field menggeser alokasi seluruh blok.
- Urutan per blok: hitung slot dulu, baru `z = 0`, baru `p = *slot`.
  `z = 0` sebelum slot menggeser alamat 4 byte (note `byte +0x4`).
- Blok yang memanggil fungsi langsung dengan `p` sebagai argumen pertama
  (`func(p, 3)`) memakai `p` di r0 tanpa copy; blok cleanup vtable memakai
  r1 + `adds r0,r1`. Deklarasikan `register GenObj *p3 __asm__("r0")`
  khusus blok itu (pembukti: `func_080125EC` MATCH, sisa 1 `ldr`/`adds`).
- Pin register adalah langkah **terakhir**: mem-pin `o`/`slot`/`z`
  sebelum bentuk statement benar justru menambah `add`/`mov` (kasus
  `func_080125EC`, 4 judge).

### 6.3 Cabang mati hanya bertahan dengan `volatile`

`func_08012028`: setelah `sp0 = 0`, ref tetap `ldr [sp]` lalu `cmp #0`
(cabang tak pernah diambil). Dengan field biasa agbcc membuktikan nilai
0 dan menghapus store + cabang (len 38 vs ref 58). Field struct
`void *volatile` mengembalikan store/load tersebut; sisa diff tinggal
regalloc `sp0` (r0 vs r2).

### 6.4 Metode: lokal vs struktural

Jalankan `tools/asm-differ/diff.py -o -f <our.o> -F <ref.o> <fn>`, lalu
hitung mismatch **setelah menormalkan target branch** (alamat relatif
selalu beda; jangan dihitung). Jika mismatch tersebar merata (≥2 per 64
byte sepanjang fungsi) itu masalah struktural — rewrite per blok, bukan
patch lokal. Kasus `func_0809DA00` (1322 B, switch 32 kasus): draf m2c 124 situs
beda; rewrite manual per case (frame `s32 sp[4]` 16 B, switch bernilai
`s32` supaya `bgt` bukan `bhi`, cabang bit-set per case) memangkasnya
ke 11 missing/5 extra/1 stack, sisa 12 byte. Sisa divergensi bukan
logika: agbcc melakukan **cross-jump** — blok test+store dua case yang
mirip (mask sama, offset beda) digabung dan konstanta offset
diparameterkan lewat register, sedangkan ref hanya berbagi blok
`orrs/strb` dan mempertahankan tes inline dengan `beq <store>; b
<fail>`. Pola ini terlihat dari case pertama switch yang di ref memakai
`ldr r2,=offset` (bukan `r0`) dan dua cabang ke blok bersama. Selama
bentuk AST pemicu cross-jump belum ketemu, parkir — jangan tambah
percobaan acak.
### 6.5 Rematerialisasi alamat stack (`mov r1, sp` vs `adds r1, r0, #0`)

`func_08012028` tinggal satu instruksi beda: ref `adds r1, r0, #0; movs
r0, #0; str r0, [r1]`, kita `mov r1, sp; movs r0, #0; str r0, [r1]`.
Artinya di ref alamat `&sp.sp0` disalin dari register yang sudah
memegangnya (r0, sisa `str r0, [sp, #4]`), sedangkan agbcc kita
me-rematerialisasi `sp` untuk salinan itu. Semantik dan panjang sama
(2 byte), tapi bytes berbeda.

Yang sudah dicoba dan TIDAK memicu salinan: field `volatile` per
anggota, pointer `slot`/`q` ke `&sp.sp0`, cast `(u32)`/`(u8 *)+0`,
`register` tanpa pin, rantai `sp.sp4 = q = &sp.sp0`. Yang berhasil
menghapus sisa regalloc lain (tmp r2, p r1, urutan store sp4→sp8→nol,
`*arg0 = tmp`, reload `p` lewat cast volatile) tetap tidak bisa
memaksa salinan r0→r1. Parkir di 1 instruksi; jangan ulang variasi
pointer ke `&sp` tanpa ide baru.

Catatan sapuan (2026-11-10): trio 0xB4/0xB8/0xAC di `game_state`
hanya dimiliki `func_080124D0` (dua kandidat lain, `func_08015E30`/
`func_0801A13C`, menyentuh offset itu tanpa pola cleanup dan drafnya
masih gagal kompilasi karena sebab lain). Pola §6.2 memangkas
`func_080124D0` dari 270 ke 280 byte (ref 282, sisa 23 regalloc):
blok 0xB4/0xB8 langsung cocok, tetapi blok 0xAC punya alokasi
`__builtin_new` yang di ref menempati r4 sementara agbcc kita memakai
r7 dan menumpahkan `o` ke stack; pin `new __asm__("r4")` justru
menghilangkan r7 dari prolog (292 byte). Jangan ulang pin itu tanpa
mengubah bentuk alokasinya.

Catatan akhir (2026-11-10): func_080124D0 cleanup 6.2
Hasil terbaik: 280 byte vs ref 282 byte (sisa 2 byte).
- Blok 0xB4/0xB8: pola slot/z/p diterapkan, cocok dengan ref.
- Blok 0xAC: __builtin_new menghasilkan 5extra/1operand/23regalloc/3different
  karena ref menaruh return value langsung ke r5/add r0 lalu kami harus
  assign ke variabel `new` dan handle p2 (existing slot). Pin new __asm__("r4")
  justru membengkak ke 292 byte (prolog kehilangan r7).
- 6missing adalah operand/alokasi yang tidak bisa kitaeliminasi tanpa
  merusak struktur fungsi.
- Kesimpulan: 2 byte terlalu kecil untuk dijanjikan MATCH; fungsi diparkir
  dengan draf yang telah memanfaatkan pola 6.2 sebesar mungkin.
- func_08015E30 dan func_0801A13C: BUKAN kandidat tiga-blok; offset 0xb4/0xb8/
  0xac hanya kebetulan muncul; draf gagal kompilasi karena struct GenObj::unk14
  di asm hanyalah offset 0x14 (s32 unk6), bukan function pointer.

Catatan akhir (2026-11-10): func_08015E30 & func_0801A13C BUKAN kandidat
- func_08015E30: Fungsi auth/room management dengan logik kompleks. Offset 0x14 di asm
  seharusnya mengakses s32 tetapi m2c mencoba ->unk14 (tidak ada di struct kita).
  Error: "request for member 'unk4' in something not a structure or union" + 
  "called object is not a function". Bukan func teardown slot.
- func_0801A13C: Fungsi auth/room management dengan struct GenObj _pad87[4017] dan
  void *unk1038. Offset 0xB4/0xB8/0xAC muncul tanpa pola cleanup slot serupa.
  Error: incompatible pointer type. Bukan func teardown slot.

Kedua-duanya offset 0xb4/0xb8/0xac muncul secara kebetulan di asm, bukan karena
memiliki pola cleanup tiga-blok seperti func_080124D0.

### 6.6 Buffer stack tumpang-tindih: `s32 sp0; sp0.unk1` (func_080A03B8)

Asm membuktikan `sp0` bukan struct tapi **buffer mentah** yang diakses dengan
lebar berbeda di offset yang bertumpuk (`ldrh [r1]` = 2 byte di 0, lalu
`ldrb [r1,#1]` = byte di 1). m2c menulisnya sebagai `s32 sp0;` + `sp0.unk1`,
yang mustahil dikompilasi.

Pola penulisan yang dipakai: `u8 sp0[8];` + cast lebar per-akses, dan satu
pointer lokal ke buffer (bukan `&sp0` berulang):

```c
u8 sp0[8];
u8 *p = sp0;
*(u16 *) p = (u16) ((0xFFFFFC00 & *(u16 *) p) | 2);
*(p + 1) &= 3;
memcpy(arg0, p, 6);
```

Hasil terbaik `func_080A03B8`: **98 vs ref 100 byte** (dari 110 byte versi
`&sp0` per akses). Sisa diff BUKAN logika:

- **konstanta**: ref memuat `0xFFFFFC00` dari literal pool
  (`ldr r3, .L...`), sedangkan agbcc membuktikan operand `ldrh` hanya 16-bit
  lalu memakai `mov #0xFC; lsl #8` — lebih pendek 2 byte. Membuat operand
  tidak-terbukti-16-bit berarti mengubah lebar akses asli, jadi tidak boleh;
- **regalloc**: ref menaruh `arg0` di r6 + konstanta nol di r5
  (`movs r5,#0` di awal blok), hasil kami menaruh `arg0` di r5 dan
  memakai-ulang r6 (bekas hasil call) sebagai nol — hemat 2 byte tetapi beda.

Kesimpulan: untuk pola ini, m2c→C harus ditulis ulang jadi byte-buffer
(bukan struct) **dan** byte-match tetap tergantung kebetulan regalloc
agbcc; jangan buang budget >3 judge.

## 7. Lebar akses, inversi cabang, dan register epilogue

Tiga motif diff "kecil" yang terbukti dari gelombang kandidat |len-ref| <= 4.
Pembukti: `func_08033800`, `func_080E38E0`, `func_0805E760`.

### 7.1 `ldrh` vs `ldrsh` ditentukan oleh tipe variabel antara

`s16 x = r->unkA;` yang nilainya hanya disimpan sebagai `u16`
(`arg->unk0 = (u16)x;`) membuat agbcc memilih `ldrh` (zero-extend cukup).
Ref memakai `ldrsh` -> deklarasikan variabel antaranya `s32`:

```c
s32 a = r->unkA;   /* -> ldrsh r0, [r1, r2] */
...
arg->unk0 = (u16)a;
```

### 7.2 Inversi `beq`/`bne` pada `if (x) return c; return d;`

`func_080E38E0`: ref berbentuk

```asm
cmp r0, #0
beq .Lret1      @ x == 0 -> return 1
movs r0, #0
b .Lend
.Lret1: movs r0, #1
```

Draf `if (x != 0) return 0; return 1;` menghasilkan `bne` + blok terbalik
(offset cabang bergeser 1 byte -> DIFF). Tulis kondisi kebalikannya:

```c
if (x == 0) return 1;
return 0;
```

Batas aturan ini: ia berlaku saat `then`/`else` masing-masing cuma satu
`return`. Kalau badan fungsi panjang, agbcc tetap menginversi. Pembukti:
`func_08034260` (ref `beq <badan>` dengan fallthrough `movs r0, #0`). Enam
varian C — `if (x != 0) return 0;`, `if (x == 0) { ...; return 1; }`,
`goto` ke label badan, `if (x)`, `else` eksplisit, dan ternary — semuanya
menghasilkan `bne <jalur pulang-0>` dengan badan sebagai fallthrough:
semantik sama, layout beda 2 byte. Probe minimal
(`if (p->f == 0) return ext(); return 0;`) memang `beq`, jadi yang menentukan
adalah ukuran blok, bukan ejaan kondisinya. Parkir setelah satu bentuk
terbukti; jangan sapu varian tanpa perubahan struktur.
Pin rumah register (`__asm__("r6")` / `("r7")`) hanya memindahkan alamat, bukan orientasi cabang: pada `func_08034260` pin r6/r7 mereproduksi `add r6, r0, #0` + `add r7, r6, #0` + `add r7, r7, #0x41`, tetapi ref tetap `beq` dan draf tetap `bne`, dan `push` masih tanpa `r7` (wall (g) SKILL: pin tidak menambah save-set). Dua varian pin tanpa perubahan = berhenti.

### 7.3 Register epilogue `pop {r1}; bx r1` vs `pop {r2}; bx r2`

`func_0805E760` identik instruksi per instruksi kecuali epilogue:
draf menghasilkan `pop {r1}; bx r1`, ref `pop {r2}; bx r2`
(2 byte berbeda, dilaporkan sebagai `[2regalloc @r pop {r2}]`).
Sudah dicoba return `void *`, pointer struct (`Out *`), dan `s32` —
ketiganya tetap `r1`; ini wall regalloc, bukan salah tipe balik. Parkir.

### 7.4 Catatan tool `width_mismatch.py`

`tools/scripts/width_mismatch.py` membandingkan lebar akses asm vs lebar
field draf per offset. Berguna untuk menemukan field yang salah tipe
(pembukti: `func_08021F3C`, `func_08033800`), tetapi **offset dihitung per
angka, bukan per register basis** — `ldrh [r6,#0xc]` dan `ldr [r1,#0xc]`
pada objek berbeda akan tercampur. Diukur: 2398 field di 650 fungsi, dan
dari 7 kandidat teratas hanya 3 yang mismatch-nya nyata. Selalu konfirmasi
manual ke asm (akses harus memakai register argumen) sebelum menulis draf.

## 8. Satu variabel `s32` lintas cabang menyimpan nilai nol

Pembukti: `func_08033800`.

Dua draf sebelumnya menyisakan tepat satu instruksi berlebih:
`mov r1, #0x0` sebelum `strh r1, [r4]` / `[r4, #2]` di cabang `else`.
Sebabnya dua variabel (`Res *r` + `s32 b`): penugasan `b = (s32) r;`
memaksa agbcc mematerialisasi ulang angka nol ke register.

Ref memakai SATU variabel `s32` untuk pointer sekaligus nilai:

```c
s32 v = (s32) (*arg1)->unk44((void *) arg1, arg2);
if (v != 0) {
    p = (Res *) v;
    a = p->unkA;      /* s32 -> ldrsh */
    v = p->unkE;      /* register yang sama dgn hasil call */
    arg0->unk0 = (u16) a;
} else {
    arg0->unk0 = (u16) v;   /* v == 0, tanpa mov */
}
arg0->unk2 = (u16) v;
```

Karena `v` adalah register hasil `cmp`, kedua `strh` di jalur nol memakai
register yang sama tanpa `mov` — persis ref.

Catatan lebar akses: `arg0->unk0 = (u16) p->unkA;` langsung menghasilkan
`ldrh`; untuk `ldrsh` tetap butuh variabel antara `s32 a` (lihat 7.1).

## 9. Argumen pertama tak terpakai, rantai pointer, dan reuse nol

Pembukti: `func_080B9464` (MATCH), `func_08024C74` dan `func_080AB82C` (parkir).

### 9.1 Fungsi pakai r1/r2 -> ada argumen pertama yang tak terpakai

`func_080B9464` di asm mengakses `r1`/`r2` sebagai argumen dan menyimpan
`lsls r1, r1, #0x10` / `lsls r2, r2, #0x10`: bukan tanda argumen kedua/ketiga,
melainkan argumen **pertama yang tidak dipakai**. Draf dua-parameter memaksa
nilai ke r0/r1 dan seluruh badan bergeser satu register. Deklarasikan dummy:

```c
s32 func_080B9464(s32 arg0, s32 arg1, s32 arg2) { /* arg0 tak dipakai */ }
```

Sekali signature dibetulkan, badan sisa langsung byte-identik (68 vs 68).

### 9.2 Rantai pointer tidak dilipat melewati store

`func_08024C74` ref memakai tiga delta berurutan pada pointer yang sama:

```asm
adds r0, #0x3c
strb r1, [r0]
adds r0, #2
strb r1, [r0]
adds r0, #0x68      @ bukan 0x2a (0x3e+0x68=0xa6)
strh r1, [r0]
```

Menulis `p += 0x3C; *p = 0; p += 2; *p = 0; p += 0x68;` menghasilkan delta
apa adanya karena store di antaranya menghalangi pelipatan konstanta. Versi
yang me-reset pointer (`p = (u8 *)arg0; p += 0x68;`) justru dilipat jadi
`+0x2a` -> DIFF.

### 9.3 `adds r2, r0, #0` mati berasal dari variabel pointer yang tak dipakai

Ref punya satu `adds r2, r0, #0` yang tidak pernah dibaca. Itu salinan argumen
untuk variabel lokal (`u8 *p = arg0;`) yang kemudian tidak dipakai, sementara
rantai tetap berjalan di r0. Menghapus variabel itu menghilangkan satu
instruksi (2 byte kurang); memakai variabel itu untuk rantai memunculkan
salinan kedua (`add r1, r2, #0`). Keduanya DIFF -> parkir (4 judge).

### 9.4 Nol yang dipakai tiga kali

Ref memuat `movs r1, #0` **sekali** lalu memakai r1 untuk `strb`, `strb`,
`strh`. Draf dengan literal `0` per statement memunculkan `mov r1, #0` dua
kali. **TERBUKTI**: satu variabel `u8 zero = 0;` yang dipakai ketiga store
menghasilkan `mov r1, #0` **sekali** lalu dipakai ulang untuk `strb`/`strb`/
`strh` — persis ref. Efek samping: `u8 *p = arg0;` yang tak dipakai
tereliminasi, jadi `adds r2, r0, #0` (2 byte) hilang dan hasilnya 16 vs 18
byte. Sampai sekarang belum ada varian C yang memunculkan salinan mati itu
tanpa menambah salinan kedua; sisa 2 byte ini parkir.

**Syarat pakai (hasil uji luas, 2026-11-11).** Pola `zero` hanya menolong
bila sisa diff-nya memang didominasi pemuatan nol berulang. Diuji
penerapan otomatis ke 2 draf pertama dari 14 kandidat "zero-reload + punya
>=2 store nol" (`func_08070B70` u8, `func_08075B00` s32): keduanya jadi
LEBIH jauh (mis. 200 vs 200 -> 222 vs 198) dan draf dikembalikan. Sebabnya
sisa diff kandidat itu struktural (prolog/stack/lebar akses lain), bukan
nol. Setelah kriteria diperketat — `zero-reload`, sisa diff <= 4 operasi,
semua store nol menuju field u8/s8/u16/s16, draf kompilasi — kandidat
tersisa **0**. Jadi: pakai pola ini hanya untuk fungsi yang diff-nya tinggal
"nol dimuat 2x", bukan sebagai sapuan massal.

### 9.5 Sisa diff "regalloc saja" = wall

`func_080AB82C` 3 judge: instruksi identik, hanya `i`/`acc` bertukar r1/r2
(`movs r1, #0` vs `movs r2, #0`). Urutan deklarasi (`i` dulu / `acc` dulu),
inisialisasi di deklarasi, dan `u32` vs `u8` sudah dicoba — penempatan
register tidak berubah. Parkir.

## 10. Switch jump table: `default` + case bernilai sama, dan lebar akses palsu

Pembukti: `func_0809CE30` MATCH, `func_08008A68` MATCH.

### 10.1 Dua label dengan nilai balik sama tetap menghasilkan 6 bodi

Ref `func_0809CE30`:

```asm
add r0, r1, #0x0
sub r0, #0x35
cmp r0, #0x5
bhi *              @ range 0..5 -> jump table
```

Draf `switch (arg1 - 0x35)` dengan case 1..5 dan default saja menghasilkan
`sub #0x36; cmp #0x4` (5 entri). Supaya jadi 6 entri, tulis `default` lebih
dulu dengan nilai balik yang sama seperti `case 0:`, lalu `case 0:`:

```c
switch (arg1 - 0x35) {
default: return 0xFC;   /* bodi pertama */
case 0:  return 0xFC;   /* digabung (cross-jump), tabel[0] -> bodi pertama */
case 1:  return 0xF9;
...
}
```

Hasilnya 6 bodi persis seperti ref (0xFC, 0xF9, 0xFE, 0xFD, 0xFA, 0xFB).

### 10.2 Nilai switch dari r1 -> argumen pertama tak terpakai

`add r0, r1, #0x0` sebelum `sub` berarti nilai switch diambil dari **argumen
kedua**. Signature: `s32 f(s32 arg0, s32 arg1)` dengan arg0 tidak dipakai
(pola sama seperti 9.1).

### 10.3 Klasifikasi `copy` bisa gejala lebar akses

`func_08008A68` terklasifikasi `copy` karena diff memuat
`add r0, r5, #0x0; add r0, #0x68; ldrb r0, [r0]`, tetapi penyebabnya bukan
salinan: `ldrb` immediate maksimum 31, jadi akses byte di offset 0x68 wajib
lewat `add`. Field `s32 unk68` yang diubah menjadi `u8 unk68` langsung MATCH
(47 vs 47). Kalau diff menampilkan `add` + akses sempit, periksa dulu
`width_mismatch.py` sebelum mengejar salinan.

## 11. Alamat field vs nilainya, dan pointer aritmetika bertipe

Pembukti: `func_080167DC` MATCH (88 vs 88), `func_08050424` MATCH (84 vs 84).

### 11.1 Simpan alamat field, bukan nilainya

Ref `func_080167DC` memuat alamat field sekali lalu memuat isinya dua kali:

```asm
add r4, #0xA8
ldr r0, [r4]        @ a = *pa
ldr r1, [r0]        @ vtable
ldr r2, [r1, #0x38]
...
ldr r0, [r4]        @ muat ulang a
```

Draf yang menyimpan **nilai** (`a = *(GenObj **)((u8 *) t + 0xA8);` lalu
`a->unk0`) menghasilkan `ldr r2, [r0, #0x38]` tanpa `ldr r1, [r0]` dan satu
`add r0, rX, #0x0` berlebih. Yang benar: simpan **alamatnya** sebagai
variabel pointer-ke-pointer, lalu deref dua kali di setiap pemakaian:

```c
GenObj **pa = (GenObj **) ((u8 *) t + 0xA8);
((s32 (*)(GenObj *, s32)) ((GenObj *) (*pa)->unk0)->unk38)(*pa, 0x23);
```

### 11.2 `ptr + off` pada pointer struct menskala `sizeof`

`func_08050424` draf aslinya `func_0804F0E0(arg0 + 0xD0)` dengan `arg0`
bertipe `GenObj *`: offset jadi `0xD0 * sizeof(GenObj)`, sehingga keluar
`mov r1, #0x9C; lsl r1, #4; add r0, r5, r1` (2 instruksi + konstanta), bukan
`add r0, #0xD0` seperti ref. Selalu hitung offset byte eksplisit:
`(u8 *) arg0 + 0xD0`. Gejalanya di diff: `mov`+`lsl`+`add` untuk sebuah
offset kecil yang di ref hanya `add`.

## 12. Sapuan `sign/width`: lebar field, bukan salinan

Dua kandidat terkecil antrean `sign/width` (ref 100B dan 196B) sama-sama
membaik hanya dengan memperbaiki lebar field, tanpa MATCH:

- `func_08050AD8`: `unk1DC` dideklarasikan `s32` -> draf `str`; setelah jadi
  `u8` keluar `strb` sesuai ref. Cacat kedua: `func_080ADCA4(arg0 + 0x1E4, ...)`
  dengan `arg0` pointer struct menskala `sizeof`, wajib `(u8 *)arg0 + 0x1E4`.
  Sisa diff: ref punya `cmp r5, #0x0; bcc` ekstra (cek unsigned yang tidak
  muncul dari varian C mana pun yang dicoba: `u32`/`s32`, if terpisah vs
  gabungan, `< 0` vs `< 0U`) + tukar regalloc konstan `mov #1`. Parkir.
- `func_08036900`: `unk4` `s32` -> `u16` membuat `ldr` menjadi `ldrh` sesuai
  ref (190 vs 194 byte). Sisa diff murni bentuk ekspresi
  `((x & 1) * 2) | (y >> 7)` dan urutan literal pool.

### 12.1 Noise literal pool di engine

`ldr rX, .Lpool+0x4` ternyata hanya urutan isi pool, bukan beda kode; engine
sekarang menormalkan `*+0xN` menjadi `*` (sebelumnya ikut terhitung sebagai
diff dan membuat kandidat terlihat lebih jauh dari kenyataan).

### 12.2 Cek cepat lebar akses

Sebelum mengejar `add`/salinan: lihat mnemonik aksesnya. `str` vs `strb`
(tipe field), `ldr` vs `ldrh`, dan `ldr` vs `ldrsh` hampir selalu berarti
deklarasi field salah, dan itu perbaikan satu baris.

## 13. Hasil call bertipe sempit: jangan deklarasikan `s8`

Pembukti: `func_08021EE0` MATCH 92 vs 92.

Tanda tangan callee `s8 GetGrowthStage(...)` lalu disimpan ke variabel `s8`
membuat agbcc menambahkan `lsl rX, #0x18; asr rX, #0x18` setiap kali nilai
dipakai, padahal ref hanya `add r5, r0, #0x0`. Deklarasikan extern-nya `s32`
dan tampung di `s32`; penyempitan (bila ada) cukup di titik store `u8`.

## 14. Fungsi libc SDK: load/store multiple dan jebakan regalloc

Sektor `code_libc_string` (6 fungsi, 76–140B) gagal total di m2c
(`invalid type argument of unary '*'`), jadi harus ditulis manual dari ref.

- **`ldm rX!, {r0}` + `stm rY!, {r0}`** muncul hanya bila salinan ditulis
  sebagai `*(u32 *) d = *(u32 *) s;` lalu `s += 4; d += 4;`. Kalau nilainya
  disimpan dulu (`w = *(u32 *) s; *(u32 *) d = w;`), agbcc mengeluarkan
  `ldr`/`str` + dua `add`.
- **Loop byte gaya libc** (`strb; add; add n,#0; sub n,#1; cmp; bne`) memakai
  salinan `n` di akhir iterasi. `while (n != 0)` menghasilkan 1 instruksi lebih
  sedikit (84 vs 86), `while (n-- != 0)` justru 92 vs 86.
- **`strcpy` mentok di regalloc murni**: instruksi identik, hanya `dst` di r5
  vs r6. Reorder deklarasi `s`/`d` tidak menggeser; parkir.

## 15. `cmp rX, #0x0; bcc` tidak bisa dihasilkan C (hasil probe)

Pembukti negatif: `func_08050AD8` masih kurang `cmp r5, #0x0; bcc` (2 instruksi)
setelah 5 varian. Daripada menebak lagi, bentuk C diuji langsung dengan
`tools/scripts/cc_probe.py` (pipeline cpp -> agbcc, berhenti sebelum as).

24 bentuk diuji, dua kompiler:

```text
x < 0U            x < 0             x < 0x0           x <= 0
x >= 0U           x >= 0            (u32)x < 0U       x - 0 < 0U
0U > x            x < (u32)0        x < ZERO(konst)   x < 0x80000000U
x < 0ULL          (u64)x < 0ULL     x > 0xFFFFFFFEU  (s32)(x-1) < 0
x < 4U            x < 0x80000001U   (x & 0xFFFFFFFFU) < 0U   x < y (y = x - x)
```

Hasil: **0 kemunculan** `cmp rX, #0x0` di agbcc maupun old_agbcc. Keduanya
melipat semua perbandingan dengan nol (contoh: `if (x < 0U) return 1;`
langsung jadi `mov r0, #0`).

Kesimpulan: pasangan `cmp r5, #0x0; bcc` di ref bukan hasil perbandingan C
dengan nol, jadi ia **tidak dapat direproduksi** dari C dengan rangkaian alat
ini — bukan resep yang belum ketemu, melainkan perbedaan sumber/versi build.
Untuk fungsi dengan sisa persis pola ini: parkir, jangan bakar kuota judge.

Cara cepat memakainya:

```bash
python3 tools/scripts/cc_probe.py potongan.c --grep 'bcc|cmp.*#0x0' -C 1
python3 tools/scripts/cc_probe.py potongan.c --compiler old_agbcc
```

## 16. Resep width-offset: batasnya di regalloc, bukan lebar field

Pembukti: `func_08020410` 78 vs ref 80 (belum MATCH).

Dua hal yang TERBUKTI dari resep `func_08021EE0`:

1. field yang diakses `ldrb`/`strb` lewat `add #imm` (>31) memang `u8`
   (`arg0->unk20` s32 -> u8 langsung mengubah `ldr` menjadi `ldrb`);
2. bila ref melakukan zero-extend di **titik pakai** (`lsl r1, r5, #0x10;
   lsr r1, #0x10` di tengah fungsi), parameter fungsi harus 32-bit dengan cast
   `(u16)` di ekspresi. Mendeklarasikan parameter `u16` memindahkan truncation
   ke prolog (`lsl r1, #0x10; lsr r5, r1, #0x10`) dan menggeser seluruh blok.

Sisanya regalloc murni (`orr r0, r1` vs `orr r1, r0`). Dua varian tambahan —
mask dijadikan variabel lokal, dan urutan operand `|` dibalik — sama-sama
memperburuk (2missing/2extra vs 4 regalloc), jadi keduanya bukan arah benar.

## 17. Argumen stack: prototipe 8 argumen, bukan struct-by-value

Pembukti: `func_08032A00` 42 vs ref 44, `func_08032934` MATCH.

Ref `func_08032A00` menyiapkan area argumen 16 byte berisi `1, 0, 0, 0`
(`str` untuk tiga word, `strb` untuk byte terakhir). Dua pendekatan diuji:

- struct 16-byte by value -> agbcc memakai temp lalu menyalin, plus guard
  alignment: 56 byte (12 lebih) dan masih salah;
- prototipe 8 argumen (`s32, s32, s32, u8` setelah 4 argumen register) -> 42
  byte, sisa satu instruksi (`add r2, sp, #0xC; strb` vs `str r0, [sp, #0xC]`).

Jadi kalau ref menaruh beberapa nilai berurutan di `[sp]`, `[sp+4]`, ...,
tebak dulu **argumen skalar tambahan**, baru pertimbangkan struct.

`func_08032934` menunjukkan pola yang sama dari sisi lain: field yang dibaca
`ldrh` adalah `u16` (bukan `s32`), dan begitulah satu judge langsung MATCH.

## 18. Hasil probe: pola mana yang benar-benar bisa dihasilkan C

Semua diuji dengan `cc_probe.py` (agbcc -O2) pada potongan C kecil.

| pola | bisa dihasilkan C? | bukti / catatan |
|---|---|---|
| `sub sp, #N` | ya, tapi agbcc mencetak `add sp, sp, #-0x10` | bentuk cetak berbeda, instruksi sama -> WAJIB dinormalkan (lihat §18.1) |
| dua `mov rX, #0` untuk dua store nol | ya, satu register dipakai ulang | `p[0x3C]=0; p[0x3E]=0;` -> `mov r2, #0` + 2x `strb r2, [r1]` |
| argumen stack ke-8 bertipe `u8` | ya, tapi jadi `str r0, [sp, #0xc]` | TIDAK pernah `add r2, sp, #0xC; strb` -> sisa diff `func_08032A00` bukan dari argumen skalar |
| `cmp rX, #0x0` + `bcc` | **tidak** | 24 bentuk diuji (agbcc & old_agbcc), nol kemunculan (§15) |
| `add rX, rY, #0x0` (salinan) | hanya pada bentuk tertentu | muncul saat nilai argumen harus tetap hidup melewati call/loop; bukan dari sekadar `x = a` |

Kesimpulan praktis: sebelum mengejar sebuah instruksi, probe dulu bentuknya.
Dua pola yang paling sering "hilang" (`cmp #0` + `bcc`, dan `add r2, sp, #off;
strb`) sudah dipastikan **tidak** bisa muncul dari C biasa, jadi fungsi yang
sisa diff-nya persis itu harus diparkir, bukan diiterasi.

### 18.1 Immediate negatif: `add sp, #-0x10` == `sub sp, #0x10`

agbcc mencetak frame sebagai `add sp, sp, #-0x10`, sementara asm repo memakai
`sub sp, #0x10`. Instruksinya sama, tapi `norm()` lama membandingkan teks
apa adanya sehingga **setiap fungsi ber-stack frame terlihat beda 2 instruksi**
— termasuk fungsi yang sudah MATCH (`func_08021EE0` sempat berstatus
`instruksi` padahal promoted). `norm()` sekarang membalik immediate negatif
pada `add`/`sub` menjadi op yang berlawanan, sehingga `func_08021EE0`
kembali `identik` dan jumlah op di antrean turun (mis. `func_08032A00`
dari 8 ke 2).

## 19. Cabang "skip" (bge ke epilog) vs cabang ke store

`func_08038580` ref memuat byte 0x47 ke r1, memakai r1 untuk `ldrb` **dan**
`strb` terakhir, dan cabang `bge` melompat ke **epilog**, bukan ke store.
Draf yang ditulis sebagai dua store terpisah (`if (unk47 != 0) {...} else if
(...) {...}`) menghasilkan dua `strb`; draf dengan variabel `v` yang di-set di
awal menghasilkan `beq` lebih dulu. Bentuk yang MATCH:

```c
p = (u8 *) arg0 + 0x47;
if (*p == 0) {
    if ((f(...) << 0x1E) >= 0) return;   /* bge -> epilog */
    p = (u8 *) arg0 + 0x44;
    v = 1;
} else {
    v = 0;
}
*p = v;                                   /* satu strb, r1 dipakai ulang */
```

Aturan: kalau ref hanya punya **satu** `strb` dengan alamat di register yang
sama dengan `ldrb` sebelumnya, sumbernya satu statement store sesudah
if/else-if, dan test yang gagal harus `return` — bukan `goto store`.

## 20. Dua store byte berurutan: jangan majukan pointer

`func_080A6640` ref menyimpan dua byte berurutan sebagai
`strb r0, [r1]` + `strb r0, [r1, #0x1]` — **tanpa** `add r1, #0x1` di antaranya.
Draf yang memajukan pointer (`p[0] = 0; p[1] = 0;` dengan `p += 1` implisit)
menghasilkan `add rX, #0x1; strb rX, [rX]`, satu instruksi lebih banyak.
Bentuk yang benar: satu variabel pointer ke awal pasangan, lalu dua store
pada indeks tetap (`p[0]`, `p[1]`) sehingga agbcc memakai immediate offset.
Bila blok kedua harus dimulai dari base yang sudah bergeser, tulis
`arg0 = (GenObj *)((u8 *) arg0 + 0xB8);` — agbcc memakai `add r4, r4, #0xB8`
bukan register baru.

## 21. Word read-modify-write = bitfield, bukan `strh`

`func_080342D8` menyimpan tiga nilai ke satu word lokal, dan ref-nya
melakukannya dengan `ldr r1,[sp] / ands / orrs / str` — bukan `strh`.
Itu tanda medan **bitfield**, bukan field `u16`/`u8` biasa:

```c
typedef struct { u16 lo : 16; u8 mid : 8; u8 hi : 8; } SP0;
SP0 sp0;                 /* tidak diinisialisasi: ref memang membaca [sp] dulu */
sp0.lo = func_080AB788(0xB4);          /* lsls #16; lsrs #16; and #0xFFFF0000; or */
sp0.mid = 0;                            /* and #0xFF00FFFF, tanpa or */
sp0.hi = (func_080AB788(0x100 - exp) >> 6) + 2;  /* and #0x00FFFFFF; or (x<<24) */
```

Bukti pendukung: `sp0.lo` menghasilkan pasangan `lsls #0x10; lsrs #0x10`
(truncation ke lebar medan 16 bit) meskipun fungsi kalinya dideklarasikan
`u32`; `sp0.hi` menghasilkan `lsls #0x18` tanpa masking karena lebarnya pas
8 bit. Kalau ketiga store ditulis sebagai field biasa, agbcc memakai
`strh`/`strb` dan diff langsung terlihat.

## 22. Post-decrement `n--`: kapan agbcc menyalin nilai lama

Bentuk `add rX, rY, #0 / sub rY, #1 / cmp rX, #0 / bne` (menyalin nilai LAMA,
lalu decrement) keluar untuk counter **signed**, dan juga untuk `u32` bila
perbandingannya ditulis `n-- > 0` (bukan `n--` / `n-- != 0`). Satu file bisa
memakai dua bentuk sekaligus — bukti di §24. Hasil probe agbcc:

| bentuk | asm |
|---|---|
| `u32 n; while (n--) {}` | `sub r1,#1; mov r2,#1; neg r2,r2; cmp r1,r2; beq` (banding -1) |
| `s32 n; while (n--) {}` | `add r0,r1,#0; sub r1,#1; cmp r0,#0; bne` (salinan) |
| `u32 n; do {...} while (--n);` | `sub; cmp; bne` tanpa salinan |
| `u32 n; for (; n; n--)` | test di atas body, tanpa salinan |
| `u32 n; while (n-- > 0)` | salinan (dipakai `memset`) |

Kalau ref punya salinan + decrement sebelum test, jangan mengejar `while (n--)`
pada `u32`; pakai `while (n-- > 0)` atau counter `s32`.

## 23. Salinan mati `add rX, rY, #0` (batas)

`func_08024C74` diawali `adds r2, r0, #0` yang **tidak pernah dibaca**.
Probe: salinan itu muncul kalau store lewat pointer lokal (`p[0x3C]`,
`p[0x3E]`, `*(u16*)(p+0xA6)`) — tapi versi itu memajukan salinan
(`add r1, r2, #0`), bukan argumen seperti ref (`adds r0, #0x3C`).
Kalau argumen dimajukan in-place, salinan mati dibuang agbcc. Kedua bentuk
tidak bisa disatukan lewat C biasa -> diparkir (bandingkan §15).

## 24. Keluarga libc: dua bentuk ekor di SATU file + ldm/stm

`code_libc_string` membuktikan §22 tidak berlaku seragam:

| fungsi | ekor byte | bentuk |
|---|---|---|
| `memset` | `add r0,r2,#0; sub r2,#1; cmp r0,#0` | salinan (`while (n-- > 0)`) |
| `memcpy` | `sub r2,#1; mov #1; rsbs; cmp` | banding −1 (`while (n-- != 0)`) |
| `memcmp` | `add r0,r4,#0; sub r4,#1; cmp r0,#0` | salinan (`while (cnt-- > 0)`) |

Jadi jangan menormalkan semua loop ke satu bentuk; baca ekor ref per fungsi.

Word-copy `ldm rX!, {r0}` / `stm rY!, {r0}` muncul kalau sisi sumber **dan**
tujuan sama-sama dimajukan lewat pointer `u32`:
`*(u32 *) p++ = *(const u32 *) s++;` (memcpy/strcpy). Kalau yang disimpan hanya
nilai yang sudah dimuat (`*(u32 *) p++ = w;`), agbcc memakai `str` biasa.

Batas yang tersisa di sektor ini: `memcpy` sudah **identik struktural** (12
regalloc, 0 struktural) — pemetaan register (`dst→r5`, penunjuk→r4, `src→r3`,
`n` tetap `r2`) tidak bisa dipaksa lewat C; `strcpy`/`strcat` sama, ditambah
urutan salinan parameter. Dicatat sebagai dinding regalloc, bukan pola yang
hilang.

## 25. Reg saved tertukar: pin temp yang di-load per iterasi (`func_08008020`)

Pembukti: `func_08008020` (hardware.s, 128B) MATCH pada percobaan ke-5.
Urutan kerja yang berhasil, dari termurah ke termahal:

1. **Lebar field dulu** (pola `width-offset`). Asm mengakses byte di offset
   0, 1, 4, 0x80 (`ldrb`/`strb`), sedangkan draf m2c mendeklarasikan
   `s32 unk0/unk1/unk4/unk80` + `_pad8[120]` (yang menaruh `unk80` di 0x84).
   Ganti ke `u8` dengan padding eksplisit (`_pad5[0x7B]`), dan pointer loop
   jadi `(u8 *) arg0 + 4` — `arg0 + 4` pada pointer struct menskala
   `sizeof(GenObj)`. Diff turun dari 12operand/11regalloc ke
   2operand/10regalloc.
2. **Sisanya reg saved tertukar + satu salinan.** Ref: `arg0`=r6, `arg1`=r7,
   `p`=r4, `b`=r5, `i`=r3 (di-spill `str r3,[sp]` sebelum call). Draf: `arg0`
   di r5 dan `b` di r6, sehingga muncul `ldrb r0,[r4]; add r6,r0,#0;
   cmp r6,#0` (+1 instruksi). Pin `arg0` ke r6 **gagal** (`arg1` terdorong ke
   r3, `i` merebut r7, frame `sub sp,#4` hilang → 120 vs 126B); pin `i` ke r3
   juga merusak spill. Yang berhasil: **pin temp yang di-load per iterasi**
   — `register u8 b __asm__("r5")` — `arg0` lalu otomatis menempati r6,
   salinan hilang, 58 vs 58.
3. Migrasi tetap SKIP (`bukan fungsi terakhir di hardware.s`, modul tail-only)
   → promoted-only, bukan migrasi.

Catatan engine: `negs r0, r0` (draf) vs `rsbs r0, r0, #0` (ref) adalah
instruksi yang sama, tetapi `norm()` belum mengalias-kannya sehingga masih
muncul sebagai diff palsu di laporan `diff` setelah MATCH. Byte compare
(`judge`) yang memutuskan, bukan teks normalisasi.

## 26. Mask negatif vs promosi `u8`

Ref kadang meng-AND byte dengan konstanta negatif sehingga muncul
`mov r0, #0x10; rsb r0, r0, #0` alih-alih `mov r0, #0xF0`. Bentuk C yang
sudah dicoba dan hasilnya: `p[4] &= 0xF0` -> `#0xF0`;
`p[4] &= ~0x10` -> `#0xEF` (semantik beda); `p[4] = p[4] & -0x10` -> `#0xF0`;
`s32 t = p[4]; p[4] = t & -0x10` -> `mov #0x10; rsb` **plus `add`**;
`-0x10 & p[4]` -> `#0xF0`. Jadi `rsb` muncul hanya saat nilai byte berada di
register sumber, dan agbcc lalu menyisipkan `add` untuk menyatukan mask —
belum ada bentuk C yang menghasilkan urutan ref persis.

## 27. Pin satu variabel menentukan homing variabel lain + `pm = &m` (func_0801F924)

`func_0801F924` (`game_state`, 388B, gerbang rantai 113 fungsi) MATCH 5/5.
Tiga pengungkit yang menentukan, semuanya soal *rumah register* dan *urutan
store*, bukan logika:

1. **Pin `id` -> r5 membuat `arg0` otomatis r4.** Tanpa pin: `add r5, r0`
   (arg0) dan `add r4, r0` (id) — kebalikan ref, dan enam `add r1, r4/#0`
   ikut salah. Dengan `register s32 id __asm__("r5");` prolog jadi
   `add r4, r0` / `add r5, r0` persis ref. Jadi pin satu temp bisa memindah
   homing variabel lain (bukan hanya dirinya).
2. **Pointer pesan eksplisit menggeser `add r1, sp, #off`.** Bentuk
   `Msg m; m.code = ...; m.arg = id; f(&m)` menaruh `add r1, sp, #off`
   SETELAH store; ref menaruhnya SEBELUM (`add r1, sp, #8; ldr r0, =0x33D;
   str r0, [sp, #8]`). Dengan `Msg *pm = &m;` lalu `pm->code`/`pm->arg`, urutan
   ref tercapai. Diff-nya menipu: baris `- ref` dan `+ draf` tampak identik,
   hanya posisinya bergeser.
3. **Alamat dispatch dihitung per-case, bukan di-hoist.** `void *p =
   arg0->unk0 + 0x140;` di dalam tiap `case` (sebelum isi pesan) menghasilkan
   `ldr r2, [r4]; mov r0, #0xA0; lsl; add r2, r0` mendahului store — sama
   seperti ref. Kalau `p` (atau `fn`) dinaikkan ke luar `switch`, `arg0`
   terdorong ke r6 dan seluruh fungsi meleset.

Jalur percobaan: 1) draf m2c-style DIFF (homes tertukar + urutan), 2) pin
`id->r5` DIFF (sisa 7 baris urutan), 3) `p` per-case DIFF (6 baris), 4) `pm`
untuk 6 case DIFF (1 baris: blok ekor), 5) `pm` juga di blok ekor -> MATCH.
Bukti: `migrate` OK, marker di `src/game_state.cc`, `make compare` HIJAU.
