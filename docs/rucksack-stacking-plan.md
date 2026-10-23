# Plan: Rucksack Stacking per Item-ID (FoMT GBA)

> Tujuan: slot ransel menumpuk per `(kind, item_id)` seperti kulkas (`Fridge::AddAmountOf`),
> hasil panen/tambang yang masuk ransel ikut stacking,
> tapi **give ke NPC / hewan / shipping / masak tetap keluar 1 pcs**.
> File ini = tracker progres. Lanjut di lain hari: buka file ini, kerjakan checkbox berikutnya,
> lalu `make compare` (ROM harus tetap match sampai implementasi diganti).

Status: `[ ]` belum, `[/]` berjalan, `[x]` selesai. Update tanggal + commit tiap fase.

## 0. Fakta dasar (hasil analisa `src/fridge.cc`, `src/rucksack*.cc`, `src/held_item.cc`)

> REVISI 2026-10-23 (keputusan R1): `RucksackItem` TETAP 4 byte persis layout baserom
> (bitfield `kind:1, wrapped:1` + `Inner` di +1). Alasan: layout 5-byte memecah ABI
> baserom di ±150 situs ASM (copy word0, sret 5-byte meluber ke slot stack tetangga,
> arg by-value 5-byte butuh 2 register) — bukti di log 2026-10-23.
>
> REVISI 2026-10-23 (keputusan R2, Fase 5): stack amount TIDAK lagi inline di
> `Rucksack` (R1 sempat menaruh `amounts[8]` di +0x38). `Rucksack` kembali 0x38
> baserom; amount hidup di runtime store EWRAM yang di-key alamat instance
> (`src/rucksack.cc`) dan dipersistensikan ke sidecar 24 byte di tail 0xAF0 tiap
> file SRAM (`src/rucksack_save.cc`). Alasan: inline 0x40 membuat `Farmer` 0xA0,
> sehingga amount menimpa 8 byte pertama Dog di record `+0x1C70` — bukan hanya
> soal save, tapi korupsi runtime. Lihat D7 + log.

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
- Save: `asm/sram_proxy_1.s:func_080003DC` slot = `0x3FEC` byte. Payload = 0x34F4 byte
  (Farmer di +0x1BD8, Rucksack +0x1C38, Dog +0x1C70), checksum di +0x34F8. Mengubah
  ukuran `Rucksack` berarti mengubah layout runtime/save; R2 menghindarinya dengan
  runtime store + sidecar di tail (lihat D7).

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
- [x] D7 (2026-10-23): REVISI STORAGE (R2, Fase 5) — `amounts[8]` keluar dari `Rucksack`.
      `Rucksack` = 0x38 (items 0x24 + tools 0x10), `Farmer` = 0x98, sehingga Dog di
      `Farmer+0x98` / record `+0x1C70` tidak tertimpa baik saat runtime maupun saat
      payload `0x34F4` dibaca. Amount disimpan di runtime store EWRAM yang di-key
      alamat instance (bukan pointer global yang bisa tertukar antar Farmer sementara),
      lalu dipersistensikan ke sidecar 24 byte ber-magic/version/payload-checksum/
      checksum-FNV di tail 0xAF0 tiap file. Save lama tanpa sidecar dimigrasi saat load
      ke `x1` per slot terisi; sidecar invalid/torn juga jatuh ke `x1`. Payload lama,
      offset, dan checksum tidak berubah.

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
  - [DIGANTI R2/Fase 5] `amounts[8]` inline di +0x38 sempat dipakai di R1; sekarang
    array itu keluar dari objek dan hidup di runtime store (Rucksack tetap 0x38).
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
      (`sizeof(RucksackItem)=4`, `tools` di +0x24 = baserom; R2: `sizeof(Rucksack)=0x38`);
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

