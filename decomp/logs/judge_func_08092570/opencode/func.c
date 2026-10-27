#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_08090EE0(s32, s32 *, s32, u8);               /* extern */
extern s32 vtable_unk_080E7DC8;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void *func_08092570(GenObj *arg0, s32 *arg1, s32 arg2, u8 arg3) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;

    arg0->unk0 = &vtable_unk_080E7DC8;
    temp_r0 = *arg1;
    *arg1 = 0;
    sp0 = temp_r0;
    arg0->unk4 = func_08090EE0(__builtin_new(0x1B8), &sp0, arg2, arg3);
    temp_r0_2 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r0_2;
    return arg0;
}

