#include "common.h"
s32 __builtin_delete(s32 **);                           /* extern */
extern ? vtable_unk_080E8028;

void func_08094268(s32 **arg0, s32 arg1) {
    *arg0 = &vtable_unk_080E8028;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

