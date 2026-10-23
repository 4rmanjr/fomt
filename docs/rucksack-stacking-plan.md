# Plan: Rucksack Stacking per Item-ID (FoMT GBA)

> Tujuan: slot ransel menumpuk per `(kind, item_id)` seperti kulkas (`Fridge::AddAmountOf`),
> hasil panen/tambang yang masuk ransel ikut stacking,
> tapi **give ke NPC / hewan / shipping / masak tetap keluar 1 pcs**.
> File ini = tracker progres. Lanjut di lain hari: buka file ini, kerjakan checkbox berikutnya,
> lalu `make compare` (ROM harus tetap match sampai implementasi diganti).

Status: `[ ]` belum, `[/]` berjalan, `[x]` selesai. Update tanggal + commit tiap fase.

## 0. Fakta dasar (hasil analisa `src/fridge.cc`, `src/rucksack*.cc`, `src/held_item.cc`)

> REVISI 2026-10-23 (keputusan R1): `RucksackItem` TETAP 4 byte persis layout baserom
> (bitfield `kind:1, wrapped:1` + `Inner` di +1). Stack amount hidup di
> `Rucksack::amounts[8]` (paralel `items`, di +0x38 setelah `tools`). Alasan: layout
> 5-byte memecah ABI baserom di ±150 situs ASM (copy word0, sret 5-byte meluber ke
> slot stack tetangga, arg by-value 5-byte butuh 2 register) — bukti di log 2026-10-23.
> Biaya memori sama (+8 byte di `Rucksack`), `Rucksack` tetap member terakhir `Farmer`.

- Kulkas: `Fridge { FoodStack contents[0x40]; }`, `FoodStack::MAX_AMOUNT=99`.
  `AddAmountOf(food_id, amount)` scan 0..63: top-up slot id-sama (`min(amount, 99-GetAmount())`),
  slot kosong jadi stack baru (`min(amount,99)`). Return = sisa gagal. Identitas = **id saja**
  (bonus stamina/fatigue diabaikan, stack baru bonus=0).
- Tas sekarang: `Rucksack { FixedVec<RucksackItem,8> items; FixedVec<ToolStack,8> tools; }`,
  `RucksackItem { kind:1, wrapped:1, Inner{id:u8, stamina_bonus:i8, fatigue_bonus:i8} }` = **4 byte**,
  tanpa `amount`. `AddAmountOfFood/Article(id, amount)` = **1 pcs per slot kosong** (`amount--`),
  tidak top-up. `GetAmountOfFood/Articles` = hitung slot (`count++`), bukan jumlah pcs.
- Tangan: `HeldItem` (1 slot, selalu 1 pcs) + `func_0800F294` (Held->RucksackItem),
  `func_0800F418` (RucksackItem->Held). Cycle tangan-tas: `Farmer::func_0800EB3C/0800EBC4`
  (`src/farmer.cc:311,346`) via `CycleItemBack/Front` (geser `FixedVec`, swap utuh).
- UI/ASM penting:
  - cek bisa-simpan: `func_0804E17C` (fridge) / `func_0804E1D4` (shelf) di `asm/code_0803EE94.s:27473+`:
    `GetEmptyItemSlotCount != 0 || GetAvailableSpaceFor != 0`.
  - cek bisa-tukar: `func_0804E2C0/0804E22C`: `GetFirstSlotWithFood/Article` di tas + kulkas/rak.
  - simpan massal: `~0x0807E2E0` (makanan): `Rucksack::AddAmountOfFood` dulu, sisa `-> Fridge::AddAmountOf`;
    `~0x0807Fxxx`/`0x0807Dxxx` pola sama untuk article/shelf.
  - panen masuk tas: `FieldPlot::method_0800A4A4` (`src/field.cc:430`) return 1 `RucksackItem`,
    caller di `asm` (`0x080419B4` food / `0x0804199A` article, `0x08043D06`+ ambil item) panggil
    `AddAmountOfFood/Article__8RucksackUiUi`.
  - tukar ransel<->kulkas (1-by-1, whole-slot `memcpy` 4 byte): `func_08088688`, `func_08088BA0`
    (`asm/code_0803EE94.s:143800+`), pakai `GetItemAt/ExtractItemAt/GetFoodStackAt/SubtractAmount/AddAmount`.
