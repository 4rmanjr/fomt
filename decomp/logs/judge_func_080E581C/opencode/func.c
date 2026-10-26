#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
extern s32 gUnk_03000414;
extern ? vtable_unk_080E8594;

void func_080E581C(void *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E8594;
    gUnk_03000414 = arg0->unk0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

