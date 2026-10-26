#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_0802B260(s32, void *);                       /* extern */
s32 func_0809C694(void *, s32);                     /* extern */

void func_08024B9C(void *arg0) {
    s8 var_r5;
    void *temp_r1;

    var_r5 = 2;
    if ((arg0->unk4 == 0x13) && ((temp_r1 = arg0->unk34, (((u32) (temp_r1->unk2171 << 0x1B) >> 0x1E) == 1)) || ((func_0809C694(temp_r1 + 0x214C, 0x4A) << 0x18) != 0))) {
        var_r5 = 1;
    }
    arg0->unk21 = var_r5;
    func_0802B260(__builtin_new(0x284), arg0);
}