- Save: `asm/sram_proxy_1.s:func_080003DC` slot = `0x3FEC` byte. Ubah ukuran `RucksackItem`
  = ubah ukuran `Farmer`/`Rucksack` = **ubah layout save** (perlu migrasi/versioning).

## 1. Keputusan desain (kunci sebelum coding)

- [x] D1 (2026-10-22): kunci stacking = `kind + item_id + stamina_bonus + fatigue_bonus + wrapped`
      harus sama baru stack (hindari bug bonus tercampur seperti kulkas yang id-only).
- [x] D2 (2026-10-22): `MAX_STACK` ransel = `99` (ikuti `FoodStack/ArticleStack/ToolStack`).
      Analisa akar: `u8 amount` muat 0-255, preseden `ToolStack` 99 sudah hidup di ransel
      (+ UI `GetAmount__C9ToolStack` ~95 situs), biaya struct 4->5 byte sama untuk 9 maupun 99,
      tidak ada caller yang menyuntik >99 sekaligus. Opsi 9 ditolak (divergen tanpa alasan teknis).
- [x] D3 (2026-10-22): tangan (`HeldItem`) **tetap 1 pcs**. Semua jalur give/makan/ship ambil dari tangan.
- [x] D4 (2026-10-22): kontrol UI = **A=all** (pindah seluruh slot sekaligus, perilaku lama).
      Stacking berpengaruh saat inflow (panen masuk merge), bukan saat tukar/ambil.
      Implikasi: Fase 3 (TakeOneAt untuk give-1) tetap jalan — give lewat tangan 1 pcs;
      Fase 4.2 disederhanakan: tukar tas<->kulkas/rak = whole-slot (merge jika sama-id, swap/tolak jika beda).
- [x] D5 (2026-10-22): strategi save: bump save-version + migrasi `amount=1` untuk save lama
      (karena `RucksackItem` 4 -> 5 byte). Tanpa ini save lama corrupt.
      [REVISI R1 2026-10-23: `RucksackItem` tetap 4 byte; yang tumbuh `Rucksack` (+8 byte
      `amounts[8]`) -> `sizeof(Farmer)` +8. Migrasi save tetap perlu, bentuknya beda.]
- [x] D6 (2026-10-23): REVISI LAYOUT (R1) — `RucksackItem` dikembalikan ke 4 byte baserom;
      stack amount disimpan di `Rucksack::amounts[8]`. Bukti pelacakan (lihat log
      2026-10-23): layout 5-byte memecah ±150 situs ASM baserom (25 copy word0-only,
      29 sret buffer 4-byte yang meluber, 8 arg by-value 1-register) dan mengharuskan
      penyusunan ulang frame stack fungsi UI raksasa; R1 mempertahankan ABI 100% dengan
      biaya memori identik. Disetujui user.

## 2. Fase implementasi

### Fase 1 — Model data (C++, tanpa ubah UI dulu)

> REVISI R1 (2026-10-23): 1.1/1.2 dirombak — field `amount` KELUAR dari `RucksackItem`
> (kembali ke layout baserom 4 byte verbatim, termasuk bitfield & semantik method),
> stacking hidup di `Rucksack::amounts[8]`. Alasan & bukti: lihat D6 + log.

- [x] 1.1 `include/rucksack_item.hh`: layout baserom 4 byte dipulihkan verbatim
      (bitfield `kind:1, wrapped:1`, `Inner` di +1); tambahan satu-satunya:
      `IsSameStackable` (D1 full-key, tanpa amount — simbol baru, aman ABI).
- [x] 1.2 `src/rucksack_item.cc`: verbatim baserom + `IsSameStackable`.
- [x] 1.3 `include/rucksack.hh` + `src/rucksack.cc`:
  - `amounts[8]` di +0x38 (setelah `tools`, member terakhir — tidak menggeser apa pun;
    `sizeof(Farmer)` +8, migrasi save tetap Fase 5).
  - `AddAmountOfFood/Article(id/Food/Article, amount)` + `AddAmountOf(RucksackItem, amount)`
    top-up same-key (D1) lalu slot kosong, cap 99, return sisa.
  - `GetAmountOfFood/Articles` menjumlah `amounts[]`; `GetAvailableSpaceFor*` idem.
  - `GetAmountAt` (guard IsEmpty), `SetAmountAt` (tolak slot kosong, clamp 99, 0=clear),
    `MoveSlot`, `SwapSlots`, `MoveToFoodStack/ArticleStack` (whole-slot merge D4,
    leftover tinggal di tas) — simbol baru untuk patch ASM.
  - `TakeOneAt/PeekOneAt` 1 pcs; `ExtractItemAt` clear amount; `CycleItemBack/Front`
    menggeser `amounts[]` paralel (surplus slot-0 yang ter-evict kolaps ke 1 pcs —
    interim, Fase 3.1 mengganti cycle dengan TakeOneAt).
