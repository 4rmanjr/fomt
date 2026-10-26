#include "common.h"
s32 func_08035908(void *, s32);                       /* extern */
s32 func_08035940(void *, s32);                       /* extern */

void func_08036768(void *arg0) {
    s32 var_r1;
    s8 var_r5;

    var_r1 = 0x27B;
    var_r5 = 2;
    if (((u32) (arg0->unk34->unk2181 << 0x1E) >> 0x1E) == 1) {
        var_r1 = 0x293;
        var_r5 = 1;
    }
    func_08035908(arg0, var_r1);
    func_08035940(arg0, 0x27F);
    arg0->unk21 = var_r5;
}

