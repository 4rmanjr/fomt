#include "common.h"
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_080A0490(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    u8 _pad6[8644];
    s32 unk21CA;
} GenObj;
s32 func_0803E1FC(GenObj *arg0) {
GenObj sp0;
    s32 temp_r0;
    u8 temp_r4;
    u8 temp_r6;

    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r6 = sp0.unk1;
    temp_r4 = sp0.unk2;
    if ((func_0803D644(temp_r6, temp_r4) << 0x18) != 0) {
        return 2;
    }
    temp_r0 = func_080A0490(arg0 + 0x1CD4);
    if ((temp_r6 == 2) && (temp_r4 == 5) && (temp_r0 != 0x19)) {
        return 3;
    }
    return 1;
}