- [x] 1.4 `src/held_item.cc`: `func_0800F294` ctor 1-arg (= 1 pcs); `func_0800F418`
      by-value 4 byte kembali 1 register — konvensi baserom utuh.
- [x] 1.5 Build/verifikasi: host test 32/32 lulus; ABI probe `agbcp` lulus
      (`sizeof(RucksackItem)=4`, `amounts` di +0x38, `tools` di +0x24 = baserom);
      `make compare` build ROM (SHA1 beda dari baserom = diharapkan).

### Fase 2 — Inflow stacking (panen + tambang + beli/dapat)

- [x] 2.1 Panen: `FieldPlot::method_0800A4A4` tetap return 1 pcs; semua caller yang
      memberi id+jumlah (`AddAmountOfFood/Article__8RucksackUiUi`) terverifikasi memakai
      implementasi stacking baru karena simbol/signature C++ sama. Hasil panen via method
      C++ tetap konstruksi 1 pcs; caller memanggil Add amount sesuai jumlah panen.
- [x] 2.2 Tambang/kayu/batu: situs `AddAmountOfArticle__8RucksackUiUi` terverifikasi (2026-10-23):
      `3937` (ambil item umum), `8248` (`.L08043D06` ambil item), `39827`, `128190`, `131092`,
      `131238`, `137109`. Semua situs Add memakai argumen amount yang sudah ada (1 atau jumlah
      loop), dan akan top-up stack lalu slot kosong; caller leftover tetap tersedia untuk jalur shelf.
      `96969`/`114177` adalah `GetFirstSlotWithArticle` (cek, bukan Add); `127421` bukan call Add.
- [x] 2.3 Fridge/shelf -> tas (refill): SELESAI (2026-10-23, model R1). Patch ASM
      `code_0803EE94.s` di 4 handler UI (`func_08088688`, `func_08088BA0` fridge,
      `func_0808CEC4` shelf, `func_0808AC28`/`func_0808B16C`/`func_0808C9D0` scene tas):
      - slot tas yang menerima 1 pcs (dari kulkas/rak/tangan) -> `SetAmountAt(idx,1)`;
      - drag tas<->tas -> `MoveSlot`/`SwapSlots` (amount ikut pindah, D4);
      - tas->kulkas/rak kosong -> whole-stack (`GetAmountAt` sebagai amount FoodStack/
        ArticleStack, amount tas di-clear, D4);
      - merge id-sama -> `MoveToFoodStack`/`MoveToArticleStack` (cap 99, leftover
        tinggal di tas, D4);
      - swap tangan<->slot yang berisi stack >1 pcs -> DITOLAK (error `gUnk_081000xx`),
        karena tangan hanya muat 1 pcs (D4: tolak jika salah satu stack).
      - Inflow/simpan-massal & kulkas<->tangan (SubtractAmount/AddAmount per 1 pcs)
        tidak perlu patch — sudah amount-aware via C++.
- [x] 2.4 Test model: panen 10 lobak dengan tas 2 slot menghasilkan satu slot `x10`;
      tes tambahan memastikan >99 mengisi slot berikutnya dan overflow dikembalikan tepat.
      Host tests `32/32` lulus (termasuk test helper transfer & extract). Belum menguji
      inflow aktual dalam emulator.

### Fase 3 — Outflow give-1 (NPC, hewan, shipping, makan, masak, gift)

Prinsip: **tidak ada jalur yang memindahkan whole `RucksackItem` ke luar kecuali tas internal.**
Semua give lewat tangan 1 pcs.

