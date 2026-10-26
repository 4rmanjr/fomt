#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[76];
    s32 unk64;
    u8 _pad68[64];
    s32 unkA8;
} GenObj;
void func_08014C0C(GenObj *arg0, s32 arg1, s32 arg2) {
    void **temp_r0;
    void *temp_r0_2;

    temp_r0 = arg0->unk4->unkA8;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0);
    ((void (*)(void *,...))(temp_r0_2->unk14->unk64))(temp_r0_2, arg1, arg2);
}