- [x] 4.1 Display jumlah: menu tas (`func_08088318` dan `func_0808BDA0` di
      `asm/code_809E804.s:92320/91768/91329/94013`, diref dari `code_0803EE94.s`) gambar ikon +
      angka `N` jika `amount>1` (verifikasi 2026-10-22, detail di bawah).
      - Helper gambar angka (sudah ada, generik, dipakai fridge 6x + shelf 6x):
        `func_080CCD48(ctx, slot, amount)` (`code_809E804.s:94844`) — siapkan tile slot
        (`func_080CAD10`), gambar ikon, lalu `cmp amount,#1; bls skip` (amount<=1 = tampil
        polos identik ROM hari ini) else `func_080CAEEC(ctx, amount, 0x20)` gambar angka
        desimal 2-digit di tile kedua (`0x0600F082`). Bungkus: `func_080CC728`
        (`code_809E804.s:94013`, dipakai 8x di area tas<->fridge). `func_080CBAF0`
        (`:92389`) = gambar ikon saja (untuk slot amount=1).
      - Format = ikon + angka desimal menempel (tile grafis via `CAEEC`, BUKAN string `x%d`;
        literal `x%d` tidak ada di `asm/data/*.s` — tidak perlu dicari lagi).
      - Pola terverifikasi pada kedua list item tas: ambil amount dari model `Rucksack`
        lalu taruh sebagai argumen stack `[sp]` milik `CB304` (main list) / `CC728`
        (tas transfer), sambil mempertahankan `GetIconId`, wrapped-icon, tabel tile,
        dan jalur gambar ikon asli. Jangan ganti ke `CCD48`: helper itu menghitung ulang
        tile/icon dari tabel global `gUnk_08117860`, yang tidak mempertahankan wrapped icon.
      - Prasyarat: Fase 1 selesai. REVISI R1: tidak ada perubahan stride/offset ASM —
        layout item tetap 4 byte baserom; display cukup memanggil `GetAmountAt`.
      - Verifikasi statis selesai: dua renderer item tas dipetakan ke pemanggil scene,
        amount diambil dari model dan dikirim ke argumen stack renderer existing tanpa
        mengubah icon/tile key. Perakitan + link sukses; visual emulator masih regresi
        Fase 5.3, bukan blocker cakupan implementasi 4.1.
      - Tanpa 4.1 = bug pasti: stack xN tampil tanpa angka (ambiguitas nominal; D4=A-all
        memindah N pcs sekaligus tanpa terlihat). Item tetap 4 byte; tidak ada stride baru.
- [x] 4.2 Tukar tas<->kulkas/rak (`func_08088688`, `func_08088BA0`): D4=A-all (dikunci).
      SEBAGIAN BESAR SUDAH DIKERJAKAN di Fase 2.3 (2026-10-23): whole-slot move/swap
      (`MoveSlot`/`SwapSlots`), merge id-sama (`MoveTo*Stack`, cap 99, leftover di tas),
      swap tangan<->slot ber-stack ditolak. Perilaku statis ditrace dari touch/key branch
      ke helper mutasi dan rerender. Verifikasi visual/input/SFX emulator dicatat pada
      regresi Fase 5.3; tidak tersisa perubahan implementasi di sub-step ini.
- [x] 4.3 Batas upgrade tas (2/4/8 slot di `Rucksack::GetUpgradeLevel`) **tetap jumlah slot**,
      bukan jumlah pcs — stacking justru membuat upgrade lebih berharga. Tidak ubah.
- [x] 4.4 Bunyi/error message saat penuh: `gUnk_08100034` dan `gUnk_081000D4` BUKAN pesan
      penuh; data ROM yang ditunjuk masing-masing berbunyi konfirmasi melepas wrapping saat
      memasukkan item terbungkus ke fridge/shelf; dilarang gunakan ulang untuk kapasitas penuh.
      Trace ke akar: check `func_0804E17C/1D4` memverifikasi item non-food yang sudah di tangan,
      lalu bool menentukan apakah caller memasukkan kandidat ke daftar seleksi. Jalur food
      `func_0807E014` menghitung jumlah slot kosong tas + kapasitas fridge untuk item aktif;
      bila jumlah nol, entry tidak ditambahkan (cabang `.L0807E300`) dan tidak mengirim pesan
      penuh. Namun penolakan tersebut konsisten dengan perilaku sumber dan tidak ada pesan
      tas-penuh yang tepat untuk direuse. Perubahan stacking membuat AddAmount mengembalikan
      overflow; overflow dialihkan ke Fridge::AddAmountOf (0x40 slot, kapasitas 99) dan leftover
      yang tak tertampung tidak dibuang ke pesan konfirmasi unwrapping. Verifikasi jalur sumber
      dan implementasi cukup; tidak menambah feedback yang tidak ada pada perilaku game.

