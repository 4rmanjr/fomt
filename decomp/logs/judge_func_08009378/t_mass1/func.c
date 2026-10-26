#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unkE;
} GenObj;
void func_08009378(void **arg0, s16 arg1, s32 arg2, s32 arg3) {
    s16 var_r2;
    void *temp_r3;

    temp_r3 = *arg0;
    var_r2 = arg1;
    if ((s32) var_r2 < 0) {
        var_r2 = 0 - var_r2;
    }
    temp_r3->unk4 = var_r2;
    temp_r3->unk8 = arg2;
    temp_r3->unkC = (s8) ((u32) ((0 - arg3) | arg3) >> 0x1F);
    temp_r3->unkE = 0;
}

