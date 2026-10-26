#include "common.h"
s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644();                                /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[1];
    s32 unk8;
    u8 _padC[8638];
    s32 unk21CA;
} GenObj;
s32 func_0803EADC(GenObj *arg0) {
GenObj sp0;
    u8 temp_r4;

    if (0x7C & arg0->unk21CA) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r4 = sp0.unk3;
    if ((sp0.unk1 == 2) && (sp0.unk2 == 3)) {
        return 9;
    }
    if ((func_0803D644() << 0x18) != 0) {
        return 8;
    }
    if ((temp_r4 == 1) || (temp_r4 == 3) || (arg0->unk8 != 0)) {
        return 1;
    }
    return 2;
}