### Fase 5 — Save/migrasi + regresi

- [x] 5.1 (2026-10-23) Finalize storage without changing Farmer ABI. Keep `RucksackItem=4`, legacy `Rucksack=0x38`, Rucksack at Farmer `+0x60` / record `+0x1C38`, Dog at Farmer `+0x98` / record `+0x1C70`, data payload `0x34F4`, checksum at data `+0x34F8`. Current inline `amounts[8]` grows Rucksack to `0x40` and overwrites Dog: do not serialize or deserialize this enlarged object as part of the legacy payload. SRAM is `0x0E000000..0x0E007FFF` (`MEM_SRAM_SIZE=0x8000`, `tools/libsix/.../memory.s:36-37`). Header `0x28` + two strides `2*0x3FEC` = exactly `0x8000`; there is no space after the two files. Each file uses `0x34FC` bytes (length + payload + checksum), leaving `0xAF0` bytes before the next stride boundary by arithmetic only. Prove those bytes are untouched padding by tracing every SRAM access and slot/file-table operation; do not describe them as generally free or append beyond SRAM. Confirm slot identity is exactly 0/1 through all paths. If the two per-file tails are verified padding, allocate a versioned compact sidecar there; otherwise reject the tail and redesign/pack data inside the fixed payload. Keep old payload offsets/checksum unchanged.
- [x] 5.2 (2026-10-23) Implement runtime amount state and backward-compatible persistence only after 5.1 proves an address range. The Rucksack amount array cannot remain inline in the serialized Farmer: use a runtime-only owner mapping or a proven non-overlapping runtime location; trace constructor/destructor, simultaneous Farmer/Rucksack count, load, new-game, and slot-switch lifetimes before fixing its capacity/key. Trace save `func_08003F9C`, load `func_080040A0`, dispatch `func_08004570`, slot offset `func_080003DC`, and SRAM read/write `func_080006A4/E4`. Define sidecar fields/signature/version/slot binding/integrity, atomic/torn-write policy, and behavior for create/copy/delete/rotate/failed save. On absent/invalid sidecar, initialize occupied item slots to amount 1 and empty slots to 0; apply validated extension only after successful legacy payload validation and item restoration. Do not migrate based on checksum/length alone; preserve stock save data and ensure no partial state update. Write `tools/scripts/dump_save.py` to parse 32-KiB SRAM, header, both file records, checksum, padding, sidecars, Farmer/Rucksack/Dog ranges, and report invalid offsets/records. Add fixtures for pristine stock SRAM, valid migrated slot, absent/corrupt/truncated extension, interrupted update, empty slot, stack boundary 1/99, and both slots independently.
      Bukti 5.1 (2026-10-23): semua akses SRAM hanya lewat `func_080006A4` (tulis+verifikasi)
      dan `func_080006E4` (baca); tidak ada konstanta `0x0E000000` di luar kedua proxy.
      Call site yang ada: header `0x00` (0x20 byte), `0x20`, `0x24`; per file `slot+0`
      (length 0x34F4), `slot+4` (payload), `slot+0x34F8` (checksum). `func_080002E0`
      menolak `header+0x24 > 1`; slot byte `scene+0x85` diisi dari `func_08000488`
      (= `header+0x24`) di `func_080041DC`, sehingga selalu 0/1. `func_0800042C`
      (pembersih bit) tidak punya call site maupun pointer table di ROM, jadi tidak ada
      delete/copy/rotate yang menulis SRAM. Tail `[slot+0x34FC, slot+0x3FEC)` = 0xAF0
      byte per file karena itu terbukti padding yang tidak disentuh game; header 0x28 +
      2*0x3FEC = 0x8000 tepat, sidecar 24 byte ditaruh di awal tail (tidak menambah di
      luar SRAM).
      Implementasi 5.2: `Rucksack` kembali 0x38; amount store runtime di
      `src/rucksack.cc` (EWRAM `.bss`, 8 entry, key alamat instance, LRU + default x1
      untuk slot terisi); sidecar di `include/rucksack_save.hh` + `src/rucksack_save.cc`
      (magic `RSC1`, version 1, slot, payload_checksum, amounts[8], FNV-1a). Save hook
      `func_080115B0` menulis 24 byte ke `slot+0x34FC` hanya setelah payload+checksum
      terverifikasi; load hook `func_080040A0` membaca sidecar setelah `func_08011650`
      sukses, memvalidasi magic/version/slot/payload-checksum/sidecar-checksum/occupancy,
      lalu apply; absent/invalid/torn -> x1 per slot terisi tanpa menyentuh payload lama.
      `make` link sukses (SHA1 mismatch expected); assert target `sizeof(Rucksack)=0x38`,
      `offsetof(Farmer,rucksack)=0x60`, `sizeof(Farmer)=0x98` lulus. Host test 47/47
      lulus (37 stacking + 10 sidecar); `dump_save.py --self-test` 8 fixture lulus.
