#include "prelude.h"

// DECOMP-MATCHED func_08000470 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080006A4(i32, i32, i32 *, i32);

void func_08000470(i32 arg0, i32 arg1) {
    i32 sp0;

    sp0 = arg1;
    func_080006A4(arg0, 0x24, &sp0, 4);
}
}

// DECOMP-MATCHED func_08000488 (dari sram_proxy_1.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080002E0();                                /* extern */
i32 func_080006E4(i32, i32 *, i32, i32);              /* extern */
extern u16 gUnk_03000400;

i32 func_08000488(i32 arg0) {
    i32 sp0;

    if ((func_080002E0() << 0x18) != 0) {
        sp0 = 0;
        func_080006E4(arg0, &sp0, 0x24, 4);
        if (gUnk_03000400 == 0) {
            return sp0;
        }
    }
    return 0;
}
}
