#include "common.h"
void func_08016CEC(void *arg0, s32 arg1) {
    void **temp_r0;
    void **temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    (*temp_r0)->unk38(temp_r0, arg1);
    temp_r0_2 = temp_r4->unkA8;
    temp_r0_3 = (*temp_r0_2)->unk40(temp_r0_2, arg1);
    if ((temp_r0_3 != 0) && ((temp_r0_3->unk14->unk28(temp_r0_3) << 0x18) == 0)) {
        temp_r0_3->unk14->unk20(temp_r0_3);
    }
}

