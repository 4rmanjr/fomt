#include "common.h"
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s16 func_08007D4C(void *);                          /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
s32 memset(void *, u8, s32);                          /* extern */

void *func_0803AB30(void *arg0, void **arg1) {
s32 sp0;
    u8 sp20;
    void *sp2C;
    s32 var_r7;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 var_r7_2;
    void **temp_r8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r4;
    void *var_r6;

    arg0->unk0 = arg1;
    var_r6 = arg0 + 4;
    var_r7 = 2;
    sp2C = &sp0 + 0x24;
    var_r4 = var_r6;
    do {
        var_r4->unk0 = 0;
        var_r4->unk4 = 0;
        var_r4->unk8 = 0;
        var_r4->unkC = 0;
        var_r4->unk10 = 0;
        var_r4->unk14 = 0;
        var_r4->unk18 = 0;
        var_r4->unk1C = 0;
        func_08007874(var_r6 + 0x20);
        var_r4->unk24 = 0;
        var_r4 += 0x2C;
        var_r6 += 0x2C;
        var_r7 -= 1;
    } while (var_r7 != -1);
    temp_r6 = arg0 + 0x88;
    arg0->unk88 = 0U;
    arg0->unk9C = 1;
    sp20 = (*arg1)->unk48(arg1, 0xF);
    temp_r2 = arg0->unk88;
    if (temp_r2 < 1U) {
        temp_r0 = arg0 + 0x8C;
        memset(temp_r0, sp20, (temp_r6 + (temp_r2 + 4)) - temp_r0);
        temp_r2_2 = arg0->unk88;
        memset(temp_r6 + (temp_r2_2 + 4), sp20, 1 - temp_r2_2);
        arg0->unk88 = 1U;
    } else {
        temp_r0_2 = arg0 + 0x8C;
        temp_r4 = arg0 + 0x8D;
        memset(temp_r0_2, sp20, temp_r4 - temp_r0_2);
        arg0->unk88 = (u32) (arg0->unk88 - ((temp_r6 + (arg0->unk88 + 4)) - temp_r4));
    }
    temp_r8 = (*arg1)->unk68(arg1);
    var_r7_2 = 0;
    do {
        temp_r6_2 = (0x2C * var_r7_2) + arg0;
        temp_r4_2 = temp_r6_2 + 4;
        temp_r5 = *temp_r8;
        temp_r5->unkC(sp2C, temp_r8, var_r7_2 + 0x91A);
        temp_r5->unk10(&sp0, temp_r8, *sp24);
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_3 = &sp0 + 0xC;
        temp_r6_2->unk4 = (s32) sp0.unk0;
        temp_r4_2->unk4 = (s32) sp0.unk4;
        temp_r4_2->unk8 = (s32) sp0.unk8;
        temp_r4_3 = temp_r4_2 + 0xC;
        temp_r4_2->unkC = (s32) sp0.unkC;
        temp_r4_3->unk4 = (s32) temp_r0_3->unk4;
        temp_r4_3->unk8 = (s32) temp_r0_3->unk8;
        temp_r4_3->unkC = (s32) temp_r0_3->unkC;
        (temp_r4_3 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
        temp_r4_4 = temp_r6_2 + 0x24;
        func_08007C28(temp_r4_4, temp_r4_4->unk4);
        temp_r4_4->unk4 = func_08007B54(temp_r4_4, 2);
        temp_r6_2->unk2C = func_08007D4C(temp_r4_4);
        var_r7_2 += 1;
    } while (var_r7_2 <= 2U);
    return arg0;
}

