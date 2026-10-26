#include "common.h"
s32 func_0800080C(void *, s32);                       /* extern */

void func_080DB36C(void *arg0, s32 arg1) {
    void **temp_r1;

    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    func_0800080C(arg0, arg1);
}

