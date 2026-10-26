#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[68];
    s32 unk5C;
    u8 _pad60[60];
    struct GenObj *unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
s32 func_08014164(GenObj *arg0, s32 arg1, u8 arg2) {
    void **temp_r0;
    void *temp_r0_2;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0);
    ((void (*)(void *,...))(temp_r0_2->unk14->unk5C))(temp_r0_2, arg1, arg2);
    temp_r4->unk9C = 0x19;
    return 1;
}

