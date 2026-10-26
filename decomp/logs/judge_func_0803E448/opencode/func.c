#include "common.h"
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803E448(void *arg0) {
s32 sp0;
    u8 temp_r4;

    if ((s32) (arg0->unk21CA << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r4 = sp0.unk3;
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 4;
    }
    if (temp_r4 == 1) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}

