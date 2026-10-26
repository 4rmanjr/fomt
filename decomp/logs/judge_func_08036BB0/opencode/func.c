#include "common.h"
s32 func_08034EB4(void *);                            /* extern */

void func_08036BB0(void *arg0) {
    s16 temp_r5;
    s16 temp_r6;

    temp_r5 = arg0->unkA;
    temp_r6 = arg0->unkE;
    func_08034EB4(arg0);
    if ((arg0->unk4 == 2) && ((temp_r5 != 0xF4) || (temp_r6 != 0xAB)) && (arg0->unkA == 0xF4) && (arg0->unkE == 0xAB)) {
        (*arg0->unk0)->unk114();
    }
}

