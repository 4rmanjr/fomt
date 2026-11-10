#!/bin/sh
# try.sh <func.c> — kompilasi cepat draf (deklarasi inline, tanpa common.h) +
# cetak hasil __FILE__-ready. Pakai: tools/scripts/try.sh /tmp/x.c
#
# Catatan: common.h di sini MINIMAL (hanya u8..s32), bukan harness judge
# (tanpa context Vtbl/Obj/typedef bersama). Pakai untuk cek bentuk/urutan
# instruksi saja; keputusan MATCH tetap lewat judge, atau ganti common.h
# dengan artefak judge (FOMT_KEEP_ARTIFACTS=1) untuk harness byte-identik.
set -e
export LC_ALL=C
AGBCC=tools/agbcc/bin/agbcc
CPP=tools/arm-gnu/bin/arm-none-eabi-cpp
AS=tools/arm-gnu/bin/arm-none-eabi-as
W=${WORK:-/tmp/trywork}
mkdir -p "$W"
if [ ! -f "$W/common.h" ]; then
cat > "$W/common.h" <<'EOF'
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
EOF
fi
D=$(dirname "$1")
B=$(basename "$1")
if grep -q 'common.h' "$1"; then
  "$CPP" -nostdinc -undef -I tools/agbcc/include -I "$W" -I "$D" "$1" -o "$W/func.i"
else
  { echo '#include "common.h"'; cat "$1"; } > "$W/func.c"
  "$CPP" -nostdinc -undef -I tools/agbcc/include -I "$W" "$W/func.c" -o "$W/func.i"
fi
"$AGBCC" -mthumb-interwork -O2 -fhex-asm "$W/func.i" -o "$W/func.s"
"$AS" -mcpu=arm7tdmi -o "$W/func.o" "$W/func.s"
grep -v '^\s*\.' "$W/func.s" | grep -v '^$'
