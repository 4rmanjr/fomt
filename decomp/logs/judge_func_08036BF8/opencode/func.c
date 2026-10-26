#include "common.h"
s32 func_08034F00(void *, s32);                       /* extern */

void func_08036BF8(void *arg0, s32 arg1) {
    s16 temp_r6;
    s16 temp_r7;

    temp_r6 = arg0->unkA;
    temp_r7 = arg0->unkE;
    func_08034F00(arg0, arg1);
    if ((arg1 > 1) && (arg0->unk4 == 2) && ((temp_r6 != 0xF4) || (temp_r7 != 0xAB)) && (arg0->unkA == 0xF4) && (arg0->unkE == 0xAB)) {
        (*arg0->unk0)->unk114();
    }
}

