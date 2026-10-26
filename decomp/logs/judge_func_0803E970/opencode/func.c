#include "common.h"
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[8557];
    s32 unk2174;
    u8 _pad2178[82];
    s32 unk21CA;
} GenObj;
s32 func_0803E970(GenObj *arg0) {
GenObj sp0;
    u8 temp_r4;
    u8 temp_r6;

    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r4 = sp0.unk3;
    temp_r6 = temp_r4;
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 5;
    }
    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    if ((arg0->unk2174 & 0x61000) == 0x41000) {
        if (temp_r4 == 6) {
            return 4;
        }
        return 3;
    }
    if (temp_r6 != 6) {
        return 1;
    }
    return 2;
}

