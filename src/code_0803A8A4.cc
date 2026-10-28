#include "prelude.h"

// DECOMP-MATCHED func_0803EE50 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0803D52C(i32 *, i32);                          /* extern */
i32 func_0803D644(u8, u8);                              /* extern */

i32 func_0803EE50(u8 *arg0) {
    u8 sp0[4];
    u8 *bp = sp0;
    u8 a1, a2;

    func_0803D52C((i32 *)sp0, (i32)(arg0 + 0x10));
    a1 = bp[1];
    a2 = bp[2];
    bp = (u8 *)bp[3];
    if ((func_0803D644(a1, a2) << 0x18) != 0) {
        return 4;
    }
    if ((u32)bp == 1) {
        if (*(i32 *)(arg0 + 8) == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}
}
