#include "common.h"
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[1];
    s32 unk8;
    u8 _padC[8526];
    s32 unk215A;
    u8 _pad215E[68];
    s32 unk21A2;
} GenObj;
s32 func_0803EDCC(GenObj *arg0) {
GenObj sp0;
    u8 temp_r0;
    u8 temp_r4;
    u8 temp_r6;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r6 = sp0.unk1;
    temp_r0 = sp0.unk2;
    temp_r4 = sp0.unk3;
    if ((func_0803D644(temp_r6, temp_r0) << 0x18) != 0) {
        return 5;
    }
    if ((temp_r6 == 2) && (temp_r0 == 0x1E) && (((u32) (arg0->unk21A2 << 0x1A) >> 0x1E) != 2)) {
        return 6;
    }
    if ((s32) (arg0->unk215A << 0x1C) < 0) {
        return 0;
    }
    if (arg0->unk8 == 0) {
        switch (temp_r4) {                          /* irregular */
        case 1:
            return 1;
        case 3:
            return 2;
        default:
            return 3;
        }
    } else {
        return 4;
    }
}

