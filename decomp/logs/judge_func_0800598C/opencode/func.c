#include "common.h"
void *__builtin_new(s32);                             /* extern */
s32 func_08004EFC(void *, s32, s32, s32, s32);          /* extern */
extern s32 vtable_unk_080E5AA4;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
GenObj *func_0800598C(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *nn;

    arg0->unk0 = &vtable_unk_080E5AA4;
    nn = __builtin_new(0x1A78);
    arg0->unk4 = func_08004EFC(nn, arg1, arg2, arg3, arg4);
    return arg0;
}

