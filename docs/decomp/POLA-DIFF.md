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
- Mask `-0x80` yang di ref lewat `movs`+`rsbs` sementara agbcc melipat
  `(x & -0x80)` ⇒ `(x & 0x80)`.
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