- [x] 3.1 Tambah helper `Rucksack::TakeOneAt` dipakai oleh:
  - [x] cycle ke tangan `Farmer::func_0800EB3C/0800EBC4` (`src/farmer.cc`): DIROMBAK
        (2026-10-23) — deposisi 1 pcs via `AddAmountOf` (merge stack dulu, baru slot
        kosong; gagal = tas penuh & tak ada yang cocok → no-op tanpa loss), lalu ambil
        1 pcs dari slot terisi pertama (EB3C) / terakhir (EBC4, arah terbalik baserom)
        via `TakeOneAt`. Tidak ada rotasi whole-slot lagi; surplus stack tinggal di slot.
        Return = 1 saat ada yang bergerak (pemanggil `code_entities.s:7317+` hanya cek
        `!=0` untuk SFX). `CycleItemBack/Front` tidak lagi dipanggil (simbol dipertahankan).
  - [x] UI ambil dari tas -> ganti `TakeOneAt` (2026-10-23): 6 situs konduit ke tangan
        (`func_08088688` ambil+swap, `func_0808AC28` ambil+swap, `func_0808C9D0`
        ambil+swap) — `bl ExtractItemAt` → `bl TakeOneAt` (konvensi sret sama).
        3 situs `ExtractItemAt` SENGaja dipertahankan = buang/pakai whole-slot
        (D4 slot=unit): `func_0808A4C0:147444`, `func_0808BC14:150189` (buang; BALL
        anjing 0x35 = kasus khusus), `func_0808E65C:155110`.
- [x] 3.2 Audit jalur konsumsi (2026-10-23): SEMUA konsumsi membaca TANGAN
      (`HeldItem`, 1 pcs by construction) — shipping (`func_080262C4`: hand→Product→
      `ShippingBin::Ship`), masak/makan (`func_0800F20C/F258`), beri makan hewan
      (staging `+0x68` diisi dari tangan, bukan slot tas), gift-wrap tangan
      (`func_0800F528`). Tidak ada jalur yang menguras whole stack. Situs
      `GetItemAt`+read lainnya = display/cek word0 (aman R1, IsEmpty id-only).
- [x] 3.3 Hewan/shipping/masak/gift-wrap: tidak perlu perubahan (lihat 3.2).
      wrapping slot tas langsung (`func_08092CD0`: `GetItemAt`+`TryWrap` in-place)
      hanya mengubah bit wrapped di word0 — `amounts[]` utuh; stack terpisah dari
      versi tak-wrapped (D1 full-key) dan give tetap keluar 1 pcs wrapped.
- [x] 3.4 Test: `RucksackGiveOne.EggStackLosesExactlyOnePiece` (telur x10 → give → x9),
      `LastPieceClearsSlotCompletely`, `RucksackCycleFlow.*` (deposisi+ambil take-1).
      Host tests 36/36 lulus; `make` bersih. Uji runtime emulator tetap tertunda Fase 5.3.

### Fase 4 — UI/ASM (tampilan + tukar)

- [ ] 4.1 Display jumlah: menu tas (`func_080CBA60/080CB63C/080CB304/080CC728` di
      `asm/code_809E804.s:92320/91768/91329/94013`, diref dari `code_0803EE94.s`) gambar ikon +
      angka `N` jika `amount>1` (verifikasi 2026-10-22, detail di bawah).
      - Helper gambar (sudah ada, generik, dipakai fridge 6x + shelf 6x):
        `func_080CCD48(ctx, slot, amount)` (`code_809E804.s:94844`) — siapkan tile slot
        (`func_080CAD10`), gambar ikon, lalu `cmp amount,#1; bls skip` (amount<=1 = tampil
        polos identik ROM hari ini) else `func_080CAEEC(ctx, amount, 0x20)` gambar angka
        desimal 2-digit di tile kedua (`0x0600F082`). Bungkus: `func_080CC728`
        (`code_809E804.s:94013`, dipakai 8x di area tas<->fridge). `func_080CBAF0`
        (`:92389`) = gambar ikon saja (untuk slot amount=1).
      - Format = ikon + angka desimal menempel (tile grafis via `CAEEC`, BUKAN string `x%d`;
        literal `x%d` tidak ada di `asm/data/*.s` — tidak perlu dicari lagi).
      - Pola panggil per slot tas (tiru `.L08089A20` fridge ~146143):
        `GetItemAt` -> `GetIconId` -> `GetAmountAt__C8Rucksack` (SIMBOL BARU, sudah ada
        sejak R1) -> `CC728`/`CCD48` alih-alih gambar-ikon-polos.
      - Prasyarat: Fase 1 selesai. REVISI R1: tidak ada perubahan stride/offset ASM —
        layout item tetap 4 byte baserom; display cukup memanggil `GetAmountAt`.
      - Tanpa 4.1 = bug pasti: stack xN tampil tanpa angka (ambiguitas nominal; D4=A-all
        memindah N pcs sekaligus tanpa terlihat) + loop stride lama baca byte-amount sebagai
        item berikutnya (ikon rusak).
