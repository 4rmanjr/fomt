#include "common.h"
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8);                              /* extern */

s32 func_0803E8E8(void *arg0) {
s32 sp0;
    u8 temp_r2;
    u8 temp_r4;

    if ((s32) (arg0->unk21CA << 0x1A) >= 0) {
        func_0803D52C(&sp0, arg0 + 0x10);
        temp_r2 = sp0.unk1;
        temp_r4 = sp0.unk3;
        if ((temp_r2 == 2) && (sp0.unk2 == 0x1E) && (((u8) arg0->unk21A2 >> 6) != 2)) {
            return 5;
        }
        if ((func_0803D644(temp_r2) << 0x18) != 0) {
            return 4;
        }
        if ((s32) (arg0->unk215A << 0x1C) < 0) {
            goto block_8;
        }
        if ((temp_r4 == 1) || (temp_r4 == 3)) {
            return 3;
        }
        if (arg0->unk8 != 0) {
            return 2;
        }
        return 1;
    }
block_8:
    return 0;
}

