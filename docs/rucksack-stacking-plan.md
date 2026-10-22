# Plan: Rucksack Stacking per Item-ID (FoMT GBA)

> Tujuan: slot ransel menumpuk per `(kind, item_id)` seperti kulkas (`Fridge::AddAmountOf`),
> hasil panen/tambang yang masuk ransel ikut stacking,
> tapi **give ke NPC / hewan / shipping / masak tetap keluar 1 pcs**.
> File ini = tracker progres. Lanjut di lain hari: buka file ini, kerjakan checkbox berikutnya,
> lalu `make compare` (ROM harus tetap match sampai implementasi diganti).

Status: `[ ]` belum, `[/]` berjalan, `[x]` selesai. Update tanggal + commit tiap fase.

## 0. Fakta dasar (hasil analisa `src/fridge.cc`, `src/rucksack*.cc`, `src/held_item.cc`)

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

## 2. Fase implementasi

### Fase 1 — Model data (C++, tanpa ubah UI dulu)

- [x] 1.1 `include/rucksack_item.hh`: tambah `u8 amount` (+ `MAX_AMOUNT=99`),
      method `GetAmount/AddAmount/SubtractAmount/IsSameStackable`.
      Offset check compile-time: `Inner=+1`, `amount=+4`, target size=5 byte.
- [x] 1.2 `src/rucksack_item.cc`: ctor `Food/Article` default `amount=1`, explicit
      `amount=0` = empty; `IsEmpty` cek `amount==0 || id==NONE`; `GetFood/GetArticle`
      return `NONE` jika empty. `Article` initializes unused bonuses to 0.
- [x] 1.3 `include/rucksack.hh` + `src/rucksack.cc`:
  - `AddAmountOfFood/Article(id, amount)` top-up default-key dulu, baru slot kosong,
    capped 99, return sisa; overload `AddAmountOfFood(Food,amount)`,
    `AddAmountOfArticle(Article,amount)`, `AddAmountOf(RucksackItem,amount)` preserve full D1 key.
  - `GetAmountOfFood/Articles` sum item counts per id; `GetAvailableSpaceForFood/Article`
    plus full-key `GetAvailableSpaceFor(RucksackItem)`.
  - `TakeOneAt`, `PeekOneAt`, `GetAmountAt`; Take/Peek preserve bonus+wrapped metadata.
  - `GetFirstSlotWith*` and `GetEmptyItemSlotCount` unchanged.
- [x] 1.4 `src/held_item.cc`: `func_0800F294` explicitly returns amount=1; `HeldItem`
      has no amount field, so conversion back via `func_0800F418` is one piece by construction.
- [x] 1.5 Build/verifikasi: host test `19/19` lulus; ABI probe `agbcp` lulus
      (`sizeof(RucksackItem)=5`, `inner=+1`, `amount=+4`). `make compare` berhasil
      membangun ROM; SHA1 berbeda dari baserom seperti yang diharapkan karena perubahan
      model/layout masuk ke ROM. Warning linker RWX tercatat; banding hash merah bukan
      kegagalan build.

### Fase 2 — Inflow stacking (panen + tambang + beli/dapat)

- [ ] 2.1 Panen: `FieldPlot::method_0800A4A4` tetap return 1 pcs; pastikan semua caller
      (`AddAmountOfFood/Article` di `asm/code_0803EE94.s:0x0804199A,0x080419B4,0x08043D06+,0x08088xxx`)
      memakai versi stacking baru (tidak perlu ubah ASM jika signature sama: `(id, amount)`).
- [ ] 2.2 Tambang/kayu/batu: situs `AddAmountOfArticle__8RucksackUiUi` terverifikasi (2026-10-22):
      `3937` (ambil item umum), `8248` (`.L08043D06` ambil item), `39827`, `128190`, `131092`,
      `131238`, `137109`. KOREKSI: `96969`/`114177` = `GetFirstSlotWithArticle` (cek, bukan Add);
      `127421` tidak ditemukan sebagai call Add. Pastikan `amount` dilewatkan benar.
- [ ] 2.3 Fridge/shelf -> tas (refill): `func_08088xxx` — ganti `memcpy` whole-slot jadi
      `AddAmountOf*` agar merge ke stack id-sama yang sudah ada.
- [ ] 2.4 Test: panen 10 lobak dengan tas 2 slot -> harus jadi 1 slot `x10`, bukan 10 slot.

### Fase 3 — Outflow give-1 (NPC, hewan, shipping, makan, masak, gift)

Prinsip: **tidak ada jalur yang memindahkan whole `RucksackItem` ke luar kecuali tas internal.**
Semua give lewat tangan 1 pcs.

