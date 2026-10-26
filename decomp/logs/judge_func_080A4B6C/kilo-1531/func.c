#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 __builtin_vec_delete();                           /* extern */
s32 func_080098AC(void *, s32);                       /* extern */
extern ? vtable_unk_080E82E4;

void func_080A4B6C(void *arg0, s32 arg1) {
    s32 *var_r4;
    s32 *var_r4_2;
    u32 var_r5;
    u32 var_r5_2;

    arg0->unk90 = &vtable_unk_080E82E4;
    if (arg0->unk2C != 0) {
        __builtin_vec_delete();
    }
    var_r5 = 0;
    var_r4 = arg0 + 0x10;
    do {
        if (*var_r4 != 0) {
            __builtin_vec_delete();
        }
        var_r4 += 4;
        var_r5 += 1;
    } while (var_r5 <= 2U);
    var_r5_2 = 0;
    var_r4_2 = arg0 + 0x1C;
    do {
        if (*var_r4_2 != 0) {
            __builtin_vec_delete();
        }
        var_r4_2 += 4;
        var_r5_2 += 1;
    } while (var_r5_2 <= 2U);
    func_080098AC(arg0 + 0x5C, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

