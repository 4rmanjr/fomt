#include "common.h"
s32 func_0803D52C(s32 *, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[3];
    s32 unk3;
    u8 _pad7[8575];
    s32 unk2186;
} GenObj;
s32 func_0803EA5C(GenObj *arg0) {
s32 sp0;

    func_0803D52C(&sp0, arg0 + 0x10);
    if ((((u32) (arg0->unk2186 << 0x19) >> 0x1E) == 2) && (sp0.unk3 == 3)) {
        return 1;
    }
    return 0;
}

