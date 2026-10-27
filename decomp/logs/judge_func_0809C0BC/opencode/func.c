#include "common.h"
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
void func_0809C0BC(GenObj *arg0, s32 *arg1) {
    arg0->unk10 = (s32) *arg1;
    arg0->unkC = 3;
}

