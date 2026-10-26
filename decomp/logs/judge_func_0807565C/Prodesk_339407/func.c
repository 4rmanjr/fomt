#include "common.h"
s32 func_080769A0(s32);                               /* extern */

s32 *func_0807565C(s32 *arg0, void *arg1) {
    s32 temp_r1;

    func_080769A0(arg1->unk4);
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}

