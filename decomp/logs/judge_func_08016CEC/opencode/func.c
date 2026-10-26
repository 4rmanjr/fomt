#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    u8 _pad24[4];
    s32 unk28;
    u8 _pad2C[124];
    struct GenObj *unkA8;
} GenObj;
void func_08016CEC(GenObj *arg0, s32 arg1) {
    void **temp_r0;
    void **temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    (*temp_r0)->unk38(temp_r0, arg1);
    temp_r0_2 = temp_r4->unkA8;
    temp_r0_3 = (*temp_r0_2)->unk40(temp_r0_2, arg1);
    if ((temp_r0_3 != 0) && ((((void (*)(void *,...))(temp_r0_3->unk14->unk28))(temp_r0_3) << 0x18) == 0)) {
        ((void (*)(void *,...))(temp_r0_3->unk14->unk20))(temp_r0_3);
    }
}

