#include "common.h"
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
} GenObj;
void func_08009984(GenObj *arg0) {
    GenObj *temp_r0;
    void *temp_r0_2;
    void *temp_r3;
    void *var_r1;

    var_r1 = arg0->unkC;
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x10);
    if (var_r1 != temp_r3) {
        do {
            temp_r0 = var_r1;
            var_r1 = var_r1->unk4;
            temp_r0->unk0 = 0;
            temp_r0->unk4 = 0;
        } while (var_r1 != temp_r3);
    }
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x10);
    arg0->unkC = temp_r0_2;
    arg0->unk10 = (s32) (temp_r0_2 - 4);
}