> **BLOCKER 2026-10-23 (runtime regression, WAJIB dibaca sebelum lanjut):**
> `make` saat ini menghasilkan ROM yang **crash di mgba sebelum title screen**:
> `GBA Memory: Jumped to invalid address: 0400000A` (`mgba -l 1 fomt.gba`).
> Baseline HEAD `6311c0a` (Phase 4) **run normal** (timeout 8 detik, exit 124).
> Uji bisect awal: baseline + reservasi heap EWRAM 0x84 byte (meniru pergeseran
> `__ewram_bss_end`) **tetap run normal**, jadi pergeseran heap BUKAN penyebab.
> Tersangka utama: perubahan kode/ukuran objek R2 — registry amount di
> `src/rucksack.cc` menambah kode dan menggeser `.rom`; `src/rucksack_save.o`
> ditempatkan di akhir `.rom`; `sizeof(Rucksack)` berubah 0x40 -> 0x38. Belum
> terbukti mana yang memicu. **Jangan menutup 5.3 / menganggap R2 aman runtime
> sampai crash ini hilang.** Host test 47/47 dan dumper self-test 8/8 tetap lulus;
> crash ini murni jalur ROM/emulator.
- [ ] 5.3 Verify end to end: test the dumper against original SRAM from an emulator or cartridge and synthetic fixtures; build ROM and inspect changed bytes/callers. In mgba, load a real stock save (the checked-in `fomt_16.ss*` are screenshots, not emulator save states), confirm occupied items load as x1, stack items, save/reboot/reload, and validate xN. Exercise both file slots, file copy/delete/rotation, failed/corrupt extension fallback, Dog fields, and harvest -> rucksack -> fridge -> give exactly one -> save/load. Dump SRAM before/after; prove only the selected slot's verified sidecar and expected payload bytes change, never Dog or adjacent slot. Do not close 5.x if any storage-boundary or interruption behavior remains unproven.
- [x] Save trace checkpoint (2026-10-23, resolved by 5.1/5.2): `func_080003DC` computes base `0x28 + index*0x3FEC`; `func_08003F9C`/`func_080040A0` select that base via slot byte `ctx+0x85`; game-state routines write `0x34F4` bytes and a 4-byte byte-sum at `+0x34F8`. SRAM callbacks use variable-length transfers and verified writes (up to 3 retries). `MEM_SRAM` is `0x0E000000` with `0x8000` size. Two `0x3FEC` strides plus header `0x28` consume exactly 32 KiB; thus there is no outside-space append. Candidate `0xAF0` file tail is within stride, but availability requires auditing every access and slot-management operation. New-game/load code reconstructs Farmer and Dog at fixed offsets; inline Rucksack amounts overlap Dog. The version/header check in `func_080002E0` validates global magic/flags, not a payload format version. Save index range, tail ownership, runtime Rucksack ownership, dan copy/delete/torn-write semantics saat itu masih prasyarat; semuanya sudah dibuktikan/diimplementasikan pada 5.1/5.2 (2026-10-23). Catatan ini dipertahankan sebagai jejak audit pra-implementasi.