- [ ] 3.1 Tambah helper `Rucksack::TakeOneAt` dipakai oleh:
  - cycle ke tangan `Farmer::func_0800EB3C/0800EBC4` (`src/farmer.cc`): tangan diisi 1 pcs,
    sisa tinggal di slot (ubah dari `CycleItemBack/Front` whole-swap).
  - UI ambil dari tas `ExtractItemAt__8RucksackUi` (`:143949,144042`) -> ganti `TakeOneAt`
    untuk give/makan; `Extract` (whole) hanya untuk pindah slot internal / buang.
- [ ] 3.2 Audit jalur konsumsi: `GetItemAt__8RucksackUi` + `GetFood/GetArticle` di
  (`:143467,143800,144538,144751,145049,145113, ...` — nomor ±5 baris, fungsi benar) —
  dengan D4=A-all: give/makan/ship lewat tangan 1 pcs (TakeOneAt), tukar tas<->kulkas/rak
  tetap whole-slot.
- [ ] 3.3 Hewan ternak/peliharaan, shipping bin (`src/shipping_bin.cc`), masak/oven,
      gift-wrap (`TryWrap`/`IsWrapped`): pastikan konsumsi `SubtractAmount(1)` bukan clear slot.
- [ ] 3.4 Test: slot `Telur x10`, give ke NPC -> slot jadi `x9`, NPC terima 1.

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
        `GetItemAt` -> `GetIconId` -> `GetAmount__C12RucksackItem` (SIMBOL BARU, 0 situs hari ini;
        tiru `FoodStack::GetAmount`) -> `CC728`/`CCD48` alih-alih gambar-ikon-polos.
      - Prasyarat: Fase 1 (field `amount` + simbol GetAmount) selesai dulu; stride loop gambar
        tas ikut 4->5 byte bersamaan (satu pekerjaan dengan penambahan field).
      - Tanpa 4.1 = bug pasti: stack xN tampil tanpa angka (ambiguitas nominal; D4=A-all
        memindah N pcs sekaligus tanpa terlihat) + loop stride lama baca byte-amount sebagai
        item berikutnya (ikon rusak).
- [ ] 4.2 Tukar tas<->kulkas/rak (`func_08088688`, `func_08088BA0`): D4=A-all (dikunci).
      Tukar = whole-slot seperti lama: pindah antar slot sama-id = merge
      (`AddAmount` + `SubtractAmount`), beda-id = swap/tolak jika salah satu stack.
      Give/makan/ship tetap 1 pcs via tangan (TakeOneAt, Fase 3) — tidak lewat jalur tukar ini.
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
| struct | `include/rucksack_item.hh`, `src/rucksack_item.cc` | [ ] |
| logic tas | `include/rucksack.hh`, `src/rucksack.cc` | [ ] |
| tangan | `include/held_item.hh`, `src/held_item.cc` | [ ] |
| cycle tangan | `src/farmer.cc:311,346` | [ ] |
| panen | `src/field.cc:430` + `asm:0x0804199A/0x080419B4/0x08043D06` | [ ] |
| tambang | `asm:3937,8248,39827,128190,131092,131238,137109` (Add; `96969/114177`=cek FirstSlot, `127421` tidak ada) | [ ] |
| fridge/shelf refill | `asm:func_08088688,func_08088BA0`, `src/fridge.cc`, `src/shelf.cc` | [ ] |
| give NPC/hewan/ship | hasil audit 3.2 | [ ] |
| display xN | `func_080CCD48` (`code_809E804.s:94844`), `func_080CC728` (`:94013`), `func_080CAEEC`, simbol baru `GetAmount__C12RucksackItem` | [ ] |
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

- 2026-10-22: analisa kulkas vs tas selesai; plan ini dibuat. Belum ada perubahan kode.
- 2026-10-22: verifikasi source selesai (C++ cocok, koreksi: situs tambang 5 bukan 8,
  func display di `code_809E804.s`, baris audit ±5, string `x%d` belum ketemu).
  Keputusan dikunci: D1 full-key, D2=99, D3 tangan-1-pcs, D4 A=all, D5 migrasi save.
- 2026-10-22: Fase 1 model data diimplementasikan; host gtest `19/19` lulus, ABI probe
  `agbcp` mengonfirmasi `RucksackItem` 5 byte (`Inner +1`, `amount +4`), dan `make compare`
  berhasil build ROM. Hash berbeda dari baserom sesuai perubahan; linker mengeluarkan warning
  segmen LOAD RWX. UI/ASM caller/inflow dan save migration belum dikerjakan.
