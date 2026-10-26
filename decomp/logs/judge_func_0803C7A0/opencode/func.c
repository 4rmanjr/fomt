#include "common.h"
s32 __builtin_delete(s32 *);                          /* extern */
s32 func_080E0D70(s32, s32);                          /* extern */

void func_0803C7A0(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_080E0D70(temp_r0, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

