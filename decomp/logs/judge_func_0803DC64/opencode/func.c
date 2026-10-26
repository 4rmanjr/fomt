#include "common.h"
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803DC64(void *arg0) {
s32 sp0;
    u8 temp_r4;

    if (0xC & arg0->unk21CA) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r4 = sp0.unk3;
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 3;
    }
    if (temp_r4 != 0) {
        return 1;
    }
    return 2;
}

