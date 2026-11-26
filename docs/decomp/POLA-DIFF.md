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

**Cerminnya jangan dilupakan:** `pop {r0}; bx r0` di ref = fungsi **void**
(hasil `bl` dibuang), dan draf yang salah menulis `s32` justru menghasilkan
`pop {r1}`. Jadi baca ekor ref dulu, jangan langsung menambah `return`:
`pop {r1}; bx r1` ⇒ mengembalikan nilai, `pop {r0}; bx r0` ⇒ void
(lihat juga §5.3 dan MIGRATE pembungkus mangled). Pembukti sesi 2026-11-12:
`func_0800952C`/`func_0800951C` (hardware).

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
Return `void *`, pointer struct (`Out *`), dan `s32` semuanya memberi `r1`,
jadi bukan salah tipe balik 32-bit. **Konvensinya 64-bit**: scratch epilog
menggeser satu register setiap kali register nilai balik bertambah lebar —
`void` -> `pop {r0}`, `s32`/lintasan -> `pop {r1}`, nilai balik dua register
(`long long`) -> `pop {r2}`.

Bukti probe `tools/scripts/cc_probe.py` (tubuh identik, `Out`/`In` sama):

| bentuk | agbcc/agbcp (build) | old_agbcc |
|---|---|---|
| `void f(...)` | `pop {r0}` | `pop {r0}` |
| `s32 f(...) { ...; return 0; }` | `pop {r1}` | `pop {r1}` |
| `long long f(...)` (tanpa `return`) | `push {r4,r5,r6,lr}` — r0:r1 dipesan sejak awal, argumen bergeser | **persis ref**: `push {r4,lr}` + `pop {r2}` |
| `long long f(...) { ...; return 0; }` | `movs r0,#0; mov r1,#0` (+4B) lalu `pop {r2}` | sama, `+4B` |

Artinya `pop {r2}` tanpa instruksi penyiapan hanya muncul bila fungsi
**mendeklarasikan nilai balik dua register dan tidak pernah menyiapkannya**
(jatuh dari ujung badan). Compiler build (`agbcc`, dan `agbcp` untuk `src/*.cc`)
justru memesan r0:r1 sejak awal pada bentuk itu sehingga seluruh badan bergeser —
karena itu `func_080202A0`/`func_08037470` (dan 7 fungsi lain ber-epilog
`pop {r2}`) tidak bisa MATCH lewat judge default. Terukur: `func_08037470`
MATCH byte-identik dengan `FOMT_AGBCC=tools/agbcc/bin/old_agbcc`, dan DIFF
`[2extra,2operand,13regalloc]` dengan agbcc default. Rincian jalan keluarnya
(migrasi) di `MIGRATE.md` §26.

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
  dengan `arg0` pointer struct menskala `sizeof`, wajib `(u8 *)arg0 + 0x1E4`. Pembukti lain:
  `func_08007EC8` (draf `GenObj *` + `arg0 + 0x80` -> satu operand salah; `u8 *arg0` langsung byte-identik).
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
| `add rX, rY, #0x0` (salinan) | hanya pada bentuk tertentu | bukan dari `x = a`; muncul (a) saat nilai argumen harus tetap hidup melewati call/loop, dan (b) saat cabang mengisi pointer turunan (`w = (u16 *)(q + 0x50)` di if/else) — salinan `q` lalu `add #0x50`, bukan satu `add` immediate. Pembukti: `func_080093AC` (POLA-DIFF §30) |

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
instruksi yang sama, dan `norm()` sekarang mengalias-kannya (dulu dilaporkan
sebagai diff palsu setelah MATCH). Daftar normalisasi yang berlaku ada di
`docs/ops/TOOLS.md` — jangan menyimpulkan "wall" dari teks `diff` yang masih
DIFF tanpa memeriksa apakah perbedaannya cuma bentuk cetak. Byte compare
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

## 28. Argumen stack bertipe byte: `add rX, sp, #off; strb` (func_0801F77C)

`func_0801F77C` (`game_state`, 424B) hampir MATCH: struktur, switch tree, dan
pin register sudah persis, sisa dua keluarga. Yang pertama belum terpecahkan:

```asm
add r3, sp, #8
movs r2, #0
strb r2, [r3]        # arg ke-7 ditulis sebagai BYTE lewat alamat
```

Bentuk C yang sudah dicoba dan semuanya menghasilkan `str r2, [sp, #8]`
(word store):

| bentuk | hasil |
|---|---|
| param `u8` + literal `0` | word store |
| variabel `u8 flag; flag = 0;` | word store (flag masuk register) |
| param `s8` | word store |
| `struct { u8 b; }` by value (variabel) | word store |
| `struct { u8 b; }` compound literal `(Flag){0}` | word store |
| `volatile u8` | `strb` pindah ke prolog, bukan slot arg |
| `u8` yang alamatnya diambil (`u8 *p = &flag`) | `strb` di prolog |

Dugaan: nilai byte itu adalah objek memori yang kebetulan dialokasikan tepat di
slot arg keluar (sp+8), bukan salinan argumen — sehingga ref hanya menulis satu
byte. Belum ada bentuk C yang memaksa alokasi itu.

## 29. Satu nilai, dua register: salinan `r4` -> `r8` + ekspresi dihitung ulang (func_0803E780)

Gejala di ref: `rsb r1, r0, #0 / orr r1, r0 / lsr r4, r1, #0x1F / mov r8, r4`,
lalu tes pertama `mov r0, r8 / cmp r0, #0` sementara dua tes berikutnya
`cmp r4, #0`. Kalau C hanya punya satu variabel, gcc memakai satu register
saja (draf: `lsr r4,...` tanpa `mov r8`) dan gate tetap DIFF.

Penyebab: ref menyimpan nilai yang sama di DUA variabel. C yang cocok:

```c
u32 nz;   /* -> r4 */
u32 nz2;  /* -> r8 */
nz = (0 - u | u) >> 0x1F;
nz2 = nz;
... if (nz2 != 0) ...   /* tes pertama, baca r8 */
... if (nz  != 0) ...   /* tes berikutnya, baca r4 */
```

Pola kedua di fungsi yang sama: ref **menghitung ulang** `arg0 + 0x1CD4`
(`ldr r1, =0x1CD4; add r0, r5, r1`) untuk `func_080A0384`, padahal pointer
itu sudah ada di `r4` dari `func_080A0490`. Artinya dua tapak C memakai
ekspresi langsung (`func_080A0384(arg0 + 0x1CD4)`) dan satu memakai variabel
(`p`). Ganti pemakaian variabel menjadi ekspresi (atau sebaliknya) per
tapak — jangan seragamkan seluruh fungsi.

Bukti: `func_0803E780` (code_0803A8A4, 360B) MATCH 3/5 setelah bentuk ini.

## 30. Literal pool: store diduplikasi memaksa blok `else` out-of-line (func_080093AC)

Gejala: ref memuat konstanta register HW **di dalam cabang**
(`cmp r3,#0; beq .Llit; adds r2,r3,#0; adds r2,#0x50; b .Lmerge; .Llit:
ldr r2,=0x04000050; .Lmerge: ldrh r1,[r2]`), sementara agbcc **menghoist**
literal yang sama ke sebelum `cmp` dan membalik cabangnya.

Penyebab: pada ref, badan store ditulis di KEDUA cabang lalu di-cross-jump
gcc menjadi satu badan bersama. Bentuk C yang menghasilkan itu:

```c
if (q != 0) { w = (u16 *) (q + 0x50); *w = (*w & 0xFF3F) | m; }
else        { w = (u16 *) 0x04000050; *w = (*w & 0xFF3F) | m; }
```

Varian satu-store (`if/else` hanya mengisi `w`, lalu satu `*w = ...`) SELALU
menghoist literal. Kalau store-nya tidak bisa diduplikasi (mis. nilainya baru
dihitung setelah pointer), kunci tujuannya dengan pin register:
`register u16 *w2 asm("r1");` — pin itulah yang menghentikan hoist tanpa
mengubah instruksi lain.

Pola kedua di fungsi yang sama: jalur "set 0 lalu return 0" memakai
`movs r0,#0; strh r0,[r5,#4]; b <epilog>` (b ke EPILOG, melewati blok
`movs r0,#0` bersama), sedangkan `return 0` biasa berbelok ke blok bersama —
bedanya persis 1 byte (`b #0x0e` vs `#0x0f`). Bentuk C yang menghasilkan
lompatan ke epilog:

```c
n1 = 0;
*(u16 *) (p + 4) = n1;
return n1;          /* r0 sudah 0 -> gcc lompat ke epilog, bukan blok nol */
```

Bukti: `func_080093AC` (hardware.s, 248B) MATCH 3/5, byte-identik 248/248.

## 31. Lokal `s16` yang dinegasi: ekstensi `lsl/lsr #0x10` muncul lagi (`func_08009378`)

Gejala: fungsi berparameter `s16` yang nilainya di-`abs` lalu dinegasi tetap
DIFF 1-2 instruksi; di draf muncul `lsl #0x10` + `lsr #0x10` (atau
`lsls/asrs` berpasangan) **sesudah** `rsb`, padahal ref hanya punya satu
ekstensi di pintu masuk.

Sebab: variabel lokal bertipe `s16` disimpan sebagai short, jadi setiap
pemakaian berikutnya (perbandingan, penugasan ke field) memaksa agbcc
mengekstensi ulang nilainya. Menyimpan hasil hitungan di `s16` memindahkan
biaya ekstensi ke dalam badan fungsi.

Bentuk yang MATCH: parameter tetap `s16` (ekstensi `lsls/asrs` di pintu masuk
tetap satu kali seperti ref), tetapi nilai kerja disimpan `s32`:

```c
void f(void *arg0, s16 arg1, ...) {
    s32 n = arg1;          /* bukan s16 n = arg1 */
    if (n < 0) n = -n;
```

Bukti: `func_08009378` (hardware.s, 40B) MATCH 3/5 — percobaan 1 memakai
`s16 n` dan selalu kelebihan `lsl/lsr 0x10`.

## 32. Nilai turunan harus masuk variabel sebelum store, bukan dihitung di dalam store terakhir (`func_08009378`, `func_0800934C`)

Gejala: semua nilai benar tetapi urutan store bergeser dan salinan argumen
(`add r5, r2, #0x0` / `add r4, r3, #0x0`) hilang, sehingga diff penuh
`regalloc` padahal jumlah instruksi sudah sama.

Sebab: kalau ekspresi turunan (mis. flag
`((u32)(0 - arg3) | (u32)arg3) >> 0x1F`) ditulis langsung di dalam store
terakhir, agbcc menundanya sampai setelah store-store sebelumnya. Ref
menghitung nilai itu **lebih dulu**, baru menyimpan — dan justru rentang
hidup itulah yang memaksa argumen disalin ke register callee-saved.

Bentuk yang MATCH: hitung ke variabel lokal sebelum rangkaian store, lalu
simpan variabelnya:

```c
flag = ((u32) (0 - arg3) | (u32) arg3) >> 0x1F;
t->unk4 = n;
t->unk8 = arg2;
t->unkC = flag;        /* bukan t->unkC = <ekspresi panjang> */
```

Kalau ref juga membuang argumen pointer lebih dulu (`ldr r2, [r0]`) sehingga
register arg0 bebas, nilai kerja bisa dipin ke situ:
`register s32 n asm("r0")` — pola yang sama dengan §27/§30.

Bukti: `func_08009378` MATCH 3/5 dan `func_0800934C` MATCH 3/5 (hardware.s);
keduanya gagal di percobaan 1-2 hanya karena urutan ini.

## 33. Reload slot stack + urutan load konstanta: fence `"+m"` dan pin konstanta (`func_08003E88`)

Gejala: seluruh instruksi sudah identik kecuali ref memuat ulang slot stack
(`ldr r2, [sp]`) sebelum `and` pertama, sedangkan draf memakai register yang
masih hidup dari `str r2, [sp]` sebelumnya — dan begitu reload dipaksa, urutan
load bergeser (draf memuat nilai dulu, ref memuat `ldr r0, =mask` dulu).

Sebab: gcc mempertahankan nilai yang baru disimpan di register selama tidak
ada yang bisa mengubahnya; ref berperilaku seolah nilainya "hilang". Untuk
`masked &= 0xFFFFFF00` urutan load mengikuti urutan tulis sumber (konstanta
dulu baru nilai), dan agbcc tidak menukarnya sendiri.

Bentuk yang MATCH:

```c
register u32 maskA asm("r0");
register u32 masked asm("r2");
...
maskA = 0xFFFFFF00;
__asm__ volatile("" : "+m" (st[0]));   /* paksa reload slot stack */
masked = st[0];                        /* ldr r2, [sp] */
masked &= maskA;                       /* ldr r0, =mask ; and r2, r2, r0 */
```

Pin pendukung yang dipakai bersama pola ini: temp rantai byte `asm("r1")`,
temp shift `asm("r0")` (tanpa pin, `((var_r4*2)+1)*8` dihitung in-place di
register sumber sehingga `lsls r4, r4, #1` muncul alih-alih `lsls r0, r4, #1`),
dan pointer stack dipin ke **base** `sp`, bukan `sp+4`, supaya keluar
`mov r2, sp ; ldrh r1, [r2, #4]` (memin ke `(u8*)st+4` menghasilkan
`add r2, sp, #4 ; ldrh r1, [r2]`, beda 1 instruksi).

Catatan: fence `"+m"` mencetak direktif `.code 16` di asm tanpa menambah byte.

Bukti: `func_08003E88` (new_game.s, 100B) MATCH setelah 11 percobaan (22
residual regalloc → 9 → 5 → 2 operand → 0), lalu migrasi `src/` dengan
`make compare` HIJAU (baseline + target).

## 34. Alamat slot stack yang di-CSE: paksa rematerialisasi dengan asm (`func_08003BB4`)

Gejala: draf `push {r4, r5, r6, lr}` vs ref `push {r4, r5, lr}` — satu register
callee-saved ekstra. Sebabnya `&st.unk10` dipakai sebagai argumen dua `bl`
berurutan, agbcc menyimpan alamatnya sekali di register, sedangkan ref
membangun ulang alamat itu dua kali (`add r0, sp, #0x10`).

Bentuk yang MATCH — bangun alamatnya di blok asm per call supaya tidak ada
nilai yang hidup melintasi `bl`:

```c
register s32 zero __asm__("r0");
register s32 c889 __asm__("r1");
s32 *buf;
...
c889 = 0x889;                                  /* ldr r1, =0x889 datang lebih dulu */
__asm__ volatile ("add %0, sp, #0x10" : "=r" (buf));
func_08009378(buf, (s16) c889, 1, 1);
```

Tiga hal yang mengunci bentuk ini:

1. `arg0` dipin ke callee-saved home ref (`register s32 a5 __asm__("r5"); a5 = arg0;`)
   supaya salinan argumen mendarat di register yang benar.
2. Konstanta nol dipin ke `r0`. Tanpa pin, agbcc menjadwalkan `mov r6, #0` lebih
   awal (sebelum `strh`) dan memakan satu callee-saved register lagi.
3. Konstanta literal dipin ke `r1` dan ditulis **sebelum** blok asm alamat,
   karena ref memuat literal itu sebelum `add r0, sp, #0x10`.

`__asm__` berisi instruksi nyata sudah punya preseden di `src/`
(`func_080D3870`, `code_0803A8A4.cc`), jadi bentuk ini sah masuk `src/`.

Bukti: `func_08003BB4` (new_game.s, 116B) MATCH setelah 6 percobaan, lalu
migrasi `src/` dengan `make compare` HIJAU (baseline + target).

## 35. Lubang 4 byte di bawah buffer besar: buffer sebagai anggota agregat (`func_08003C80`)

Gejala: ref berframe 0x2D28 dengan `pb = sp+8`, padahal area argumen keluar cuma
4 byte (satu `str r1, [sp]` untuk argumen ke-5) — jadi ada 4 byte mati di
sp+4..sp+7 yang tidak pernah dibaca/ditulis kode mana pun. Dengan `u8 buf[0x2D00]`
biasa, buffer selalu mendarat tepat di sp+4 (probe `probe_big`: frame 0x2D04).

Sebab: buffernya bukan lokal berdiri sendiri, melainkan anggota agregat yang
punya kepala 4 byte:

```c
typedef struct { s32 head; u8 data[0x2D00]; } Buf3C80;
...
    Buf3C80 work;
    pb = work.data;              /* -> mov r0, sp; adds r0, #8 */
```

gcc menaruh objek terbesar tepat di atas area argumen keluar (sp+4), sehingga
`work.data` = sp+8 dan frame total 4 + 0x2D04 + 0x20 = 0x2D28 — persis ref.
Kepala `head` tidak disentuh kode mana pun (dead space, bukan padding compiler).

Bukti: `func_08003C80` — offset hasil judge sama dengan ref: `pb` sp+8, `s0`
0x2D08, `s1..s3` 0x2D0C/0x2D10/0x2D14, slot `p1..p3` 0x2D18/0x2D1C/0x2D20,
frame 0x2D28. Pembanding probe: buffer polos 0x2D00 + call 5 argumen → sp+4.

## 36. Urutan slot stack: array/agregat di alamat rendah, skalar di atasnya (`func_08003C80`)

Gejala: empat objek 4 byte (`{s16 w; s16 h;}`) + tiga pointer + satu pointer
buffer. Kalau keempatnya ditulis sebagai tipe `struct`, agbcc menaruhnya di
ATAS pointer (0x2D18..) — kebalikan ref (struct di 0x2D08.., pointer di
0x2D18..). Mengubah urutan deklarasi tidak mengubah satu byte pun.

Yang cocok: agbcc mengalokasikan objek array/agregat lebih rendah daripada
skalar 4 byte. Menulis keempatnya sebagai `s16 s0[2]`, `s1[2]`, `s2[2]`,
`s3[2]` membuatnya mendarat di 0x2D08..0x2D14, dan pointer (skalar) di atasnya
0x2D18.. — sama dengan ref. Pola store-nya ikut identik: `[0]` lewat alamat
langsung (`strh r0, [r3]`), `[1]` lewat pointer yang di-reload
(`ldr r2, [slot]; strh r3, [r2, #2]`).

Bukti: `func_08003C80`; probe `p8` (struct + pointer → pointer di alamat
rendah), `p10` (array pointer di alamat rendah), `p12` (array `s16[2]` di
bawah, skalar pointer di atas).

## 37. Induksi offset: `base + i*0xC` mengalahkan variabel `off` (`func_08003C80`)

Gejala: dengan `s32 off; ... g = (s32 *) ((u8 *) &gUnk + off); ... off += 0xC;`
agbcc menumpahkan `off` ke slot stack — satu `ldr` ekstra per iterasi, frame
0x2D28 tapi `off` menempati slot milik `pb` di ref (370 byte vs ref 366).

Menulis `g = (s32 *) ((u8 *) &gUnk_080E8704 + i * 0xC)` (tanpa variabel `off`)
menghasilkan 342 byte: induksi byte tetap dibentuk agbcc (strength reduction),
dan konstanta `0xC` dipakai bersama store `[1] = 0xC` seperti ref (`mov r3, sl`).

