# Klasifikasi reencode stream `0x70`

**Dihasilkan otomatis** oleh `python3 tools/assets/stream_audit.py`.
Hash `compressed` dihitung dari slice ROM; hash `decoded` dari
`assets/0x70/bin/` (blob utuh) dan `assets/0x70/extern/` (bank
tertanam). Setiap slice compressed juga didekode ulang dan
dibandingkan dengan bin sebelum hash dicatat. Status hanya `ok` bila
encoder menghasilkan byte compressed yang sama, bukan hanya payload
yang sama.

Cakupan: stream dari blob yang seluruhnya berformat `0x70` di
`assets/0x70/manifest.json` **dan** stream bank `0x70` tertanam yang
diekstrak `embedded_streams.py` ke `assets/0x70/extern/` (lihat
`ASET-0X70-TERTANAM.md`). Stream bank tertanam dicek ulang di sini:
slice ROM-nya harus decode ke bin `extern/` dengan sha256 yang sama
dengan `embedded_manifest.json`, jadi laporan ini mencakup seluruh
stream `0x70` yang sudah diekstrak, bukan hanya blob utuh.

## Ringkasan

- total stream: **284**
- sumber `bank tertanam`: **147** stream, 258312 B compressed → 1174344 B decoded
- sumber `blob 0x70`: **137** stream, 255188 B compressed → 987120 B decoded
- bank tertanam tercakup: **3**
- compressed → decoded terverifikasi: **284**
- bisa direencode byte-identik: **128**
- wajib `opaque`: **156**

## Prioritas konversi

| prioritas | keluarga | stream | compressed B | decoded B |
|---|---|---:|---:|---:|
| P0 | atom0/lzss0 (paling sederhana) | 5 | 1420 | 3200 |
| P1 | atom0/lzss2 | 70 | 62340 | 311042 |
| P1 | atom0/lzss3 | 53 | 10368 | 111296 |
| P2 | huffman4/lzss0 | 1 | 364 | 1280 |
| P2 | huffman4/lzss2 | 5 | 2132 | 7200 |
| P2 | huffman4/lzss3 | 108 | 67896 | 621928 |
| P3 | huffman8/lzss2 | 6 | 71300 | 168972 |
| P3 | huffman8/lzss3 | 36 | 297680 | 936546 |

## Status per blob `0x70`

Setiap blob dimuat utuh oleh `Unpack` (call site di
`ASET-0X70-PETA-BERKAS.md`), jadi satu stream yang belum byte-identik
memblokir penggantian `.incbin` seluruh blob. Blob yang seluruh
stream-nya `ok` sudah siap kalau container encoder dibuat.

| simbol | stream | format | status |
|---|---:|---|---|
| `gUnk_08527238` | 1 | `130` | parkir: ada format tanpa encoder |
| `gUnk_08527348` | 1 | `130` | parkir: ada format tanpa encoder |
| `gUnk_08527520` | 1 | `130` | parkir: ada format tanpa encoder |
| `gUnk_085275D0` | 1 | `230` | parkir: ada format tanpa encoder |
| `gUnk_0852A6D8` | 1 | `130` | parkir: ada format tanpa encoder |
| `gUnk_0852A7EC` | 1 | `130` | parkir: ada format tanpa encoder |
| `gUnk_0852A9BC` | 1 | `130` | parkir: ada format tanpa encoder |
| `gUnk_0852AA6C` | 1 | `220` | parkir: ada format tanpa encoder |
| `gUnk_086FB004` | 1 | `230` | parkir: ada format tanpa encoder |
| `gUnk_086FD19C` | 1 | `030` | siap container |
| `gUnk_086FD240` | 50 | `000,023,024,030,033,123,124,130,133,134,230,231` | parkir: ada format tanpa encoder |
| `gUnk_08714A30` | 2 | `030` | siap container |
| `gUnk_08714B60` | 1 | `030` | siap container |
| `gUnk_08714BEC` | 6 | `000,023,030,133,231` | parkir: ada format tanpa encoder |
| `gUnk_08716F84` | 2 | `030` | siap container |
| `gUnk_087170B8` | 25 | `023,024,030,033,130,133,230,231` | parkir: ada format tanpa encoder |
| `gUnk_0872C5D0` | 1 | `030` | siap container |
| `gUnk_0872C73C` | 1 | `030` | siap container |
| `gUnk_0872C84C` | 1 | `020` | siap container |
| `gUnk_0872D5CC` | 1 | `030` | siap container |
| `gUnk_0872D630` | 1 | `030` | siap container |
| `gUnk_0872D6D8` | 1 | `020` | siap container |
| `gUnk_0872F11C` | 1 | `030` | siap container |
| `gUnk_0872F1BC` | 1 | `020` | siap container |
| `gUnk_0872F1EC` | 1 | `030` | siap container |
| `gUnk_0872F21C` | 1 | `020` | siap container |
| `gUnk_0872FBFC` | 1 | `030` | siap container |
| `gUnk_0872FC34` | 1 | `020` | siap container |
| `gUnk_0872FE6C` | 1 | `030` | siap container |
| `gUnk_0872FEF8` | 1 | `020` | siap container |
| `gUnk_08738AD8` | 1 | `000` | siap container |
| `gUnk_08738CC8` | 1 | `030` | siap container |
| `gUnk_08738CF0` | 1 | `030` | siap container |
| `gUnk_08738D1C` | 1 | `020` | siap container |
| `gUnk_08739A64` | 1 | `020` | siap container |
| `gUnk_0873BE24` | 1 | `030` | siap container |
| `gUnk_0873BF48` | 1 | `030` | siap container |
| `gUnk_0873BFF0` | 1 | `020` | siap container |
| `gUnk_0873F3C8` | 1 | `020` | siap container |
| `gUnk_0873F5D4` | 1 | `030` | siap container |
| `gUnk_0873F6AC` | 1 | `020` | siap container |
| `gUnk_08743058` | 1 | `020` | siap container |
| `gUnk_08747A74` | 5 | `130,220` | parkir: ada format tanpa encoder |
| `gUnk_0874A9C0` | 1 | `230` | parkir: ada format tanpa encoder |
| `gUnk_0874E648` | 1 | `230` | parkir: ada format tanpa encoder |
| `gUnk_0874EB60` | 1 | `100` | parkir: ada format tanpa encoder |
| `gUnk_0874ECCC` | 1 | `130` | parkir: ada format tanpa encoder |
| `gUnk_0874EF14` | 1 | `030` | siap container |
| `gUnk_0874EF3C` | 1 | `020` | siap container |
| `gUnk_0874EFEC` | 1 | `020` | siap container |
| `gUnk_0874F050` | 1 | `020` | siap container |
| `gUnk_08755848` | 1 | `220` | parkir: ada format tanpa encoder |
| `gUnk_0875822C` | 1 | `230` | parkir: ada format tanpa encoder |

Status `ok` hanya untuk stream yang compressed-nya dihasilkan ulang
byte-identik oleh `lz70.py` dengan tangga asli.
Aturan terbukti pada format `000`: match terpanjang (seri -> jarak
terdekat), run menang bila panjangnya >= match, literal berhenti di
run>=2 atau match berikutnya. Untuk atom0/lzss2 (`020`/`023`/`024`)
aturannya match terpanjang (jarak seri -> terdekat), literal escape
dipakai mulai 9 B, match >18 B lewat escape, dan match 3 B di tiga
byte terakhir tidak dipakai. Lzss3 (`030`/`033`) memakai unit 2 B:
match minimal 2 unit, pendek 2..9 unit, >9 unit lewat escape, literal
escape mulai 9 pasang. Format huffman (`1xx`/`2xx`) tetap `opaque`
karena belum ada encodernya. `ok` di level stream juga
belum berarti blob boleh diganti `.incbin`: satu blob bisa memuat
banyak stream, dan penggantian menunggu seluruh isi blob ter-encode.

## Bukti hash