## 3. Daftar sentuh (isi saat jalan — jangan hapus yang sudah ada)

| Area | File/ASM | Status |
|---|---|---|
| struct | `include/rucksack_item.hh`, `src/rucksack_item.cc` | [x] R1: 4-byte baserom + IsSameStackable |
| logic tas | `include/rucksack.hh`, `src/rucksack.cc` | [x] R2: 0x38 + runtime amount store |
| tangan | `include/held_item.hh`, `src/held_item.cc` | [x] ctor 1-arg |
| cycle tangan | `src/farmer.cc:311,346` | [x] amounts ikut digeser (surplus evict = interim, 3.1) |
| panen | `src/field.cc:430` + `asm:0x0804199A/0x080419B4/0x08043D06` | [x] inflow call audit |
| tambang | `asm:3937,8248,39827,128190,131092,131238,137109` (Add; `96969/114177`=cek FirstSlot, `127421` tidak ada) | [x] audit args |
| fridge/shelf refill | `asm:func_08088BA0` (food), `func_0808CEC4` (article), `func_08088688`/`func_0808AC28`/`func_0808B16C`/`func_0808C9D0` (tas) | [x] patched R1 (2026-10-23) |
| give NPC/hewan/ship | hasil audit 3.2: semua via tangan 1 pcs | [x] 2026-10-23 |
| display xN | `func_08088318`, `func_0808BDA0` -> `GetAmountAt__C8RucksackUi` -> `func_080CB304`/`func_080CC728` | [x] source traced, 2026-10-23 |
| upgrade slots | `Rucksack::GetUpgradeLevel/Upgrade` | [x] tetap berdasarkan `items.size()` (2/4/8), 2026-10-23 |
| save/load hook | `asm/game_state.s:func_080115B0`, `asm/new_game.s:func_080040A0` | [x] sidecar write/read, 2026-10-23 |
| sidecar | `include/rucksack_save.hh`, `src/rucksack_save.cc` | [x] magic/version/payload-binding/FNV, 2026-10-23 |
| dumper/fixtures | `tools/scripts/dump_save.py` | [x] 8 fixture + self-test, 2026-10-23 |
| linker | `fomt.lds` | [x] `rucksack.o(.bss)` -> EWRAM, `rucksack_save.o` last in ROM |

## 4. Cara lanjut di lain hari (progres tidak hilang)

1. `git status && git log --oneline -3` — pastikan di branch `rucksack-stacking`.
2. Buka file ini, cari checkbox `[ ]` pertama yang belum selesai.
3. Build baseline: `make compare` (butuh `baserom.gba`; lihat `INSTALL.md`).
4. Validate the save extension against old SRAM slot data with the dumper, then use mgba with
   a real in-game save or fresh game. The checked-in `fomt_16.ss*` files are screenshots,
   not emulator savestates. Cover legacy-load migration, stack amounts after save/reboot/load,
   slot isolation, harvest -> rucksack -> fridge -> give-one -> save/load.
5. Setiap selesai 1 checkbox: update `[x]` + tanggal, commit kecil
   (`git add docs/rucksack-stacking-plan.md src/... && git commit -m "..."`),
   push agar tidak hilang.
6. Verifikasi cepat Fase 5 sebelum emulator:
   ```sh
   g++ -DMODERN=1 -DNONMATCHING=1 -DHOST_TEST=1 -std=c++17 -iquote . -I include \
     tests/test_rucksack_save.cc src/rucksack_item.cc src/rucksack.cc \
     src/rucksack_save.cc src/item.cc src/held_item.cc -lgtest -lgtest_main \
     -o /tmp/test_rucksack_save && /tmp/test_rucksack_save
   python3 tools/scripts/dump_save.py --self-test
   make   # SHA1 mismatch expected; pastikan link sukses
   ```