Bukti: `func_08003C80` varian A (342 vs ref 366) vs varian B dengan `off`
(370 vs ref 366); keduanya DIFF, tapi A tidak lagi menumpahkan `off`.

## 38. Field `s16` + temp `s32` = `ldrsh` tanpa ekstensi; store `(short)` tetap `add/sub + strh` (`func_080202A0`, `func_08037470`)

Gejala: ref memuat dua field 16-bit dengan `ldrsh` di offset `0xA`/`0xE`, lalu
menyimpan hasil aritmetikanya dengan `subs/adds` + `strh` **tanpa** instruksi
ekstensi (`lsls ...; lsrs/asrs ...`). Draf m2c yang memakai `u16`/`unsigned`
sebagai tipe antara menghasilkan `ldrh` dan/atau sepasang `lsls/asr`.

Bentuk C yang menghasilkan ref (terbukti lewat `cc_probe.py`):

```c
typedef struct { s32 unk0; u16 unk4; s16 unkA; s16 unkE; } In;
typedef struct { s16 unk0, unk2, unk4, unk6; } Out;

void f(In *in, Out *out) {
    s32 a = in->unkA;                  /* -> ldrsh r2, [r0, r3] */
    s32 b = in->unkE;                  /* -> ldrsh r3, [r0, r4] */
    out->unk0 = (s16) (a - 7);         /* -> sub r0, r2, #0x7; strh r0, [r1] */
    out->unk2 = (s16) (b - 9);         /* -> add r0, r3, #0; sub r0, #0x9; strh */
    out->unk4 = (s16) (a + 7);         /* -> add r2, r2, #0x7; strh r2, [r1, #0x4] */
    out->unk6 = (s16) (b + 5);         /* -> add r3, r3, #0x5; strh r3, [r1, #0x6] */
}
```

Dua kontras yang sudah diukur (jangan dipakai bila ref memakai `ldrsh`):

| Tipe field | Tipe temp | Hasil probe |
|---|---|---|
| `u16` | `u32` | `ldrh r2, [r0, #0x6]` (tanpa ekstensi) |
| `s16` | `s16` | `ldrh r2, [r0, #0x8]` lalu `lsls r2, #0x10; asrs r2, #0x10` |

Jadi: `ldrsh` muncul hanya bila **field bertipe `s16`** dan **temp antara `s32`**
(promosi integer), dan cast `(s16)` di store tidak menambah instruksi apa pun —
bentuk `add/sub + strh` dipertahankan. Ini pelengkap §7.1 (di sana variabel
antaranya `s32`, di sini ditegaskan bahwa tipenya `s16` *dan* store-nya `s16`).

Pembukti: `func_080202A0` (code_entities.s) dan kembarnya `func_08037470`
(code_entities_08034CEC.s) — badan 36B identik:

```asm
movs r3, #0xa
ldrsh r2, [r1, r3]
movs r4, #0xe
ldrsh r3, [r1, r4]
subs r1, r2, #7
strh r1, [r0]
adds r1, r3, #0
subs r1, #9
strh r1, [r0, #2]
adds r2, #7
strh r2, [r0, #4]
adds r3, #5
strh r3, [r0, #6]
```

Keduanya masih parkir dan **bukan** karena pola ini: sisa diff-nya hanya epilog
`pop {r2}` vs `pop {r0}` (wall regalloc).

## 39. Rotasi siklik register: pin `__asm__("rN")` sebelum menuduh allocator (`func_08006C60`)

`func_08006C60` (124B) MATCH setelah 8 varian. Sisa diff turun dari 18 ke 4 lalu
ke 0 karena tiga hal yang terpisah, bukan karena satu ekspresi ajaib.

1. **Rotasi siklik.** Ref: `r4` = pointer buffer tulis, `r5` = penghitung, `r6` =
   indeks. Draf: tepat satu langkah bergeser (`r6`, `r4`, `r5`), sehingga hampir
   setiap baris dilaporkan sebagai `regalloc` walau bentuk kodenya identik.
   Mengubah tipe variabel (`u8 *` vs `s32`) dan urutan deklarasi tidak menggeser
   apa pun; yang menggeser adalah pin eksplisit:

   ```c
   register u8 *rp4 __asm__("r4");
   register s32 rp5 __asm__("r5");
   register s32 rp6 __asm__("r6");
   ```

   hasil terukur: `[3missing,4extra,3operand,18regalloc,1different]` ->
   `[3missing,4extra,3operand,4regalloc,1different]` tanpa perubahan bentuk source.

2. **`for` vs `if (n > 0) do..while`.** Ref menguji `cmp r2, r6; bge` (variabel
   loop dibandingkan batas), jadi bentuk aslinya `for (i = 0; i < n; i++)`.
   Do-while bergerbang menghasilkan `cmp r6, #0` + `ble` — operand yang berbeda,
   bukan regalloc.

3. **Letak assignment base pointer.** Ref: `ldr r1, =0x4629; adds r3, r7, r1`
   muncul SESUDAH `cmp/bge`, yaitu di dalam badan loop. Menulis
   `base = (u8 *) (arg0 + 0x4629);` sebagai baris pertama badan `for`
   menghasilkan urutan itu; menaruhnya sebelum `for` membuat gcc menghoist ke
   preheader (satu `ldr`/`adds` pindah ke atas test).

Asosiasi penjumlahan ikut menentukan: `endp = (u8 *) (arg0 + 0x4629); endp[rp6] = 0;`
memberi `adds r0, r7, r1; adds r0, r0, r6` seperti ref, sedangkan
`*((u8 *) arg0 + 0x4629 + rp6) = 0;` memberi `adds r0, r6, r7; adds r0, r0, r1`
(gcc bebas menukar operand `add` komutatif).

Pembukti: `decomp/drafts/func_08006C60.c` (MATCH, dimigrasi ke `src/new_game.cc`).

## 40. Memaksa spill lokal: agregat 1-anggota TIDAK cukup, `volatile` kelebihan (`func_08003C80`)

Diukur pada `func_08003C80` (ref 366B, slot `pb` di sp+0x2D24, `&s2`/`&s3` dihitung ulang tiap
iterasi). Tiga percobaan pada draf 342B yang sama:

| bentuk | panjang | residual |
|---|---|---|
| parkiran awal (baseline) | 342B | `[26missing,15extra,30operand,31regalloc,11different]` |
| `struct { u8 *p; } pbw;` + `register s16 *p0 __asm__("r5")` + `g[k]` dibaca sebelum store | 342B | `[23missing,12extra,27operand,35regalloc,7different]` |
| sama, tapi `struct { u8 * volatile p; }` + `s16 * volatile p1..p3` | 394B | `[19missing,34extra,39operand,38regalloc,1stack]` |

Kesimpulan terukur:

- Agregat satu anggota **tidak** memaksa variabel anggotanya hidup di stack: agbcc tetap
  mempromosikan `pbw.p` ke register (`add r6, sp, #0x8` muncul, bukan `str/ldr` slot), jadi
  perubahan ini hanya menyusun ulang operand — tidak menambah instruksi spill yang dicari.
- Menambah `volatile` pada anggota/holder benar-benar memaksa setiap akses melewati memori,
  tetapi hasilnya melewati target (+52B): ref hanya menyimpan `pb` sekali ke slot dan
  me-reload `p1..p3` di tempat tertentu, bukan di setiap store.

Artinya "paksa spill lebih awal" bukan tombol biner di agbcc: tidak ada bentuk C yang
menyisipkan tepat satu slot tambahan. Sampai ada ide yang mengubah **tekanan register**
(mis. jumlah variabel hidup lintas-loop), fungsi ini tetap parkir.

## 41. Nilai `switch` di dalam loop: pin ke r0 memunculkan salinan yang dipakai ref (`func_080050F8`)

Ref (`func_080050F8`, 346B) menyusun dispatch 4-case sebagai pohon perbandingan yang
menguji **r0**, dengan satu `adds r0, r4, #0` di kepala loop; draf awal menguji r4
langsung (`cmp r4, #0x1`), jadi hilang satu instruksi dan seluruh pohon bergeser.

Sebabnya: variabel switch (`var_r4`) juga ditulis di badan case, sehingga ref
menyalin nilainya sekali per iterasi. Di agbcc, menyalin lewat variabel biasa
dikoalesikan (tidak ada instruksi); yang memaksa salinan itu adalah pin:

```c
register s32 sv __asm__("r0");
...
    sv = var_r4;        /* -> adds r0, r4, #0 */
    switch (sv) { ... }
```

Hasil terukur pada satu fungsi: `regalloc 13 -> 8`, `different 1`, panjang tetap
348B vs ref 346B. Menambah pin konstanta (`register s32 c3f __asm__("r2")` untuk
nilai `0x3F` yang dipakai dua store) menurunkan lagi `regalloc 8 -> 4` dan
`operand 6 -> 4`.

Yang tersisa setelah kedua pin bukan lagi soal salinan: posisi `mov r2, #0x3F`,
nol slot (`mov r0,#0; str r0,[r4]` di ref vs `mov r5,#0` di draf), dan reload
`fr.sp4` dari `[sp, #4]` (ref menyimpannya di r1). Fungsi diparkir di titik itu.

## 42. Hoist field ke lokal: melebihi save-set, bukan memperbaikinya (`func_08009268`)

Ref 94B memakai `r4`=arg0, `r5`=`unkA`, `r6`=`unkC`, `r7`=0, `r8`=`unk0`, `ip`=nilai balik
`func_08009190()`. Draf yang membaca ketiga field langsung di badan loop menghasilkan
88B (`[8missing,5extra,8operand,19regalloc,3different]`) — tiga instruksi lebih pendek,
karena tidak ada tiga `ldrh` di preheader.

Ketika field-field itu dihoist ke lokal `u16 o0, a, c` (urutan baca unk0, unkC, unkA seperti
ref), hasilnya justru **108B** dengan 26 regalloc: agbcc menyimpan salinan pointer argumen
tambahan (`r5` = copy arg0, `r8` = arg0 asli) sehingga push-nya `{r4,r5,r6,r7,lr}` +
`{r6,r7}`. Pin argumen ke r4 (`register GenObj *a0 __asm__("r4")`) dan mengganti cast
`(s16 *)((u8 *)arg0 + 0x20)` dengan field `s16 arr[1]` di offset 0x20 **tidak** memperbaiki
(108B, 26–28 regalloc): salinan pointer tetap muncul.

Pelajaran: hoist sumber tidak sama dengan hoist register. Bila ref meng-hoist field karena
tekanan register, menulis lokal `u16` justru menambah satu nilai hidup dan mendorong
save-set naik. Tanpa ide yang mengubah jumlah nilai hidup (bukan hanya letak deklarasinya),
pola ini berhenti.

## 43. Temp `s16` memaksa truncation + load ganda; `s32` menghapusnya (`func_08009268`)

Ref `func_08009268` (94B) memuat `ldrsh r0, [r1, r7]` sekali lalu `cmp`/`subs`/`strh` pada nilai
32-bit. Draf dengan `s16 v` menghasilkan 88B yang **salah arah**:

```
ldrh r1, [r2]          ; load kedua dari alamat yang sama
movs r7, #0
ldrsh r0, [r2, r7]
...
sub r0, r1, r0
lsls r0, r0, #0x10     ; truncation ke s16
lsrs r1, r0, #0x10
```

Sebabnya: `v -= c` dengan `v` bertipe `s16` memaksa cast balik ke 16-bit setiap penugasan, dan
karena `v` juga dipakai sebagai operand `u16`, gcc memuat ulang alamat yang sama. Mengubah
deklarasi menjadi `s32 v` (store `*p = v` tetap `strh`) langsung menghapus `lsls/lsrs` dan load
ganda: 88B → **82B** dengan `extra 5 -> 2`.

Sisa 12 byte barulah soal hoist: ref memuat `unk0`, `unkC`, `unkA` di preheader (`ldrh` ke
`r8/r6/r5`). Menambahkan lokal `u16 o0, a, c` dengan urutan baca unk0 → unkC → unkA menghasilkan
**MATCH**. Catatan penting: hoist ini hanya berhasil setelah `v` menjadi `s32`; dengan `v` masih
`s16`, varian hoist yang sama membengkak ke 108B karena truncation menambah nilai hidup.

Pembukti: `func_08009268` (MATCH, dimigrasikan ke `src/hardware_migrated.cc` dengan `pindah: 1`,
baseline + target `fomt.gba: OK`).

## 44. Tiga pin untuk mereproduksi home register ref (`func_08006858`)

Setelah op-multiset sama (48 instruksi = ref) tapi register tertukar siklik, pin eksplisit lebih cepat
daripada menebak urutan deklarasi:

| pseudo | ref | draf tanpa pin | solusi |
|---|---|---|---|
| `p` (hasil call) | r3 | r2 | `register u8 *p __asm__("r3")` |
| dest entry | r0 | r1 | `register Entry *e __asm__("r0")` |
| alamat sumber | r1 | r0 | `register s32 *s __asm__("r1")` |
| counter | r2 | r1 | biarkan tak dipin (tersisa r2) |

Pin **satu** pseudo saja (`p→r3`) menghasilkan pergeseran siklik: `p` benar, dest/src masih tertukar.
Pin berlebih juga merusak: dengan `i→r2` ditambah `p→r3`, gcc menginkremen counter di tempat
(`add r2, r2, #1`) padahal ref memakai temp (`adds r0, r2, #1`). Kombinasi `p→r3` + `e→r0` + `s→r1`
dengan counter bebas menghasilkan MATCH, karena setelah itu konstanta `0x4608` tetap hidup di r5
sehingga anggota berikutnya dipakai ulang sebagai `adds r5, #4` (bukan literal `0x460C` baru).

Dua detail pendukung:
- `p + (i * 8 + 4)` **harus** dalam tanda kurung; tanpa itu gcc melipat `+4` menjadi displacement
  (`str [r1,#4]`) dan menghemat satu instruksi sehingga hitungan meleset.
- urutan evaluasi: alamat sumber dihitung sebelum `i = *p` (`ldr r5,=0x4608` + `adds r1,r4,r5` berada
  sebelum `ldrb r2,[r3]`), jadi pointer sumber ditulis di blok luar sebelum pembacaan counter.

Pembukti: `func_08006858` (MATCH, `pindah: 1`, baseline + target `fomt.gba: OK`, status 1293/2632).

## 45. Salinan agregat 13 byte: jangan dijadikan satu assignment

Ref `func_08005A58` menyalin 12 byte + 1 byte sebagai
`ldm r0!, {r3, r4, r6}` / `stm r1!, {r3, r4, r6}` / `ldrb r0, [r0]` / `strb r0, [r1]` — byte terakhir
memakai pointer yang sudah naik 12 (post-increment dari blok kata). Varian C dan hasilnya:

| bentuk C | hasil |
|---|---|
| `*(W3 *)d = *s; d2->unkC = ...` (dua statement, base berbeda) | ldm/stm benar, tetapi `strb [r3,#0xC]` — gcc membuat salinan base kedua |
| `*(S461C *)dst = *(S461C *)&src` (unpacked, sizeof 16) | 4 kata: `ldr/str` kata terakhir, bukan `ldrb/strb` |
| `struct PACKED` 13 byte | `bl memcpy` (agregate tak sejajar tidak di-inline) |
| pointer lokal `src`/`dst` | 91 instruksi, `r9` ikut terpakai (tekanan register naik) |

Jadi salinan 13 byte yang di-inline butuh pointer post-increment yang sama dipakai untuk byte terakhir,
tanpa menambah variabel yang memperpanjang live range. Wall ini masih parkir.

Tindak lanjut (22 Nov): bentuk post-increment sudah dicoba dan **tetap** gagal — bukan soal bentuk C,
melainkan agbcc tidak bisa menghasilkan block move non-kelipatan-4 (tabel probe di §58).

## 46. Slot stack mati: `volatile u32 z; z = 0;` (`func_080091E8`)

Ref `func_080091E8` membuka dengan `push {r4, lr}` + `sub sp, #4` dan menyimpan nol ke slot itu
(`movs r1, #0` … `str r1, [sp]`), lalu `add sp, #4` di epilog. Tidak ada yang membacanya.

Percobaan:

| bentuk C | hasil |
|---|---|
| tanpa variabel apa pun | 24 instruksi, tidak ada `sub sp`/`str [sp]` |
| `u32 z; z = 0;` | tetap 24 instruksi — store mati dibuang gcc |
| `volatile u32 z; z = 0;` | **28 instruksi, identik** — slot stack dialokasikan dan store dipertahankan |

Jadi bila ref punya slot stack yang hanya ditulis nol sekali dan tak pernah dibaca, itu tanda variabel
`volatile` di sumber aslinya (atau alamatnya pernah diambil). `volatile` memaksa home memori dan
mencegah dead-store elimination, dan penempatan store mengikuti urutan statement — di sini setelah
`arg0->unkC = 4`, persis seperti ref.

Pembukti: `func_080091E8` (MATCH 28/28 instruksi, dimigrasikan dengan `pindah: 1`).

## 47. Keluarga `pop {r2}`: pemetaan 7 fungsi (bukan satu bentuk)

`pop {r2}; bx r2` dipakai gcc saat **r1 ikut nilai balik** (tipe 64-bit / struct dua word), karena
epilog normal memakai `pop {r1}` sebagai scratch PC. Pemeriksaan 7 fungsi berepilog itu:

| fungsi | ref | epilog (r1 hidup?) | sub-bentuk |
|---|---|---|---|
| `func_08024BFC` | 88B | `ldr r0,[sp,#8]; ldr r1,[sp,#0xc]; str r0,[r5]; str r1,[r5,#4]; adds r0,r5,#0; pop {r4,r5}; pop {r2}` | A: pasangan 2 word |
| `func_080A3E90` | 188B | `ldr r0,[sp]; ldr r1,[sp,#4]; … adds r0,r5,#0; pop {r4,r5}; pop {r2}` | A |
| `func_0804EA94` | 496B | `ldr r1,[sp]; ldr r2,[sp,#4]; str r1,[r0]; str r2,[r0,#4]; pop {r4..r7}; pop {r2}` | A |
| `func_0802AB98` | 148B | `adds r0,r3,#0; pop {r4}; pop {r2}` (r1 = nilai `strh r1,[r3,#4]`) | B: kembar `func_080202A0` |
| `func_0805E760` | 48B | `adds r0,r4,#0; pop {r4}; pop {r2}` (r1 = `str r1,[r4]`) | B |
| `func_08037ED0` | 32B | 17 instruksi, `pop {r4}; pop {r2}`; r0=arg0, r1=arg1 | B: kembar `func_08037470` |
| `func_0803834C` | 32B | idem `func_08037ED0`, hanya `adds r3,#4` (bukan #5) | B |

Semua **7 memang keluarga yang sama** dalam hal mekanisme epilog (r1 tidak boleh ditimpa), tetapi ada
dua sub-bentuk: **A** mengembalikan pasangan nilai nyata (struct/`long long` dua word), **B** hanya
mengembalikan arg0 di r0 sementara r1 menyimpan nilai sisa — sub-bentuk B identik dengan pasangan
`func_080202A0`/`func_08037470` yang sudah pindah lewat jalur `CC1 := OLD_CC1` (`MIGRATE.md` §29).

Dua catatan operasional:
- `func_0804EA94` (ref 496B) punya ekor 288B `.byte` setelah pool, labelnya (`.L0804EB64`) tidak
  dirujuk siapa pun → data ekor, tetap bisa dimigrasikan (`MIGRATE.md` §28a).
- `func_0805E760` paling dekat: sisa bedanya hanya `[2regalloc @r pop {r2} | pop {r1}]`, yaitu persis
  gejala "tipe balik belum 64-bit".

## 48. Parameter pointer bertipe struct disalin ke callee-saved lebih awal

`func_08050424(GenObj *arg0, i32 arg1, u16 arg2, i32 arg3)` — ref menyalin arg0 ke `r5` sebagai
instruksi ke-3 (`adds r5, r0, #0`), sebelum `r7 = arg1`, `r6 = arg3`, dan zero-extend arg2 ke
`r8`. Kalau param pertama ditulis skalar (`s32`/`void *`) lalu di-cast di badan, agbcc menunda
salinan itu sampai pemakaian pertama (`ldr r0, [r5, #8]`), jadi urutan prolog berbeda walau
semantiknya sama. Tipe pointer bertipe (bukan skalar + cast) mengubah **penjadwalan prolog**,
bukan cuma tipe.

Kasus yang sama sekali berbeda tapi berdekatan: tipe balik `i32` pada fungsi void membuat agbcc
memilih epilog keluarga 64-bit (`pop {r1}; bx r1`); `void` memberi `pop {r0}; bx r0` seperti ref.

## 49. K&R call: fungsi 4 byte dengan argumen dari sisa register

`func_08009154` (`strh r1, [r0]; bx lr`) dipanggil sebagai `func_08009154()` — tanpa argumen.
Bila draf ditulis `void f(s16 *p, s16 v)`, pemanggil harus mengisi r1 dan itu menambah instruksi.
Bentuk yang menghasilkan byte ref: parameter kosong + `register` var terikat register
(`asm("r0")`, `asm("r1")`). Ini satu-satunya keluarga di mana "tanda tangan benar" bukan yang
terlihat dari badan fungsi, melainkan yang dipakai pemanggil (K&R).


## 50. `goto` + label di draf MATCH = extern palsu, migrate SKIP walau tanda tangan sama

`func_08009094` (150B) butuh satu call `CpuSet` yang dipakai bersama dua cabang. Draf MATCH
memakainya lewat `if (a != 0) goto tail; ... tail: CpuSet(src, dst, ctrl - n);`. `extern_decls()`
di `migrate.py` membaca baris sesudah label sebagai **deklarasi** sehingga masuk himpunan tanda
tangan sebagai entri palsu `'tail: (src, dst, ctrl - n)'`. Akibatnya gate melaporkan
`extern CpuSet beda tanda tangan` padahal kedua himpunan **tercetak identik** — sisi `src` tak
punya entri `tail:` itu. Menyisipkan `;` sesudah label tidak menolong.

Perbaikan yang byte-identik: `if (a == 0) continue;` lalu satu `CpuSet(...)` di luar `if` —
tanpa label, alur (dan byte) tetap sama, `pindah: 1` langsung HIJAU.

## 51. Pointer ke slot: alamat-di-ambil menolong, tetapi `escape` mengubah cara reload

`func_08003C80` (368B, `new_game.s`) memarkir `p0..p3`, pointer buffer `pb`, dan alamat `&s0..&s3`
di slot stack. Bentuk agregat 1-anggota (`struct { u8 *p; }`) TIDAK memaksa slot; yang memaksa
adalah **alamat pointer diambil**:

```c
u8 *pb; u8 **ppb = &pb;          /* pb kini di memori, tanpa volatile */
s16 *p0; s16 **pp0 = &p0;
...
s0[0] = 0x1E;                    /* tulis lewat nama asli -> alamat langsung */
(*pp0)[1] = 0xC;                 /* tulis lewat pointer  -> slot + load    */
```

Hasil: 344B -> 360B, sepuluh instruksi slot/reload yang hilang muncul kembali, dan regalloc
`(26)` jauh lebih dekat ke ref daripada parkiran sebelumnya `(35)`.

Batasannya: karena `&pb` **escape** ke pointer lain, agbcc harus menganggap isinya bisa berubah
setiap call, jadi `pb` di-reload di setiap pemanggilan (4x). Ref justru **spill sekali**: `pb`
disimpan ke slot, dimuat satu kali ke `r6` sebelum loop, dipakai tiga call, lalu dimuat ulang di
ekor. Artinya sumber aslinya pointer biasa yang kehabisan register (spill), bukan pointer
alamat-di-ambil. Untuk menirunya: tekanan register harus naik tanpa membuat alamat pointer escape.

Ide "tambahkan variabel hidup lintas-loop" (mis. `u32 sz = 0x2D00;` dipakai setelah loop) sudah
diuji di fungsi ini: **tidak berpengaruh** (tetap 344B) karena agbcc melipat konstanta itu.

## 52. Urutan `strh` konstan, nol yang ter-hoist, dan `volatile` yang di-reload

`func_080050F8` (348B, `new_game.s`) MATCH setelah empat koreksi kecil yang semuanya soal
*penempatan* instruksi, bukan semantik:

1. **Store konstan ke slot:** `*(s16 *)&fr.sp0 = 0x3F;` menghasilkan `movs r1,#63; strh r1,[r2]`
   (pointer di r2, konstanta materialisasi ganda). Dengan pointer tujuan dipin
   (`register s16 *psp __asm__("r1")`) **dan** konstanta dipin (`register s32 c3f __asm__("r2")`)
   barulah muncul urutan ref: `mov r1,sp; movs r2,#63; strh r2,[r1]; adds r0,#0x50; strh r2,[r0]`
   (konstanta dipakai ulang untuk field `unk50`).
2. **Nol yang di-hoist:** `temp_r4->unk0 = 0; temp_r4->unk4 = 0;` membuat agbcc memilih
   `movs r5,#0` jauh di depan dan memakai r5 yang sama untuk `var_r5 = 0`. Temporer yang dipin ke
   r0 (`register s32 zero __asm__("r0")`) memaksa `movs r0,#0` tepat di titik pakai seperti ref.
3. **Urutan statement = urutan `movs`:** `var_r4 = 0; var_r5 = 0;` harus ditulis **sebelum**
   `p7`/`p8`, kalau tidak kedua `movs` bergeser sesudah `add r7,sp,#8`.
4. **`volatile` di-reload, salinan lokal tidak:** anggota `GenObj *volatile sp4` dibaca tiga kali
   (cmp + `->unk8` + argumen) sehingga muncul tiga `ldr rX,[sp,#4]`. Menyalinnya ke lokal biasa
   (`GenObj *obj = fr.sp4;`) memberi satu `ldr r1,[sp,#4]; cmp r1,#0` dan `obj` dipakai dari
   register — persis ref. Ini cara menghindari reload **tanpa** menghapus `volatile` dari struct.

Sisa terakhir sebelum MATCH: pembersihan `fr.slot[0]` memakai field offset 0
(`((GenObj *)fr.slot[0]->unk0)->unk8`), bukan `unk4` seperti draf lama.

## 53. `ldrsb` vs `ldrb`+shift, literal offset terpisah, dan `lsls` yang tertunda

`func_08006B90` (150B, `new_game.s`, pola `copy`) belum MATCH (2 judge, berhenti di parkir), tetapi
tiga beda strukturalnya sudah terjelaskan dan semuanya soal **tipe lokal + urutan statement**:

1. **`ldrsb` menuntut lokal `s32` + cast eksplisit.** Dengan `s8 a; a = *(s8 *)(p+0x4604);` agbcc
   menghasilkan `ldrb r2,[r2]; lsls r2,#24; asrs r2,#24` (muat tak bertanda lalu tanda diperluas
   lewat dua shift). Menulis `s32 a; a = (s32)*(s8 *)(p+0x4604);` memunculkan `ldrsb` seperti ref,
   sekaligus membuat offset `0x4605` dimuat dari **literal terpisah** (`ldr r2,[pc]` + `adds r0,r5,r2`)
   alih-alih dilipat menjadi `adds r1,#1` dari literal `0x4604`. Dua-duanya hilang bersama bila
   tipenya `s8`.
2. **`lsls r1,r1,#1` muncul hanya bila shift ditulis sebagai statement sendiri sebelum baca
   berikutnya.** `idx = (a<<1) + (b*0x20-b) + ...` satu ekspresi → `lsls` baru muncul sesudah load
   kedua (`0x1a`); `idx = a << 1;` lalu `b = ...;` lalu `idx = idx + ...` → `lsls` persis di `0x12`
   seperti ref.
3. **Store-forwarding memotong byte.** Setelah `strb` ke `unk4610`, agbcc memakai ulang nilai di
   register untuk `if (unk4610 > 0xB)` dan memotongnya dengan `lsls #24; lsrs #24`, sedangkan ref
   **me-reload** `ldrb r0,[r2]` dari alamat yang dihitung ulang (literal `0x4610` dimuat lagi).
   Mencoba store lewat anggota struct + baca lewat cast (atau sebaliknya) berhasil memaksa reload
   tetapi merusak urutan literal/penjumlahan alamat (`q`), jadi varian itu lebih jauh dari ref
   (156B). Ini yang masih terbuka.
   Varian berikutnya juga gagal: pointer baru dihitung **ulang sesudah** `strb` dari ekspresi
   berbeda (`r = (u8 *)arg0 + 0x4610; if (*r > 0xB)`). Reload memang muncul (`ldrb` dari alamat
   hasil hitung, bukan nilai register), tetapi bukan bentuk ref — ref memuat literal `0x4610` lagi
   lalu `adds r2,r5,r0` — dan fungsi membengkak 152B -> 158B (judge: 2missing/7extra/11operand).
   Versi dengan ekspresi yang sama (`r = p + 0x4610;`) di-CSE total: byte-identik dengan draf lama,
   tetap DIFF. Jadi reload hanya bisa dipaksa dengan mengorbankan bentuk alamat, bukan jalan MATCH.

## 54. Literal konstan di argumen loop tidak di-hoist ke register

`func_08008FE4` (56B, `hardware.s`) memakai `0x040000D4` (basis register DMA) sebagai argumen keempat
`func_080D0EBC` **di dalam** loop. Menulisnya sebagai literal langsung:

```c
func_080D0EBC(temp_r3, var_r4[2], var_r4[3], 0x040000D4);
```

membuat agbcc memuat literal itu tiap iterasi (`ldr r3,[pc]` di badan loop, `1missing/1extra`), dan
prolog menyusut jadi `push {r4,r5,lr}`. Ref menyimpannya sekali di prolog ke r6
(`push {r4,r5,r6,lr}` … `ldr r6,[pc]` … `adds r3,r6,#0`). Bentuk yang MATCH: satu lokal sebelum loop.

```c
s32 dma;
dma = 0x040000D4;          /* hoist manual: gcc 2.9 tidak melakukannya sendiri */
...
func_080D0EBC(temp_r3, var_r4[2], var_r4[3], dma);
```

Varian `s32 *dma = (s32 *)0x040000D4;` + `(s32) dma` menghasilkan byte yang sama, jadi tipenya bebas
asal nilainya sampai ke argumen sebagai `s32`. Catatan tambahan: slot `s32 sp0` yang alamatnya diambil
(`&sp0`) tidak perlu `volatile` — alamat-escape sudah cukup memaksa `sub sp,#4` + `str`/`mov` seperti
ref (bandingkan POLA-DIFF §46 yang butuh `volatile` karena slotnya tak pernah diambil alamatnya).

## 55. Larik yang berjalan mundur: pointer `p -= 1` bukan indeks

`func_08009268` (94B, `hardware.s`, sudah MATCH) berjalan dari `arg0+0x20` ke bawah: ref memakai
`adds r4,r0,#0x20` sekali lalu `subs r4,#2` tiap iterasi. Bentuk indeks
(`((s16 *)((u8 *)arg0 + 0x20))[-i]`, atau `bit = 0x200 >> i`) memaksa alamat dihitung ulang dari
`arg0` setiap kali: 120B (dari 94B), 82 byte berbeda. Jadi untuk larik yang berjalan mundur,
pertahankan pointer yang bergerak — jangan diganti indeks meski jumlah instruksinya terlihat setara.

**Cara membaca angka "96B, 0 byte beda" (tabel varian sesi):** angka itu bukan bukti byte-identik
sama panjang, dan bukan keluaran judge. Dua aturan ukurnya: (a) *panjang* = `.text` mentah `.o` hasil
agbcc **sebelum** `depad()`, jadi 2B nop alignment (`c0 46`) ikut terhitung — pada `func_08009268`
itulah satu-satunya selisih 96B vs 94B, dan `depad()` membuangnya sehingga panjang efektifnya
94B == ref; (b) *byte beda* dihitung atas prefiks sepanjang `min(len)` dengan byte displacement `bl`
dikecualikan — saat dibandingkan asm-vs-asm keduanya masih `f7ff feff` (belum di-relokasi), sedangkan
terhadap ROM ter-link byte itu justru berbeda. MATCH sesungguhnya = panjang sama **sesudah** `depad()`
+ byte termask sama + daftar reloc sama; kalau panjang masih berbeda setelah `depad()`/pemotongan
pool/ekor, judge menulis `len A vs ref B`, bukan 0.

Sebaliknya, mengganti *nama* dua nilai hidup (`mask` → `st`, satu akumulator) tidak mengubah satu byte
pun: yang menentukan codegen adalah **bentuk ekspresi**, bukan jumlah/jenis variabel lokal.

## 56. `register ... __asm__` diabaikan saat tekanan register tinggi

`func_080E5664` (438B, `code_linkonce.s`) ditulis ulang 1:1 dari asm memakai `goto` per label. Hasilnya
210 vs 211 instruksi dengan urutan cabang identik, jadi masalahnya bukan lagi struktur melainkan
alokasi: agbcc menyimpan `arg0` ke stack (`str r0,[sp,#16]`, frame 0x14 bukan 0x18) dan memakai **tiga**
high register (`r8`, `r9`, `sl`) sedangkan ref hanya dua (`r8` = arg2, `r9` = flag).

Pemaksaan lewat `register T x __asm__("rN")` **tidak menolong di fungsi ini**: pada fungsi kecil
(bandingkan §52) pin dihormati, tetapi di sini agbcc diam-diam menugaskan ulang — hasilnya `mov r7,sl`
lalu `adds r7,r3,#0` yang mengklobek nilai arg0 sehingga kode menjadi salah. Pin tunggal (`arg0`→r7),
pin sebagian (`arg2`→r8 + `fl`→r9), dan pin kelima-limanya memberi efek sama: diabaikan atau merusak.

Yang tetap aman dan berpengaruh hanya **bentuk ekspresi**: menyusun ulang blok supaya dua pointer tidak
hidup bersamaan (mis. `p` vs `n` di blok `L571E`) atau memakai satu variabel flag untuk `fl`/`ip`.
Angka pembukti: draf m2c 394B (50missing/28extra/61regalloc) → translasi 1:1 440B
(15missing/15extra/36operand/97regalloc). Semua sisa beda ada di nomor register, bukan di instruksi.

**Uji lanjutan (2026-11-23), gagal:** resep "pecah blok supaya dua pointer tidak hidup bersamaan + satu variabel
flag" diterapkan pada `L571E` (ambil `(*arg2)->unk10` langsung, `p` baru dimuat di `L5768`, flag kedua memakai `q`)
dan diukur dengan `cc_probe`: **420B/201 instruksi** (dari 440B/210), high register tinggal `r8`+`r9` sehingga `sl`
hilang persis seperti ref. Tetapi judge menolak lebih jauh: `len 420 vs ref 438`
`[64missing,55extra,24operand,63regalloc,2stack,7different]` (sebelumnya 15missing/15extra/97regalloc) — memotong
dua pointer yang hidup bersamaan justru menggeser urutan blok relatif ke ref. Frame tetap `0x14` vs ref `0x18`,
dan catatan lama "arg0 di-spill (`str r0,[sp,#16]`)" **tidak tereproduksi** pada draf ini, jadi tebusan spill tidak
bisa dipakai sebagai patokan. Dua varian lain diukur dengan cara sama: **hanya menyatukan flag** (`ip` → `t`, `p` tetap) tetap 440B/210 dan
judge-nya malah `61missing/61extra/66regalloc`; **hanya memecah `L571E`** jadi 444B/213 instruksi. Jadi kedua
resep itu saling menutupi: efek bersihnya hanya menghapus `sl`, bukan mendekatkan urutan blok ke ref.
Kesimpulan: jalur penyusutan live-range bukan jalan ke MATCH di fungsi ini; draf parkir dipertahankan.
Catatan tambahan: tidak ada spill `arg0` di varian mana pun — `arg0` hidup di `r7` persis seperti ref, dan
`str r0,[sp,#4]` yang tampak di prolog-sekitar-call adalah argumen ke-6 `func_080E54F0` (`movs r0,#0`), pola
yang sama dengan ref.

**Uji pin (2026-11-23, semua diukur `cc_probe`):** menghapus pin `a0 __asm__("r7")` justru **membuat** spill
arg0 (`448B/215 instr`, `str r0,[sp,#0x14]`, frame `0x18`) — jadi pin itulah yang menahan arg0 di register,
bukan sumber tekanan. Arah sebaliknya yang lebih masuk akal juga diuji: memindahkan flag ke `sb` ala ref
(`register s32 fl __asm__("r9")`) memberi **432B/206 instr** dan judge `18missing/14extra/35operand/95regalloc`
— masih DIFF dan `sl` tetap terpakai; pin `n` ke `r2` (444B), kedua pin (436B), dan mengganti `slot[3]` jadi tiga
skalar (452B) semuanya lebih jauh dari ref 438B. Kesimpulan tetap: residual fungsi ini murni penomoran register
dan tidak bisa digeser lewat pin selama `sl` masih dipakai allocator.

## 57. Resep §43 di fungsi lain: truncation argumen di-hoist, pointer `s16` jangan pakai aritmetika byte

Resep §43 (temp `s32` + hoist field ke preheader) diterapkan ke `func_0804EDB4` (`code_0803EE94.s`;
`ref_len` 104B = **68B badan + 36B fungsi berikut tanpa label** di `0x0804EDF8` — ekor itu kode, bukan
data). Bedanya bukan truncation (temp sudah `s32`) melainkan tiga hal lain:

1. **Truncation argumen harus di-hoist, bukan dibiarkan di loop.** `arg2` bertipe `u16`, dan memakainya
   langsung di badan loop membuat `lsls r2,#0x10; lsrs r7,r2,#0x10` muncul **di dalam** loop. Menambah
   lokal `u16 a2 = arg2;` di preheader memindahkannya ke prolog seperti ref.
2. **Pointer `s16 *` tidak boleh diberi aritmetika byte ala m2c.** Draf memakai `*((arg4 * 2) + var_r5)`
   dan `var_r5 -= 4`. Karena `var_r5` bertipe `s16 *`, itu berarti offset 4× dan 8 byte — gcc menghasilkan
   `lsls #2` + `subs #4`, sedangkan ref `lsls #1` + `subs #2`. Bentuk yang benar: `*(var_r5 + arg4)` dan
   `var_r5 -= 1`. Ini juga penyebab "7missing/6extra" pada catatan lama.
3. **Divmod dibagi bersama.** `var_r4 % 10` lalu `var_r4 / 10U` membuat gcc memilih lowering lain; menulis
   eksplisit `q = var_r4 / 10U; rem = var_r4 - (q * 10);` menghasilkan urutan ref (`lsls #2`, `adds`,
   `lsls #1`, `subs`) dengan satu panggilan `__udivsi3`.

4. **Urutan prolog dipaksa lewat conversion yang "nyata".** Ref: `adds r4,r0` **sebelum**
   `lsls r2,#16`/`lsrs r7,#16`. Dengan `a2 = arg2;` biasa, agbcc menaruh truncation lebih dulu (dan
   `adds r4,r0` menyelip di antaranya). Yang memaksa copy `arg0` keluar dulu: buat assignment-nya
   punya conversion yang tak bisa dilipat — `a2 = (u16) (arg2 << 0);` (atau `arg2 + 0`, atau param
   dideklarasikan `s16` lalu `a2 = (u16) arg2`). Kalau `arg2` di signature diubah jadi `s16`/`i16`,
   **caller ikut berubah** (`ldrh r2,[r1,#0x14]` → `movs r3,#0x14; ldrsh r2,[r0,r3]`, +4B, ROM
   meleset), jadi pilih jalur `<< 0` dan biarkan signature tetap `u16`.
5. **Jangan pin `var_r4`/`var_r5` ke `r4`/`r5`.** Dengan `register ... __asm__("r4")` alokator
   mengoalesensi hasil `sub` ke r4 (`subs r4,r4,r1`) sedangkan ref `subs r1,r4,r1`; melepas kedua pin
   membuat penomoran cocok tanpa mengubah urutan prolog. Nama temp juga jangan dipakai ganda: `temp_r1`
   untuk `arg3 << 16` membuat nilai digit jatuh ke `r3`; pisahkan jadi `t3`.
6. **Signature migrasi harus sama dengan prototipe `src/`.** `func_0804EEBC`/`func_080C8550` sudah
   mendeklarasikan `func_0804EDB4(i32, i32, u16, u16, i32)`; blok promoted memakai `(s32 arg0, s32 arg1,
   u16 arg2, u16 arg3, s32 arg4)` + cast `(s16 *) arg1` di badan, dan hanya return type yang diubah
   `i32`→`void` (tidak mengubah codegen caller). Versi `s16 *`/`s16` di signature ditolak build
   (`lacks a cast`) lalu memaksa cast yang menggeser ROM 4B.

**Hasil 2026-11-23:** MATCH (68B, judge 1x setelah dua varian prolog gagal), `pindah: 1`, baseline +
target `fomt.gba: OK`. Ekor 36B di `0x0804EDF8` dipromosikan jadi fungsi `func_0804EDF8` (lihat
MIGRATE §41) supaya gate `data asing ekor` tidak parkir.

Hasil: badan 68B == 68B ref, `3missing/3extra/1operand/2regalloc`; sisa beda hanya **urutan dua instruksi
prolog** (`adds r4,r0` vs `lsls r2,#0x10`, dan `adds r5,r1` vs `lsrs r6,#4`). Varian deklarasi berinisial
dan variabel pemisah `t3 = arg3 << 0x10` tidak menggeser keduanya, jadi belum MATCH.

## 58. Block move ukuran bukan kelipatan 4 tidak bisa diproduksi agbcc (`func_08005A58`)

Hipotesis §45 ("cukup pointer post-increment tanpa lokal tambahan") diuji ulang di `func_08005A58`
(`new_game.s`): salinan 12 byte tertulis benar (`ldm r0!,{r3,r4,r6}` / `stm r1!,{r3,r4,r6}`), tetapi
byte ke-13 tetap dihitung ulang dari `arg0` (`ldr rX, =0x4628; add rY, r5, rX; strb r0, [rY]`),
sedangkan ref memakai pointer yang sudah naik 12 (`ldrb r0,[r0]; strb r0,[r1]`). Jadi ref adalah
**satu block move 13 byte**, bukan 12 byte + 1 byte terpisah.

Batasnya ada di compiler, bukan di bentuk C (semua diukur dengan `tools/scripts/cc_probe.py` dan
`tools/scripts/try.sh`, bukan dugaan):

| probe | hasil |
|---|---|
| `sizeof(struct {u8 a[3];})`, `a[5]`, `a[13]` | `4`, `8`, `16` — ukuran struct selalu dibulatkan ke kelipatan 4 |
| salinan `struct {u8 a[2/5/9/13];}` | 1/2/3/4 kata (`ldm/stm`), tanpa ekor byte |
| `memcpy`/`__builtin_memcpy` ukuran 4/6/8/12/13/16 | selalu `bl memcpy`; tidak pernah inline |
| `struct __attribute__((packed))` 13 byte | `bl memcpy` |
| frontend C++ (`agbcp`) untuk 13 byte yang sama | sama: sizeof 16, salinan 4 kata |
| `*(u8 (*)[13])d = *(u8 (*)[13])s` | ditolak ("incompatible types") — larik tak bisa di-assign |

Konsekuensinya: di agbcc tidak ada blok 13 byte yang bisa di-assign (struct dibulatkan, larik tak bisa
di-assign, `memcpy` tak di-inline), sehingga backend tak pernah menerima block move non-kelipatan-4.
Pemindaian seluruh `asm/*.s` (3.129 pasangan `ldm …!`/`stm …!`) menemukan pola ekor byte ini **tepat
satu kali**, yaitu `func_08005A58` sendiri — indikasi fungsi/TU ini berasal dari toolchain lain
(mis. compiler yang meng-inline `memcpy` konstan dan tidak membulatkan ukuran struct).

Hasil percobaan sesi ini: 89 instruksi vs ref 88; judge `len 226 vs ref 218
[2missing,7extra,7operand,14regalloc]`. Bentuk V1 lama (dua statement `temp->unkC`) tetap terbaik
secara len (214). Kesimpulan: `func_08005A58` adalah **wall codegen** — jangan ulangi dengan variasi C
lain kecuali tersedia compiler lain; gate `migrate` tidak dijalankan.

## 59. Ref mempertahankan null-check mati + dead store; agbcc melipatnya (`func_08004C0C`)

`func_08004C0C` (`new_game.s`, 60B) menyalin pointer hasil `func_08004570(&a, ...)` ke tiga slot
frame (`a` di `[sp]`, `p=&a` di `[sp+4]`, `b=a` di `[sp+8]`), menulis `*p = 0`, menyalin `b` ke
`*arg0`, lalu **membaca ulang `a`** untuk null-check yang — karena `a` sudah dinolkan — selalu
di-skip saat runtime. Ref tetap meng-emit store `p`/`b` dan null-check itu; agbcc membuktikan
`*p = 0` menulis `a` sehingga seluruh blok hilang (38B vs 58B).

Resep yang membawa draft ke **1 instruksi** dari ref (judge: `byte +0x16: 0x69 vs 0x01
[1different @ adds r1, r0, #0 | mov r1, sp]`, semua instruksi lain identik):

- frame jadi agregat `{ Obj *p0; Obj **p4; Obj *p8; }` (slot `p4`/`p8` dipertahankan sebagai
  dead store seperti ref);
- salinan nilai disimpan di lokal (`b = l.p0;` sebelum `l.p4`/`l.p8`) supaya ref memakai register
  yang sama untuk `*arg0 = b`;
- `q = p; __asm__ volatile("" : "+r"(q) : : "memory"); *q = 0;` — barrier inilah yang menahan
  propagasi nilai (`l.p0` dibaca ulang untuk null-check) dan mempertahankan dead store.
- Sisa beda yang tidak bisa digeser: ref menyalin pointer ke r1 (`adds r1, r0, #0`) sebelum
  menolkan r0, sedangkan agbcc me-rematerialisasi alamat jadi `mov r1, sp`. Pin `q` ke `r1`,
  pin `p` ke `r0`, pin keduanya, urutan assignment, ternary, cast `u8 *`, `volatile` per field,
  dan `old_agbcc` semuanya tetap menghasilkan `mov r1, sp` (atau bentuk yang lebih jauh).
  Diparkir setelah 3 judge.

## 60. Migrasi blok agbcc (C) ke TU C++ (`new_game.cc`): typedef + cast pointer

`src/new_game.cc` dikompilasi `agbcp` (C++), jadi blok draft C yang MATCH tidak langsung lolos:

- TU C++ ini tidak punya `s32`/`s16`; tambahkan `typedef i32 s32;` + `typedef i16 s16;` di atas
  file (byte-netral) sebelum menyalin typedef blok apa adanya.
- gate me-rename typedef `GenObj` blok jadi `GenObj__func_XXXX`, sehingga extern di src butuh tipe
  itu **sebelum** blok masuk. Cukup forward typedef
  `typedef struct GenObj__func_XXXX GenObj__func_XXXX;` — definisi lengkapnya nanti dihoist gate.
  Menyalin typedef lengkap lebih dulu justru memicu
  `[SKIP] struct ... beda isi antar blok` (indentasi hasil hoist beda).
- agbcp menolak konversi implisit yang diterima agbcc; cast yang perlu ditambahkan (netral):
  `p->field = (GenObj *) zero;` (int var → pointer), `p->field = (GenObj *) &vt;`
  (`i32 *` → pointer struct), `fr.slot[1] = (GenObj *) p7;` (`GenObj **` → `GenObj *`).
  Literal `= 0;` pada pointer tetap boleh tanpa cast.
- sesudah itu `migrate.py --func ...` langsung `pindah: 1` (compare HIJAU) — `func_080050F8`.

## 61. Alamat slot stack dipakai dua call: agbcc meng-CSE ke register tersimpan

Pembukti: `func_08003B40` (116B, MATCH) dan `func_08003BB4` (sibling dengan bentuk sama).

Ref mematerialisasi ulang alamat slot stack untuk tiap call
(`add r0, sp, #0x10` dua kali, satu sebelum `bl` pertama dan satu lagi sebelum `bl`
kedua). Draf C naif (`f(&st.tail, ...); ...; g(&st.tail, ...);`) membuat agbcc
meng-CSE alamat itu ke register callee-saved: `add r6, sp, #0x10` sekali, lalu
`adds r0, r6, #0` di kedua call — hasilnya `push {r6}` + satu instruksi ekstra
(120B vs 116B) dan arg0 ikut tergeser ke r6.

Dua spelling yang lolos (keduanya byte-identik dengan ref):

- inline asm materialisasi alamat per call (dipakai `func_08003BB4`):
  `__asm__ volatile ("add %0, sp, #0x10" : "=r" (buf));` lalu `f(buf, ...)`.
- fence `+r` pada temp pointer (dipakai `func_08003B40`):
  `tp = &st.tail; __asm__ volatile("" : "+r"(tp) : : "memory"); f(tp, ...)` —
  diulang sebelum call kedua, sehingga CSE lintas `bl` gagal dan alamat
  dirematerialisasi ke r0.

Detail lain yang ikut menentukan di fungsi kecil ini:

- urutan argumen call kedua: ref `ldr r1, =0x889; add r0, sp, #16` (konstanta
  dulu, alamat kemudian). Menulis konstanta langsung sebagai argumen membuat
  agbcc membalik urutannya (selisih 4 byte). Ikat dulu ke variabel
  (`c = 0x889;`) **sebelum** menghitung alamat, lalu teruskan `c`.
- pin `zero` ke r0 menahan `movs r0, #0` sampai titik store; tanpa pin agbcc
  meng-hoist nol ke r4 dan mendorong pointer slot ke r5/r6. Pin pendamping:
  argumen ke r5, pointer slot (`&st.unk4`) ke r4.
- store nol pertama lewat field struct (`st.unk0 = zero;`) memberi
  `str r0, [sp, #4]`, store kedua lewat pointer (`p[1] = zero;`) memberi
  `str r0, [r4, #4]`; kalau keduanya lewat pointer, agbcc memakai `[r4, #0]`.
- m2c menulis argumen pertama virtual-call sebagai `(void *) 0` padahal r0 masih
  berisi hasil `func_08008940`: teruskan objeknya sendiri (`fn(obj, p)`); versi
  `0` menambah `movs r0, #0` dan membuat load field lewat r0 (ref lewat r1).
- kondisi loop `((0 - st.unk0) | st.unk0) < 0` menghasilkan `negs/orrs/cmp/blt`;
  `st.unk0 != 0` menghasilkan `cmp/bne` (beda 4 byte).

## 62. Buffer stack 2-kata: reload `volatile`, urutan konstanta-mask, dan pin temp AND

Pembukti: `func_08003DF0` (152B, MATCH, `new_game.s`). Draf lama parkir di 3missing/3extra karena
seluruh blok `spbuf[0]` diwarnai permutasi register. Enam perubahan berikut membawanya ke byte-identik
(semua netral kecuali pin):

1. **Reload kata dari buffer stack**: ref menulis byte ke `spbuf[0]` lalu `ldr r2,[sp]` lagi sebelum
   `ands`. Menulis `temp = mask & *(volatile s32 *)spbuf;` memaksa reload itu, tanpa mengubah tail.
2. **Konstanta mask diikat ke variabel lebih dulu**: `mask = 0xFFFFFF00; temp = mask & ...;` memberi
   urutan ref (`ldr r0,=<mask>` lalu `ldr r2,[sp]`); menulis mask sebagai literal di ekspresi membuat
   agbcc memuat temp lebih dulu.
3. **Pecah shift dari penjumlahan**: `sh = (u32)(temp << 7) >> 0x17;` sebelum load tabel, lalu
   `var = sh + 0x80;` sesudahnya. Satu ekspresi `((temp<<7)>>23) + 0x80` menaruh `adds #0x80` sebelum
   alamat/`ldrb` tabel; ref menaruhnya sesudah.
4. **Nilai gabungan pakai variabel baru** (`out`), bukan menimpa `temp`: menimpa `temp` membuat
   agbcc memakai register `temp` sebagai tujuan `ands`, ref memakai register mask yang baru dimuat.
5. **Pin temp AND akhir ke r0 + compound `|=`**: `sh2 = 0xFFFFFCFF & out; sh2 |= 0x200; spbuf[0] = sh2;`
   dengan `register u32 sh2 __asm__("r0")` menghasilkan `ands r0,r1; movs r1,#0x80; lsls r1,#2;
   orrs r0,r1` seperti ref; tanpa pin agbcc membalik tujuan `ands`/`orrs`.
6. **Pointer buffer stack sesudah call**: `rcall = (s32) func_08008920(arg0); sp2 = (u8 *)spbuf;
   p = (GenObj *)((u8 *)rcall + ...);` memunculkan `mov r2, sp` tepat setelah `bl` dan
   `ldrh r1,[r2,#4]` di tail. Menggabung call+aritmetika dalam satu ekspresi malah menambah
   `adds r1,r0,#0` (156B); memakai ulang variabel pointer lama membuat argumen pindah ke r6
   (`push {r6}`).

## 63. Pointer global `s32 *` + offset byte, dan urutan dua ekstraksi bit

`func_080ADBB4` (76B, `code_809E804.s`) punya kembaran yang sudah di `src/`:
`func_0803D644` (`src/code_0803A8A4.cc`, pola `func_080E0E80(p, temp_r4, &sp4, 0, 0)`).
Tiga hal yang menentukan MATCH-nya (residual awal 2missing/4extra/1operand/2regalloc):

1. **Offset byte pada global `s32` wajib lewat cast `u8 *`.** Draf awal menulis
   `temp_r4 = &gUnk_081074F6 + 0x1B;` — karena `gUnk_081074F6` bertipe `s32`, itu
   menambah 27×4 = 0x6C byte (`subs r0, #0x6c`) dan pool berisi `0x6C`. Ref:
   `ldr r0, =gUnk; adds r4, r0, #0; adds r4, #0x1B`. Bentuk benar (ikut kembarannya):
   `s32 *p = &gUnk_081074F6; temp_r4 = (u8 *) p + 0x1B;` lalu teruskan `p` sebagai
   argumen pertama (signature callee tetap `s32 *`).
2. **Dua ekstraksi bit harus jadi temp terpisah, `lo` dulu baru `hi`.** Ref:
   `lsls r1,r2,#0x1e; lsrs r1,r1,#0x1e` (lo) **lalu** `lsls r2,r2,#0x19; lsrs r2,r2,#0x1b`
   (hi), baru `lsls r0,r1,#4; subs r0,r0,r1; lsls r0,r0,#1; adds r0,r0,r2`. Kalau
   keduanya ditulis dalam satu ekspresi (`(lo * 0x1E) + hi`), agbcc menyisipkan
   `lsls r0,r1,#4` di antara kedua pasangan. Menulis `lo = …; hi = …; sp4 =
   (((lo << 4) - lo) << 1) + hi;` menghasilkan urutan ref (sama seperti `func_0803D644`).
3. **`*0x1E` bukan `mul`.** Perkalian 30 dilower jadi `((lo << 4) - lo) << 1`; menulis
   literalnya sendiri sudah cukup, tapi bentuk eksplisit di atas yang terbukti.

Sisa beda di `.o` cuma displacement `bl` (`f7ff feff`) dan word pool (`00000000`
sebelum relokasi) — keduanya artifact, bukan DIFF.

**Hasil 2026-11-23:** judge MATCH 76B (1 percobaan), `pindah: 1`, baseline + target
`fomt.gba: OK`.

## 64. Konstanta sempit dari literal pool: bukan literal, tapi simbol absolut linker (terpecahkan)

Gejala: ref memuat konstanta kecil yang seharusnya `movs` lewat literal pool lalu
memotongnya dengan shift - bentuk `u8`: `ldr r1,=5; lsls r1,#0x18; lsrs r1,#0x18`
(28B), bentuk `u16`: `ldr r0,=5; lsls r0,#0x10; lsrs r1,r0,#0x10` (40B).

**Jangan tulis `5` sebagai literal.** agbcc melipat setiap literal yang muat
immediate, dan tidak ada cast/bitfield/enum/`static const` yang mengubahnya:
~3100 bentuk (16 penulisan literal x 11 cast x 6 tipe parameter callee, plus
lokal `u8`, bitfield `u32 : 8`, `enum`, `static inline`, kombinasi biner) di tiga
compiler (`agbcc`, `old_agbcc`, `agbcp`) menghasilkan `movs` - bukan pool.

Jalan keluarnya: konstanta aslinya **bukan literal**, melainkan simbol absolut
linker `_M4aNumMusicPlayers` (`fomt.lds` = 5). Cast sempit atas *alamat* simbol
itu tidak bisa dilipat, jadi keluarannya tepat seperti ref:

```c
__asm__(".equ _M4aNumMusicPlayers, 5");   /* judge merakit tanpa link */
extern char _M4aNumMusicPlayers[];
#define NUM_MUSIC_PLAYERS ((u16)_M4aNumMusicPlayers)   /* atau (u8) */

s32 func_08008B24(u32 arg0) {
    if (arg0 >= NUM_MUSIC_PLAYERS) arg0 %= NUM_MUSIC_PLAYERS;
    return gMusicPlayerTable[arg0].music_player;
}
```

Cast yang dipilih menentukan lebar shift, dan itu yang membedakan kedua ref:
`(u16)` -> `lsls #0x10` (mask 16 bit, `func_08008B24`), `(u8)` -> `lsls #0x18`
(`func_08008D10`, argumen `u8` untuk `func_08008B54`). Pool-nya berisi
`.word _M4aNumMusicPlayers` yang dirakit jadi `0x00000005`, jadi byte-nya sama
dengan ref walau sumbernya simbol.

Pembukti (keduanya tanpa pin/`__asm__` register, C natural):

- `func_08008B24` (40B + 8B pool, `hardware.s`) - sudah `promoted`; judge ulang
  2026-11-23 `True` (byte-identik, ref_len 48).
- `func_08008D10` (24B kode + 4B pool, ujung `hardware.s`) - dulu dicatat sebagai
  dinding karena 322+ bentuk literal semuanya keluar `movs r1,#5` (20B). Dengan
  simbol absolut: judge `True`, lalu dimigrasi (`pindah: 1`, `make compare`
  HIJAU). Ujung `hardware.s` pindah ke `func_08008CFC`, jadi rantai ekor yang
  tadinya terkunci sekarang terbuka.

Pelajaran: klaim dinding itu **per-fungsi, bukan per-section**. Sebelum menembak
"toolchain tidak bisa", cek apakah konstanta di ref berasal dari simbol
linker/`extern` (pool berisi alamat simbol) - pool yang isinya angka kecil bisa
berarti `.equ`, bukan literal. Tanda pembeda praktis: literal selalu dilipat
`movs` oleh ketiga compiler, simbol absolut selalu `ldr` dari pool.

Jalur build sudah dicek per objek (2026-11-23), bukan cuma lewat judge:
`0x08008D10` ada di `build/src/hardware_migrated.o` (simbol `T`, 0x1c byte) yang
lahir dari `src/hardware_migrated.cc` lewat `arm-none-eabi-cpp | agbcp -O2
-mthumb-interwork -fhex-asm` + `align_sections.sh` + `arm-none-eabi-as`.
Override `CC1 := $(OLD_CC1)` hanya berlaku untuk `src/m4a.o` dan `src/pop_r2.o`,
jadi TU ini **tidak** memakai `old_agbcc` dan tidak ada objek asm langsung.
Ketiga jalur menghasilkan idiom pool yang sama untuk sumber bersimbol: `agbcc`
(judge, MATCH), `agbcp` (build; objek + ROM ter-link identik, `ldr r1,[pc,#16];
lsls #24; lsrs #24; .word 0x5`), dan `old_agbcc` (uji lokal). Tidak ada jalur
build di repo ini yang mengeluarkan pool untuk literal.

## 65. Pin register di agbcc: nama NUMERIK (`"r9"`), bukan alias (`"sb"`), dan wajib di-fence

Kasus `func_080E5664` (439B) di `code_linkonce.s`: ref menyimpan `fl` (flag
perbandingan) di `sb`/r9, dan prolognya hanya menyimpan r8 + sb
(`push {r4,r5,r6,r7,lr}; mov r7,sb; mov r6,r8; push {r6,r7}`). Draf parkir
menyimpan r8,r9,r10 -> 206 instruksi dan `sl` dipakai 9-10x.

Dua jebakan yang menghabiskan beberapa varian:

1. `register s32 fl __asm__("sb")` **diabaikan diam-diam** oleh agbcc: pin-nya
   hilang, alokator tetap memakai `sl`, dan tidak ada error/warning. Nama yang
   bekerja adalah **numerik**: `__asm__("r9")`. (Begitu juga `"r10"` untuk sl,
   `"r11"` untuk fp.) Ini sebabnya percobaan `fl`->sb sebelumnya terlihat
   "tidak berpengaruh".
2. Pin tanpa fence akan dilipat: setelah `fl = t;` harus ada
   `__asm__ volatile("" : "+r"(fl));`, dan untuk parameter
   `a3 = arg3; __asm__ volatile("" : "+r"(a3));`. Tanpa fence, `a0 = arg0;`
   pun tidak dihormati (terbukti: r7 malah diisi arg3).

Ukuran lokal (`cc_probe`-style, prelude judge + `agbcc -O2`, lalu normalisasi
`movs`->`mov`, `#0x8`->`#8`, `sb`->r9):

| varian | pin | instr | r10 | sama-instruksi |
|---|---|---|---|---|
| draf parkir | a0->r7 (tanpa fence) | 210 | 10 | 54/212 (25%) |
| wB | a0->r7, a1->r6, a2->r8, a3->r4, fl->r9 + fence | 210 | 0 | 142/212 (67%) |

`wB` juga mereproduksi prolog ref persis, menghapus `sl` sepenuhnya, dan
menggeser klasifikasi engine dari `zero-reload`/regalloc ke `instruksi`. Tetap
bukan MATCH: sisa beda frame (`sub sp,#0x18` vs `#0x14` — ref punya satu kata
ekstra di area argumen keluar/slot) dan urutan di sekitar L56D0/L5710.

Aturan praktis: pin register selalu (a) nama numerik, (b) berpasangan dengan
fence `"+r"`, (c) satu pin per home ref, lalu ukur dulu dengan kompilasi lokal
sebelum judge.

**Frame kurang satu kata bukan slot yang terpakai, tapi padding.** Sisa
`sub sp,#0x18` (ref) vs `#0x14` (draf) di fungsi yang sama bukan tanda ada
variabel yang belum ditulis: ref tidak pernah menyentuh `[sp,#0x14]` sama
sekali (slot yang dipakai cuma `[sp]`, `[sp,#4]` untuk argumen keluar dan
`[sp,#8]`, `[sp,#0xC]`, `[sp,#0x10]` untuk tiga lokal). Menambah "slot keempat
terpakai" akan menambah dua instruksi yang tidak ada di ref. Yang bekerja:
perbesar deklarasi array-nya satu elemen (`Node *slot[3]` -> `Node *slot[4]`,
elemen ke-4 tak pernah diakses). Hasil ukur lokal: satu-satunya beda di seluruh
211 instruksi adalah dua baris frame (`add sp,sp,#-0x18` / `#0x18`), dan judge
kehilangan diff stack (7missing/7extra/20operand/56regalloc, tanpa `2stack`).
Jadi urutan diagnosis yang benar: cek dulu apakah offset frame yang hilang
pernah disentuh ref; kalau tidak, itu padding, dan array+1 adalah obat termurah.

**Setelah frame benar, diff pertama ada di pemuatan pointer argumen.** Ref
memakai register argumen langsung (`ldr r2,[r2]`) karena `mov r8,r2` tidak
menghapus r2; draf yang membaca lewat pin `a2` (r8) menambah `mov r0,r8`
(2 instruksi jadi 1 kalau sumbernya `arg2`). Meminjamkan hasilnya ke register
ref dengan blok pin (`register Node *nn __asm__("r2")` + fence, lalu `n = nn`)
membuat `ldr r2,[r2]` sama persis dan regalloc turun 56 -> 55, tetapi menyisakan
satu `adds r3,r2,#0` yang di ref baru muncul jauh di jalur lain (L56F4).
Membalik urutan (pakai `nn` untuk `cmp`, `n = nn` setelah cabang) justru
menaruh salinan r2->r5 di jalur yang salah dan menjatuhkan kecocokan 67% ->
47%; jangan ulangi. Pelajaran: pin hasil load hanya menolong kalau titik
salinnya memang ada di jalur yang sama dengan ref.

## 66. `func_0804EF20`: mask `neg`/`rsbs` + notasi 2-operand bukan diff, dan gate extern `CpuFastSet`

**Pola MATCH.** Jalur bit `0x80` di byte flag butuh tiga pin berurutan pada
`r0`/`r1`: `bit` (`(f << 0x19) >> 0x1F`, pin `r0` + fence), `v = 1` (pin `r1`,
`v ^= bit`), lalu `neg = 0x41` → fence → `neg = -neg` → `neg & f` → `neg | (v << 6)`
→ `p->f.b[1] = (u8) neg`. Menulis `-0x41` langsung, atau `~0x40`, tidak
menghasilkan `rsbs r0,r0,#0` + `and` di tempat yang sama. `end` **tidak** dipin:
`end = dst + ((u32)(p->f.u << 0x12) >> 0xD)` dan loop `do { ... } while (dst != end)`
dengan 8 salinan `*(u32 *)dst = *(u32 *)src & m` (mask `m0 = 0x0F0F0F0F << (v << 2)`,
`m1 = ~m0`, selang-seling) menghasilkan `push {r4,r5,r6,r7,lr}` + `cmp r3,r7` persis.
Pelajaran: pin hanya untuk nilai yang di ref memang hidup di `r0`/`r1`; meminjamkan
`end` ke `r7` justru menghapus `r7` dari `push`.

**Notasi dif4 bukan diff.** Dif4 lokal melaporkan 78% (missing 2/extra 1/operand 13)
untuk draf yang ternyata byte-identik. Penyebabnya hanya pencetakan: ref memakai
bentuk 2-operand Thumb (`and r0,r6`, `lsl r2,r1`, `neg r0,r0`) sementara draf
dicetak 3-operand (`and r0,r0,r6`, `lsl r2,r2,r1`, `rsbs r0,r0,#0`). Ketiganya
encoding yang sama. Jangan turunkan draf lagi sebelum normalisasi ini; ukur byte
lewat `judge`, bukan LCS operand.

**Gate extern saat migrasi (SKIP-palsu).** `migrate.py` membandingkan tanda tangan
extern sebagai **teks** (`s32`≡`i32`, tetapi pointer vs skalar dan tipe pointee
harus sama) dan menuntut argumen call-site terkonversi implisit. `src` sudah punya
`i32 CpuFastSet(i32 *, i32, i32);` (dari `func_0804E7A0`), jadi blok baru wajib
` s32 CpuFastSet(s32 *, s32, s32);` dan call-nya diberi cast eksplisit:
`CpuFastSet((s32 *) src, (s32) dst, (s32) ((u32)(p->f.u << 0x12) >> 0xF));`.
Cast ini tidak mengubah byte (`pindah: 1`, sha1 target HIJAU). Catatan: `promote()`
tidak menulis ulang blok yang sudah ada — perbaikan tanda tangan harus diedit
langsung di `decomp/promoted/code_0803EE94.cc`.

## 67. `func_080E5664`: pin `fl` ke r9 menahan alokasi; m/e lokal turun tapi total judge naik

Ref memakai `mov r1, r8; ldr r3, [r1]` lalu node hidup di `r2`/`r3`, sedangkan draf
memakai `mov r0, r8; ldr r7, [r0]` (node mendarat di `r7`). Klaster ini murni
alokasi register: instruksi sama, register beda. Enam varian diukur (dif4 lokal
`/tmp/dif4.py`, judge hanya untuk yang lokalnya membaik):

| varian | lokal m/e/o | judge m/e/o/r |
|---|---|---|
| baseline (pin `fl`=r9 + 3 fence) | 27/26/42 | 7/7/20/55 |
| A: `*a2` diinline ke 2 call-site | 35/32/36 | tak di-judge |
| B: A + `(*a2)->unkC` | 35/32/36 | tak di-judge |
| C: A + `(*a2)->unk10` | 39/36/32 | tak di-judge |
| D: pin `fl` dicabut + 3 fence dibuang | 12/13/55 | 5/7/31/59 |
| D1: hanya fence dibuang | 28/26/42 | tak di-judge |
| D2: hanya pin dicabut | 27/26/42 | tak di-judge |
| E: `p` dipin `r2` | 31/29/44 | tak di-judge |

Pelajaran: pada fungsi yang sudah regalloc-bound, **m/e lokal bukan proksi**. Varian D
memotong missing+extra lokal 53 -> 25 (total 95 -> 80) tetapi judge total m+e+o naik
34 -> 43 karena operand/regalloc ikut naik (42 -> 55 lokal, 55 -> 59 judge). Pola
yang sama muncul di dua varian sebelumnya (arg-6 `fl`, `p` dipin r3). Aturan praktis:
pilih varian hanya bila total m+e+o lokal turun **dan** operand tidak melonjak;
kalau ragu, cap judge 1x lalu kembalikan baseline.

## 68. `func_08008980`: penyimpanan byte tanpa `lsr`, dan urutan `add` vs `str [sp]`

Konstruktor 232B ini MATCH setelah dua trik non-obvious; keduanya terbukti lewat
perbandingan byte objek vs ROM, bukan lewat LCS teks.

**a. Flag boolean: simpan `s32`, jangan `s8`/`u8` lokal.** Ref menyimpan flag
dengan `eor r0,r1; strb r0,[r4]` (tanpa masking), lalu `lsls r0,r0,#0x18`.
Kalau nilainya ditampung di lokal `s8`/`u8`, agbcc menambah `lsls`+`lsr` (atau
`asr`) untuk konversi sebelum `strb` -> draf 2 byte lebih panjang dan seluruh
ekor bergeser. Yang menghasilkan byte ref: nilai tetap `s32`, simpan lewat
`u8 *` dengan cast di sisi store (`*b68 = (u8) v68;`), uji dengan `v68 << 0x18`.

**b. Urutan dua instruksi lepas.** Ref menghitung argumen call (`adds r0,#0x10`)
SEBELUM menyiapkan slot stack (`str r7,[sp]`); draf selalu membalik urutannya
karena keduanya tidak saling bergantung. Menyimpan/memindahkan variabel tidak
menolong. Yang memaksa urutan ref: argumen dialirkan lewat slot stack yang
dibaca kembali (`s32 *p50 = ...; s32 **pp = &p50; ... func(*pp, &sp0);`).

**Cara ukur yang benar.** `dif4` (LCS teks) melaporkan 3missing/2extra padahal
byte masih beda di satu titik; sebaliknya varian yang "hampir sama" bisa
menyimpang jauh. Pakai perbandingan byte: assemble draf, ambil `.text` fungsi
dari objek, bandingkan dengan irisan ROM (`fomt.gba` di alamat fungsi); selisih
`bl` dan word literal pool adalah relokasi (di-mask judge), sisanya diff nyata.
Dengan cara itu draf final hanya menyisakan 7 `bl` + 7 word pool.

## 69. Total mismatch dif4 lokal bukan proksi total judge (aturan pemilihan varian)

`dif4` (`/tmp/dif4.py`) menghitung LCS **teks** per instruksi lalu melaporkan
`missing+extra+operand`. Angka itu tidak sebanding dengan total judge (yang
dihitung dari byte objek vs ref). Tiga pengukuran pada `func_080E5664`
(232B, regalloc-bound) menunjukkan arah yang berlawanan:

| varian | total dif4 lokal | total judge (m+e+o) |
|---|---|---|
| baseline (arg ke-6 `0`, tanpa pin tambahan) | 95 | **34** (7m/7e/20o, 55r) |
| arg ke-6 = `fl` | 76 | 43 (5m/7e/31o) |
| node dipin `r3` | 78 | 45 (6m/7e/32o) |

Dua varian yang tampak jauh lebih baik di lokal justru **kalah** di judge:
missing/extra lokal turun karena instruksi yang sama hanya berpindah register
atau berubah notasi (`add r5, #12` vs `add r5, r5, #12`), sementara regalloc/
operand judge ikut naik. Pada fungsi lain (lihat §66) justru kebalikannya:
notasi yang berbeda di teks tidak menghasilkan byte berbeda sama sekali.

**Aturan praktis.**

1. Pakai `dif4` hanya untuk **menyaring** kandidat: buang yang total lokalnya
   >= baseline. Cepat, tanpa menyentuh state, tidak butuh toolchain.
2. Pilih varian akhir dari **angka judge**, bukan dari total lokal.
3. Lokal membaik tanpa judge bukan bukti: simpan kandidat di `/tmp` dan catat
   angkanya di `note` shard, jangan klaim lebih baik.
4. Bila butuh angka setara judge tanpa mengubah state:
   `python3 -c "import decomp.run as r; print(r._judge('<fungsi>', tag='probe'))"`.

Rincian per varian (termasuk varian D: lokal 80 -> judge 43) ada di §67.

## 70. Pembanding byte objek vs ROM untuk fungsi ekor (`dif4` saja tidak cukup)

`dif4` membandingkan teks asm (LCS) dan hanya penyaring kandidat. Untuk fungsi
panjang, ukur byte objek lawan ROM langsung; pembukti: `func_080087C8`
(`dif4` 63% sementara byte objek 240B vs ROM 240B dengan 89 instruksi beda,
dan judge memecahnya 8missing/9extra/21operand/6regalloc/4different).

Resep (semua di `/tmp`, jangan masuk repo):

1. `agbcc -O2 -fhex-asm` draf -> `.s` (lihat `decomp/drafts` + flag build).
2. `arm-none-eabi-as --defsym <simbol>=0x<8 digit alamat>` untuk tiap
   `func_*_AABBCCDD` / `vtable_*_AABBCCDD` (alamat ada di namanya) dan
   `_call_via_rN`; tanpa ini literal pool `ldr rN, [pc, #x]` beda semua.
3. Ambil `.text` objek lewat `elftools` (path `tools/python`), potong sesuai
   `st_size` simbol fungsi.
4. Disasm ROM slice + kandidat dengan capstone (mode Thumb), bandingkan per
   instruksi; `bl`/`b` di-relaksasi (byte target baru benar setelah link).
5. Hitung jumlah instruksi beda + cetak offset pertama yang beda — itu peta
   kerja yang sebenarnya, bukan persentase LCS.

Pelajaran dari `func_080087C8`: urutan prolog yang "aneh" di ref (mis.
`ldr r3, [pc, #..]` dimuat jauh sebelum `str r3, [sp, #0x48]`) adalah
penjadwalan agbcc, bukan bukti struktur lain; dan store yang tampak mati
(`f18` ditulis dua kali) hilang di draf karena gcc menghapusnya — itu yang
membuat panjang objek 236B/228B, bukan 240B.

### 70b. Store ganda ke slot yang sama tidak bisa ditahan lewat alias

`func_080087C8` menulis `sp+0x48` dua kali (`&vtable_unk_080E5BE8` lalu
`&vtable_unk_080E5BD8`, store pertama mati). agbcc menghapus store pertama
pada semua varian yang dicoba:

| cara menulis | hasil |
|---|---|
| `d.f18 = A; ... d.f18 = B;` (member langsung) | store A hilang, objek 236B |
| `((void **) pd)[6] = A;` (tipe lain, alamat sama) | tetap hilang, 236B |
| `*(void * volatile *) &pd->f18 = A;` | store bertahan tapi 244B |
| `volatile Cont *vd = &d; vd->f18 = A;` | store bertahan, 248B, `ldr` tetap tidak diangkat ke +0xe |

Kesimpulan praktis: byte-identik di sini butuh `ldr` alamat vtable diangkat
ke awal prolog **dan** store-nya dipertahankan; volatile memenuhi syarat kedua
tanpa yang pertama, jadi jumlah instruksi malah bertambah. Parkir fungsi ini
lebih murah daripada terus mengejar regalloc.

### 70c. Initializer agregat memunculkan `ldm`/`stm`, bukan `str` per field

Dugaan bahwa store mati `vtBE8` berasal dari initializer agregat diuji dengan
`Sent e = {0, 0, (void *) &vtable_unk_080E5BE8};` (Sent = 3 pointer):
objek jadi 240B **tetapi** agbcc mengangkat penyalinan ke prolog sebagai
`ldm r1!, {r4, r5, r6}` + `stm r2!, {r4, r5, r6}` dari data statis, dan
store-nya tetap tidak muncul di posisi ref (`str` per field di sekitar
`+0x4c`). Ref memakai `str` tunggal, jadi initializer agregat bukan asalnya.

Akibatnya untuk `func_080087C8` tersisa dua jalan yang sama-sama tidak murah:
meniru penjadwalan agbcc (load diangkat, store ditenggelamkan) atau mengakui
fungsi ini parkir. Draf terbaik tetap varian member-langsung (240B, 89
instruksi beda, judge 48 selisih).

### 70d. Alias `char *` hanya menahan store bila pointernya buram

Uji terpisah (fungsi tiruan, pointer parameter):

```c
void g(S *p, void *x) { char *q = (char *) p + 0x18; *(void **) q = x;
                        p->d = 0; p->e = 0; p->c = 0; }
```

-> `str r1, [r0, #0x18]` **bertahan** (agbcc tidak membuang store lewat
`char *` yang bisa mengalias apa pun). Tapi di `func_080087C8` trik yang sama
gagal: `pd` adalah `register Cont *pd __asm__("r4")` yang menunjuk lokal
`&d`, sehingga `(char *) pd + 0x18` terlipat ke alamat yang sama dan store
tetap dihapus (objek 236B/232B). Dengan basis diikat di awal (bentuk v6)
objek jadi 240B tetapi jumlah instruksi beda tetap 89 - tidak ada perbaikan
yang membenarkan judge tambahan.

Kesimpulan: untuk store ganda ke slot yang sama, agbcc hanya "lupa" alamatnya
kalau pointernya berasal dari parameter/`void *` buram; pada alamat lokal yang
diketahui, DSE tetap jalan. Ini yang membuat ref (yang mempertahankan ketiga
store: `0x40`, `0x44`, `0x48` masing-masing dua kali) tidak bisa ditiru dari
C biasa tanpa barrier.

### 70e. Peta bingkai `func_080087C8` (76B) - titik mulai, bukan tebakan

Bingkai ref `sub sp, #0x4c` = 76 byte = 19 word. Peta hasil baca asm, sudah
diverifikasi lawan byte ROM:

| offset | isi | keterangan |
|---|---|---|
| `sp+0x00` | node 16B | `{next=0, prev=0, vt=vtable_unk_080E5AF0, data=p+0x34}` |
| `sp+0x10` | node 16B | `{0, 0, vt=vtable_unk_080E5AE0, data=p+0x8C}` |
| `sp+0x20` | node 16B | `{0, 0, vt=vtable_unk_080E5AD0, data=p+0x24}` |
| `sp+0x30` | container | `{f0=0, f4=0, vt=vtable_unk_080E5BB4, fC=&e}` |
| `sp+0x40` | sentinel 12B | `{next=&container.fC, prev=&e, vt=vtable_unk_080E5BD8}` |

Dua bacaan yang identik byte-per-byte: (a) container 28B `0x30..0x4b` dengan
field `f0,f4,vt,fC,f10,f14,f18`, atau (b) container 16B `0x30..0x3f` +
sentinel 12B `0x40..0x4b`. Yang penting bukan namanya, melainkan urutan
tulisnya: `0x3C=&sentinel`, lalu sentinel ditulis `vt=vtable_unk_080E5BE8`,
`next=0`, `prev=0`, kemudian **ditimpa** `vt=vtable_unk_080E5BD8`,
`next=&container.fC`, `prev=&e`.

Uji `func_08009940(container, item)` x4 menyisipkan `p+0x494`, `sp+0x00`,
`sp+0x20`, `sp+0x10`; sesudah itu `func_08008AE0(p+0x490)` dipanggil dua kali
(virtual `+0x10` lalu `+0x14`) dengan `func_08008AF0(p+0x490)` di antaranya,
ditutup `func_080098DC(container, 2)` dan tiga `func_080098AC(node, 2)`.

Angka semua varian yang sudah dicoba (pembanding byte objek vs ROM):

| varian | objek | instruksi beda | catatan |
|---|---|---|---|
| 19 word (bingkai datar, urutan asm) | 232B | 92 | titip di `decomp/drafts/` sebagai titik mulai |
| struct Node/Cont + `register r8/r6/r4` (v6) | 240B | 89 | terbaik; judge 48 selisih |
| + `void * volatile *` / `volatile Cont *` | 244/248B | 83/81 | store bertahan, prolog memburuk |
| + initializer agregat `Sent e = {0,0,&vtBE8}` | 240B | 91 | agbcc memakai `ldm/stm`, bukan `str` |
| + alias `char *` (draf sekarang) | 232B | 92 | terlipat ke alamat lokal, store tetap hilang |

Karena bingkai, urutan tulis, dan pointer berjalan sudah cocok, sisa selisih
bukan lagi soal struktur: semuanya regalloc + penjadwalan + DSE (70b-70d).

### 70f. Bentuk sumber `func_08008980` tidak langsung menular ke `func_080087C8`

`func_08008980` (MATCH, `src/hardware_migrated.cc`) memakai idiom yang sama:
container dengan `unk8 = &vtable_unk_080E5BB4`, `unkC = sentinel`, sentinel
`unk8 = &vtable_unk_080E5BD8`, lalu vt container ditimpa vt lain
(`vtable_unk_080E5B90`). Penting: di sana store vt yang ditimpa **bertahan**
karena objeknya berasal dari `__builtin_new()` (pointer buram), sedangkan di
`func_080087C8` bingkainya lokal di stack sehingga alamatnya diketahui gcc dan
DSE membuang store pertama (POLA-DIFF 70b-70d).

Draf yang meniru bentuk 08980 (pointer variabel `pd`/`pe` + `(u8 *) x + N`)
memberi hasil terukur: 240B, 95 instruksi beda, dif4 65% dengan sebaran
13 missing / 13 extra / 20 operand - missing+extra jauh lebih baik daripada
bingkai datar (29/26), tetapi regalloc memburuk karena gcc menyimpan satu
register kaloper tambahan (`push {r4,r5,r6,r7,lr}` vs ref `push {r4,r5,r6,lr}`
+ `mov r6, r8` + `push {r6}`): ref memakai r6 sebagai penghela r8, build kita
memakai r7. Judge varian itu: 7missing/8extra/25operand/11regalloc = 52
selisih, sedikit di atas varian struct Node/Cont (48).

Kesimpulan: idiom 08980 layak dipakai sebagai titik mulai (missing+extra
turun), tetapi MATCH tetap tertahan pada pemilihan register penghela prolog
dan DSE alamat lokal - bukan pada bentuk struktur.

### 70g. Permutasi urutan blok tidak memindahkan wall `func_080087C8`

Enam permutasi sumber diuji sistematis (blok container/sentinel dipindah ke
depan, urutan store di dalamnya ditukar, alamat vtBE8 disimpan di variabel
`vtb` lalu dipakai di store), semuanya diukur byte objek vs ROM:

| varian | objek | instruksi beda | catatan |
|---|---|---|---|
| baseline (bentuk 08980) | 240B | 95 | prolog `push {r4,r5,r6,r7,lr}` |
| blok container di depan | 240B | 94 | `q` tidak dihitung lebih dulu |
| idem + store vt ditukar | 240B | 94 | - |
| `vtb` dimuat setelah pointer disiapkan | 248B | 88 | 3 instruksi ekstra |
| `vtb` dimuat tepat setelah `q` | 248B | 88 | `ldr r3` tetap tidak diangkat |

Dua sifat yang dituntut ref tidak bisa dipenuhi bersama oleh agbcc kita:
(1) store `sp+0x48` bertahan padahal ditimpa - hanya terjadi kalau ditulis
lewat pointer variabel, dan jalur itu menambah satu pointer hidup sehingga
prolog memakai `r7` sebagai penghela `r8`; (2) `ldr` alamat vtBE8 diangkat ke
`+0xe` - tidak pernah terjadi, bahkan ketika nilainya disimpan ke variabel
`vtb` paling awal. Menaruh `vtb` lebih awal justru mendorong gcc menghitung
semua basis lebih dulu (`add r0/r6/r4, sp, ...`), bukan memuat konstanta.

Kesimpulan: wall-nya penjadwalan + regalloc agbcc, bukan urutan sumber.
Parkir fungsi ini; bukti lengkap ada di 70b-70g.

### 71. SWI wrapper: `asm("svc #N")` menulis persis `svc #N; bx lr`

Fungsi syscall BIOS di `code_lib_syscall.s` dulu ditandai "skip permanen (svc
satu instruksi)". Ternyata inline asm agbcc meneruskan instruksinya apa adanya:

    s32 ArcTan2(s32 x, s32 y) { asm("svc #0xa"); }

