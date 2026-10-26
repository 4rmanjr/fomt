#include "common.h"
s32 func_08038398(void *, s32, s32);                  /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[22];
    s32 unk26;
} GenObj;
void func_08038374(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk26 = 1;
    arg0->unk8 = arg1;
    arg0->unkC = arg2;
    func_08038398(arg0, arg3, arg4);
}