7. **Sesi berikutnya: selesaikan BLOCKER crash boot dulu** (lihat blok BLOCKER di atas).
   Langkah bisect yang disarankan:
   ```sh
   # reproduksi
   make && timeout 8 env SDL_VIDEODRIVER=dummy SDL_AUDIODRIVER=dummy \
     mgba -l 1 fomt.gba            # harus TIDAK muncul 'Jumped to invalid address'

   # baseline pembanding (HEAD 6311c0a) di worktree terpisah:
   #   git worktree add /tmp/fomt-base 6311c0a
   #   ln -s $(pwd)/tools/agbcc /tmp/fomt-base/tools/agbcc
   #   cd /tmp/fomt-base && make && mgba ...
   # Hapus worktree setelah selesai: git worktree remove --force /tmp/fomt-base
   ```
   Urutan uji yang paling informatif:
   a. Pindahkan `src/rucksack_save.o(.text)` dari akhir `.rom` ke setelah
      `src/rucksack.o(.text)` (seperti build awal R2) — apakah crash berubah?
   b. Build varian yang mempertahankan `sizeof(Rucksack)=0x40` sementara (inline
      amount dummy) untuk memisahkan efek perubahan ukuran objek vs registry.
   c. Build varian tanpa dua hook `bl` save/load (kode sidecar tetap ada, tidak
      dipanggil) — memastikan crash bukan dari call site/veneer.
   d. Pakai `mgba -d`, break di `0x0800018C` (AgbMain), lalu telusuri PC/stack
      sebelum lompat ke `0x0400000A`; atau `mgba -g` + gdb, `bt` saat invalid jump.
   Setelah boot normal: lanjutkan 5.3 (dump SRAM, load save stock, save/reboot/load,
   kedua slot, Dog, harvest -> rucksack -> fridge -> give-one -> save/load).
   Catat hasil tiap langkah di log ini.

## 5. Log progres

- 2026-10-23: **REGRESI RUNTIME ditemukan, 5.3 belum selesai.** Build working tree
  (`make`) crash di mgba sebelum title: `Jumped to invalid address: 0400000A`.
  Baseline HEAD `6311c0a` di worktree terpisah run normal 8 detik (exit 124).
  Bisect awal: baseline + reservasi 0x84 byte di `.ewram_bss` (meniru pergeseran
  heap R2) tetap run normal (exit 124), jadi pergeseran heap EWRAM bukan penyebab.
  Sisa tersangka: pertumbuhan kode `src/rucksack.cc` (registry) yang menggeser
  `.rom`, penempatan `rucksack_save.o(.text/.rodata)` di akhir `.rom`, dan/atau
  perubahan `sizeof(Rucksack)` 0x40 -> 0x38. Host test 47/47 + dumper 8/8 tetap
  lulus; tidak ada bukti runtime. Rencana bisect dan langkah lanjutan ada di
  bagian 4 item 7 dan blok BLOCKER Fase 5. Jangan tutup 5.3 sebelum boot normal.
- 2026-10-23: Fase 5.1 + 5.2 SELESAI (R2). Audit SRAM: semua I/O lewat `func_080006A4`
  (tulis+verifikasi) / `func_080006E4` (baca); tidak ada konstanta `0x0E000000` lain.
  Call site hanya header 0x00/0x20/0x24 dan per-file slot+0/4/0x34F8, jadi tail 0xAF0
  per file terbukti tidak ditulis game. `func_080002E0` membatasi slot aktif <= 1 dan
  `func_080041DC` mengisi `scene+0x85` dari `func_08000488` (header+0x24), sehingga slot
  selalu 0/1; `func_0800042C` (clear bit) tidak direferensikan di ROM (tidak ada delete/
  copy/rotate yang menulis SRAM). Implementasi: `Rucksack` kembali 0x38; amount store
  runtime di EWRAM (key alamat instance, LRU 8 entry, default x1), sidecar 24 byte
  (`include/rucksack_save.hh`, `src/rucksack_save.cc`) dengan magic/version/slot/
  payload-checksum/FNV; hook save `func_080115B0` (setelah payload+checksum verified)
  dan load `func_080040A0` (setelah `func_08011650` sukses; invalid/absent -> x1).
  `fomt.lds`: `src/rucksack.o(.bss)` masuk EWRAM dan `src/rucksack_save.o(.text/.rodata)`
  ditaruh paling akhir agar tidak menggeser simbol ROM lama. Verifikasi: host 47/47 lulus,
  `dump_save.py --self-test` 8 fixture lulus, `make` link sukses (SHA1 mismatch expected),
  assert target Rucksack=0x38/Farmer=0x98/rucksack+0x60 lulus, dan dua call site hook
  terlihat di disassembly ELF (load di 0x0800415E, save di 0x08011EBC; keduanya lewat
  veneer interwork karena kode sidecar ditaruh di akhir ROM).
  Fase 5.3 (load save asli di mgba, save/reboot/reload, Dog/kedua slot) tetap terbuka
  karena tidak ada SRAM asli di repo (`fomt_16.ss*` = screenshot PNG).
