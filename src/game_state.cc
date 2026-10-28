#include "prelude.h"

typedef struct GenObj {
    u8 _pad0[4];
    i32 unk4;
} GenObj;

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