- [ ] 4.2 Tukar tas<->kulkas/rak (`func_08088688`, `func_08088BA0`): D4=A-all (dikunci).
      SEBAGIAN BESAR SUDAH DIKERJAKAN di Fase 2.3 (2026-10-23): whole-slot move/swap
      (`MoveSlot`/`SwapSlots`), merge id-sama (`MoveTo*Stack`, cap 99, leftover di tas),
      swap tangan<->slot ber-stack ditolak. Sisa 4.2: regresi runtime + polish pesan error.
- [ ] 4.3 Batas upgrade tas (2/4/8 slot di `Rucksack::GetUpgradeLevel`) **tetap jumlah slot**,
      bukan jumlah pcs — stacking justru membuat upgrade lebih berharga. Tidak ubah.
- [ ] 4.4 Bunyi/error message saat penuh: reuse path `gUnk_08100034` (tas penuh) yang dipakai
      fridge (`:144828+`); picu hanya jika `GetAvailableSpaceFor==0`.

### Fase 5 — Save/migrasi + regresi

- [ ] 5.1 Hitung `sizeof(RucksackItem)` baru, `sizeof(Rucksack)`, `sizeof(Farmer)`;
      sesuaikan offset `0x1C2C` (HeldItem) / `0x1C38` (Rucksack) jika bergeser, dan `fomt.lds`.
- [ ] 5.2 Versioning save + migrasi: save lama (`amount` tidak ada) -> `amount=1` per slot terisi;
      tulis skrip `tools/scripts/dump_save.py` (atau perluas `dump_item_tables.py`) untuk verifikasi.
- [ ] 5.3 Regresi: `make compare` (catat mismatch yang diharapkan hanya di rucksack/held),
      boot di emulator, load `fomt_16.ss*`, panen->tas->kulkas->give->save/load ulang.

## 3. Daftar sentuh (isi saat jalan — jangan hapus yang sudah ada)

| Area | File/ASM | Status |
|---|---|---|
| struct | `include/rucksack_item.hh`, `src/rucksack_item.cc` | [x] R1: 4-byte baserom + IsSameStackable |
| logic tas | `include/rucksack.hh`, `src/rucksack.cc` | [x] R1: amounts[8] + helper transfer |
| tangan | `include/held_item.hh`, `src/held_item.cc` | [x] ctor 1-arg |
| cycle tangan | `src/farmer.cc:311,346` | [x] amounts ikut digeser (surplus evict = interim, 3.1) |
| panen | `src/field.cc:430` + `asm:0x0804199A/0x080419B4/0x08043D06` | [x] inflow call audit |
| tambang | `asm:3937,8248,39827,128190,131092,131238,137109` (Add; `96969/114177`=cek FirstSlot, `127421` tidak ada) | [x] audit args |
| fridge/shelf refill | `asm:func_08088BA0` (food), `func_0808CEC4` (article), `func_08088688`/`func_0808AC28`/`func_0808B16C`/`func_0808C9D0` (tas) | [x] patched R1 (2026-10-23) |
| give NPC/hewan/ship | hasil audit 3.2: semua via tangan 1 pcs | [x] 2026-10-23 |
| display xN | `func_080CCD48` (`code_809E804.s:94844`), `func_080CC728` (`:94013`), `func_080CAEEC`, simbol baru `GetAmountAt__C8RucksackUi` | [ ] |
| save | `asm/sram_proxy_1.s`, `fomt.lds` | [ ] |

## 4. Cara lanjut di lain hari (progres tidak hilang)

1. `git status && git log --oneline -3` — pastikan di branch `rucksack-stacking`.
2. Buka file ini, cari checkbox `[ ]` pertama yang belum selesai.
3. Build baseline: `make compare` (butuh `baserom.gba`; lihat `INSTALL.md`).
4. Uji manual di emulator (mgba) dengan save state repo `fomt_16.ss*`:
   panen -> cek stacking, give 1 ke NPC/hewan, tukar tas<->kulkas, save->load.
