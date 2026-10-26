#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
extern ? vtable_unk_080E5BE8;

void func_080098AC(void *arg0, s32 arg1) {
    ? **temp_r2;

    arg0->unk8 = &vtable_unk_080E5BE8;
    temp_r2 = arg0->unk0;
    if (temp_r2 != 0) {
        *temp_r2 = arg0->unk4;
        *arg0->unk4 = temp_r2;
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

