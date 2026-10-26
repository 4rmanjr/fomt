#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_080041DC(s32, s32, Obj ***);                /* extern */
extern s32 vtable_unk_080E5A68;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_08004B94(GenObj *arg0, s32 arg1, Obj ***arg2) {
    Obj **sp0;
    Obj **temp_r1;
    Obj *temp_r4;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r1 = *arg2;
    *arg2 = 0;
    sp0 = temp_r1;
    arg0->unk4 = func_080041DC(__builtin_new(0x1A0), arg1, &sp0);
    temp_r4 = (Obj *)*arg2;
    if (temp_r4 != 0) {
        temp_r4->vtbl->unk8(temp_r4, 3);
    }
    return arg0;
}