- 2026-10-23: Alat verifikasi save ditambahkan: `tools/scripts/dump_save.py` mem-parse
  header 0x28, dua record 0x3FEC, checksum byte-sum, Farmer/Rucksack/Dog, tail, dan
  sidecar; `--self-test` membuat 8 fixture sintetis (stock, migrated, corrupt, truncated,
  interrupted, boundary x1/x99, both slots, payload checksum rusak); `--write-fixtures`
  menulis SRAM 32 KiB untuk pengujian emulator. Catatan: ROM hasil `make` sekarang
  sedikit melewati 8 MiB (pad linker lama mengasumsikan akhir .rom tetap); ini konsekuensi
  build nonmatching yang sudah ada dan bukan jalur save. Perlu dirapikan sebelum uji
  cartridge/emulator final.
- 2026-10-23: Koreksi penting: Fase 5.1 BELUM selesai. Probe layout dengan toolchain aktual project
  (cpp -> agbcp -> arm-none-eabi-as/nm) mengukur RucksackItem=4, Rucksack=0x40,
  Farmer=0xA0, HeldItem=8, ToolStack=2; offsets Farmer held=0x54, rucksack=0x60,
  Rucksack tools=0x24, amounts=0x38. Cross-check host menunjukkan Farmer=0x9C
  karena alignment ABI host, sehingga ukuran Farmer tidak boleh ditegaskan lintas
  target. Tracing helper `func_080003DC` membuktikan slot offset `0x28 + n*0x3FEC`;
  save/load mengalokasikan payload `0x34F4` dan melewatkannya ke `func_08011650`.
  Rucksack mulai di record offset 0x1C38, sebelum perubahan berukuran 0x38 sehingga
  berakhir tepat di 0x1C70. Penambahan `amounts[8]` membuatnya berukuran 0x40 dan
  menimpa 8 byte pertama Dog record, yang constructor/deserializer mengakses pada
  0x1C70. Maka linker/slot size bukan satu-satunya pertanyaan; save layout rusak tanpa
  migrasi. ABI guards untuk Rucksack (item=4, size=0x40, offsets 0x24/0x38) tetap
  dipertahankan; guard Farmer offset yang tidak menangkap overlap dihapus. Build yang
  telah lulus sebelumnya hanya membuktikan compile/link, bukan keselamatan save.
- 2026-10-23: Lanjutan Fase 5: telusur langsung memastikan serialisasi Farmer mengambil tepat
  `0x34F4` byte (`func_080115B0`/`func_08011650`) di slot SRAM berlangkah `0x3FEC`
  (`func_080003DC`). `Rucksack` dimulai pada `Farmer+0x60`; ukuran target terukur `0x40`,
  sehingga `amounts[8]` menimpa rentang `Farmer+0x98..0x9F`, sedangkan constructor Dog
  dipanggil pada `Farmer+0x98` (`func_08011650`, literal `0x1C70`). Jalur save lama hanya
  memvalidasi header/checksum/ukuran payload `0x34F4`; tidak ditemukan versi payload yang
  dapat mengidentifikasi format sebelum deserialize. Karena itu migrasi in-place/versi
  belum terbukti aman dan 5.1/5.2 tetap terbuka; tidak mengubah kode berdasarkan tebakan.
  `make compare` membangun ROM namun berakhir gagal SHA1 terhadap baserom (expected mismatch
  setelah modifikasi; linker tetap memperingatkan LOAD RWX). Host regression stacking: 37/37
  lulus. Emulator tersedia (`mgba`), tetapi `fomt_16.ss1` yang ada adalah PNG screenshot,
  bukan savestate; jalur runtime save/load end-to-end belum bisa divalidasi dengannya.
