#include "common.h"
s32 CpuFastSet(void *, void *, u32);                  /* extern */

s32 func_0804EF20(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r7;
    u8 temp_r6;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *var_r3;
    void *var_r4;

    var_r4 = arg0->unkC;
    var_r3 = arg0->unk10;
    temp_r6 = arg0->unk15;
    if (0x80 & temp_r6) {
        temp_r7 = var_r3 + ((u32) (arg0->unk14 << 0x12) >> 0xD);
        temp_r1 = 1 ^ ((u32) (temp_r6 << 0x19) >> 0x1F);
        arg0->unk15 = (u8) ((-0x41 & temp_r6) | (temp_r1 << 6));
        temp_r2 = 0x0F0F0F0F << (temp_r1 * 4);
        temp_r1_2 = ~temp_r2;
        do {
            temp_r4 = var_r4 + 4;
            var_r3->unk0 = (s32) (var_r4->unk0 & temp_r2);
            temp_r3 = var_r3 + 4;
            temp_r4_2 = temp_r4 + 4;
            var_r3->unk4 = (s32) (var_r4->unk4 & temp_r1_2);
            temp_r3_2 = temp_r3 + 4;
            temp_r4_3 = temp_r4_2 + 4;
            temp_r3->unk4 = (s32) (temp_r4->unk4 & temp_r2);
            temp_r3_3 = temp_r3_2 + 4;
            temp_r4_4 = temp_r4_3 + 4;
            temp_r3_2->unk4 = (s32) (temp_r4_2->unk4 & temp_r1_2);
            temp_r3_4 = temp_r3_3 + 4;
            temp_r4_5 = temp_r4_4 + 4;
            temp_r3_3->unk4 = (s32) (temp_r4_3->unk4 & temp_r2);
            temp_r3_5 = temp_r3_4 + 4;
            temp_r4_6 = temp_r4_5 + 4;
            temp_r3_4->unk4 = (s32) (temp_r4_4->unk4 & temp_r1_2);
            temp_r3_6 = temp_r3_5 + 4;
            temp_r3_5->unk4 = (s32) (temp_r4_5->unk4 & temp_r2);
            var_r4 = temp_r4_6 + 4 + 4;
            temp_r3_6->unk4 = (s32) (temp_r4_6->unk4 & temp_r1_2);
            var_r3 = temp_r3_6 + 4 + 4;
        } while (var_r3 != temp_r7);
        return 1;
    }
    CpuFastSet(var_r4, var_r3, (u32) (arg0->unk14 << 0x12) >> 0xF);
    return 0;
}

