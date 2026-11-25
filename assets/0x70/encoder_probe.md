# Uji encoder `0x70` minimal (format 000)

**Dihasilkan otomatis** oleh `python3 tools/assets/lz70.py probe --write-report` (`--sweep` untuk mencoba tangga 1..12).

Stream P0 format `000`: **3**. Serializer replay byte-identik: **3/3**. Encoder parity byte-identik: **3/3**. Ukuran optimal encoder sama dengan aslinya: **3/3**.

| simbol | idx | compressed B | sha256 asli | replay | parity | hasil encoder |
|---|---:|---:|---|---|---|---|
| `gUnk_086FD240` | 46 | 144 | `6fb3ef79645abb63…` | sama | sama | optimal 144 B, parity 144 B, greedy 156 B, tangga [5, 6], roundtrip ya |
| `gUnk_08714BEC` | 2 | 136 | `930f457ebea41680…` | sama | sama | optimal 136 B, parity 136 B, greedy 160 B, tangga [5, 6], roundtrip ya |
| `gUnk_08738AD8` | 0 | 496 | `91bd413189c1ab2f…` | sama | sama | optimal 496 B, parity 496 B, greedy 540 B, tangga [4, 6], roundtrip ya |

