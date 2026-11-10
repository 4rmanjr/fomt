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
patch lokal. Kasus `func_0809DA00` (1322 B, switch 32 kasus): 124 situs
beda tersebar, regenerasi m2c murni menghasilkan diff identik → parkir,
bukan wall regalloc.