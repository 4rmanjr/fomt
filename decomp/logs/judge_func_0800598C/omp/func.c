#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_08004EFC(s32, s32, s32, ?, s32);             /* extern */
extern s32 vtable_unk_080E5AA4;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_0800598C(GenObj *arg0, s32 arg1, ? arg2, ? arg3, s32 arg4) {
    arg0->unk0 = &vtable_unk_080E5AA4;
    arg0->unk4 = func_08004EFC(__builtin_new(0x1A78), arg1, arg2, arg3, arg4);
    return arg0;
}

