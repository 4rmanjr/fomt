#include "common.h"
s32 func_0804EDB4(s32, s32, u16, u16, s32);           /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk16;
    s32 unk18;
} GenObj;
s32 func_0804EEBC(GenObj *arg0) {
    func_0804EDB4(arg0->unkC, arg0->unk10, arg0->unk14, arg0->unk16, arg0->unk18);
    return 0;
}

