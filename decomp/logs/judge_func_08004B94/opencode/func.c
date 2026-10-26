#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_080041DC(s32, s32, void ***);              /* extern */
extern ? vtable_unk_080E5A68;

void *func_08004B94(void *arg0, s32 arg1, void ***arg2) {
    void **sp0;
    void **temp_r1;
    void **temp_r4;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r1 = *arg2;
    *arg2 = 0;
    sp0 = temp_r1;
    arg0->unk4 = func_080041DC(__builtin_new(0x1A0), arg1, &sp0);
    temp_r4 = *arg2;
    if (temp_r4 != 0) {
        (*temp_r4)->unk8(temp_r4, 3);
    }
    return arg0;
}