5. Setiap selesai 1 checkbox: update `[x]` + tanggal, commit kecil
   (`git add docs/rucksack-stacking-plan.md src/... && git commit -m "..."`),
   push agar tidak hilang.

## 5. Log progres

- 2026-10-23: Fase 3 selesai (2026-10-23, model R1). Cycle tangan (func_0800EB3C/EBC4)
  dirombak take-1: deposisi 1 pcs (merge dulu, gagal=no-op tanpa loss), ambil 1 pcs dari
  slot terisi pertama/terakhir — tidak ada rotasi whole-slot, surplus stack tinggal.
  6 situs ASM ExtractItemAt yang berujung ke tangan diganti TakeOneAt (ambil & swap di
  func_08088688/0808AC28/0808C9D0); 3 situs buang/pakai whole-slot dipertahankan (D4).
  Audit 3.2/3.3: semua konsumsi (ship/masak/makan/feed/wrap) membaca tangan = 1 pcs;
  wrap slot tas = TryWrap in-place (word0 saja, amounts utuh). Test 36/36; make bersih.
- 2026-10-23: PELACAKAN ABI (AGENTS.md: trace ke akar): layout 5-byte Fase 1 memecah
  ABI baserom di ±150 situs ASM. Bukti konkret: (1) 25 situs `GetItemAt`+`ldr r0,[r0]`
  menyalin hanya word0 — dengan `IsEmpty` versi 5-byte yang membaca byte-4, slot bisa
  terbaca kosong (item hilang); (2) 29 situs sret (`func_0800F294` ×20, `ExtractItemAt`
  ×9) menulis 5 byte ke buffer 4-byte — byte amount meluber ke slot stack tetangga
  (satu clobber terkonfirmasi di `func_08088688:144042`); (3) arg by-value 5-byte lewat
  2 register (r1+r2), ASM hanya isi r1. Keputusan D6 (R1, disetujui user): item kembali
  4 byte baserom, amount pindah ke `Rucksack::amounts[8]`. Implementasi: rucksack_item
  verbatim baserom + `IsSameStackable`; rucksack diperangai `amounts[]` + helper
  (`GetAmountAt/SetAmountAt/MoveSlot/SwapSlots/MoveToFoodStack/MoveToArticleStack`);
  test host 32/32; ABI probe `agbcp` = 4 byte / +0x38 / +0x24 (== baserom).
- 2026-10-23: Fase 2.3 selesai — patch ASM di 6 handler UI (fridge `func_08088BA0`,
  shelf `func_0808CEC4`, tas `func_08088688`/`func_0808AC28`/`func_0808B16C`/
  `func_0808C9D0`): refill 1-pcs set `amounts=1`; drag tas<->tas lewat
  `MoveSlot`/`SwapSlots`; tas->kulkas/rak whole-stack (D4); merge id-sama lewat
  `MoveTo*Stack` (cap 99, leftover di tas); swap tangan<->slot ber-stack ditolak
  (D4). Branch range fix: `.L080890BC` dan `.L0808D49E` dibalik kondisinya.
  `make` bersih; checksum tetap beda dari baserom (diharapkan). Belum ada regresi
  emulator (butuh Fase 5 save/versioning dulu agar save state lama valid).
- 2026-10-23: Recheck setelah baserom/toolchain tersedia: `make compare` membangun ROM,
  namun checksum berbeda dari baserom (diharapkan setelah Fase 1) dan warning LOAD RWX.
  Refill masih belum diimplementasikan; jangan tandai Fase 2 selesai sampai ASM refill benar-benar
  mengonsumsi/menambahkan jumlah stack dengan benar dan lolos regresi.
- 2026-10-22: verifikasi source selesai (C++ cocok, koreksi: situs tambang 5 bukan 8,
  func display di `code_809E804.s`, baris audit ±5, string `x%d` belum ketemu).
  Keputusan dikunci: D1 full-key, D2=99, D3 tangan-1-pcs, D4 A=all, D5 migrasi save.
- 2026-10-22: Fase 1 model data diimplementasikan; host gtest `19/19` lulus, ABI probe
  `agbcp` mengonfirmasi `RucksackItem` 5 byte (`Inner +1`, `amount +4`), dan `make compare`
  berhasil build ROM. Hash berbeda dari baserom sesuai perubahan; linker mengeluarkan warning
  segmen LOAD RWX. UI/ASM caller/inflow dan save migration belum dikerjakan.
