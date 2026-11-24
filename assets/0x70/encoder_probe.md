# Uji encoder `0x70` minimal (format 000)

**Dihasilkan otomatis** oleh `python3 tools/assets/lz70.py probe --write-report` (`--sweep` untuk mencoba tangga 1..12).

Stream P0 format `000`: **3**. Serializer replay byte-identik: **3/3**. Encoder greedy byte-identik: **0/3**. Ukuran optimal encoder sama dengan aslinya: **3/3**.

| simbol | idx | compressed B | sha256 asli | replay | greedy | hasil encoder |
|---|---:|---:|---|---|---|---|
| `gUnk_086FD240` | 46 | 144 | `6fb3ef79645abb63…` | sama | beda | optimal 144 B, greedy 156 B, tangga [5, 6], roundtrip ya |
| `gUnk_08714BEC` | 2 | 136 | `930f457ebea41680…` | sama | beda | optimal 136 B, greedy 160 B, tangga [5, 6], roundtrip ya |
| `gUnk_08738AD8` | 0 | 496 | `91bd413189c1ab2f…` | sama | beda | optimal 496 B, greedy 540 B, tangga [4, 6], roundtrip ya |

Tidak ada stream yang byte-identik, jadi status `opaque` dipertahankan.

Implikasi: format `000` sudah bisa **ditulis** — replay token asli menghasilkan byte yang sama persis, dan encoder optimal mencapai ukuran compressed yang sama dengan aslinya. Yang belum sama adalah *pilihan* perintahnya: banyak tokenisasi berbiaya bit identik, dan encoder asli memilih di antaranya dengan aturan yang belum diketahui (24 kombinasi tie-break yang diuji di `_tokens_optimal` + preferensi panjang/jarak tidak ada yang cocok). Karena hash compressed bergantung pada byte, bukan ukuran, stream ini tetap tidak boleh diklaim `ok`.