menghasilkan `svc #0xa` lalu `bx lr` = 4B, byte-identik. Pembukti: `ArcTan2`
(0xa), `CpuFastSet` (0xc), `CpuSet` (0xb), `Sqrt` (8). `IntrWait` butuh
`movs r2, #0` di depan dan MATCH dengan dua `asm()` terpisah
(`"movs r2, #0"` lalu `"svc #4"`).

Batasnya: `SoftReset` (svc #1 lalu #0) tidak bisa ditutup begini. Ref-nya
**tidak** punya `bx lr` karena `svc #0` tidak kembali, sedangkan gcc selalu
menutup badan fungsi dengan `bx lr` -> 26B vs 24B. Bentuk `noreturn` yang
membuang `bx lr` belum ditemukan di agbcc, jadi tetap wall (bukan skip buta).

### 72. Dua tuas yang menutup diff "hanya-register"

Bukan semua diff register itu wall. Dua tuas ini berhasil:

1. **Pin register eksplisit.** `register u32 i __asm__("r1");` menggeser
   alokasi tanpa mengubah instruksi. Pembukti: `func_080AB82C` (sebelumnya
   r1/r2 tertukar pada `i` vs `acc`) jadi byte-identik setelah `i` di-pin ke
   `r1` dan `acc` ke `r2`. Pin pada pointer basis juga bisa, tapi hati-hati:
   nilai yang di-pin sering kehilangan salinan `add rX, rY, #0` yang ada di
   ref (`func_08012720` jadi lebih jauh saat basisnya di-pin).
2. **Pindahkan pelebaran tipe ke dalam cabang lewat cast.** Parameter `u16`
   membuat gcc menaruh `lsls/lsrs #0x10` di prolog; ref menaruhnya di dalam
   `if`. Solusinya deklarasikan parameter sebagai `s32` lalu cast di call-site:
   `f(x, arg1, (u16) arg2, ...)`. Pembukti: `func_0801268C` (sebelumnya beda
   urutan dua instruksi itu) jadi identik.

Sisa yang tetap wall walau cuma beda 1-2 instruksi: `func_08012720`/
`func_08012760` (konstanta `0x2210` selalu dimuat ke `r1`, ref `r2`),
`func_0805E760` (`pop {r1}; bx r1` vs ref `pop {r2}; bx r2`), `func_08024CA0`
(gcc mengkanonikkan `c < 0x24` jadi `cmp #0x23; ble`, ref `cmp #0x24; blt`).

### 73. Tiga tuas penutup diff struktural (CFB28, 93EEC/94388, 9AA28)

1. **Aritmetika pointer bertipe men-skala offset.** Draf m2c menulis
   `p = arg0 + 0x94` padahal `arg0` bertipe `GenObj *`; gcc mengalikan offset
   dengan `sizeof(GenObj)` sehingga muncul konstanta pool tambahan dan
   `add r4, r6, r0`. Ref hanya `adds r4, r6, #0; adds r4, #0x94`. Perbaikan:
   `p = (u8 *)arg0 + 0x94;`. Pembukti: `func_080CFB28` (52B, MATCH).
2. **Salinan `a2 = arg0` + re-deref di argumen terakhir.** Ref memuat
   `ldr r2, [r0, #4]` sekali, menyimpan `arg0` di `r2`, lalu **memuat ulang**
   `arg0->unk4` sebelum call. Bentuk itu muncul kalau sumber menyimpan
   `GenObj *a2 = arg0;` dan argumen call ditulis `(u8 *)a2 + a2->unk4->unk20`
   (bukan lewat variabel `o` yang sudah dipegang). Pembukti: `func_08093EEC`
   dan `func_08094388` (52B, keduanya MATCH dari sumber yang sama).
3. **Penghitung loop yang dilebarkan.** Draf `u8 n` yang di-`--` menghasilkan
   `lsl #0x18; lsr #0x18` setelah `sub`. Ref memakai `subs r1, #1` polos:
   deklarasikan `s32 i = n;` sebagai penghitung terpisah dari `u8 n` (nilai
   field), dengan `u8 *p = arg0;` dideklarasikan lebih dulu supaya `p` tetap di
   `r2`. Pembukti: `func_0809AA28` (48B, MATCH).

Catatan alat: diff teks `asm/*.s` vs `decomp/logs/judge_*/.../func.s`
**melebih-lebihkan** selisih (`add` vs `adds`, `#4` vs `#0x4`, label berbeda).
Untuk memutuskan wall pakai perbandingan byte objek vs ROM
(`/tmp/cmpC8.py` ala §70), bukan hitungan baris teks.

### 74. Urutan pernyataan menentukan penjadwalan (`func_080AA850`)

Ref menghitung argumen ke-4 (flag `f(x) == 3`) **sesudah** argumen ke-2
(`obj->unk94 + 0x34D8`) dimuat. Bentuk m2c yang menaruh `flag = 0` di depan
membuat agbcc menyimpan flag di `r7` (push tambahan) dan menaruh `cmp` terlalu
awal. Yang menutup:

    p = &arg0->unk94;
    a = func_0800E324(*p + 0x10);     /* call dulu */
    addr = *p + 0x34D8;               /* baru pointer arg-2 */
    flag = (a == 3) ? 1 : 0;          /* flag dari hasil call */

Pembukti: `func_080AA850` (76B, MATCH). Pola umum: kalau ref memuat sesuatu
di antara call dan `cmp`, tulis ekspresi itu sebagai pernyataan tersendiri
dengan urutan yang sama, jangan digabung dalam satu ekspresi.

Gate migrate juga menolak blok lama: `promote()` tidak menimpa blok, jadi
setelah menulis ulang draf, **hapus blok + `// DECOMP-MATCHED`** milik fungsi
itu dulu, reset `status` shard ke `matched`, baru `promote()` (lihat MIGRATE
§17). Tanpa itu `migrate.py` melaporkan `blok DECOMP-MATCHED tidak ditemukan`
walau `promote()` mencetak path.

### 75. Call virtual: tulis ekspresi call inline, jangan lewat variabel `fn`

`func_08016EC4` (44B) beda 3 instruksi karena ref menyimpan argumen stack
(`str r6, [sp]` / `str r5, [sp, #4]`) **sebelum** memuat pointer fungsi
(`ldr r4, [r4]`), sedangkan draf `fn = *(void **)(vt + 0x160); fn(...)`
memuat pointer lebih dulu. Menulis call-nya inline menutup semuanya:

    ((void (*)(void *, s32, s32, s32, s32, u16))
        *(void **) (vt + 0x160))(h, arg1, arg2, arg3, arg4, arg5);

Pembukti: `func_08016EC4` (MATCH). Aturan umum: kalau ref memuat fn tepat
sebelum `bl` (setelah argumen stack disiapkan), jangan simpan fn di variabel.

Catatan gate: prototipe callee harus **sama persis** dengan yang sudah ada di
`src/<modul>.cc` (mis. `func_080A5BD8` di sana `(void *, i32 *, i32, i32)`),
termasuk jumlah parameter — bukan cuma tipe argumen yang dipakai fungsi baru.

### 76. Tiga tuas lagi: slot fn dimuat akhir, uji byte `<<24`, tipe param callee

1. **Hitung slot pointer fungsi sebelum argumen stack diisi.** Ref
   `func_0801DCD4` menghitung `*arg0 + 0x140` (r1) SEBELUM `str` argumen,
   lalu `ldr r3, [r1]` sesudahnya. Bentuk yang menutup: simpan slotnya dulu
   (`void **slot = (void **)((u8 *)*arg0 + 0x140);`), isi array argumen, baru
   `((void (*)(...)) *slot)(...)` — jangan membaca `*slot` di ekspresi call
   sebelum argumen tersimpan.
2. **Uji byte pakai `<< 24`, bukan `== 0`.** `func_0803A350` butuh
   `(func_08008CD0(*p) << 0x18) == 0` agar muncul `lsls r0, r0, #0x18; cmp r0,
   #0`; `== 0` polos menghasilkan `cmp r0, #0` saja.
3. **Prototipe callee mengikuti `src/`, bukan naluri sendiri.** Gate migrate
   membandingkan string tanda tangan per modul. Di `game_state`:
   `GetValueShipped__C11ShippingBin` dideklarasikan `(i32)` dan
   `func_0801140C` memakai `GenObj__func_0801140C *`, jadi draf harus memakai
   bentuk itu (`(s32)((u8 *)obj + 0x54)`, cast struct) walau `void *` lebih
   wajar. Sebaliknya `func_080A5BD8` di `code_809E804` `(void *, i32 *, i32,
   i32)` sehingga argumen pointer harus di-cast.

Tambahan: nilai yang dipakai dua kali lintas call **jangan** disimpan di
variabel (`obj = ...; f(obj); g(obj);`) kalau ref memuat ulang dari field —
tulis deref-nya dua kali supaya gcc memuat ulang lewat basis yang sama
(`(u8 *)arg0 + 0x1038`), dan pakai `s32` + cast `(u16)` di call-site untuk
parameter yang di ref baru dipotong di ujung.

### 77. Bitfield, guard terbalik, dan urutan operand alamat

1. **Dua bit 1-bit = dua `movs; rsbs`.** `func_0809AB8C` butuh
   `arg0->bit0 = 0; arg0->bit1 = 0;` pada dua bitfield 1-bit terpisah; itu
   memaksa `movs r0,#2; rsbs` (`& ~1`) dan `movs r1,#3; rsbs` (`& ~2`).
   Bentuk `x &= -2; x &= -3;` atau `(x & -2) & -3` justru dilipat jadi satu
   mask (`0xFE`/`0xFC`/`-4`) dan tidak cocok.
2. **Guard loop ditulis pakai variabel hasil, bukan konstanta.** Di
   `func_0809AAD4` ref membandingkan `cmp r3, r0` (r3 = count yang masih 0)
   sehingga sumbernya `if (count < (s32) lim)`. Menulis `if (lim > 0)`
   menghasilkan `cmp r0,#0` dan meleset. Counter `n` harus `s32` (hasil
   `ldrb`), bukan `u8`, supaya `n -= 1` jadi `subs r2,#1` tanpa pemotongan.
3. **Pointer yang diturunkan di tempat memakai `q -= 2`, bukan `*(q - 2)`.**
   `func_0806E1E8`/`080A6474`: ref melakukan `ldrb r1,[r0]; subs r0,#2;
   strb r1,[r0]`. Bentuk `*(q - 2) = *q` membuat gcc menghitung alamat kedua
   dari basis (`adds r1,r1,#0x38`) dan kehilangan `subs`.
4. **Urutan operand `adds` mengikuti urutan tulis di sumber.**
   `func_0807D1DC`: ref `adds r1,r1,r4` (= `(arg1 << 2) + arg0`), jadi
   indeksnya ditulis `(arg1 << 2) + (s32) arg0`, bukan `arg0 + (arg1 << 2)`
   (yang menghasilkan `adds r1,r4,r1`).
5. **Alamat basis global dimuat lebih dulu.** Ref memuat `gUnk_...` ke
   register sebelum hitungan indeks; menyimpan `base = (u8 *)&gUnk_...;`
   sebagai pernyataan pertama mereproduksi urutan itu.
6. **Prototipe callee saat migrasi = prototipe di `src/`, termasuk yang
   "aneh".** `func_080A4A94` dideklarasikan `(void)` di
   `src/code_809E804.cc` dan `func_080CABEC` `(i32, i32)` di
   `src/code_0803EE94.cc`; draf yang memakai `(void *)`/`(s32, s32 *)`
   ditolak gate SKIP walau byte-nya identik. Cast di call-site
   (`func_080A4A94();`, `(s32) GetDesc__C4Tool(&sp0)`) tidak mengubah kode.

### 78. Bentuk loop menentukan rotasi, bukan urutan pernyataan

1. **`while (1) { if (kond) return v; ... }` menjaga uji di atas loop.**
   `func_080A4650`: bentuk `for (;;)`/`while (kond) { ... }` dirotasi agbcc
   (badan dulu, uji di bawah, `b` ke uji) sehingga `cmp; bhi` jadi `bls` ke
   badan. Menulis `while (1)` dengan `if (cur == 0xFFFF) return res;` lalu
   `if (cur > key) return res;` menghasilkan persis `beq` + `bhi` di atas
   badan seperti ref.
2. **Pra-uji eksplisit + `do..while` untuk loop `i = 1; i <= n` yang tidak
   dirotasi.** `func_08025248`: ref menguji `cmp r5,r7; bhi end` SEBELUM badan.
   Bentuk `for (i = 1; i <= n; i++)` dirotasi; bentuk
   `i = 1; if (i > n) goto done; do { ...; i++; } while (i <= n); done:` menghasilkan
   layout ref.
3. **Argumen ke-5 disalin ke variabel sebelum salinan struct.** Ref memuat
   argumen stack ke `r7` lebih dulu (`ldr r7,[sp,#0x20]`), baru menyalin
   `*arg2`; menaruh `n = arg4;` di atas `v = *arg2;` memaksa itu dan membuat
   `arg1` dapat `r8` (bukan `r9`). Tipe `u32 n` juga menghindari salinan
   tambahan pada `cmp` unsigned.
4. **Salinan struct utuh, bukan dua tulis terpisah.** `v = *arg2;` (arg2
   bertipe struct) menghasilkan `ldr/ldr/str/str` seperti ref; dua
   `*(s32 *) &v.a = ...` menghasilkan `ldr/str/ldr/str`.
5. **Offset langsung mengalahkan variabel pointer saat ref memakai `r0`
   untuk alamat.** `func_080BA1A4`: `*(u16 *)(arg0 + 0x20) -=
   *(u8 *)(arg0 + 0x23)` memberi `adds r0,r2,#0; adds r0,#0x23; ldrb r1,[r0]`
   sesuai ref, sedangkan `p = arg0 + 0x23` menaruh alamat di `r1`.
6. **Pernyataan pemisah sebelum penyiapan argumen call.** `func_080CEC84`:
   `v = *(s32 *) arg0;` sebagai pernyataan sendiri membuat `ldr r1,[r5]`
   dieksekusi sebelum `mov r4, sp`; menulisnya inline di argumen call
   membalik urutan itu.

### 79. Polaritas cabang menentukan tata letak blok if/else

1. **Tulis `if (x != K) { B } else { A }` bila ref menaruh blok `A` di ujung.**
   `func_08081108`: ref `cmp r0,#0xa; beq .L(akhir)` lalu badan `B`, `b` ke
   akhir, baru `A`. Bentuk alami `if (x == K) { A } else { B }` menghasilkan
   `bne` yang melompat ke `B` lebih dulu (kandidat 17 diff). Membalik
   polaritas (`!=` dengan `A` sebagai `else`) menghasilkan susunan byte ref.
   Cabang yang sama-sama sah sering hanya beda polaritas, bukan isi.
2. **Panggilan ekor ikut masuk ke blok if terluar.** `func_08025018`: ref
   memakai `ldrb [arg0+0xc2]; bne akhir` (if terluar positif) dan
   `func_0803242C(arg0, arg1)` berada DI DALAM blok itu, bukan sesudahnya —
   jadi tulis `if (*(u8 *)(arg0 + 0xC2) == 0) { ...; func_0803242C(arg0, arg1); }`
   dan bukan early-return sebelum blok.
3. **Dinding: penyimpanan mati ke field lokal dihapus compiler sekarang.**
   Tiga fungsi kembar `func_080BC8FC` / `func_080C0D90` / `func_080C7F1C`
   menyimpan `s.self = &s; s.c = v;` yang tidak pernah dibaca; ref tetap
   menyimpannya (`str r0,[sp,#4]`, `str r2,[sp,#8]`) sedangkan kandidat
   membuangnya (38-56B vs 60B). `*(volatile s32 *) s.self = 0;` memulihkan
   blok destruktor maya dan urutan, tetapi `&s` masih dilipat sehingga
   `adds r1, r0, #0` hilang — sisa 4B. Kategori parkir.

### 80. Penerima virtual call adalah objek yang DIMUAT, bukan argumennya

`func_08036BF8`: ref `ldr r0,[r5]` (= `*(s32 *) arg0`), `ldr r1,[r0]` (vtable ke r1
supaya r0 tetap objek untuk `bl`), `movs r2,#0x8a; lsls r2,#1; adds r1,r1,r2;
ldr r1,[r1]; bl _call_via_r1`. Menulis `((s32 *) *(s32 *) arg0)[0x45])(arg0)`
membuat gcc memakai r0 untuk vtable lalu menambah `adds r0, r5, #0` (4B lebih,
80B vs 76B). Yang cocok: muat objeknya dulu ke variabel lalu panggil dengan
objek itu —
`s32 *o; o = (s32 *) *(s32 *) arg0; ((void (*)(s32 *)) ((s32 *) o[0])[0x45])(o);`
Pola sama dipakai `func_0806D8C8`/`func_08037048` (penerima = field yang dimuat).

Bila field dibaca dua kali dengan satu `bl` di antaranya, simpan ke variabel
terpisah (`v0`,`v1`) supaya kedua `ldrsh` dikeluarkan sebelum `cmp`
(`func_08036BF8`).

### 81. Hitung indeks lebih dulu, baru base pointer

`func_080CFB5C`: ref `lsls r4,r4,#2` (indeks) → `adds r1,r5,#0; adds r1,#0x1c`
(base) → `adds r4,r1,r4`. Menulis `p = (s32 *) (arg0 + 0x1C + arg2 * 4);`
membuat gcc melipat base ke `adds r4,r4,#0x1c; adds r4,r5,r4` (2 instruksi,
urutan beda, 31 diff). Yang cocok: indeks dan base dipisah ke variabel, indeks
DULU —
`off = arg2 * 4; base = arg0 + 0x1C; p = (s32 *) (base + off);`

Hal yang sama berlaku untuk urutan muat: `m = *(s32 *) (map + 4);` ditulis
sebagai pernyataan sebelum perhitungan `p`, kalau tidak gcc menaikkan
perhitungan `p` ke atas muat itu.

## 71. Tiga dinding dekat-MATCH: literal arg ke-4, regalloc pointer-switch, salinan base

Tiga percobaan manual pada fungsi ber-ref 324/84/148 B (semua di tabel
`pick_targets` "pola lolos") berhenti di sisa 3–5 baris diff. Bentuk yang
dicoba dan sisanya:

1. **`func_08037B80`** (324 B, `code_entities_08034CEC`): draf C benar
   semantik, tetapi agbcc menaruh `ldr r3, =0x207` **sebelum** `str 0xA,[sp]`;
   ref menaruhnya sesudah `adds r0..r2`. Dipindah ke TU C++
   (`code_entities_08034CEC.cc`, jalur `make compare`) hasilnya sama —
   jadi ini bukan beda frontend C/C++, melainkan urutan materialisasi arg
   konstan di argumen ke-4 saat arg ke-5 ada di stack.
2. **`func_080D75E0`** (84 B, `code_linkonce`): `1missing,1extra,2regalloc`;
   pointer hasil `arg0+4`/`arg0+8` diminta di **r3** oleh ref, agbcc konsisten
   memilih r1 (3 baris). Varian `+= 4`, dua assignment, ternary, `void *`,
   `register`, dan urutan deklarasi tidak mengubah pilihan register.
3. **`func_0802AB98`** (148 B, `code_entities`, keluarga `pop {r2}`): ref
   menyimpan `adds r3,r0` (out) lalu **`adds r0,r1`** (base baca di r0),
   sehingga r0-r3 semua terpakai dan offset 0xE turun ke r4
   (`push {r4,lr}`); C menghasilkan base di r1, offset via r2/r0, 0x86 B vs
   0x94 B. Locals `i32` (bukan `i16`) perlu supaya `ldrsh` muncul, tetapi
   salinan base ke r0 tidak bisa dipaksa lewat C: `Src *in = arg1`, cast
   `void *`, maupun urutan baca tidak menghasilkan `adds r0,r1`.

Aturan kerja: ketiganya **parkir** (cap 5 judge), bukan wall permanen yang
terbukti — kalau nanti ada bentuk C lain, uji ulang dengan pembanding byte
objek (`tools/scripts/diff_mismatch.py`) sebelum menghabiskan judge.

## 72. Sapuan kelas "type/semantik murni": satu MATCH, lima parkir

Sasaran: fungsi `failed` yang draf m2c-nya gagal **kompilasi** karena tipe
(petunjuk: `request for member`, `incompatible pointer type`, `undeclared`,
`invalid use of void`). Enam kandidat dibaca asm-nya, ditulis ulang manual,
lalu dijudge.

**MATCH:** `func_08038028` (112 B, `code_entities_08034CEC`) — galat m2c
`(arg0 + 0x25)->unk1` dan `temp_r0->unk4` hilang setelah struct diberi lebar
benar (`u16 unk4`, `u8 unk25`, `u8 unk26`, `u16 unk28`, `u8 unk20`,
`u16 unk22`), vtable `s32 (*unk40)(void *, s32)` di 0x40, dan pemanggilan
`__7AEntityP10GameObjectRC8Location(arg0, (s32)arg1, arg2)` memakai tanda
tangan 3-arg yang sudah ada di `src/`. Setelah dipromosikan, migrasi butuh
cast eksplisit ke `struct GenObj__func_08038374 *` (parameter di `src/`),
lalu `migrate.py` hijau. Match: 1357 -> 1358.

Parkir (cap judge habis / diff tinggal pola codegen, bukan salah tipe):

1. **`func_08015790`** (268 B, `game_state`): draf `void**` diganti vtable
   `unk3C` + `Actor *unkA8`; hasil `16missing,16extra,24regalloc`. Ref
   memakai `r5 = &sub->unk8C` + konstanta 0x410 dimaterialisasi **di dalam**
   loop, agbcc mengangkat konstanta ke r7 dan memilih r6 untuk alamat.
2. **`func_08037A5C`** (116 B, `code_entities_08034CEC`): `Rect` lokal
   dipecah agbcc jadi dua word ber-mask (bukan empat `strh`), dan arg ke-4
   konstanta `0x71C` dimaterialisasi sebelum `str` arg stack — keluarga
   dinding §71 butir 1.
3. **`func_080A64B8`** (108 B, `code_809E804`): `Inner.unk21A0` (`ldrb`
   + `lsls/lsrs`) dan `Slot.unk1/unk2` sudah benar; sisa beda: ref menulis
   `strb` nilai mentah lalu meng-mask register, C kita memuat ulang `ldrb`
   (2 instr) dan r5/r6 konstan 0/0xff berbeda peran.
4. **`func_080123CC`** (136 B, `game_state`): switch + 6 setter; ref
   memuat `0xFFFF` dari pool **per panggilan**, agbcc meng-CSE ke r4
   sehingga menambah `push {r4,r5,r6,lr}` (ref 3 reg) — dinding scheduling.
5. **`func_0809A970`** (80 B, `code_0803EE94`): bitfield 12-bit + bit 0x10
   via `ldrh/ldrb`; ref memakai `(v<<20)>>20` dan mask `0xFFFFF000` penuh,
   agbcc melipat mask jadi 0xF000 dan memakai `asr` karena `v12` u16.
6. **`func_080B3948`** (72 B, `code_809E804`): loop 5x; ref `cmp #2/bgt`
   lalu `cmp #1/blt`, agbcc menormalkan `t >= 1` menjadi `cmp #0/ble`;
   konstan 0 dan 1 diangkat ke r5/r6 (ref hanya 1 di r5, 0 dimuat di
   dalam blok), menambah satu push.

Kesimpulan: pada kelas ini yang menang adalah fungsi dengan **petunjuk tipe
murni** dan tanpa materialisasi konstanta/mask yang bisa dilipat agbcc.
Kandidat berikutnya sebaiknya disaring dulu: tidak ada `0xFFFF`/mask lebar,
tidak ada literal arg ke-4/ke-5, dan tidak ada struct lokal yang alamatnya
diambil.

## 73. Sapuan kedua (penyaring pool/mask/stack): enam parkir regalloc

Penyaring baru: fungsi `failed` 100–300 B dengan petunjuk galat tipe, lalu
dibuang yang asm-nya punya `ldr =konstanta` lebar, `ands/orrs` mask, akses
`sp`, atau `_call_via` (dinding §71/§72). Sisa 301 kandidat; enam yang paling
bersih dibaca penuh dan ditulis ulang manual. Tidak ada MATCH baru.

1. **`func_0805E790`** (148 B, `code_0803EE94`). Ref memuat **semua** nilai
   entry dulu (r3,sb,r4,r6,r2,r5,r1,r8) baru menulis 8 field; versi
   "assign langsung" menghasilkan 104 B (35missing) karena agbcc menulis
   per-ekspresi. Versi 8 local temp berhasil meniru urutan muat-lalu-tulis,
   tetapi agbcc menumpahkan satu temp ke stack (`add sp,#-8`,
   `str r0,[sp,#4]`) → 18missing/18extra.
2. **`func_08017180`** (120 B, `game_state`). Loop blit 2 tingkat; sisa
   `10missing,11operand,13regalloc`. Ref menyimpan `arg1*4` di sb, base di
   r8, `d` di r5/r3; agbcc memakai r4–r7 dan mengubah `muls` menjadi
   `mul r0,r0,r6`.
3. **`func_08037958`** (128 B, `code_entities_08034CEC`). Rantai panggilan +
   rekaman 4 B. Setelah konstanta 0x3C dijadikan variabel, ref memakai
   `muls r0,r5,r0`, agbcc tetap `mul r0,r0,r5` (bentuk 32-bit) → 5missing/
   7extra; sisanya urutan `cmp` hasil panggilan vs reload field.
4. **`func_0803B0A8`** (128 B, `code_0803A8A4`). Destruktor dengan dua loop
   rentang. Bentuk pointer m2c (`t2 = arg0+0xE8; t2 += ...`) memberi badan
   yang **sama urutannya** dengan ref, sisa `1operand,9regalloc`: ref menaruh
   base/end di r2, agbcc di r4 (kalau dipaksa tipe `s32`, urutan malah
   berubah karena `arg0+0xEC` direasosiasi menjadi `base+4`).
5. **`func_08014318`** (100 B, `game_state`). Vtable `unkB0`/`unkBC` + field
   5-bit. Struktur cocok; sisa `2missing,1extra,6operand,14regalloc` (salinan
   `adds r6,r0` hilang, base 0x8C di r2 vs r3).
6. **`func_080ADC00`** (132 B, `code_809E804`). Alokator 0x20 B + 4×(`str` +
   `strh`); bentuk C sudah persis, sisa hanya peran register (ref:
   obj di r2, nol di r0 lewat `adds r2,r0,#0`; agbcc: obj di r0). Catatan:
   `ref_len` state 132 B tampaknya ikut menghitung `.byte` sesudah fungsi,
   jadi bandingkan dengan objek, bukan angka itu.

`func_0805E760` (48 B) juga dicek ulang: tetap `2regalloc` (`pop {r1}` vs
`pop {r2}`) — sudah didiagnosis habis di `MIGRATE.md` §32, tidak diulang.

Kesimpulan penyaring: setelah pool/mask/stack dibuang, **semua** sisa kandidat
kelas ini jatuh ke pemilihan register agbcc (r2 vs r4, r1 vs r2) atau
strength-reduction `mul`/mask. Fungsi yang menang (mis. `func_08038028`, §72)
adalah yang badannya cuma panggilan + simpan field, tanpa loop dan tanpa
aritmetika konstanta.

## 74. Sapuan penuh kelas §72 (24 survivor): satu MATCH, sisanya dinding bentuk kode

Putaran ini menyapu **seluruh** kelas yang lolos penyaring ketat (bukan enam
kandidat): 24 fungsi dari semua modul `failed`, sudah dibuang yang punya
`_call_via`, `mul/muls`, mask `ands/orrs/bics/eors`, `lsls/lsrs/asrs`, akses
`sp`, `adr`, `ldr [pc]`, pool `ldr rX,.L`, `ldm/stm`, atau cabang mundur.
Daftar lengkap ada di `/tmp/clean.log` (dicetak ulang di ringkasan commit).

### 74.1 MATCH baru: `func_08037098` (128 B, `code_entities_08034CEC`)

Badan: satu `switch` pada field `u8` di +0x20, empat kasus mengisi dua field
`+0x18`/`+0x1C`, tanpa panggilan. Draf m2c hanya salah **tipe**: `unk20`
dideklarasikan `s32` sehingga agbcc memakai `ldr` + `lsls/lsrs` untuk
memask; setelah diubah menjadi `u8` (dan `unk22`/`arg1` tetap `s32`), hasilnya
byte-identik (`push {r4,r5,lr}` … `adds r0,r0,#0x20; ldrb r0,[r0]`).

Migrasi ke `src/` **ditolak by-design**: `migrate.py` melaporkan
`data asing 64B menempel ekor (ref 128B, kode saja MATCH)`. 64 B itu adalah
potongan kode tanpa simbol yang ikut di section fungsi ini (bukan data chunk
milik grup berikutnya), jadi masuk kategori SKIP-PERMANEN `MIGRATE.md`.
Fungsi tetap tercatat sebagai promoted (0 dari hitungan `src`):
total `berhasil` naik 1358 → **1359**.

### 74.2 Keluarga `adds r1,r0` (compiler-shape wall)

Enam fungsi kembar memakai pola yang sama setelah panggilan pembanding:

```
bl   func_0802xxxx
adds r1, r0, #0      ; <-- salinan hasil panggilan ke r1
ldrh r0, [r4, #0x22] ;     field dibaca ke r0
cmp  r0, r1
```

Kandidat: `func_08023308`, `func_08023FB0`, `func_080211E4`, `func_08022048`,
`func_08034180`, `func_0802AB98`. agbcc **selalu** menghasilkan bentuk tanpa
salinan (`ldrh r1,[r4,#0x22]; cmp r0,r1` atau `cmp r1,r0`). Sudah dicoba:

- panggilan inline di kedua urutan operand, dan hasil panggilan disimpan ke
  variabel `s32`/`u16`/`u32` sebelum dibandingkan;
- field dibaca lewat variabel `s16/u16/s32`, lewat pointer lokal, dan lewat
  `*pv` yang alamatnya diambil sebelum/sesudah panggilan;
- penugasan di dalam ekspresi (`if (x != (cur = f()))`), `register` hint,
  initializer deklarasi, dan urutan deklarasi dibalik;
- kompilasi ulang dengan **agbcc dan old_agbcc**, pada `-O1/-O2/-O3/-Os`,
  dengan dan tanpa `-mthumb-interwork`: keenam varian sumber menghasilkan
  keluaran biner yang sama.

Jadi salinan `adds r1,r0` bukan bentuk sumber yang bisa ditulis di C; itu
artefak versi compiler asli. Sisa diff terbaik: `func_08023308`
`2missing,8operand,1regalloc`.

### 74.3 Dinding lain yang diukur ulang

- **`func_08032A00`** (44 B). Sisa **satu** perbedaan: ref menyimpan argumen
  ke-8 (u8) sebagai `add r2,sp,#0xc; strb r0,[r2]`, agbcc selalu
  `str r0,[sp,#0xc]` (Thumb `strb` memang tak bisa berbasis `sp`). Lima
  bentuk dicoba: delapan argumen skalar (literal, variabel `u8`, anggota
  `u8` struct), struct by-value lokal, dan compound literal
  (`memset` + copy). Semua menyempit ke perbedaan store itu.
- **`func_08037B48`** (56 B). Badan identik kecuali `ldr r3,=0x379`
  diangkat satu instruksi lebih awal (`1missing,4extra`); urutan pengaturan
  argumen 5 (stack) vs 4 (literal pool) tidak bisa dipaksa dari C.
- **`func_08023378` / `func_08024020`** (60 B, kembar). Polaritas cabang
  (`bne` vs `beq` + `b`), urutan blok, dan rumah variabel balik (`r1` vs
  `r2`); 58 B vs 60 B.
- **`func_080CDD7C`** (88 B). Struktur asm identik, hanya peran r2/r3
  tertukar (konstanta 0xA vs base). Sudah dicoba: tukar deklarasi, urutan
  penugasan dibalik, initializer, tipe `u32`, varian `val` lebih dulu.
  agbcc selalu memberi variabel pertama r2.
- Modul `code_linkonce.s` dan `code_actor_0809BFE8.s` tetap SKIP-PERMANEN
  (tail-only), jadi `func_080E43B8`, `func_080D7880`, `func_080E1FAC`,
  `func_080E52A0`, `func_0809C304`, `func_0809C4E4`, `func_0809D470`,
  `func_0809D7D8` tidak disapu ulang.
- Sisa kandidat (`free`, `func_080ADC00`, `func_080220D4`, `func_08023804`)
  semuanya ber-ekor `.byte` → migrasi SKIP-PERMANEN; `func_080AB7A4`
  (switch bersarang 67 instruksi) dan `func_080ABA90` (272 B) sudah parkir
  di §71/§73.

Kesimpulan: kelas §72 **tidak** sepenuhnya mati (satu MATCH baru), tetapi
tidak ada satu pun sisa kandidat yang bisa (a) byte-identik dan (b) pindah ke
`src/`. Dindingnya sekarang seragam: pemilihan register/salinan temp agbcc
dan penjadwalan literal pool, bukan logika yang salah tulis.

### 82. `bl <simbol>+<offset>` tidak bisa lolos judge; pakai simbol thunk asli

**Gejala:** C sudah byte-identik terhadap ROM, tetapi judge tetap `DIFF` di
halfword `bl` (`byte +0xe: 0xf8 vs ref 0xb8`) dengan anotasi
`@i and r0, r0, #<func_...>` yang membingungkan.

**Mekanisme:** judge membandingkan **byte objek**, bukan hasil link. Ref asm
`bl func_080D379C+0x178` menunjuk simbol yang ada di TU ref, jadi
displacement-nya terisi (0xF0BC 0xFDE8). Dari C kita hanya bisa memanggil
simbol eksternal, sehingga instruksinya jadi relokasi `0xF7FF 0xFFFE` —
selamanya beda byte. Tidak ada bentuk C yang menghasilkan displacement
terisi ke tengah fungsi lain.

**Perbaikan:** ganti baris ref asm ke simbol thunk yang sebenarnya. Di sini
target 0x080D3914 adalah `_call_via_r2` (`bx r2`, simbol global hasil link),
jadi `bl func_080D379C+0x178` → `bl _call_via_r2`. `make compare` tetap HIJAU
(link menghasilkan target yang sama) dan judge kini membandingkan relokasi
yang sama. Pembukti: `func_08016D34` (game_state, 20 B) — MATCH.

### 83. Dinding regalloc `r1`↔`r2` pada `func_080370D8` (parkir terukur)

Sisa satu-satunya dari enam fungsi ekor. Semua perintah dan layout cabang
sudah sama; yang berbeda hanya peran dua register:

```
ref : adds r2, r0, #0 | adds r2, #0x30 | movs r1, #0 | ldrsh r1, [r2, r0]
ours: adds r1, r0, #0 | adds r1, #0x30 | movs r2, #0 | ldrsh r2, [r1, r0]
```

Pointer (`p + 0x30`) di ref hidup di `r2` sampai `bl func_0805E894`, nilai di
`r1`; agbcc menukar keduanya. Empat bentuk sumber dicoba dan semuanya menukar
peran: (1) early-return, (2) `res` + if/else terbalik (layout cabang jadi
persis ref, `beq` ke blok else di ujung), (3) deklarasi nilai-sebelum-pointer,
(4) akses field struct (`m->unk30.unkE`). Hasil (2)/(3): panjang sama 62 B,
hanya 8–10 residual regalloc; (4) justru melebar ke 64 B. Pin
`register ... __asm__` tidak dipakai karena catatan §2.2 menunjukkan pin tidak
memindahkan residual ini.

Kesimpulan: `func_080370D8` diparkir **bukan** karena alasan struktural,
tetapi karena agbcc memilih `r1` untuk pointer; tiga jalur lain (nilai lewat
parameter, ekspresi ulang, struct) sudah diukur dan tidak mengubah pilihan itu.

### 84. `orrs` operand: agbcc memilih `dst` (r3) walau ref memakai `dst0` (r6) — strcpy

`strcpy` (code_libc_string, 78 B) sudah identik panjang, layout, dan urutan
instruksi setelah tiga penyesuaian: (1) satu loop byte dipakai bersama —
`while ((*dst++ = *src++) != 0) {}` bukan duplikat if/else; (2) mask word
diperiksa dengan `x + 0xFEFEFEFF` (bukan `- 0x01010101`) supaya `ldr r5`
konstanta muncul di tempat yang sama; (3) `register char *sav __asm__("r6")`
agar `dst0` tersimpan di r6 seperti ref (tanpa pin agbcc memilih r5).

Sisa satu operand, terukur:

```
ref : adds r6, r0, #0 | adds r3, r6, #0 | adds r2, r1, #0 | adds r0, r2, #0 | orrs r0, r6
ours: adds r6, r0, #0 | adds r3, r6, #0 | adds r2, r1, #0 | adds r0, r2, #0 | orrs r0, r3
```

Setelah `dst = sav`, agbcc tahu `dst == dst0` dan memakai salinan yang lebih
murah (r3) pada `src | dst`. Kalau ekspresinya ditulis dengan `dst0`/`sav`,
agbcc memakai r0/r1 sebagai basis dan justru menambah 1 instruksi
(`orr r1,r1,r6` / `orr r0,r0,r2`, 5–6 residual regalloc). Empat bentuk
ekspresi diukur (langsung, temp `t`, operand dibalik, dst0 vs sav): yang
paling dekat tetap 1 operand, tidak pernah 0. Wall-nya instruksi-seleksi
operand `orrs` dua-register, bukan regalloc pointer.

### 85. Kepala rantai yang hand-only (bukan wall agbcc)

Tiga kepala rantai tidak bisa ditulis sebagai C agbcc karena memakai
instruksi yang tidak punya padanan C:

- `SoftReset` (code_lib_syscall, 24 B): `mov sp, r1` (pindah stack pointer ke
  0x03007F00) lalu `svc #1` / `svc #0`. `mov sp` tidak bisa diekspresikan C;
  `svc` hanya lewat inline asm yang tidak didukung agbcc untuk target ini.
- `sub_080D12EC` (code_809E804, 176 B): decompressor BIOS — `mov lr, pc;
  bx sb` (panggil SWI lewat register `sb`) dan tabel `.byte` di tengah
  fungsi.
- `sub_08031D74` (code_entities, 150 B): dispatcher `switch` 263 baris dengan
  label `non_word_aligned_thumb_func_start sub_08031E0A` di tengah chunk;
  splitter menolaknya sebagai "grup gabungan/tak-split", jadi migrasi
  residue-nya (`sub_08031E0A`) juga terkunci di mekanisme yang sama.
- `func_080087C8` (hardware, 239 B): 5 struct 0x10 B di stack (offset
  0x00/0x10/0x20/0x30/0x40) + dua virtual call; transkripsi tangan ~90
  instruksi, tidak diselesaikan di putaran ini.

### 86. Ekor `func_080202CC` adalah 17 funclet 4 B — pecah dengan marker, jangan C

Ekor 68 B di `code_entities.s` (dari promosi §49) ternyata deretan funclet
4 byte: delapan `movs r0,#0; bx lr`, empat `bx lr` + padding, dua
`movs r0,#5; bx lr`, tiga `bx lr` + padding. Satu chunk multi-fungsi tidak
bisa ditulis sebagai satu fungsi C, jadi:

1. pecah chunk di setiap batas 4 B: `thumb_func_start func_<alamat>` +
   label + dua `.inst.n` (byte tetap, `make compare` HIJAU);
2. tiap funclet jadi `pending`, lalu C-nya sepele — `s32 f(void) { return 0; }`
   / `return 5;` / `void f(void) {}`;
3. judge 17/17 MATCH, lalu `migrate.py --func <nama>` satu per satu
   (`--limit` batch memilih fungsi lain dan gagal di blok yang tak ada).

Hasil putaran ini: 17 MATCH baru + 17 migrasi ke `src/`
(`code_entities.s`), src 1146 -> 1163.

### 87. Empat fungsi promote-only kecil: wall regalloc/instruksi-seleksi terukur

Semua dicoba sampai 4–5 bentuk sumber; tidak ada yang mencapai 0 byte diff.
Perbedaan yang tersisa selalu satu kelas: agbcc memilih register/opcode lain,
bukan struktur kode.

`func_08012720` / `func_08012760` (game_state, 44 B):
```
ref : ldr r2, [r0, #4] | adds r0, r2, #0 | ... | ldr r3, [r0]
ours: ldr r1, [r0, #4] | adds r0, r1, #0 | ... | ldr r2, [r0]
```
Struktur, offset, dan urutan instruksi identik; agbcc mengalokasikan pointer
`p` di r1 (v di r2) sementara ref memakai r2/r3. Empat bentuk dicoba: pointer
mentah, `s32 *q` + cast, struct field `arg0->unk4`, dan deklarasi `v`
sebelum `p` — semuanya tetap r1. Sisa 7 residual regalloc, 1 instruksi beda.

`func_08024C74` (code_entities, 18 B): ref merantai pointer di r0
(`adds r0,#0x3c; strb; adds r0,#2; strb; adds r0,#0x68; strh r1,[r0]`) dengan
satu `adds r2,r0` mati di awal. Bentuk sumber yang dicoba: tiga store lewat
`arg0`, pointer berjalan `p`, pointer berjalan + variabel mati — hasil terbaik
22 B (agbcc menaruh rantai di r2 dan menyimpan `mov r1,#0` kedua), ref 18 B.
Instruksi `adds r2, r0` yang mati tidak bisa dipaksa muncul bersamaan dengan
rantai r0.

`func_080ADF40` (code_809E804, 44 B): ref memakai push {r4,r5,lr} dengan
salinan `adds r5,r0` (a) dan `adds r4,r1` (sum) supaya keduanya hidup sampai
`return (sum>>8)-(a>>8)`; agbcc menghasilkan 36 B tanpa salinan itu
(`add r2,r0` + sum di r2). Menambah variabel `b` terpisah tidak memunculkan
salinan.

`rand` (code_809E804, 30 B): ref memuat tiga konstanta sekaligus dengan
`add r0,pc,#0x10; ldm r0!,{r1,r2,r3}` (seed 0x03000A50, mul 0x41C64E6D,
add 0x3039). Dua bentuk sumber dicoba (`static const` struct dan literal
angka langsung); agbcc selalu mengeluarkan `ldr` terpisah per konstanta
(32–40 B, 4–5 instruksi beda). Pola `ldm` untuk blok konstanta contiguous
tidak bisa dipicu dari C di konfigurasi ini.

### 87.1 `func_08012720`/`func_08012760`: pin register menutup 3 dari 4 selisih

Pin `register u8 *p __asm__("r2")` + `register void *v __asm__("r3")` dan
pointer `t = p + 0xAC` (dibaca lagi sebagai `t - 0x20`) menghasilkan asm yang
identik dengan ref **kecuali satu halfword**:

```
ref : ldr r2, .L08012748   @ =0x00002210
ours: ldr r1, .L5          @ =0x00002210
```

Sisa satu byte (+0x13). Penyebabnya: `p` yang di-pin memegang r2 sepanjang
fungsi, jadi konstanta 0x2210 tidak boleh memakai r2 lagi (ref memakainya
karena `p` sudah mati). Tanpa pin, `p` jatuh ke r1 dan dua instruksi pertama
sudah beda. Kombinasi "p di r2 saat hidup, r2 bebas saat mati" tidak bisa
dipaksakan lewat C/pin di agbcc 2.9 — inilah wall-nya, bukan struktur kode.

### 87.2 Mekanisme pasti `func_08012720/760`: register pewaris pseudo yang mati

16 bentuk sumber diuji terhadap agbcc nyata (draf di
`decomp/drafts/func_08012720.c`, semua DIFF hanya di `ldr r1` vs `ldr r2`):

| bentuk | hasil |
|---|---|
| `u8 *p` polos / `u32 p` / `s32 p` / `u32 v` | `ldr r1, [r0, #4]` |
| deklarasi `v` sebelum `p` | `ldr r1` |
| `p = (u8 *)*(u32 *)(arg0 + 4)` (arg0 `u32`) | `ldr r1` |
| parameter ke-2 tak terpakai (`s32 arg1`, dengan/tanpa `(void)arg1`) | `ldr r1` |
| `slot = (void **)(p + 0xAC)` (pin tidak ada) | `ldr r1` |
| pin `p`→r2, `v`→r3 | `ldr r1` untuk **konstanta**, `ldr r2` untuk p |

Aturan yang terbukti: agbcc menaruh pseudo baru pada register pertama yang
bebas (`r1`), dan **konstanta 0x2210 mewarisi register pseudo yang mati tepat
sebelumnya** (`r2` di ref karena `p` ada di r2). Jadi byte ref menuntut `p`
di r2, dan `p` hanya dapat r2 bila r1 hidup saat `p` didefinisikan — di ref
tidak ada instruksi yang menyentuh r1 sama sekali, sehingga tidak ada nilai C
yang bisa menempati r1 tanpa menambah instruksi. Dengan pin, `p` memang di r2
tapi pin hanya mengikat selama hidup → konstanta jatuh ke r1. Kedua arah
saling mengunci: **bentuk C yang menghasilkan byte ref tidak ada** untuk
agbcc versi ini. Sisa 1 halfword (+0x13), bukan struktur kode.

### 88. Lebar field struct salah (s32 vs u8) = satu-satunya sebab DIFF — kelas menang

`func_0807D194` (code_0803EE94, 72 B) MATCH + migrasi hanya dengan
membetulkan lebar field di struct draf m2c:

```
ref : adds r0, r4, r1 ; movs r1, #0 ; strb r1, [r0]   @ 0x6A4 (byte)
draf: ...                             str  r1, [r0]   @ s32 unk6A4
```

m2c menebak `s32` dari `adds r0, r4, r1` tanpa melihat `strb`; begitu
`unk6A4`/`unk70C` jadi `u8` (dan padding dihitung ulang: `_pad6A5[99]`),
byte objek identik. Karena itu: **bila satu-satunya selisih adalah
`strb` vs `str` (atau `ldrb` vs `ldr`), periksa lebar field struct draf
dulu sebelum menyalahkan regalloc.**

Catatan migrasi kelas ini: `migrate.py` menolak blok yang mendefinisikan
fungsi yang di src masih punya extern usang beda tanda tangan
(`definisi ... di body vs extern usang di src`). Jalan keluarnya: pakai
tanda tangan `s32 (s32, s32)` (bukan `i32`/pointer struct — harness judge
tidak mengenal `i32`, dan rename struct membuat tanda tangan tak pernah
cocok), lalu buang blok promoted lama + set state `failed`/`judged_mtime=0`
sebelum judge ulang (MIGRATE §6).

### 88.1 Argumen byte pada slot stack: `add rX, sp, #off ; strb` tak bisa dipaksa ganda

Tiga fungsi berhenti persis di sini (bukan regalloc acak):

- `func_08032A00` (44 B): ref `add r2, sp, #0xc ; strb r0, [r2]` untuk arg
  ke-8; agbcc 42 B dengan `str r0, [sp, #0xc]` (word). 10 bentuk dicoba
  (`u8 z` / `char` / `(u8)0` / alamat-diambil / struct 1-bait / 7-arg +
  lokal) — word store selalu kembali.
- `func_0803853C` (62 B): sama untuk arg ke-7; versi `p8 = &sp8; *p8 = 0`
  memunculkan `add r2, sp, #0xc ; strb` **plus** duplikat `str r4, [sp, #8]`
  (frame 0x10 vs 0xc, 66 vs 62 B).
- `func_08037B48` (56 B): bukan strb, melainkan penjadwalan literal —
  ref `... adds r2, r6 ; ldr r3, =0x379 ; bl`, agbcc mengangkat `ldr r3`
  ke sebelum `str` argumen ke-5 (posisi +0x10 beda 1 instruksi).

Ketiganya wall instruksi-seleksi/penjadwalan: bentuk C yang menghasilkan
byte ref tidak ditemukan setelah 3–10 iterasi masing-masing.