- 2026-10-23: Fase 4.3 diverifikasi dari sumber: `GetUpgradeLevel()` memakai
  `items.size()` dan `Upgrade()` resize slot `items/tools` 2 -> 4 -> 8; `amounts[]`
  hanya data isi paralel dan tidak memengaruhi level. Call site upgrade ASM
  (`0x08044270`) memanggil `Upgrade__8Rucksack`, dan pemeriksaan level untuk kondisi
  permainan memakai simbol level yang sama. Ditambah regression test yang mengisi
  dua slot masing-masing x99 (total 198) namun level tetap 0, lalu memastikan upgrade
  mengubah slot ke 4/8; host tests 37/37 lulus. Fase 4.4 memutuskan tidak menambah
  pesan baru setelah tracing sumber feedback dan alur kapasitas:
  `func_0804E17C/1D4` adalah check kelayakan (tas kosong ATAU kapasitas furniture),
  sedangkan caller memasukkan ikon/item ke daftar selection; belum ada bukti bahwa
  `gUnk_08100034` adalah feedback umum kapasitas simpan habis.
- 2026-10-23: Fase 4.1 ditutup setelah trace kedua renderer list item tas dan pemanggil
  scene/transfer; jumlah diteruskan ke parameter stack renderer existing sementara
  jalur ikon asli dipertahankan. Build/link memverifikasi ASM. Pengujian visual dicatat
  pada Fase 5.3.
- 2026-10-23: Koreksi trace Fase 4.4: inspeksi isi ROM mengonfirmasi `gUnk_08100034`
  = dialog konfirmasi unwrapping untuk fridge (`If you put it in the Refrigerator,
  the wrapping will come off. Are you sure?`), dan `gUnk_081000D4` = dialog sepadan
  untuk shelf. Keduanya dipakai setelah branch `IsWrapped`, bukan kapasitas. Check
  storage di `func_0804E17C/1D4` menghasilkan bool kelayakan (rucksack slot OR storage
  capacity), caller memasukkan kandidat ke daftar. Alur kapasitas simpan massal juga
  ditelusuri di `.L0807E014`: jumlah kapasitas nol melewati penambahan entry/transfer;
  overflow dari tas diteruskan ke `Fridge::AddAmountOf` yang mengembalikan leftover.
  Karena tidak ada pesan penuh yang memang dipakai pada jalur ini, keputusan 4.4 adalah
  mempertahankan perilaku game dan tidak memasang string unwrapping atau pesan lain.
- 2026-10-23: Fase 4.2 code-path ditelusuri dari input handler `func_08088688` (tas/fridge)
  dan `func_0808CEC4` (tas/shelf) sampai `MoveSlot`/`SwapSlots`/`MoveTo*Stack`, serta
  rerender target/source. Branch empty-target memindahkan seluruh amount; branch same-id
  melakukan merge dengan sisa tetap di tas; incompatible stack ditolak sesuai D4.
  Validasi emulator input/UI/SFX tetap bagian regresi Fase 5.3.
- 2026-10-23: Catatan audit awal Fase 4.1 (detail final dan status [x] dicatat di atas):
  dua renderer list item tas:
  `func_08088318` dipanggil scene `func_0808A55C`, dan `func_0808BDA0` dipanggil
  handler transfer (`func_0808C0BC`, `func_0808C9D0` dkk.). Keduanya mempertahankan
  jalur icon lama (termasuk wrapped) dan memasok `GetAmountAt(idx)` melalui argumen
  stack amount bagi `func_080CB304`/`func_080CC728`. Koreksi: jangan gunakan `CCD48`
  karena ia mengambil icon dari tabel global dan mengabaikan wrapped icon. Build ROM
  perlu diverifikasi; runtime visual tetap bagian regresi Fase 5.3.
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
