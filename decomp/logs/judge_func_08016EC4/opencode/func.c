#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
void func_08016EC4(GenObj *arg0, s32 arg4, s32 arg5) {
    (*arg0->unk4->unkA8)->unk160(arg4, (s32) (u16) arg5);
}

