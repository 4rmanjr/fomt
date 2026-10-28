#include "prelude.h"

// DECOMP-MATCHED func_08007110 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
typedef struct GenObj {
    u8 _pad0[4];
    i32 unk4;
} GenObj;
i32 func_08007110(GenObj *arg0) {
    return arg0->unk4 + 0x461C;
}
}
// ekor tak-bermarker dari new_game.s (verbatim, jangan diubah)
asm(
"    .byte 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x1C, 0x46, 0x00, 0x00\n"
);
