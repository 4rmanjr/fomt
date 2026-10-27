#include "common.h"
s32 __builtin_delete(s32 **);                           /* extern */
extern s32 vtable_unk_080E812C;

void func_08093DCC(s32 **arg0, s32 arg1) {
    *arg0 = &vtable_unk_080E812C;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