| simbol | # | sumber | format | group | compressed | decoded | compressed sha256 | decoded sha256 | status |
|---|---:|---|---|---|---:|---:|---|---|---|
| `gUnk_08527238` | 0 | blob 0x70 | `130` | peta | 272 | 5632 | `6ef63dcb057b59d9bfbb2f098b98d626387127069452b8914a24118039098c70` | `69b8c08caf01ad8e704c840f5a5a65435c65ac3fb529041ef486664c0027eadb` | opaque |
| `gUnk_08527348` | 0 | blob 0x70 | `130` | peta | 472 | 5632 | `25e72b76e5b20cfcf4c5203e9d5fd1f47db6472468e0fa5626cd15d441020b48` | `963f740e085bd75e5f9278e1887854ca05c12f4c42a883c14838e2219e30fcfd` | opaque |
| `gUnk_08527520` | 0 | blob 0x70 | `130` | peta | 176 | 5632 | `3cd80862e61a89ab561f28efac08cf6c4d193d88734fce04ecc25787df2c1e63` | `27458cf87f52e63c0cc7fc1ed0f778e805d91c90c0bb608f74ecc875c667a9cd` | opaque |
| `gUnk_085275D0` | 0 | blob 0x70 | `230` | tile | 8644 | 18432 | `669dec9d78bbe0d2ceb08383495eea9da863086b00c7dbd4687d90e5c01cddc5` | `0039e4aa2bb252d5ae17cb2028406e47a79c4461990ad6c1e7e384a962b719e8` | opaque |
| `gUnk_0852A6D8` | 0 | blob 0x70 | `130` | peta | 276 | 5632 | `603e7ade353a890db5487c4db016f37539c14c0ef09c6ae92502800d82dab11d` | `8989aa6975d6f4ae1acbd529cd28b48282172ded6d2212783f4b687ea2da9d80` | opaque |
| `gUnk_0852A7EC` | 0 | blob 0x70 | `130` | peta | 464 | 5632 | `1da4f7c4f280dd5f333fd0dae5507a686d170890ef04b53120206038e8472c8b` | `812c2da700597cd03df0062778a5c01f156ee96088167672594e938c8a580fc2` | opaque |
| `gUnk_0852A9BC` | 0 | blob 0x70 | `130` | peta | 176 | 5632 | `3cd80862e61a89ab561f28efac08cf6c4d193d88734fce04ecc25787df2c1e63` | `27458cf87f52e63c0cc7fc1ed0f778e805d91c90c0bb608f74ecc875c667a9cd` | opaque |
| `gUnk_0852AA6C` | 0 | blob 0x70 | `220` | tile | 8148 | 18432 | `cfb5e29e03d3defef982b8132b1b3acd90b6798a40cfbeb92d0ac723ccef4812` | `884a43e953a4744ae9d4c8a14d7e0b6f58cc2a065b611af851adfd6258c13fe3` | opaque |
| `gUnk_086FB004` | 0 | blob 0x70 | `230` | tile | 8600 | 32768 | `7db15bfbc7c82fd7ac2155a4495cac59ff49fe39001bf8b024f74797fdf3022d` | `3bcc987722288bc090af7f585fbf78556a425af65e040d8d53b1d823deb5740e` | opaque |
| `gUnk_086FD19C` | 0 | blob 0x70 | `030` | palet | 164 | 480 | `83c4f6b8f8b09d04e3bdf1dbe288f91e1dda4b5f1e4331d0de8238895dec6d50` | `bf8f9aa1825250d77ccdaf06106887b8fb3296f252aa53323e97516de624dea1` | ok |
| `gUnk_086FD240` | 0 | blob 0x70 | `134` | peta | 1424 | 6720 | `cb07305bcfa12e14eed101a8074b4d5cd3e64a259ee1492ba49c5ba9323ed2ff` | `b3e24121103c74eee60121bced7445fe4871e64dc58846e68981f23f92b6d485` | opaque |
| `gUnk_086FD240` | 1 | blob 0x70 | `130` | peta | 548 | 6720 | `3453ec9bece0e177e05f3d177c66169d85fc62acfd2555d23559e6715105a44e` | `0d26dae6a04fc1fe5b9a471cca190e7475e453f7101f453d77bc6ae6a4cd6b32` | opaque |
| `gUnk_086FD240` | 2 | blob 0x70 | `030` | peta | 152 | 6720 | `fb59789766240b010e3f0902572d141a6c5d3cd0d1e29a6b77f2646f6c64fb4b` | `dcc0018029509d25e11cf5d82737b4ec935a56d734d9b2bec67caf406b21de46` | ok |
| `gUnk_086FD240` | 3 | blob 0x70 | `030` | palet | 160 | 480 | `79f0c506470d562812dc85eb410de6d23dc60ec384d6929b0f0397ea0c06a33a` | `49b411657448bb3b83ffc1279dff0b0b41cdcd024a72d43ef6f4ed5095f84ee2` | ok |
| `gUnk_086FD240` | 4 | blob 0x70 | `230` | tile | 8024 | 32768 | `7a77b0b9a6ebba59fb7c6a36a61e9a0c2c0d16e50a3c71736434b9b98210dc98` | `51b49a773455488df3092f8aaa72124f4df91689516f045f6adf94560cccd2aa` | opaque |
| `gUnk_086FD240` | 5 | blob 0x70 | `030` | palet | 160 | 480 | `1f87f2ee2775019e9768fe127d005d00c4614f68519c3dd0960e8bef52d7a9dc` | `9597cd56de099beb065f28f51dbb02e5f3b529dd4c84f982a6afd0b40b1a150f` | ok |
| `gUnk_086FD240` | 6 | blob 0x70 | `133` | peta | 1420 | 6720 | `c57d13f02850a472b143f55d001b9e42ff65541f6f4abeeed33b39e22c8d8d77` | `ceea956b9e728fc732799f5a8a8e0f8df98cb73a1674f33c1d83cda0f3991d89` | opaque |
| `gUnk_086FD240` | 7 | blob 0x70 | `130` | peta | 540 | 6720 | `ff1f69be78778b72df6cd7a18341f88424cbed064d514001006c156ae857a2cb` | `fba431f08d00f87725a33460ba6995e3594c5faa72e528696cfba33ed9cdefda` | opaque |
| `gUnk_086FD240` | 8 | blob 0x70 | `130` | peta | 168 | 6720 | `075d39f051aea74c9e675eeea93c9e07a75eb924afe834cabc4d36be7864dfad` | `e3d8b35060b3badb3f40d1f38bfb67a1e6ffa368a61d200d1990e8a256b69e30` | opaque |
| `gUnk_086FD240` | 9 | blob 0x70 | `030` | palet | 148 | 480 | `8b9cc7fd5525b7d06d9f4d5f758a64f84e5177c3b02c8ee9a889bb289e5ccd10` | `cdcf39a0d8383b3dc1b9bd8b4d2e71da11c8b5c37cf0831e15c5b051aa65ad07` | ok |
| `gUnk_086FD240` | 10 | blob 0x70 | `124` | peta | 472 | 1680 | `9449f6ae6c6884cdbfc1625d56ecedc18cd92a0a0514e961cf65573d078b9b85` | `3c4deb779d1f4b3dae5d824c1e1cf1f101a40198d88562389ab586f123d6c2ae` | opaque |
| `gUnk_086FD240` | 11 | blob 0x70 | `023` | peta | 260 | 1680 | `e0692f68610fe296cc1bfdef5f6dc04f8757bb5a831f256affc44154c40b182a` | `fdfef0df6cac9b33b8ab7564645635f42ad7bfa82c7b369b3987f4c12fa10b4c` | ok |
| `gUnk_086FD240` | 12 | blob 0x70 | `130` | peta | 208 | 1680 | `66c2a5a942d29e3e0677f41dde3c70a9151ceea6f196f742f92c33d8656df802` | `132e0af30e209502f36e8c29b865ac03307c75b490eb7f93203ee2703e94ae68` | opaque |
| `gUnk_086FD240` | 13 | blob 0x70 | `024` | peta | 512 | 1680 | `50b9bb48360b0d0f18b04b319f374e5b226fef0fdd6cc9092895a4378caed8af` | `93886f95f9c0b73a9544306d6bc646416001c1f4ff42c25b5265d9e03ef5f032` | ok |
| `gUnk_086FD240` | 14 | blob 0x70 | `023` | peta | 184 | 1680 | `cd120f79e781edc5e7f176f42703c7f02c824b21db4d52b5dd0c00c4707e1ecf` | `cb8dfa16200a199c1212f31746340729b6df88bbe9d3d89cb6e388e25166ab6f` | ok |
| `gUnk_086FD240` | 15 | blob 0x70 | `023` | peta | 116 | 1680 | `b8d5b940e57d2b58ee8e3fa940c30f4c37bf7311475a8a1e7147e5731239bf44` | `bb26073c5a9900fcdde3e0b3d7e3a7f6377caa51fff09702184db351efe8e32c` | ok |
| `gUnk_086FD240` | 16 | blob 0x70 | `130` | peta | 396 | 1680 | `ed8d80b740fccf5025e4c011e23cc63998b7ff525d84cf01a730de4705e9103f` | `2ed7e4ad1aba4af6d3177b24a8466bc6439c369811ef80c12b1cbb4f8c0fb14b` | opaque |
| `gUnk_086FD240` | 17 | blob 0x70 | `023` | peta | 280 | 1680 | `c456e85d3afbb67a66e8b6b030da0a79f47c579fe45bf3733969b500dcd2ccc9` | `ea2bac9827eeb0b55d12a0ec8e8afa04ae76329a2fd18a0b5215d89e84299ca9` | ok |
| `gUnk_086FD240` | 18 | blob 0x70 | `023` | peta | 140 | 1680 | `011a9ecde03b92a6c7d0a1120dc8b899f27b2b053ccaa785394da8dbc2a9a58c` | `6a90a58e4e1eaa12d966f7cbecb2f14b56fd192fb67be5cd92385ada72b0163f` | ok |
| `gUnk_086FD240` | 19 | blob 0x70 | `231` | tile | 10948 | 32768 | `f4b2b7ae8548215e748d620863f3d9061bc3c84f7f8fb2ba7d9b73d24bfef072` | `f46830e9fd6be21b2dcee9e8e310a5cf6af623e470e72eb11c8f8e1bd76161b2` | opaque |
| `gUnk_086FD240` | 20 | blob 0x70 | `133` | palet | 320 | 480 | `90d8557d70dd5ff3b5b79e65af90a582e0501dd6ab45904f54da9852918b3647` | `76f2ae17f7226b5dc0fe951de63f22d1d81b5e82a096bb00ccccded7455efb3b` | opaque |
| `gUnk_086FD240` | 21 | blob 0x70 | `134` | peta | 332 | 1680 | `e76dce7eaa4546277f9ed9077e7970f91430b200ead239289c1fc7d8f05df36a` | `5ba180811f9376be59a429a404cea41c13d8965d44ff587e05eea9c094f64354` | opaque |
| `gUnk_086FD240` | 22 | blob 0x70 | `023` | peta | 272 | 1680 | `fc7977b73c1962b0ea0d6976559c6435f3aeaebe6e7607a7cba4830ab8753f24` | `fb8e766e49e67c8621459c8287590f3c31f1ddb6f77b49d681b51db1ff317afb` | ok |
| `gUnk_086FD240` | 23 | blob 0x70 | `024` | peta | 216 | 1680 | `9f4584a7c872ebc5e053acd1e2a634c4fd2e1b6e30dee4108de06ed1192d3084` | `a34dac215330305c77b084f6af4ca936db85097e36c36e5d88b994e346b81ce6` | ok |
| `gUnk_086FD240` | 24 | blob 0x70 | `230` | peta | 1220 | 5472 | `d0a0b57ee98672785dddfde0410e03ebca15207b4478e35c2306ea807244a6f1` | `ee5653908739a702b748cfedc0e43f06f553b2d4231fb5795daa84281e6a66ae` | opaque |
| `gUnk_086FD240` | 25 | blob 0x70 | `130` | peta | 284 | 5472 | `bf9a1f6ade4109b3c78da18b8914d858df6081f66de69f08f1cab3239942be6f` | `24610d177da428bcfd1c9084110fafd75493c78c752d38c96789360de26726f5` | opaque |
| `gUnk_086FD240` | 26 | blob 0x70 | `130` | peta | 252 | 5472 | `f660192b5ef837a7ad49a7e1466b2f6c8992bc720024d510f935fde15a847b39` | `41bc151bb0ad8223de28507042a02fe46407eb846854754e394bdf8dc10882a8` | opaque |
| `gUnk_086FD240` | 27 | blob 0x70 | `230` | peta | 920 | 3312 | `7651a789e1f665cbafe3289a014980a1566a5d8cb1edb98176a137ac4621be4c` | `9d06fa25dce285ddb518a792048e390913983b94d4efb74409578130cfcf655d` | opaque |
| `gUnk_086FD240` | 28 | blob 0x70 | `030` | peta | 220 | 3312 | `1056a955dd45150f4d8bc67779d1dc8241269a02a689db2506e772f3742a69d3` | `50b7337f3c98bba648dbfdf2f4da817d428c37ff16dc42ac24eac35378089ea5` | ok |
| `gUnk_086FD240` | 29 | blob 0x70 | `130` | peta | 224 | 3312 | `b4e4906dfcbae25ec04431648f137c193b153d0547c65663f97e7a32ab987150` | `6bbc244cf0637129f7cd0ebe3c5ac827cd211d6269a89630b775cb10689d4a05` | opaque |
| `gUnk_086FD240` | 30 | blob 0x70 | `123` | peta | 500 | 1680 | `a716bfc52cc1c747940a74a497ce1876cce8756a78799c20772c8c3a28472ef8` | `21bdb357142d579b38ee0e5c669aa2d7f1dc7ba1377c4e957cc5c2feaae0087b` | opaque |
| `gUnk_086FD240` | 31 | blob 0x70 | `023` | peta | 232 | 1680 | `5f0a1a81eccfcf6e56d48868520c6ebe83b63871dcc8ed45879c33a45ca44ac4` | `c03d60c97f8aa08de2b780140d67225b2d493e01755bb116cb1ee357c11feb03` | ok |
| `gUnk_086FD240` | 32 | blob 0x70 | `023` | peta | 220 | 1680 | `735d7b7d9da2416ae33e8c5680cc1fc99c79b1eb917b1994bb87cc9fdd306c97` | `f8f0a3d84dcaa5d41dea9cd4ad880a2a0b6d58e282e183d3159dbb61833890df` | ok |
| `gUnk_086FD240` | 33 | blob 0x70 | `231` | tile | 20088 | 32768 | `984efdee63539e5e8debaddc54cace8d259d02e036e78ab4a7ddaacfdb1e005b` | `80587de41ff2be4e59b348cba7c9960f798b86374476fae472ba2505757d7ea5` | opaque |
| `gUnk_086FD240` | 34 | blob 0x70 | `030` | palet | 396 | 480 | `d7f27f2e6f1b15eb97e99be4c8d9ab547654b661f4dde59b422f982a42b3aa9c` | `6fd79fff4837e1dae96565ae4caa4eab07c8e1d711550fe406bf644bd4dc7ced` | ok |
| `gUnk_086FD240` | 35 | blob 0x70 | `230` | peta | 2932 | 22144 | `5f1ee07d5ab42f0757e3dddfc2cbb22b4dede727b59930fb02415d934a12bcc9` | `05fb226108218f9a8fe6a6346db66d0d20d522477189f7e1a1874814514e457c` | opaque |
| `gUnk_086FD240` | 36 | blob 0x70 | `134` | peta | 2424 | 22144 | `0fb983b0791857b9ab8f83153288c35ea4b6483a5d39b8765e0af4619fddb71e` | `9e37892cc7c4a569aedb2ae0e77994edebdc07376dfeb8cbbd786614689d79a3` | opaque |
| `gUnk_086FD240` | 37 | blob 0x70 | `033` | peta | 1160 | 22144 | `90adc379c82ec08ad4debe08142bfabd1b5f5e10b289d60188e29b7124843179` | `048ea0e91cb2d4e58d2afde690f51dad2d03e1ce077f062257bb538ec2cf3270` | ok |
| `gUnk_086FD240` | 38 | blob 0x70 | `130` | palet | 372 | 480 | `50909547810fbe1449d06f45030e000e80bc117402cfbaef598eeaed26cca1b9` | `ca482ab21d02bb47b7d61295bc0afff672db1ac48a78f9142fd6c6993f6bbbf6` | opaque |
| `gUnk_086FD240` | 39 | blob 0x70 | `231` | tile | 19608 | 32768 | `94f9a5660d8003954f4a032aa02bb87fe4a19455ea0b506ad84243137fe94e21` | `7431d4dba1ce02e9995063ada8b0ff04d211fed9e4af4891bc09acce7ee2b1ca` | opaque |
| `gUnk_086FD240` | 40 | blob 0x70 | `030` | palet | 296 | 480 | `51c05dcb35f1e203ccff503060eaecf7742c69c5b17f62956a2dd048e1d71100` | `3e2c0facfa187e9d95e3a62592a5a0c499f1f576d146db040e5a7753c8f9c3e6` | ok |
| `gUnk_086FD240` | 41 | blob 0x70 | `130` | peta | 2260 | 22144 | `13f75f44bb28de4cc7ccf9d26291e7662f11a397923149f6f56c69056f7f6e99` | `7e5f414a84e7435a84c8094c8608b1142ebd28831905b77f994abd897f640310` | opaque |
| `gUnk_086FD240` | 42 | blob 0x70 | `133` | peta | 2408 | 22144 | `14cafa9d450f496b5425d1055014153aed13a512e985cd8e5ed81931319206f2` | `e5befb327809f85f16a20b5d6a46739e9aa3ac60d8fe01363d05c0580314dd90` | opaque |
| `gUnk_086FD240` | 43 | blob 0x70 | `134` | peta | 1144 | 22144 | `8b6812070d83851c0b0c341b3fd95004d780357c1e86ca23e4b4d22c0b6d7086` | `d5cb3c1d7d7dfae820c20fcc2af25023728dc047561fc5d12cc9c332f7803a64` | opaque |
| `gUnk_086FD240` | 44 | blob 0x70 | `130` | palet | 272 | 480 | `210cc474eab5283ae3359b2c2d3e77f98d1a18f9ba3629c10d9ce73e8c863b68` | `9d5c8656e65bf6fb451ceec4f0d9b55024168413234c1303695a09bc2d6e037b` | opaque |
| `gUnk_086FD240` | 45 | blob 0x70 | `231` | tile | 10208 | 32768 | `2e1245512ee3c647eafb1f149a36058c1e3066078f8f12d9735393cd7287a3f9` | `a4a50c7e63159df88dbbb2cacf9f276cdfe32995a0ce7419f1ed4c290499f2d5` | opaque |
| `gUnk_086FD240` | 46 | blob 0x70 | `000` | palet | 144 | 480 | `6fb3ef79645abb636185f2e8b358ba7214421c1261066b7f2017a06bb6ec9f90` | `b76c95f339f224774dfc514faf65854a9d35a5cb820eb3eb544d2e5f2e1343f1` | ok |
| `gUnk_086FD240` | 47 | blob 0x70 | `033` | peta | 448 | 7200 | `26f603947ec41dbcbceedf8893bb82277e7124960a1d5e4a0178fb42c5746707` | `beb8265052461f0dac030558025e10b9b6c0e6a459e8087ec13c071e20295c6e` | ok |
| `gUnk_086FD240` | 48 | blob 0x70 | `133` | peta | 432 | 7200 | `15e6e2587df38495567c7c7c6a77cd6bda56e9a11d4b3d4f82bcec18283b51b6` | `254042808eec18c29100a2f5edf9119ec6eeb207a6a2808471d5b81c74dcb876` | opaque |
| `gUnk_086FD240` | 49 | blob 0x70 | `133` | peta | 176 | 7200 | `223ed50c3f85a422fac66e6ba0062dd4e349b218a2d99e1f24e071bceb793770` | `1a6f27da524a954bf855070a46929ff677db3aa3328732b5ae230ad2f8a85184` | opaque |
| `gUnk_08714A30` | 0 | blob 0x70 | `030` | palet | 160 | 480 | `00f24dd083bc5f9435eb7f7d90069b8612b7eed34e0ea5c92cd701d312fabd27` | `19297f6d026c99f1b4cbe7e1c53661d9d45ff861e1ebf588b6042a0ef0c8ac0a` | ok |
| `gUnk_08714A30` | 1 | blob 0x70 | `030` | palet | 144 | 480 | `4fa39479e16f9f5fa785c3ed2398b9d0a7609c01fa975f08135422d97a75f3ae` | `285efd5701af4c60604c786828f1cc831df7d6ec1a4ad99e3e50abeadab3bbaa` | ok |
| `gUnk_08714B60` | 0 | blob 0x70 | `030` | palet | 140 | 480 | `5eb927662660f0d053ff96932a55a32658ac34bb0ae76c87d5b43b71c21d6d09` | `41dbde1f9599e8adfcb84ceb1ae5e414d8c5abd61c7a681f902d25518d1a1884` | ok |
| `gUnk_08714BEC` | 0 | blob 0x70 | `030` | palet | 152 | 480 | `c5aeb9ec2ca0b5bc83592337aac82c03f2900dda98f4cb9c69281e1abfdd6af5` | `d5fd0b168d5d1d94f0f8418069e562e8729749e9cbb528993a116ffd54aadd39` | ok |
| `gUnk_08714BEC` | 1 | blob 0x70 | `231` | tile | 7860 | 32768 | `dcfd89a056349a5ce9b666dee9b6bd64a3f0c3c665f7847d208b744302de9b5b` | `668ad4a8b2f21cbea0d30c951b28f8c078e077f0d520ee3090498456c978a037` | opaque |
| `gUnk_08714BEC` | 2 | blob 0x70 | `000` | palet | 136 | 480 | `930f457ebea416807158558f004631edd3915e00bb5b736e4960afbe4bca7a51` | `631b392d569e25daa4e117bf516bf36ab8ecb3768b4f24e7ea71dc81adccbfd3` | ok |
| `gUnk_08714BEC` | 3 | blob 0x70 | `133` | peta | 356 | 7200 | `f28474b5ce045805233c5648afd4593ee85a7b640239f41a689f82923928837a` | `d7cf4f32f7d499ef4671a00c0e796c97a7a85d679ccba14d76612239e2e62ece` | opaque |
| `gUnk_08714BEC` | 4 | blob 0x70 | `133` | peta | 424 | 7200 | `c0d4a6194fa1a765c235692be41060cc9c36e208a0b55e1357fab227e543792a` | `37a4024504b1ef5936506aec178fffbb1ca89eea4b174774cb8c0a6d2ef6a40b` | opaque |
| `gUnk_08714BEC` | 5 | blob 0x70 | `023` | peta | 184 | 7200 | `c950f254bfa86792b181ccf93cca384eba99aa79b9b4a86779ef100471b6dc74` | `f7e82d45e1e0a19954a0931ec4c01f5d378b94cf0fc10155a825c0da176bbccf` | ok |
| `gUnk_08716F84` | 0 | blob 0x70 | `030` | palet | 148 | 480 | `469868d4995c0456563d88551a12a841fb82bc9f2769063d049c85f31ce409af` | `f31cfa8ebe4b13fd9988fe79938c008a935b40d3a45a61f59558b48621d3eee1` | ok |
| `gUnk_08716F84` | 1 | blob 0x70 | `030` | palet | 160 | 480 | `5533a637a6798b516af2d7874bdb1553c340fc1f85f3e69a5e429ad4f2804a90` | `d1fc49a09b61ac0169ec229378c6cb7b1a04514d8448994dc4135b4d46984113` | ok |
| `gUnk_087170B8` | 0 | blob 0x70 | `030` | palet | 148 | 480 | `65676eef9bc7d520e1c5250ef75d5974407cf72b977e5f1e9818c4d36c2ca4fe` | `c34f14059e32c92196f429e6cce18fb586a00eedf487b15555908410775c6184` | ok |
| `gUnk_087170B8` | 1 | blob 0x70 | `130` | peta | 440 | 1680 | `10bb923f9a5e52c3af92414790023f3b5c28d07b2b89fc370870d39d9050ce84` | `76425f9635f0da81d3419a3120940d3ab89ceb3f20e18b881a543899af3eee73` | opaque |
| `gUnk_087170B8` | 2 | blob 0x70 | `024` | peta | 304 | 1680 | `75b8fb02319526ab71817b3c080d9800e7331643f709ffaa3dd7366d6591686c` | `38ab9260ca219bc8d7a7f085ac108fe6e1f4dae462af66d956770fc4b4ee7603` | ok |
| `gUnk_087170B8` | 3 | blob 0x70 | `023` | peta | 160 | 1680 | `8ff14bcb9818c544c0ae025339da4ae7802ec2ec502cc9438f6a3353fca548e6` | `dd6bba76915b87d4d7545fd77095cd98ce8a6cee3f3bd5ac2d95d45bfb7900f0` | ok |
| `gUnk_087170B8` | 4 | blob 0x70 | `130` | peta | 148 | 1200 | `04b9d459a63414b81bbe8e32a0bc20894fac407a8c2d6f5058735d83a1f993c7` | `adcb8c1f9571e7493938fc05d025e075b728e1376788a9b9d2ca1c2ec0ec0273` | opaque |
| `gUnk_087170B8` | 5 | blob 0x70 | `030` | peta | 72 | 1200 | `553f73c9397158499ac2679427a2c28f3a4cb5c70bf8874142f5d2f0f9432f54` | `1589b6bf86c95e7ab178022e4cd6873ffa8661c0eda5276d463c22da11e19ad9` | ok |
| `gUnk_087170B8` | 6 | blob 0x70 | `230` | peta | 268 | 1200 | `d95f82af4cf8a74363f0c6d439d0064d6e90614ab49fc247b66186cdaca82159` | `8193444df9ede63c158c000e452f81faf968779f42c7e169153881f68ef04b27` | opaque |
| `gUnk_087170B8` | 7 | blob 0x70 | `024` | peta | 116 | 1200 | `43dd27faafb769f1420c03254a5fd8aed229fe3722ae42cd2252713b84bd400c` | `9c7b090711763f013dd6cce9a93194d2c9cedfce4a55cb55643dc3bec03d44fc` | ok |
| `gUnk_087170B8` | 8 | blob 0x70 | `130` | peta | 548 | 1200 | `289d7be64fb673e75d1da2926a8d040d825dd8c3c9cb5b20f7f2dcb53699bafb` | `bba7ba04c877d6a0be208ae3f09fd6c0ae35fd9f7d2030c9f65b464e0bbd1323` | opaque |
| `gUnk_087170B8` | 9 | blob 0x70 | `130` | peta | 236 | 1200 | `0be851b49df31f6b87b1b0d38633ecd1a0b61eb7573e0f0ecf2ed7eea7278842` | `c5713f0f99742ad39651d392844c5a79728467f2bdbf74b3ad1dd6d7aebb5693` | opaque |
| `gUnk_087170B8` | 10 | blob 0x70 | `130` | peta | 484 | 1200 | `1e6dd16888233affa1b658efe2a2d0449e18ce04919f0be3cedce53243a7de98` | `54275be526a29c7056512655d117167540ae965623db98770591d4c091ba99e3` | opaque |
| `gUnk_087170B8` | 11 | blob 0x70 | `130` | peta | 204 | 1200 | `5b4d4d812bcf0ddeb8e9ed12aec61085c493915f708f052f433083c7983692bf` | `d27165562525cdd746820b5478d27e9b156d5b036050ac6791ab0d4b8c79ea50` | opaque |
| `gUnk_087170B8` | 12 | blob 0x70 | `130` | peta | 372 | 1680 | `95f8b1701cb804fb385c342429544222fc940ed93d253b045e0b96e4b500f767` | `1d28805993a17a48b14371e3352dd88aadc5079b5633780f54b6499890c098c8` | opaque |
| `gUnk_087170B8` | 13 | blob 0x70 | `023` | peta | 420 | 1680 | `d12dfc1426f4e67f54a5eff600399b504624a29dd89f54cc4947829672fcc44b` | `9e4bc1a3ee44976955e03c9ade5367bd946aceb3cf22703966112526d4743f37` | ok |
| `gUnk_087170B8` | 14 | blob 0x70 | `024` | peta | 216 | 1680 | `9a430027081492cfbccad7560f5922e75133aef47f8decb3298a93dcaffa8b5d` | `590c9abbd81cd7cf1a610dc529fb331883264d551f374c074bcdc9d7c9b99326` | ok |
| `gUnk_087170B8` | 15 | blob 0x70 | `231` | tile | 10744 | 32768 | `4eff297dbe1f1d669f9fec70ea0dbaa2847cfd382c326aa15b9eb97306c580fc` | `d441f07e2ab7332fdf66cf0ee294616bbb423e5e7aa92507beeb936699824e93` | opaque |
| `gUnk_087170B8` | 16 | blob 0x70 | `133` | palet | 240 | 480 | `2e9f416fff053999817f0cb711ac96471607fcea6b81ebce9278d4c346b5caa2` | `02cc25e5e6b9955097c65298ca265edd2922623ad5a3e2bf68b0e7b17597d14a` | opaque |
| `gUnk_087170B8` | 17 | blob 0x70 | `130` | peta | 612 | 1680 | `2729c195dcc7272b7d82506e4ff904d88aceca1be40daf71f9f17ae670c828ee` | `3b490dc82c7be749991b75f49d1945251cb0a222197b1043bbccd219970f6dac` | opaque |
| `gUnk_087170B8` | 18 | blob 0x70 | `023` | peta | 344 | 1680 | `2d364fef08bca697087aa228ad91dd3877b185e0fec2f840c0cc70badf6b463f` | `a106d7e5d19782a3dc5f169e940b0c9b49ab7218e5852671ee5c17b507999ea6` | ok |
| `gUnk_087170B8` | 19 | blob 0x70 | `133` | peta | 260 | 1680 | `f92b4ab3b3862250b89c69e5035f4fb36cec20affb38085ad672b9114dd24a18` | `acb433e3bbaa33778cac0dd19c3d99606dfe977443cdefc313fdaca0df205d2e` | opaque |
| `gUnk_087170B8` | 20 | blob 0x70 | `130` | peta | 548 | 1680 | `d4cb14ad1f7e59009f099544fc2cd5cee8a19cd4cc3a661f411d5c9c8344402a` | `457cb323842932321f4c096ebe4d4c2d816de2a492d54fb477b80926d13a6d31` | opaque |
| `gUnk_087170B8` | 21 | blob 0x70 | `023` | peta | 296 | 1680 | `87d51bc220c16d9695b7ec01e920295cca1cab7b73ba6d46eb1fd2761e671366` | `756a2c6fe55ff8b0f30dc46e2c1af08e545e4d3018f98438fbfa206cca3de729` | ok |
| `gUnk_087170B8` | 22 | blob 0x70 | `033` | peta | 160 | 1680 | `efd93b678d4ae0e5f7ac0582bb8cc85de2232501824fba1e818c335dd9515576` | `9a3e3125c3b9b69cb367961f7e5ff01f5b13e8eb55b8933e837880ef8bb9662b` | ok |
| `gUnk_087170B8` | 23 | blob 0x70 | `231` | tile | 8064 | 32768 | `64fe0457a9e9ad6d7a8a7a9549db1ba69fccb5e517464b29ed5fd6691cde095a` | `f0a6c645cea016b1d06f883128680dcb289cd50eeb82e9f7c43553c37b04ef4a` | opaque |
| `gUnk_087170B8` | 24 | blob 0x70 | `133` | palet | 296 | 480 | `56994b31904d7ec6171914493b5797ce8fbb4787e7372f102094f8ad70957575` | `23b6874464fc4bbd7847ae6293993350e9f343dd42c21dd5bd56d5b56bb9ec05` | opaque |
| `gUnk_0872C5D0` | 0 | blob 0x70 | `030` | layar | 364 | 2048 | `4a034222fab9eb15c332549866b47b5a70630e77d7487e467323bbed970391df` | `a9f7155d6178589cd19869456ff854e9ee42167f5a7a22c7e3c79cd60c0495b3` | ok |
| `gUnk_0872C73C` | 0 | blob 0x70 | `030` | layar | 272 | 2048 | `2595b4633ff9a09552ec2f7b536955ab0f4413a6b39fd5214fc3e3ee643d539f` | `9fcc19fcff64d5b8b61c9575de819affab6b5669206b5a34aa7e13ea1276ff58` | ok |
| `gUnk_0872C84C` | 0 | blob 0x70 | `020` | tile | 3424 | 4480 | `b7de5bf092453b35a902335d3b954614dbf5534a937363dc6ae48bef6f6d20e7` | `f673709f5a15ccffbbfb5df9c4398e575c561de15ccc8300c7fefcf391b1fdeb` | ok |
| `gUnk_0872D5CC` | 0 | blob 0x70 | `030` | layar | 100 | 2048 | `aec067a08ab56caa943a968bc88bda8e1da338318eeb6ffcfcd77fe7d3a517e2` | `09e809ffcbdc5cd9b4eb82bd167e0a2f791bdacb57a1961b95e139f60abf94a5` | ok |
| `gUnk_0872D630` | 0 | blob 0x70 | `030` | layar | 168 | 2048 | `39b62dbb753ae0c2c8872d650eb5c1669c7dea6ede55dff95fb29e8de4c49493` | `7640ef753050270f5871b98d95b267e24ace0ee7993715047f29075eabb3a5aa` | ok |
| `gUnk_0872D6D8` | 0 | blob 0x70 | `020` | tile | 1804 | 3776 | `514c40d61f92f92855d8394ac5173fae6056601920e461c0a3440678fcb56be2` | `dd2fbebff93bd016fa9ed8bcfbe8443f7e10750ee703b6a74691f0fb87a0e9de` | ok |
| `gUnk_0872F11C` | 0 | blob 0x70 | `030` | peta | 160 | 384 | `bd33e16fade336e624dd46573117ceecac9c5db381af677e0c47181eb4f31db5` | `f1126f81a5b4ce62bb7fc66ec60110f929c8831ac17993f246400e5441764c36` | ok |
| `gUnk_0872F1BC` | 0 | blob 0x70 | `020` | peta | 48 | 384 | `da7be21c1d4e45d9563c51ce1e90b7d3a3f54b0e5aee32f6e3f12711d4541f67` | `0b8717ad94ae40e3e822417e909b61a71c7ffbfc966aec343e8cda6a1f400bfb` | ok |
| `gUnk_0872F1EC` | 0 | blob 0x70 | `030` | peta | 48 | 384 | `57a7894247e1ea27086387ba74ef20a74e290a5ffa96b335c7ae80587dcfb0d3` | `d0d426dec266897fede15e869c26fcbf5de3352cb90fc3edba959ef5ac4dd071` | ok |
| `gUnk_0872F21C` | 0 | blob 0x70 | `020` | tile | 2176 | 11456 | `9f24f2b35674dbcfd5d50880bc606e14b2346d8cee5ad71ef793d9c6102aa910` | `1c973dde3b5691265de3f113103517583fe122254b43d549c1106010e646a473` | ok |
| `gUnk_0872FBFC` | 0 | blob 0x70 | `030` | peta | 56 | 384 | `d9baf01cd0809529aac6f842f16f8e26dc4f6890a4fd34ff90827a9a3289e304` | `75a4c0129e6c7f9c123956839acecf6314353b01d7a0712ad33ed018127b8fba` | ok |
| `gUnk_0872FC34` | 0 | blob 0x70 | `020` | layar | 568 | 2048 | `dac12010416069a87ce5c9a1cce09ffea27752538ad96b3d852067f4dfac2ff5` | `73e1c04e3f9622a7d78a399e425ed516d6710b372836b29e302fe5228d91df99` | ok |
| `gUnk_0872FE6C` | 0 | blob 0x70 | `030` | layar | 140 | 2048 | `7337a182c0e3095afb5c988987362f741f3f00349c5695770114ecd67c07490f` | `d764a85f2be59aadc57a6af5e3c1a1b23d7b50e17af591602da0668c67d94853` | ok |
| `gUnk_0872FEF8` | 0 | blob 0x70 | `020` | tile | 6728 | 29696 | `2888335b90c9eb97f6070deac4405a291ada4de4bd88808231aaf5177caf2b0b` | `2009c6811a8e0d65e84ac9dd2301fdecad4273a43655203b28d8d548e613f816` | ok |
| `gUnk_08738AD8` | 0 | blob 0x70 | `000` | peta | 496 | 1280 | `91bd413189c1ab2f0228d4be27761f7c8ac8ec3f2a7e523a389615435ad86473` | `9c41b5933668015a6764034d784dcb83c04882e4bc7c9bd33fea10cc2c5c4fea` | ok |
| `gUnk_08738CC8` | 0 | blob 0x70 | `030` | peta | 40 | 1280 | `e99f913ef71767ada07d4b3455c2db321462255152f113cb8034468a2c7068bb` | `9ad20d67f09cc5e3562a1de29c3ca988525600978d35c1b5d22d14c8c2f1e324` | ok |
| `gUnk_08738CF0` | 0 | blob 0x70 | `030` | peta | 44 | 320 | `622b6f0b4a161985f29b616e03344dafff33b4bad8973617e255b0661d794544` | `a18b68486e22b435aafa1ede5d0043cc0f92bc55815745c9de8027f8a2aba945` | ok |
| `gUnk_08738D1C` | 0 | blob 0x70 | `020` | tile | 3240 | 10496 | `00ae8e164ffed10b091e6f86a32ce83721fb96d9decb4322f0da99ba13ed34dd` | `de5997db9603377c0ebc305533788dbd83f361e8e1cea417c595728be3efbce3` | ok |
| `gUnk_08739A64` | 0 | blob 0x70 | `020` | tile | 3204 | 6144 | `9733403deda667c205be8ea11546d2ab5cedae90edcdaea941b4d5d9f264fda5` | `93df782832d26fef1111a685f2f42e9b04e6e2b40fc4e1cbf7c848b38450d115` | ok |
| `gUnk_0873BE24` | 0 | blob 0x70 | `030` | peta | 292 | 2048 | `a5c3faa1c11cf14203e9b1c160fb5c0875bfa23794ecf52f509d22300ac81d78` | `aa18914c7582000f91968a014db486903a3585ea56ac1c1a8042c1b7e7d6b92f` | ok |
| `gUnk_0873BF48` | 0 | blob 0x70 | `030` | peta | 168 | 2048 | `00b085c337ee564a9c72e662d248a3c29c8d416260ca9c40731b17d3248374e1` | `6d5f827c1fa10567f2e3102d892c6c4e72df000aa93b0c64b6ca3887e489bbfe` | ok |
| `gUnk_0873BFF0` | 0 | blob 0x70 | `020` | lain | 3076 | 31714 | `e6ba93b01f0de684fdf5da3426be7839d6c4f63afdbb91c9d7205bc2b0d4a477` | `d31736a676632d24eb466fac5022e58e80052536dd062c1b4d9c44a3689e8d56` | ok |
| `gUnk_0873F3C8` | 0 | blob 0x70 | `020` | peta | 524 | 2048 | `902e14a2e67444406453154a024354dd123f98cf43b3727d581f18d309b75754` | `c52c156936e7f8b5183b589892a1fc5cec2dc3d59a244b468aee864ee3f2574d` | ok |
| `gUnk_0873F5D4` | 0 | blob 0x70 | `030` | peta | 216 | 2048 | `2d2dc503401f40779d0a48e5159aa5579ce3a758743de40421dbc129781e7637` | `e1869d27272131f35f0532bd722348f31a9bdf5aa47aecffc2f76112c91b703a` | ok |
| `gUnk_0873F6AC` | 0 | blob 0x70 | `020` | tile | 2616 | 3712 | `623caa9aa86e390b37e326096a2214be3f8b10060e0b08c4c6ec9f68c5e97608` | `abc849fd0d522032f67b05d7536365484b9ddc4391ab075842406e8c3b3373cb` | ok |
| `gUnk_08743058` | 0 | blob 0x70 | `020` | tile | 18876 | 28160 | `f0c828f16cafc75c3b277841bca74d1b7f62bbdf3551c9b591103c0f46213d4f` | `ee0ea9e581dab0baad7a55f2eed3c44dbc63518a2a5b8da5f79d4ef03d0b91c7` | ok |
| `gUnk_08747A74` | 0 | blob 0x70 | `220` | lain | 10084 | 19468 | `82c85aa740e76fa0b3266746c1031c0532d08b458b87a70fdc271206b33cfeef` | `8e73d527aa1a7f905cdd1d4068bf4add642190baaff989b3a1b3be2106acd9d6` | opaque |
| `gUnk_08747A74` | 1 | blob 0x70 | `130` | peta | 988 | 4096 | `f167866036a1f93fa0f50f4de35b7993288f58072696f7688c1cf6df7907e102` | `a76657f0bf995f09096f907f066c56fda2cb9c3b42ca7df2aa065e8edd814c27` | opaque |
| `gUnk_08747A74` | 2 | blob 0x70 | `130` | peta | 540 | 4096 | `400e632e28a4f136fa5a4e90be8ed9a70fa9a47307fe7148ba84e9f515a1fa33` | `5cda955564394712926bcf3c30a61024fc3de2ac773e87d98879cbe102653098` | opaque |
| `gUnk_08747A74` | 3 | blob 0x70 | `130` | peta | 244 | 4096 | `afb864a31841748c41f21a1f2116ab90f63ce4b54aca947e659dc1ed3336d77d` | `b791b37625bf92f75ed0c8e3bd7e9f36244e19d4468abbddcf6746dbbbcbed4e` | opaque |
| `gUnk_08747A74` | 4 | blob 0x70 | `130` | peta | 252 | 4096 | `0f0601adb539e95b18ff220cc2c83004fd2524aee90ce74a92e61afe035ec402` | `d66fd9f599b7267dba22af4399ef83b89be62ebc94e6954847da0c0f7565f52a` | opaque |
| `gUnk_0874A9C0` | 0 | blob 0x70 | `230` | tile | 14704 | 32768 | `20269c8c8acaa2cdfd0ec72cacca882ec6e21cda7e2abc961b97d62626ac877b` | `50373093e3e4a2918155156d6833cc011a341b778d3c22a425b3297f434685eb` | opaque |
| `gUnk_0874E648` | 0 | blob 0x70 | `230` | lain | 1272 | 11234 | `40a4339338b7d0a11335c325d697c1f9971bc5fdcabf1ccb1883ccb22e44ec87` | `c09256318223a0e9426de884531ce30264ce77b4a904e5559e2642e4a6de37ab` | opaque |
| `gUnk_0874EB60` | 0 | blob 0x70 | `100` | layar | 364 | 1280 | `331374d3ef973dff24a3200e367593fe6fbaad92c8ab0a2a7c49aff7241f276e` | `1c02e431a081ce22f99078ff5002b37025940cc611be39ccb9539732b5d33f90` | opaque |
| `gUnk_0874ECCC` | 0 | blob 0x70 | `130` | layar | 364 | 4096 | `75d5bddfe3c45bfd96b145062a0cc929e4c4fa7b2b1127a6f7217cf17fafeab9` | `d98ab606b25f20a431c0f3df13c35d6611c32667060dc4eb3b1a2b20914811d5` | opaque |
| `gUnk_0874EF14` | 0 | blob 0x70 | `030` | layar | 40 | 1280 | `f89eac66fe9bfe4d66b2540a85e31a01b689315178f0e6381a7a3e53357fa2a5` | `ef4a820e5599b2b106ad62b707fb902597f0729912abd6dc49dd634b4e112395` | ok |
| `gUnk_0874EF3C` | 0 | blob 0x70 | `020` | layar | 176 | 1280 | `4713bef027f8a799ac01398ed175f9dc6d9c6ec3601cd1a199e553bc21da4d31` | `9276f3222a68cffb906f3e120dd099540ef7e9734402923a45dc9878f473a5ea` | ok |
| `gUnk_0874EFEC` | 0 | blob 0x70 | `020` | layar | 100 | 1280 | `2be4fe990176fbdce9ceda3a34de17f25c5864b6b433e681733fcf0d850ecee6` | `21780f011d60eac907829059da63f704d8282e56f7cdfe1fd33ea85e89539e4e` | ok |
| `gUnk_0874F050` | 0 | blob 0x70 | `020` | tile | 668 | 5120 | `affe9000551cfe131462a85c89847ac8d7909a7883a8201e3109a5e577fdb54d` | `58ec8432846ec97a8b56ae6b092292389b541d800573be42e2e7bd451135ae4e` | ok |
| `gUnk_08755848` | 0 | blob 0x70 | `220` | tile | 8856 | 32768 | `fbe7362cf81e9965753dee43f108c033e3e0081e8d79207e1f44f39cc98e1f9a` | `e53686f0fa24cf092c18387da6b437bb6250d3a517691a067d6217dbe4c1baa6` | opaque |
| `gUnk_0875822C` | 0 | blob 0x70 | `230` | tile | 8492 | 32768 | `77bfcdfa8918452edf8fa69de854011016f7447fb417468488565aa953a97672` | `bd8c727ca1011d1d02e43c3e471616b792a628de8adaa9b77d11d0ce07415bef` | opaque |
| `gUnk_0869B284` | 0 | bank tertanam | `134` | peta | 340 | 1680 | `83ca1614bf37191548f2b7b11e52a72d0eaa9408074ad9ce390865ab56eb1090` | `fc8923054d1415d6d0417a270380f69732fbe7239fff7d1508a52ee0636465e2` | opaque |
| `gUnk_0869B284` | 1 | bank tertanam | `024` | peta | 336 | 1680 | `8d4d66262bee39d9911aa70dba71aa60465aad3bfa8b98f6cf0043461988ae7b` | `7a6f5bbe9dfebde05406c6c2beaca6017a5bf9a96a4106702a465828ace04999` | ok |
| `gUnk_0869B284` | 2 | bank tertanam | `130` | peta | 212 | 1680 | `7fc85f9aec9206229ef031ef97bc5d4f3d715959e54315c515a1772c2cf5d765` | `463f4be00942f4237152181c59acd93b48b9fdac491aff7702af5306893f7152` | opaque |
| `gUnk_0869B284` | 3 | bank tertanam | `231` | tile | 15280 | 32768 | `5a9f1a08b4d69657275bfe3bd746a2c327d1e52c40963ef4908ea838080bb7a9` | `837907154368deb4d6f5b16d5b955bcf522e09bdf9eb04d374cdec99b3a20d02` | opaque |
| `gUnk_0869B284` | 4 | bank tertanam | `133` | palet | 244 | 480 | `7506363045e33ceb09df29b0bf991a8edfa1f9355a07c65fb9e68dac11a127dd` | `722d328e6bf18e75dd3adef5ad76832f86ed143c94d6301deadcca247c8522fc` | opaque |
| `gUnk_0869B284` | 5 | bank tertanam | `230` | peta | 1964 | 22528 | `7bec6dc1d1e35109dc42ff12d6437a06ccf9f38c0ca088e9f652acca003622f9` | `d063e29007909ad0bb1d53620803ff6338115adcd3625c5f1546eda282e4005e` | opaque |
| `gUnk_0869B284` | 6 | bank tertanam | `134` | peta | 1160 | 22528 | `9943588dc4eee2ca30ef257923ceae3adc8eb5c444baf0700630ae7a39cca15f` | `27231c6b36d60bc7e5d2f7f271c7e208aaf21ded6ff04b9cebfa3420369777ac` | opaque |
| `gUnk_0869B284` | 7 | bank tertanam | `024` | peta | 144 | 22528 | `ec982bcba60e986a3473b65613844f6b3b5be3d7198f2969ad1c9ac312cca053` | `af35b6320eee2b42bd19db07bf6ae30800cb798b2f74871e0a8998c87d7c8725` | ok |
| `gUnk_0869B284` | 8 | bank tertanam | `030` | palet | 244 | 480 | `dc42b42a873437a5f00b388f13502790b6800f87a589b93343757bca8650e788` | `7fc344d3041fcf7ee08b38d0f2d9b72a2534abccc106fae0e96f1c9b4cf657f2` | ok |
| `gUnk_0869B284` | 9 | bank tertanam | `231` | tile | 15804 | 32768 | `004fbb918a3684e56a0e09a4282a5c163b3c88378cd9da83bf516b5f09bb92a7` | `91d751aeb371c2278c14971d3ccdfee8460d572da90b12a5d057b8039ddb0e3d` | opaque |
| `gUnk_0869B284` | 10 | bank tertanam | `030` | palet | 228 | 480 | `db47ade32f2844fd70bc30b15e0ba90edcf35b92df808cddb36cbe9bf5fd9b4e` | `fe9ea280a927632e83dc2ec302f57f3818baadec37b49b75f7b2a042927a90b5` | ok |
| `gUnk_0869B284` | 11 | bank tertanam | `230` | peta | 2340 | 22528 | `509327b1f1be4f12274f0883eec2eef84a391b2d6c32aed9c0309f677a44b9a4` | `22fdba65f5a2e68bdd6293747b6a0476ce564f9cecc0891b7af73ac5992dfdc6` | opaque |
| `gUnk_0869B284` | 12 | bank tertanam | `134` | peta | 1204 | 22528 | `afc2e19505688ffa323f05cefe1f711d1e071e02c2b7903cfc779df6ba9930c6` | `85cd2d3c5db5908687c6525cd2cb7e793348b6ad9d6ccd8c6e8c1e39a36b7216` | opaque |
| `gUnk_0869B284` | 13 | bank tertanam | `024` | peta | 148 | 22528 | `acfee105c75b60af68bd0431157b4db1bba41c6c7be9927cd7854c0b46894d58` | `c33f635bbcce334450c810677f42fc61d5e6e85b71a1d4d0e466a651b60f7708` | ok |
| `gUnk_0869B284` | 14 | bank tertanam | `030` | palet | 212 | 480 | `4217e17ff3d62a998b4db566f119e9d7ff5311d01345d1770f5dd3928fa1ea96` | `2ee6d9552637003ec42bf6d51913c6a51095e52f3cca62f872a7b613838e01fe` | ok |
| `gUnk_0869B284` | 15 | bank tertanam | `231` | tile | 14716 | 32768 | `78d8eb90cf78d75938d8670a206104e1257655f79351c3a01c5f1bf77fce987d` | `2c4f1b76c1b4ae59aaf19742874799578714b738e0e6e2bd93cf5041dee0cb41` | opaque |
| `gUnk_0869B284` | 16 | bank tertanam | `000` | palet | 204 | 480 | `680554bfbe1739b9ca81aa6dd2ebd587decb53808501e5d48b6361320e01046c` | `fd88c1b1f38ba9ea12992fa9b4a00b2b47904c71bf2af893771cc099e10df405` | ok |
| `gUnk_0869B284` | 17 | bank tertanam | `230` | peta | 2688 | 16384 | `1c6719d68cc73323b4ec81b4e8794f54dca9c1a7c8b3f898ae5e8b5016a007e9` | `43688575d60b51b5450f0a8c386fbe490312751718bd852bea03e2b7df294571` | opaque |
| `gUnk_0869B284` | 18 | bank tertanam | `134` | peta | 1784 | 16384 | `0e5e77deec6ee21e33a1e28e80377fab824c2a8fb7a31c6df07498a0b377b88f` | `491313fe10c4e38a402edce7e0a4f22ebde5b1513fbfee309acd36fcf38e056a` | opaque |
| `gUnk_0869B284` | 19 | bank tertanam | `134` | peta | 1352 | 16384 | `98bb2c32074e9233ac414c2961d4609fa130f232012f63cc7f3afff286223a9d` | `307d57a2970987b909b29e662664135005f81d97e7bb97537e90b3559cefbd4c` | opaque |
| `gUnk_0869B284` | 20 | bank tertanam | `130` | palet | 188 | 480 | `ef5102be5980bd9f4b70d620bdaac2b1a23e2416197b135dad7fd2d6431085eb` | `e99b1e0cc97f081dda63aa0fb5bab74e5ea1615ff333998af9de710452175f0d` | opaque |
| `gUnk_0869B284` | 21 | bank tertanam | `231` | tile | 14680 | 32768 | `f5f9ba09ac9687893daaa441f1eb1161f6795a8d348036cb54badc12b39b7d86` | `c9c71ced820a67d6917aca479b460baad508bad13d06bdfed4e8608db2e5c1b8` | opaque |
| `gUnk_0869B284` | 22 | bank tertanam | `030` | palet | 200 | 480 | `7ce8dfb8b89af6da7469cf1190abd6bc890564222065e46efb420f691463c697` | `a72810b27bc5e5f7eeb07166533354133b602cfba8af8d14525100baf66c44e8` | ok |
| `gUnk_0869B284` | 23 | bank tertanam | `230` | peta | 2956 | 16384 | `9aee427c70c33c055735cb4878155f0cc06f3b8de5bc42a405aadf7a661b34c7` | `250706b0224e1b6284769a3e650980be4d75832ea355fc49f28f7808003b041d` | opaque |
| `gUnk_0869B284` | 24 | bank tertanam | `134` | peta | 1632 | 16384 | `987b17ec315cad00cb9560ba88e433475bbfa6a02fc12dd264d3b949fdb09349` | `aa5941749322bc0f62ae50a4bd76feb6365fa51b44bfaad32b9bceb2808a2a9d` | opaque |
| `gUnk_0869B284` | 25 | bank tertanam | `134` | peta | 1336 | 16384 | `565ef0f728dc76ef10ed4c9e36d245f974a068e1294adcf0a95f407df46f7cc6` | `adfdf4ff40aece86dace04c8e26dbeb6c8450628946618550713fc2662331e28` | opaque |
| `gUnk_0869B284` | 26 | bank tertanam | `030` | palet | 184 | 480 | `a5c2070827d685f707a6a8ec4e98721bf32468fdc26e4df433c84ac68a03817e` | `90a6af0db1cb6578d899744842fda2d1a80c1c1c650104c75bdeefff94c0b00f` | ok |
| `gUnk_0869B284` | 27 | bank tertanam | `130` | peta | 500 | 1680 | `d0285ffb300b61671bdac9fecf9cb4cb91ab70a2417b20149bac196b0b1c7e8c` | `8f6377092e801f632af6e13b73a0b25af84488be29db14d30538185564c32cc4` | opaque |
| `gUnk_0869B284` | 28 | bank tertanam | `024` | peta | 444 | 1680 | `b85476eb75c9aa4590f1e0f8b62f18ed4e444c61296330ed9ab53254d4b75bd4` | `01fdf31ebbae92116be8dbaddacf5007563cacf1d8f9bf315b29c8c7e4f42794` | ok |
| `gUnk_0869B284` | 29 | bank tertanam | `134` | peta | 204 | 1680 | `cece032291f4e1650af2f018506fab756165b051f9320c78cc6d8a35477d24ea` | `dafa76121381d68e0b3c94f1824f55329ac3f825123de96b4547fbdde29d9686` | opaque |
| `gUnk_0869B284` | 30 | bank tertanam | `130` | peta | 460 | 3024 | `0d43839afd05e4308313174bcf5d582db35bed78b9f96f14576bd60dea66c82c` | `6473470bc15160e148392771c9c2561692f1d39ecb28d591aad7f17899b03808` | opaque |
| `gUnk_0869B284` | 31 | bank tertanam | `023` | peta | 448 | 3024 | `4ec25ae9472143df3a123cfb1a0cfcc460720d7b802018ed3370db2fc966a3be` | `0ba7993a5f423afdd3e005ef19a38444e39af78d32bb9fdfcad5e4bb68977f40` | ok |
| `gUnk_0869B284` | 32 | bank tertanam | `134` | peta | 212 | 3024 | `29bd3cbf90f41798125a34e32335f6004d18fb76c09435fd6972c6d6eabb9594` | `e1528dc5e4f27c2dc675a8fc765c2a8a18859e048e51f5ed56bb8987562b302e` | opaque |
| `gUnk_0869B284` | 33 | bank tertanam | `231` | tile | 5900 | 32768 | `7c49791a814b20b6b03b108435e0fbf5164b1be8c3279d4943f489dddbbd2add` | `8ae69b589f207f9b957af12a4a5cb84f2cc67bc943cf4f1ec36e106c4a15f0b2` | opaque |
| `gUnk_0869B284` | 34 | bank tertanam | `000` | palet | 440 | 480 | `ece241fb3057753e528c279b754eb38231df79e3b74551111f2ab60785435b46` | `85774b298095c7d782b8b89c03410bd68b672bedd18d25c7f954573951f3a56e` | ok |
| `gUnk_0869B284` | 35 | bank tertanam | `133` | peta | 616 | 3024 | `43aafa126f7c11ea29ff65426d87615ce8fbb0918de7f1fa1733c9fcfc07fd0b` | `765e907041832b6aa01c4cfa284b1f7f2736c845f87ae0fccce920eb61cb8d34` | opaque |
| `gUnk_0869B284` | 36 | bank tertanam | `023` | peta | 480 | 3024 | `d2ebb0139b6e7039c797b6164764885979521a497b31fc04d9cfc9d240335dbf` | `e330aa28aa3ca7cf8669d07535cbb1d20cc5e8024d33927feb08bce83ca89b57` | ok |
| `gUnk_0869B284` | 37 | bank tertanam | `033` | peta | 276 | 3024 | `deb6a72879ced8854ab980b23e52cc168a68dd583431aa9e7ce1dae4af139f37` | `26c2955347ce4449981245c46a1c4aec6cb02473c40627de215bf685c0258c20` | ok |
| `gUnk_0869B284` | 38 | bank tertanam | `130` | peta | 744 | 2352 | `ae136a2de738158d0f993f0ad0453e41de414e0da14fbbeb3f3009bff25f625f` | `bda0030af366add589bd5cd38e4d55c69c844d316b536c0dd995d42485619f5f` | opaque |
| `gUnk_0869B284` | 39 | bank tertanam | `030` | peta | 180 | 2352 | `041d5bd48077626476151b9884b0bdfb6b8b62809df668a1c97c651ba24457b1` | `4e0272c5708694c1812fe68fe8f00990f29448fa9e8cb267f977c1ab397b7552` | ok |
| `gUnk_0869B284` | 40 | bank tertanam | `130` | peta | 160 | 2352 | `ed259b636bc0c4c666258c44bc37c1c130b6fd04704d5b8fb2765fad80665a65` | `ce1957918cf671c7e52ab0e8c5c54f40cd788d3c0fc0a29ef45185108b5a1e46` | opaque |
| `gUnk_0869B284` | 41 | bank tertanam | `130` | peta | 628 | 1680 | `ffaaa4829db8131c897bfe890806b33ba75d061301e3bc76e23175097e3fe3fc` | `36d3930c6b7aae34249139454919eaed3603e0506718bcddb645b7f90dcd9969` | opaque |
| `gUnk_0869B284` | 42 | bank tertanam | `130` | peta | 144 | 1680 | `5de03a743aa76ff4c612cb1890f7b31a839fba484a1f21962e71dfbdee552546` | `43a3c72feaeef0f0e8ab3b1e70c30fdaf8aafee4807c7b6cc09b927cc311e3b8` | opaque |
| `gUnk_0869B284` | 43 | bank tertanam | `130` | peta | 148 | 1680 | `ea09b057fac0e8fddbd9e44f743d16772c72d76d5c0bacfba106a598a1bb1e10` | `6a02075dddc04c04776376055f6be3dc8d37cef1c7ba47b4683d1adb23533720` | opaque |
| `gUnk_0869B284` | 44 | bank tertanam | `130` | peta | 388 | 1680 | `6e48b4194d9bee626ea1e9931a56b1fc6d19e7dc5b870d6084a430b2c8190bee` | `7567d6be5bbfdc143f3aaf5c48c9e0f27a75dca3cf15d206381efb7d4feb0bec` | opaque |
| `gUnk_0869B284` | 45 | bank tertanam | `023` | peta | 236 | 1680 | `e86727aed36fc40ce8bc9a5710b26ad77912d9944b4d09be8efbc78112c8ae30` | `db720aead46c5510b853c4b40c778df44a0644a9640b652526c75d85a736d6a4` | ok |
| `gUnk_0869B284` | 46 | bank tertanam | `023` | peta | 132 | 1680 | `a0e30f1bf8109d8d3eadbfdef75ee60ff1bc73033e8c2b98b5f178d2ffb698ba` | `85861cd260a659c6d8ba4dd6964c5a143d4063be4f38137cc9862900a0ed9481` | ok |
| `gUnk_0869B284` | 47 | bank tertanam | `133` | peta | 848 | 3864 | `34ff6d8ac7573138fd1f8dde57055e3d203cd39d4bb5ce00284de74b8a1fb59b` | `c7408b14040b9ca145593bcd5dd1370744bab18da236d10ca08d855a96c63b5d` | opaque |
| `gUnk_0869B284` | 48 | bank tertanam | `023` | peta | 484 | 3864 | `d5476b253646677abf8a537ea79d2ad433052d2bbf8fc47086ee7f21d6256131` | `55a96600a74f146cd8424f320931af791c030d2241458b34b40c7a2119137012` | ok |
| `gUnk_0869B284` | 49 | bank tertanam | `134` | peta | 376 | 3864 | `04296fdd7f173d189130a3bc6fecdd9e81a0cb30018e1a849028ff1be3996905` | `a27f8cd436f17b10c80525464ff8242774e627882626083d7738a17c49f102df` | opaque |
| `gUnk_0869B284` | 50 | bank tertanam | `130` | peta | 588 | 3864 | `39b4a6b31179a7f01343e1952cb10e881ec1f7cbf9ffaeb5ceaac5c8f4e7970b` | `f9f19282a23e805ca23b8b5c4362caaeb1a24263bb0ce8a4b59fe7cab1b21d17` | opaque |
| `gUnk_0869B284` | 51 | bank tertanam | `023` | peta | 588 | 3864 | `744447df8468b11e1bebfe50c764ebb71b5099dba183b3cdd30b6e43b86ca1ac` | `f60a2b2770427274fe4e351036d4c4edbe6096a5b0740b1c88503da458bcd2dd` | ok |
| `gUnk_0869B284` | 52 | bank tertanam | `023` | peta | 332 | 3864 | `98ac6cf4f9e911eea91c791e3ad9a2ff291b166e3346634de56db0b8db69f093` | `7c139176a8605b505e3b1c0a2d340e534b80ecd7bc20b925b90b775748279ac0` | ok |
| `gUnk_0869B284` | 53 | bank tertanam | `231` | tile | 14332 | 32768 | `8367edc9c56d60ae5418c5919a7cd532fe1b61babdbe4472c0610c9ac3e16f21` | `47cfccf16d41c0cf76dcaf937ded5aea22590a2d8b1bb8e6e791257fc46ee453` | opaque |
| `gUnk_0869B284` | 54 | bank tertanam | `133` | palet | 376 | 480 | `94d5f225efd7b977cef3c9300c5abc9e18f22935f6c86961f291abad73df0513` | `a75cad2f1e2fe122691eda7e08061f5022eb76cbc226883cc47da1c9901528ae` | opaque |
| `gUnk_0869B284` | 55 | bank tertanam | `130` | peta | 768 | 3864 | `b3cc1bd1d44f9d084311b2f49cd6f5b05e02c9a7813050a57f0419fe9dc49e4d` | `c45881de2ba99fb863cf46f1e4416ef6872296361363873d54ab8f5989bcb011` | opaque |
| `gUnk_0869B284` | 56 | bank tertanam | `133` | peta | 512 | 3864 | `0a2c061aaecf53207c34babc992c6b1a5cdfda034ebebd2fe6c3a4f3d6fe3190` | `16079b212d304102b0db1f7b08d6c1aaccfbcd5fa8a6b6258d5c61490c7039b9` | opaque |
| `gUnk_0869B284` | 57 | bank tertanam | `133` | peta | 300 | 3864 | `daf1d1fe2aae955528f19508b4afd20618082fa82d6a14a8b06e6b12dbf3a8b7` | `51fbc77070f75e8c039e7ffeb764421be5788c5387bb40e284a41f8588e3b7ed` | opaque |
| `gUnk_0869B284` | 58 | bank tertanam | `130` | peta | 776 | 3864 | `839c21741da9942698289429b9d3457367cd1c8cab61dfc9d3dc1c1f94e935fb` | `082fc41f1eebc55e5a2ad68abc7e986a1ace2c83a5b6a57908a59d9dd6c7ba22` | opaque |
| `gUnk_0869B284` | 59 | bank tertanam | `023` | peta | 772 | 3864 | `6b1b101815251b08352c0dd17cc079d49c0fa8b80a0ade5ce00bef561a94c31c` | `384d2f8f9ca5b78f7140173c812c27a8322672dd43f19e8eed50898772a7c242` | ok |
| `gUnk_0869B284` | 60 | bank tertanam | `130` | peta | 300 | 3864 | `5d7871e46acc444e6328d16dea3e1056000dfe90fed9badbe206d20ced52630c` | `3084ce8846feddd78ed389ffa1788fcb0ee944add1a3cd15b92e2b48a8778824` | opaque |
| `gUnk_0869B284` | 61 | bank tertanam | `130` | peta | 764 | 3864 | `11e0dad539c9be643bc5fcf232f2d8055c31a1e8b3f527c7e376c5d1b7c8279e` | `bf0daec87d0151ae876bbeeef5b44ed6ea8c5ce041c103316d20daa748430c22` | opaque |
| `gUnk_0869B284` | 62 | bank tertanam | `024` | peta | 564 | 3864 | `5b17a243f84f954ff4b612f743e5c288f319e24a3824531c85a8449babab1ca8` | `571eca74fbb2696fc815d775ebe18f8a45a81e9179457782cecfb13b61bdbf0d` | ok |
| `gUnk_0869B284` | 63 | bank tertanam | `130` | peta | 244 | 3864 | `d17e295a5515511371c64d1dc516dfb8f64ebce4f4e3ae4f695c58d1fc13d0f8` | `4b0f989c4bd4dfc8c51841e6bd702e9088f31af9db0cf88b3f97adc1c5ed9011` | opaque |
| `gUnk_0869B284` | 64 | bank tertanam | `231` | tile | 13764 | 32768 | `0d451bcb6ef1a6beb405fd051404ad3158330c77b64c752f220cc572d89a1a99` | `1323d433be9f1e74af7be1d5323b157fb3eb4e3ac48517b7e7771440adc9245a` | opaque |
| `gUnk_0869B284` | 65 | bank tertanam | `133` | palet | 348 | 480 | `8eff9b4d80f77fe7d7889a1161111e9074aea2a66f428bac7c5ed47631005f1c` | `67b2670df3d3880f00226699cf4b5c7a767e72d8f7f6b6c047cd18d32e8c8be0` | opaque |
| `gUnk_0869B284` | 66 | bank tertanam | `231` | tile | 6752 | 32768 | `73b0432723c567bb082ade6056fd384ee6989329e2ddcb2bb102537d93e71e46` | `63a2576b4735b80238ef244313219952cdbdc35eb2b025dfa0e79bc07f0542ba` | opaque |
| `gUnk_0869B284` | 67 | bank tertanam | `133` | palet | 276 | 480 | `17b5d99e358ad70e3feba18d3b2d5aaf0b1ad1957b951151b90e3e07e62957c4` | `80a20cfd30b6ea7a21829b319cda10facfccb5499fe5747d66bad428cfe9fb6f` | opaque |
| `gUnk_0869B284` | 68 | bank tertanam | `134` | peta | 440 | 1680 | `1df24693d798fa26ef410f17f2772d55dda5feede26a292298a3e0226e7b3086` | `1ed175eccbc404358da172359db14b7f14422a4207d8d3ad3c88318d16b2dbf6` | opaque |
| `gUnk_0869B284` | 69 | bank tertanam | `023` | peta | 256 | 1680 | `854dd23086a56eca9249d776428885e10905a97ab3dbd3a9daefaae912df88de` | `5c70669a8013a4865a201b42a5170e5e394ac672ae5a7bde2b42feb106bc20c0` | ok |
| `gUnk_0869B284` | 70 | bank tertanam | `130` | peta | 288 | 1680 | `bc31f7f271a2ed66cee7690ffef715ab56c4f57535b0848a95e9f15b83d1f502` | `ac38c07293e8a39d8c396605db10347aa186a710cd625aaa0fdc9967e034fb0b` | opaque |
| `gUnk_0869B284` | 71 | bank tertanam | `134` | peta | 408 | 1680 | `68c2cbc1e6b0c478269e0130b7e0e38690096bcb414b1be3dc06d3002d804426` | `53bd1609cdeef17810676bcc0a4faaed3ac4dcf48e1f5be37987413882c79087` | opaque |
| `gUnk_0869B284` | 72 | bank tertanam | `023` | peta | 280 | 1680 | `e54689839051ecc63178b21c0697a3b6aa68239233f57f878740452bd5a76119` | `8ff7934d9ca56b08b04121ef8fb573565fab1d7fd2b1dff68f1d964d0e5162ad` | ok |
| `gUnk_0869B284` | 73 | bank tertanam | `134` | peta | 168 | 1680 | `e373bc2e4fdea3fc444f87880cd717b11c8862b80377af567b47e899465f5725` | `0648533d96390b23f68f6f1007d5bed69046908e8e6746dd99d730e54891f670` | opaque |
| `gUnk_0869B284` | 74 | bank tertanam | `133` | peta | 380 | 1680 | `ae805f8377d80dcf833c6d5233eb5b269dc7ea9bf3428758087d3e18f0e1cd69` | `81f54e918a93a5437cd8ebe30ae8f1b36e1c669dbeefcfb778d965094fca9d98` | opaque |
| `gUnk_0869B284` | 75 | bank tertanam | `024` | peta | 240 | 1680 | `7c101b62187b5ba994af006bf7688dd802d606b8888ae1a40ac837acc68567fe` | `5a36176418bd8c8f504f5af43dc1becef7a3365c1957243e54c52d6b2ea9f079` | ok |
| `gUnk_0869B284` | 76 | bank tertanam | `024` | peta | 224 | 1680 | `774221a479f4799a6f7b654ba03e8da70c382fab70365bd9709cd7458eab1234` | `4ee2ebf73944603148378ba45b1c69c712d90a5484d2428cc12fe7e83d1fdf3e` | ok |
| `gUnk_0869B284` | 77 | bank tertanam | `134` | peta | 244 | 1680 | `9c5f1dea8ec56d9f5081986aea760fc2bffa437c3b7b6f5c385341ad809d467b` | `c791cfd769616c59e680cc6e7a9947ffb0b768e52d2ce8f478e5ad68287d6b10` | opaque |
| `gUnk_0869B284` | 78 | bank tertanam | `024` | peta | 256 | 1680 | `9d72bb003c89801317bd84d9c8bc37eb91575bbcb0798683b3f6ac77bcd138e9` | `4169aff34ae402cf567e52eea3c152d6c3b9e32bfe2248db587556df625dd9ed` | ok |
| `gUnk_0869B284` | 79 | bank tertanam | `033` | peta | 132 | 1680 | `ca748ad715d2cb723ae317658d53990b8fcbb6ed347fd1eff34725e366d8fb6f` | `f2a6cc5cbe0eeac3d159d1d0b49da09b1d7d3a23d4a22026cb2340b5082c9e21` | ok |
| `gUnk_0869B284` | 80 | bank tertanam | `231` | tile | 11480 | 32768 | `326156b63e659f9581bea6a35830c960b40246683b152193f2240ab2a7236ef3` | `6bc8eb52c167f496ae508becab8bf1595589d3a5b7b312cfd2428f7658a4a45d` | opaque |
| `gUnk_0869B284` | 81 | bank tertanam | `133` | palet | 364 | 480 | `d714ff7edd1b2c364136342f9bc51e9251b92d29c160da34675850eba52666f7` | `cff00b9cf2da1cd61e5484ba1d696bfcdf570e82fd84680f3a0f0dc3b4fd1380` | opaque |
| `gUnk_0869B284` | 82 | bank tertanam | `220` | tile | 4348 | 32768 | `3e5b5bfaf19d10867313326eb660325edfdf6c398d234b1452210b9287e47b6b` | `4c8572ddb8d4f098e5a2e6afd7f4047b458a7e252318afd748741d1462db3190` | opaque |
| `gUnk_0869B284` | 83 | bank tertanam | `123` | palet | 260 | 480 | `dbc039e816fd1a4fac92a54b1be1a7fa534db4f7ccad89046d4f1fa6cf915a7b` | `52e4b2ee7eef9056f547dfa9b6a4cdef9e9d934912a60f409d364efb4117c9f8` | opaque |
| `gUnk_0869B284` | 84 | bank tertanam | `124` | peta | 424 | 1680 | `ff00303f1e130932c0d8754f79b321690ffd8eb1b548ec61e6ad5a222c92d72b` | `a3c9d61bce0989cd711d45b7d062a910e6ce1d5aad8cc9b5a15b177dd8d4fb68` | opaque |
| `gUnk_0869B284` | 85 | bank tertanam | `023` | peta | 360 | 1680 | `b5d6361090e1d2e4b12cf8a7d922492537a7bf975464a6c12d84366ec3aafafa` | `0f85bbdfe6a670cc6f183d2936ed220fe646645d3a7d83a3afbe2e24a58ec573` | ok |
| `gUnk_0869B284` | 86 | bank tertanam | `133` | peta | 248 | 1680 | `fb2016ef6cc3e1d6fa5b0232fdba5a32349c90157f2ee256c6b9979858037672` | `7de9666a6fb863224090df16bfed625156eb070c97a9aa24b2baa3909fd87cdb` | opaque |
| `gUnk_0869B284` | 87 | bank tertanam | `020` | peta | 452 | 1680 | `f7a995975078a5b817dee533f429b9341012f92a7036063c01d45ab076fad14d` | `387f105eb20bb8961141b14bcbb362a41ad4788957a4ac53ab9fbd4c40766c1c` | ok |
| `gUnk_0869B284` | 88 | bank tertanam | `023` | peta | 356 | 1680 | `b7d477abaea2cfc4748abd4a9b0825c14c37654c492b418eaef27d002e655bb0` | `6d5cd298a432a0fe45da630c535eda0103d9ab85312260984e07cca30b3faf61` | ok |
| `gUnk_0869B284` | 89 | bank tertanam | `133` | peta | 184 | 1680 | `eb7ce3442abdb35b1b5ffb95ed7af016a1482d2f35fa3a8ee9891ea225d78d19` | `191b6afe36592edb96ff70bfdc1025233137031181f6c8dc482d350948b83422` | opaque |
| `gUnk_0869B284` | 90 | bank tertanam | `231` | tile | 10040 | 32768 | `870dd65dccda0e7adb30c9cb8cdc0238da51699ca4d4fe78cccf1738d35ee533` | `c0dfe66c21647e05e4aaaba4a0da6d24ab670fa41de9b73fccede946e6491162` | opaque |
| `gUnk_0869B284` | 91 | bank tertanam | `133` | palet | 264 | 480 | `3660fc78edc9f1b7cfddc611e58cd2f3aee32f297e304dd491c3627b874ca711` | `c40f1a665baeff64c1edaabcb921163e5293a0462ae6efb426aba922241d182b` | opaque |
| `gUnk_0869B284` | 92 | bank tertanam | `130` | peta | 388 | 3304 | `0fc6e907f0b4a997cb7e3701d23e5f2386110b97d806f8575b9d082aca11eb0d` | `6a91846661c373df1b01e9f471c3e1e28ce13ce2b4b72abd961b1590540d8f91` | opaque |
| `gUnk_0869B284` | 93 | bank tertanam | `023` | peta | 260 | 3304 | `3a5ae22c813c03d04e36a1950cac9fdab90a276d7ba7f0fe8fc5b321cfb0a725` | `2aadc31adc6bd95644d93951a1f6dc56a327b797674db194928bda77c65fcd26` | ok |
| `gUnk_0869B284` | 94 | bank tertanam | `133` | peta | 204 | 3304 | `640f023945b8ad9e64df9f170a8077d3191654609cd0a358176c88323db634d0` | `38007cab7f82b24714e7c3effd5599586fabdea5a89b54f74fafa6a5b73aa7fa` | opaque |
| `gUnk_0869B284` | 95 | bank tertanam | `130` | peta | 352 | 2520 | `3abb336dade045667b0571f5b9d03a9d359215e32b06d8912f8c3142657b3a3f` | `abdb632fd32163d42291d92fd362e499767660ab37d857fd16fd13f7aca9ef9a` | opaque |
| `gUnk_0869B284` | 96 | bank tertanam | `024` | peta | 256 | 2520 | `e45919fe37b128c801b14921a4092d32d5cd0d3787ea0591bf175b1a826b4383` | `be6587b77f216b3671dab9d03590a1f72f41711195db63468163efee043fb9e7` | ok |
| `gUnk_0869B284` | 97 | bank tertanam | `134` | peta | 192 | 2520 | `08edcf6ecf069f96b90aecf782ed33e9975eee533fd2a02f6e1a7bfa1292d218` | `a1f3407a1c3003ced0db4a1a92b63921d08a489df7e1a3256c7cc7be3e2f4941` | opaque |
| `gUnk_0869B284` | 98 | bank tertanam | `130` | peta | 332 | 1680 | `aae94e6a8907d74788c1e5122d239e2f0cb8355c8094197d43100b3c1176c09e` | `5143daca594ae920b56e3c1d6b6fbc5bd9ccfd0f3392adb0438adb9f7a814806` | opaque |
| `gUnk_0869B284` | 99 | bank tertanam | `024` | peta | 232 | 1680 | `6fd08c247b3351f273bb583c011b435e09f77b52d73805cb89c4580c80d4d40d` | `4d32eeab9646f6bd67b500127e1449600bacebfe5313b2144bbd817b3f8be173` | ok |
| `gUnk_0869B284` | 100 | bank tertanam | `134` | peta | 168 | 1680 | `070a6f8e03b5e839311fc059015652651949af14421954ab6ab55c8249e1c41b` | `315e2f9311376b2778bf8d95b249a25000d06fe9d809fe86b3031be3aadc7bfc` | opaque |
| `gUnk_0869B284` | 101 | bank tertanam | `230` | peta | 1216 | 6144 | `25151cde55bf4162260fa9f915cc9b3bb9ab70f0ab71704ecfac2741487f3d10` | `bae7f9b190ced19e4f3cfdd01b386322c70b722e5b35f8717b01cd22a50c7c07` | opaque |
| `gUnk_0869B284` | 102 | bank tertanam | `133` | peta | 564 | 6144 | `d022ce8d229a614dff9c7b3b8bb92e47681ee32f811e8127b022545bfaad6fe2` | `c00560ae0a358f5d827c5215391f11cea6d486c9d4282678a02b0320b8653c36` | opaque |
| `gUnk_0869B284` | 103 | bank tertanam | `033` | peta | 472 | 6144 | `9cdda409c1c454ad3a0c9843f8277bd21467cce3649c3a2cb3fd5bf243a8d950` | `fae66d36b40f10a940e57545c5321ac0c40d4a62dcace7534c9d47eee3ac5278` | ok |
| `gUnk_0869B284` | 104 | bank tertanam | `230` | peta | 1204 | 6144 | `9cfb882a463dc1c2e7d4928fe351fcf9c6a6512f5a13c8ef54a8173e1954ea47` | `c0f4260aee1b6270214fbf045eb7c5033935f9c3c609ee2260d98f5b32a7da3f` | opaque |
| `gUnk_0869B284` | 105 | bank tertanam | `133` | peta | 544 | 6144 | `2632a906af773bc2b954e063f1f1ff22f54c0dc53e5d2a504e01c8dea53e7139` | `243ee180bdd8be871ad5f8ff4f3d7ef2c1730a74960418b90dc45811077a4aa4` | opaque |
| `gUnk_0869B284` | 106 | bank tertanam | `033` | peta | 448 | 6144 | `8c8d32fa6f8ee62a6e192a07661e4d0111e4811b9762660ab58d5c1f99970314` | `04395e79c350f991394e3e8d07bf54f38afa293f4301c38b6299a41884e12008` | ok |
| `gUnk_0869B284` | 107 | bank tertanam | `220` | tile | 19724 | 32768 | `1ed433d23128f50d3697001b3e694fc179acfe1f9c09d819c3857c3707827acd` | `cbe0003b9c295cabf5ed3b5c3d8078b9841ba4d076703e0b7575b4a92d3be099` | opaque |
| `gUnk_0869B284` | 108 | bank tertanam | `030` | palet | 308 | 480 | `77e7689cc0bcdcfe1e26b3f6122a8aacc9504edb6c5ef280ee4a2ba2a5f4cc90` | `0078dbafa77395690fcd4f53dc1a0eca9d13bfc7876e8ba183db6a18f04128a6` | ok |
| `gUnk_0869B284` | 109 | bank tertanam | `130` | peta | 4224 | 30976 | `02b53e608be966a7fbc0d4882fe658f324dbb152738ee79b73a5a5c3fcd01602` | `02d1b7e1f174d614833ba09440ba4857a1d704c50af8f7f141f2b4d1606e58e8` | opaque |
| `gUnk_0869B284` | 110 | bank tertanam | `130` | peta | 4248 | 30976 | `1a3af0b1719870c5bb754f1e4ca22b22befeee9985e352fa3682a0953fbe6b9d` | `7a760b5244fadcee6e128ee9ad9e2e3992113d7ad64a436c5a8f18d65f647272` | opaque |
| `gUnk_0869B284` | 111 | bank tertanam | `130` | peta | 1600 | 30976 | `2e7c03a0a42500a14f231e611de4afff33d1059099468551c5852d3e04cbb362` | `9f5e7e19dcaf938596c1a281c56b7850f744ecae0bcf78e3aa1f64e147a557d3` | opaque |
| `gUnk_0869B284` | 112 | bank tertanam | `130` | palet | 308 | 480 | `a9ef06c04364cc5400fe2678526e0a7ff8aee703188437fc9199cb132a3ef865` | `f360fcebd0a02b01e6eb296f85135aa66ecba72905db6f791033a0d4dc5dc71d` | opaque |
| `gUnk_0869B284` | 113 | bank tertanam | `220` | tile | 20140 | 32768 | `6b630d97df0734901b7d4f1848b9d370cbc08b93d39e94f6da8624e31b061f36` | `45ad7476129c365da806a44a9eb737b41b9f5f7855c6820eaf17188746ed8f5e` | opaque |
| `gUnk_0869B284` | 114 | bank tertanam | `030` | palet | 252 | 480 | `0bc5d9774041dbc7986d4b1b0b7665ea513abf03579ec562e84fe23e25d277b4` | `053f87f73aa058c1917904fd53a4bb24c4ce2d902e78ced1ee69b87ea413ba37` | ok |
| `gUnk_0869B284` | 115 | bank tertanam | `230` | peta | 3880 | 30976 | `1c6bae4759b224d6b0d89003da68c5a18cf84bcc68b706a109b691a523dc23da` | `c73425f88aef7e57d9d7838be8ae2a752b9db429ac14ffa4cd118cbcdfbaedd4` | opaque |
| `gUnk_0869B284` | 116 | bank tertanam | `130` | peta | 4120 | 30976 | `80b2aabe5faaec8b3a6df95b7fe60b3719477dabce3205288daca828d9695ec9` | `00edf3ec04819c572692a4ac0d903c56334a401ce2e3f6387bd45bd40724425e` | opaque |
| `gUnk_0869B284` | 117 | bank tertanam | `134` | peta | 1364 | 30976 | `ca8f55d9371d8d6161507bdb29cf645f3b1ff409285a53df3906e3dfb641604c` | `0699ead31d2dff941ec196c9fdc7b71b9941022f45d774267cc88103485fd87c` | opaque |
| `gUnk_0869B284` | 118 | bank tertanam | `130` | palet | 224 | 480 | `68ba5e7b2f55317433756ebe7d86acfe3439dbb8f8a29256b3e321aa5eba4c8c` | `7dbb0a715010eda5c726e6f2dbdd31a3da18531c58e6153b4fffd6f7f819a795` | opaque |
| `gUnk_086D74F8` | 0 | bank tertanam | `124` | peta | 476 | 1680 | `347e7719a1d95f94f1de349e7649ef42076e9baf41df521adfd9f59b7880557f` | `ed282f8bf52d841908f9e8252446d8901fbdd34e7bc9dae2edd25886061c8451` | opaque |
| `gUnk_086D74F8` | 1 | bank tertanam | `024` | peta | 364 | 1680 | `5c121c2d2834ea88d1717989b340926c663b1d45beba5bfad5a5a77e4c13b813` | `5c97de7dd15eb9fcf3f62852464d0f7088d013511036b95d30cd1d6c968619ce` | ok |
| `gUnk_086D74F8` | 2 | bank tertanam | `024` | peta | 232 | 1680 | `9b2c4152343faf0a77fad2a7c67fbdb1b5141c48c484dd7607a89eb2a0043ab7` | `31c552354d2f9d78ea2d2e2640f3fdd177a896700ea5a794a1c8ec337fecbd26` | ok |
| `gUnk_086D74F8` | 3 | bank tertanam | `024` | peta | 472 | 1680 | `fc234915703b36c7e4ae8e2aff01a1003bddaaa514ae7c8a081055df81e29b11` | `dc50294d17ed0ec926b36f6a7bd3cd478d0ae53e1f2766109b42525dbcd23c0e` | ok |
| `gUnk_086D74F8` | 4 | bank tertanam | `134` | peta | 300 | 1680 | `ca4840262a4d78cf8cc426a81415c4da5416a755d43968ad13b1ed833e5c43fa` | `5699480643112b7abc578c7fa4729a5268317db917caefbbbb37cbacb64e1bf3` | opaque |
| `gUnk_086D74F8` | 5 | bank tertanam | `033` | peta | 252 | 1680 | `efe114a6e798136e1cfaf9499f605b6941ce0a9883867d9dc0c75f904b9823e8` | `3bb968643182d0aafed99d71524e739eba991477c15a7e132b56a433801c2a5f` | ok |
| `gUnk_086D74F8` | 6 | bank tertanam | `231` | tile | 12576 | 32768 | `eb88296500f2cfaa62c19ba5b3531675435d667a4120e728491136514590ba30` | `0a40677c94dbb8b7c3a20291426e54ce591ec006b84a5d981e0f5b1921badc13` | opaque |
| `gUnk_086D74F8` | 7 | bank tertanam | `133` | palet | 292 | 480 | `a1be54f28f1acf235ec478e76b00553236c75b72f61f7d1d8726c28f4183d253` | `7dacf7a7b244b108d200ff03425b689ace7cc15d0a3bf563e984dc4007dcf534` | opaque |
| `gUnk_086D74F8` | 8 | bank tertanam | `231` | tile | 3512 | 32768 | `e89331ab7b468fba643525a11b7bd995e79db85f6c2ddf09e6e3f0fd79d3079a` | `6eace27f2e3c5ba8b4f3dbeb9e18a8e3693a24b07f572d8e87aa9b6af0d27eb6` | opaque |
| `gUnk_086D74F8` | 9 | bank tertanam | `133` | palet | 160 | 480 | `825109f80b83eb960ad1073133b0117f54dcdf12a528ef100540eabd44cad8d3` | `04dc687dda5b7a023da83cc51753c0f9b3d071efca1ee9bbef210b8d87c9fbf9` | opaque |
| `gUnk_086D74F8` | 10 | bank tertanam | `024` | peta | 152 | 1560 | `e7b49b384105f944d8fb7c21e7be07d393852364c1b4c4675ffe19686094f399` | `3f318d0e036f9c462c2385f160e20fd492b2f29772f372e5286544b663fa3608` | ok |
| `gUnk_086D74F8` | 11 | bank tertanam | `030` | peta | 12 | 1560 | `dbb645db5719382f4831b8f36b11e7429e4e3d30d11bcf39a25e935856306187` | `ad7a09f4007fdf89afc6d2c36510b3d26b1c369989e2c17f8f2d65c9151f0904` | ok |
| `gUnk_086D74F8` | 12 | bank tertanam | `024` | peta | 172 | 1560 | `8bc35975e2e86d5b1d56b10aa690636bc6cedd7a05c0c996ef28fc5bf49aede4` | `641842a0344317d4aa5292a28630b1d82fa51758575dfb83bede1d91a8697dd0` | ok |
| `gUnk_086D74F8` | 13 | bank tertanam | `024` | peta | 124 | 8400 | `4c3f658ff1f6af609310d5a0e8bec6b46463f82b3f3f99b123f7e8354356e7b9` | `a09d3c561896854cac13f35ccbf3a80e2bc5916d11ab3bf36d98cf9ae73f7b58` | ok |
| `gUnk_086D74F8` | 14 | bank tertanam | `030` | peta | 12 | 8400 | `24ab257c364574cf49ff5164cf33ac4b8280156f4df7261973ee10aa19e0a7f0` | `77cea345d1d253e2326d983a796b9368fe88e2504ce38bff8e87d45eb8f484a6` | ok |
| `gUnk_086D74F8` | 15 | bank tertanam | `024` | peta | 92 | 8400 | `9f3efc7b295cce1aae2a32299352bd91b131c85430b1c403a5a6050bcd220749` | `e1583f98b87b1e82bbb749b8a80e0cc887ed7bcd5aa3c254ac6f5983b150dbd9` | ok |
| `gUnk_086D74F8` | 16 | bank tertanam | `024` | peta | 140 | 2520 | `778639ef783438292f9b1242d2c6e09d1092eab29755de2ece7741edf4d092ca` | `b7f11d8ba96c5d70ef5f91741182f70a6eeb81195b379f9cc5dd777ea22fd5d0` | ok |
| `gUnk_086D74F8` | 17 | bank tertanam | `030` | peta | 12 | 2520 | `984ec115e1a7f47594fa37f6178ee87389f41d571e94af8bd6d156b94db00476` | `ae88e92dfa2796b2c6ff2d001002baadaf5decd901671d5c4f06c1ec697fea4c` | ok |
| `gUnk_086D74F8` | 18 | bank tertanam | `023` | peta | 96 | 2520 | `b7a1292d2463b567a49f0e16c5c2269da13b3365bb1a80e9d1bce3595c541e72` | `5bfe17dd4c098187683247bb307cf62f0b9ec836b280bd9fa1a9a676762b7c21` | ok |
| `gUnk_086D74F8` | 19 | bank tertanam | `023` | peta | 128 | 1560 | `79351ca4faacb2a59d47ae2d2be74e11bd9f0a51cf0071041bfc9fa4b1bf66b7` | `39799ff55588a48e2bdef85008c29f484ce775e07d90963a6237c8e894a7f89c` | ok |
| `gUnk_086D74F8` | 20 | bank tertanam | `030` | peta | 12 | 1560 | `dbb645db5719382f4831b8f36b11e7429e4e3d30d11bcf39a25e935856306187` | `ad7a09f4007fdf89afc6d2c36510b3d26b1c369989e2c17f8f2d65c9151f0904` | ok |
| `gUnk_086D74F8` | 21 | bank tertanam | `023` | peta | 92 | 1560 | `5041acaa649e4c0b0a6e5316957a9ef49113372e8c6386eb77c566123aab15ed` | `96dcbce40d28b361395eedea2dd00b64972adf7a991c6e782d7dbef1aa35b00a` | ok |
| `gUnk_086D74F8` | 22 | bank tertanam | `030` | peta | 180 | 1200 | `abb38516e87fe5d056a8dec570fdea4b3cbb9af02d518f4343f3b6ed53324526` | `447dedbd00bfc51d94f4b322931dbf97a370f0f73d28b18acee0763b1bc3d326` | ok |
| `gUnk_086D74F8` | 23 | bank tertanam | `030` | peta | 44 | 1200 | `3a29ada0286f630420e733b6ff883571abfe1b918b04f0abdae6fb375c4ff138` | `424a504ccfa32cf2168b2cc3f9a8af177ea528cd0e8bee7fb362a3bfe96099c8` | ok |
| `gUnk_086D74F8` | 24 | bank tertanam | `024` | peta | 172 | 1200 | `6994ad679fba5ef0d8e60b660a98df238f16a854277cea7713ba460bf5aa2cc4` | `5f5cddeb50075509be5595830cd1c8dba1e84a9565b9f95dd3fb7c5a7eb86dcd` | ok |
| `gUnk_086DC3F4` | 0 | bank tertanam | `134` | peta | 196 | 1560 | `c9c8f032af6bcc985e4d790886e2ed841867be55f24f03b9d7e9a35c57b0401c` | `0864c9f561f610f92adf8116d86bf5c43b8bdc1061be1d7b17f20a4bd5457f5b` | opaque |
| `gUnk_086DC3F4` | 1 | bank tertanam | `030` | peta | 12 | 1560 | `dbb645db5719382f4831b8f36b11e7429e4e3d30d11bcf39a25e935856306187` | `ad7a09f4007fdf89afc6d2c36510b3d26b1c369989e2c17f8f2d65c9151f0904` | ok |
| `gUnk_086DC3F4` | 2 | bank tertanam | `023` | peta | 124 | 1560 | `8899714d62fc1bb34fb811964829de43c2dafe77c11754225de8a803fc052662` | `2caf6322eafa66146a5947a4d5d0e0dcad11d869f0f69d83e4efec1a550b3bcb` | ok |

## Aturan

- `opaque` adalah status jujur, bukan kegagalan yang boleh disembunyikan.
- Jangan mengganti `.incbin` hanya karena decoded hash cocok.
- Naikkan status hanya setelah encoder + hash compressed + hash decoded
  cocok, lalu `make compare` HIJAU.
