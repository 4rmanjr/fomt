#include "prelude.h"

typedef struct GenObj {
    u8 _pad0[4];
    i32 unk4;
} GenObj;

// DECOMP-MATCHED func_0801FD3C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5A9C(i32);                               /* extern */

i32 func_0801FD3C(GenObj *arg0) {
    return func_080A5A9C(arg0->unk4);
}
}
// ekor tak-bermarker dari game_state.s (verbatim, jangan diubah)
asm(
"    .byte 0x40, 0x68, 0x0E, 0x21, 0x40, 0x5E, 0x70, 0x47\n"
"    .byte 0x40, 0x68, 0x0A, 0x21, 0x40, 0x5E, 0x70, 0x47, 0x40, 0x68, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_0801FD60 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A59BC(i32);                               /* extern */

void func_0801FD60(GenObj *arg0) {
    func_080A59BC(arg0->unk4);
}
}

// DECOMP-MATCHED func_0801FD6C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5960(i32);                               /* extern */

void func_0801FD6C(GenObj *arg0) {
    func_080A5960(arg0->unk4);
}
}
