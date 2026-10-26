#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_08069F14(s32, void ***, s32, s32);         /* extern */
extern ? vtable_unk_080E7AB4;

void *func_0806D8C8(void *arg0, void ***arg1, s32 arg2, s32 arg3) {
    void **sp0;
    void **temp_r1;
    void **temp_r4;

    arg0->unk0 = &vtable_unk_080E7AB4;
    temp_r1 = *arg1;
    *arg1 = 0;
    sp0 = temp_r1;
    arg0->unk4 = func_08069F14(__builtin_new(0x4178), &sp0, arg2, arg3);
    temp_r4 = *arg1;
    if (temp_r4 != 0) {
        (*temp_r4)->unk8(temp_r4, 3);
    }
    return arg0;
}

