#include "common.h"
s32 free();                                           /* extern */
s32 func_080035C0(void *, s16, s16, s32);             /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
u16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(s32, s32, u16, ? *);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_080024E0(void *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
    s32 sp2C;
    s32 sp34;
s32 sp3C;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    u32 sp84;
    u32 sp88;
    s32 *sp8C;
    s32 *sp90;
    s32 *sp94;
    s32 *sp98;
    void *sp9C;
    void *spA0;
    s16 temp_r1_13;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 *var_r2_19;
    s32 temp_r0_18;
    s32 temp_r0_22;
    s32 temp_r0_26;
    s32 temp_r0_28;
    s32 temp_r0_31;
    s32 temp_r0_35;
    s32 temp_r0_39;
    s32 temp_r0_6;
    s32 temp_r0_9;
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_sb;
    s32 var_sl;
    s32 var_sl_2;
    s32 var_sl_3;
    s32 var_sl_4;
    s32 var_sl_5;
    u16 temp_r2;
    u16 temp_r2_10;
    u16 temp_r2_12;
    u16 temp_r2_3;
    u16 temp_r2_5;
    u16 temp_r2_8;
    u16 var_r2;
    u16 var_r2_11;
    u16 var_r2_14;
    u16 var_r2_15;
    u16 var_r2_18;
    u16 var_r2_22;
    u16 var_r2_25;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r2_5;
    u16 var_r2_8;
    u16 var_r3;
    u16 var_r3_11;
    u16 var_r3_3;
    u16 var_r3_5;
    u16 var_r3_7;
    u16 var_r3_9;
    u32 *var_r0_10;
    u32 var_r8_6;
    void **temp_r1;
    void **temp_r1_11;
    void **temp_r1_14;
    void **temp_r1_17;
    void **temp_r1_20;
    void **temp_r1_23;
    void **temp_r1_26;
    void **temp_r1_29;
    void **temp_r1_3;
    void **temp_r1_5;
    void **temp_r1_7;
    void **temp_r1_9;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_23;
    void *temp_r0_24;
    void *temp_r0_25;
    void *temp_r0_27;
    void *temp_r0_29;
    void *temp_r0_2;
    void *temp_r0_30;
    void *temp_r0_32;
    void *temp_r0_33;
    void *temp_r0_34;
    void *temp_r0_36;
    void *temp_r0_37;
    void *temp_r0_38;
    void *temp_r0_3;
    void *temp_r0_40;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r1_10;
    void *temp_r1_12;
    void *temp_r1_15;
    void *temp_r1_16;
    void *temp_r1_18;
    void *temp_r1_19;
    void *temp_r1_21;
    void *temp_r1_22;
    void *temp_r1_24;
    void *temp_r1_25;
    void *temp_r1_27;
    void *temp_r1_28;
    void *temp_r1_2;
    void *temp_r1_30;
    void *temp_r1_4;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r2_11;
    void *temp_r2_13;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_9;
    void *temp_r3_4;
    void *temp_r4;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_16;
    void *temp_r4_17;
    void *temp_r4_20;
    void *temp_r4_21;
    void *temp_r4_24;
    void *temp_r4_25;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;
    void *temp_r5_10;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r5_8;
    void *temp_r5_9;
    void *temp_r6;
    void *var_r0_11;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r0_9;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r2_10;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_16;
    void *var_r2_17;
    void *var_r2_20;
    void *var_r2_21;
    void *var_r2_23;
    void *var_r2_24;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_9;
    void *var_r3_10;
    void *var_r3_12;
    void *var_r3_2;
    void *var_r3_4;
    void *var_r3_6;
    void *var_r3_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;

    sp0.unk0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0;
    sp0.unk6 = 0U;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    sp1C = 0;
    sp1C.unk4 = 0;
    sp24 = 0;
    sp24.unk4 = 0;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    arg0->unk6AB4 = func_0805E8F0(arg0 + 0x6AA0);
    arg0->unk6AD4 = func_0805E8F0(arg0 + 0x6AC0);
    arg0->unk6AF4 = func_0805E8F0(arg0 + 0x6AE0);
    arg0->unk6B14 = func_0805E8F0(arg0 + 0x6B00);
    arg0->unk6B34 = func_0805E8F0(arg0 + 0x6B20);
    arg0->unk6B54 = func_0805E8F0(arg0 + 0x6B40);
    if (arg0->unk6C6D == 0) {

    } else {
        temp_r4 = arg0 + 0x6C20;
        temp_r1 = arg0->unk6C20;
        (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unk6C24 + (temp_r4->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0 = &sp3C + 0xC;
        sp1C.unk0 = sp3C.unk0;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_2 = &sp1C + 0xC;
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_2->unk4 = (s32) temp_r0->unk4;
        temp_r1_2->unk8 = (s32) temp_r0->unk8;
        temp_r1_2->unkC = (s32) temp_r0->unkC;
        (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
        sp0.unk0 = (s16) temp_r4->unk1A;
        sp0.unk2 = (s16) temp_r4->unk1E;
        sp0.unk8 = 0;
        temp_r0_2 = arg0 + 0x6D08;
        sp0.unk6 = func_08007D4C(temp_r0_2, temp_r0_2->unk4);
        temp_r0_3 = arg0 + 0x6D10;
        sp0.unk4 = func_080074C0(temp_r0_3, temp_r0_3->unk4);
        sp0.unk18 = 1;
        temp_r3 = func_08008920(arg0);
        var_r2 = 0;
        if (sp1C != 0) {
            var_r2 = sp0.unk20;
        }
        func_0805E99C(temp_r3, sp1C, var_r2, &sp0);
        temp_r5 = arg0 + 0x6BE0;
        arg0->unk6BF4 = func_0805E8F0(temp_r5);
        temp_r1_3 = arg0->unk6BE0;
        (*temp_r1_3)->unk10(&sp3C, temp_r1_3, *(arg0->unk6BE4 + (temp_r5->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0_4 = &sp3C + 0xC;
        sp1C.unk0 = sp3C.unk0;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_4 = &sp1C + 0xC;
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_4->unk4 = (s32) temp_r0_4->unk4;
        temp_r1_4->unk8 = (s32) temp_r0_4->unk8;
        temp_r1_4->unkC = (s32) temp_r0_4->unkC;
        (temp_r1_4 + 0xC)->unk4 = (s32) (temp_r0_4 + 0xC)->unk4;
        sp0.unk0 = (s16) temp_r5->unk1A;
        sp0.unk2 = (s16) temp_r5->unk1E;
        temp_r0_5 = arg0 + 0x6CF0;
        sp0.unk6 = func_08007D4C(temp_r0_5, temp_r0_5->unk4);
        temp_r6 = arg0 + 0x6D00;
        sp0.unk4 = func_080074C0(temp_r6, arg0->unk6D04);
        temp_r0_6 = func_08008920(arg0);
        var_r2_2 = 0;
        if (sp1C != 0) {
            var_r2_2 = sp0.unk20;
        }
        func_0805E99C(temp_r0_6, sp1C, var_r2_2, &sp0);
        if (arg0->unk6C6D == 2) {
            temp_r5_2 = arg0 + 0x6C00;
            arg0->unk6C14 = func_0805E8F0(temp_r5_2);
            temp_r1_5 = arg0->unk6C00;
            (*temp_r1_5)->unk10(&sp3C, temp_r1_5, *(arg0->unk6C04 + (arg0->unk6C0C * 4)));
            memcpy(&sp3C, &sp3C, 0x20);
            temp_r0_7 = &sp3C + 0xC;
            sp1C.unk0 = sp3C.unk0;
            sp1C.unk4 = (s32) sp3C.unk4;
            sp1C.unk8 = (s32) sp3C.unk8;
            temp_r1_6 = &sp1C + 0xC;
            sp1C.unkC = (s32) sp3C.unkC;
            temp_r1_6->unk4 = (s32) temp_r0_7->unk4;
            temp_r1_6->unk8 = (s32) temp_r0_7->unk8;
            temp_r1_6->unkC = (s32) temp_r0_7->unkC;
            (temp_r1_6 + 0xC)->unk4 = (s32) (temp_r0_7 + 0xC)->unk4;
            sp0.unk0 = (s16) temp_r5_2->unk1A;
            sp0.unk2 = (s16) temp_r5_2->unk1E;
            temp_r0_8 = arg0 + 0x6CF8;
            sp0.unk6 = func_08007D4C(temp_r0_8, temp_r0_8->unk4);
            sp0.unk4 = func_080074C0(temp_r6, arg0->unk6D04);
            temp_r0_9 = func_08008920(arg0);
            var_r2_3 = 0;
            if (sp1C != 0) {
                var_r2_3 = sp0.unk20;
            }
            func_0805E99C(temp_r0_9, sp1C, var_r2_3, &sp0);
        }
        temp_r4_2 = arg0 + 0x6C40;
        func_0805E8F0(temp_r4_2);
        temp_r1_7 = arg0->unk6C40;
        (*temp_r1_7)->unk10(&sp3C, temp_r1_7, *(arg0->unk6C44 + (temp_r4_2->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0_10 = &sp3C + 0xC;
        sp1C.unk0 = sp3C.unk0;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_8 = &sp1C + 0xC;
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_8->unk4 = (s32) temp_r0_10->unk4;
        temp_r1_8->unk8 = (s32) temp_r0_10->unk8;
        temp_r1_8->unkC = (s32) temp_r0_10->unkC;
        (temp_r1_8 + 0xC)->unk4 = (s32) (temp_r0_10 + 0xC)->unk4;
        sp0.unk0 = (s16) temp_r4_2->unk1A;
        sp0.unk2 = (s16) temp_r4_2->unk1E;
        temp_r0_11 = arg0 + 0x6D18;
        sp0.unk6 = func_08007D4C(temp_r0_11, temp_r0_11->unk4);
        temp_r0_12 = arg0 + 0x6D20;
        sp0.unk4 = func_080074C0(temp_r0_12, temp_r0_12->unk4);
        temp_r3_2 = func_08008920(arg0);
        var_r2_4 = 0;
        if (sp1C != 0) {
            var_r2_4 = sp0.unk20;
        }
        func_0805E99C(temp_r3_2, sp1C, var_r2_4, &sp0);
    }
    temp_r4_3 = arg0 + 0x6BA0;
    temp_r1_9 = arg0->unk6BA0;
    (*temp_r1_9)->unk10(&sp3C, temp_r1_9, *(arg0->unk6BA4 + (temp_r4_3->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_13 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_10 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_10->unk4 = (s32) temp_r0_13->unk4;
    temp_r1_10->unk8 = (s32) temp_r0_13->unk8;
    temp_r1_10->unkC = (s32) temp_r0_13->unkC;
    (temp_r1_10 + 0xC)->unk4 = (s32) (temp_r0_13 + 0xC)->unk4;
    sp0.unk0 = (s16) temp_r4_3->unk1A;
    sp0.unk2 = (s16) temp_r4_3->unk1E;
    sp0.unk8 = 0;
    sp0.unk6 = 0U;
    sp0.unk4 = 0;
    sp0.unk18 = 1;
    temp_r3_3 = func_08008920(arg0);
    var_r2_5 = 0;
    if (sp1C != 0) {
        var_r2_5 = sp0.unk20;
    }
    func_0805E99C(temp_r3_3, sp1C, var_r2_5, &sp0);
    if ((s32) arg0->unk6D32 <= 9) {

    } else {
        temp_r5_3 = arg0 + 0x6C64;
        temp_r0_14 = func_08008920(arg0) + 4;
        temp_r0_14->unk6 = (u16) arg0->unk6C64;
        temp_r0_14->unkE = (u16) temp_r5_3->unk2;
        temp_r0_14->unk16 = (u16) temp_r5_3->unk4;
        temp_r0_14->unk1E = (u16) temp_r5_3->unk6;
        temp_r3_4 = arg0 + 0x6BC0;
        temp_r1_11 = arg0->unk6BC0;
        (*temp_r1_11)->unk10(&sp3C, temp_r1_11, *(arg0->unk6BC4 + (temp_r3_4->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0_15 = &sp3C + 0xC;
        sp1C.unk0 = sp3C.unk0;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_12 = &sp1C + 0xC;
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_12->unk4 = (s32) temp_r0_15->unk4;
        temp_r1_12->unk8 = (s32) temp_r0_15->unk8;
        temp_r1_12->unkC = (s32) temp_r0_15->unkC;
        (temp_r1_12 + 0xC)->unk4 = (s32) (temp_r0_15 + 0xC)->unk4;
        sp0.unk0 = (s16) temp_r3_4->unk1A;
        sp0.unk2 = (s16) temp_r3_4->unk1E;
        sp0.unk8 = 0;
        sp0.unk6 = (u16) arg0->unk6C60;
        sp0.unk4 = 0;
        sp0.unk11 = 0;
        temp_r1_13 = (s16) arg0->unk6C64;
        if ((temp_r1_13 == 0x100) && (arg0->unk6C6A == temp_r1_13)) {
            sp14 = 0;
        } else {
            sp14 = 1;
        }
        sp0.unk18 = 1;
    }
    temp_r4_4 = arg0 + 0x6AA0;
    temp_r1_14 = arg0->unk6AA0;
    (*temp_r1_14)->unk10(&sp3C, temp_r1_14, *(arg0->unk6AA4 + (temp_r4_4->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_16 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_15 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_15->unk4 = (s32) temp_r0_16->unk4;
    temp_r1_15->unk8 = (s32) temp_r0_16->unk8;
    temp_r1_15->unkC = (s32) temp_r0_16->unkC;
    (temp_r1_15 + 0xC)->unk4 = (s32) (temp_r0_16 + 0xC)->unk4;
    sp0.unk0 = (s16) temp_r4_4->unk1A;
    sp0.unk2 = (s16) temp_r4_4->unk1E;
    sp0.unk8 = 0;
    temp_r4_5 = arg0 + 0x6C78;
    sp0.unk6 = func_08007D4C(temp_r4_5, temp_r4_5->unk4);
    temp_r0_17 = arg0 + 0x6C80;
    sp0.unk4 = func_080074C0(temp_r0_17, temp_r0_17->unk4);
    sp14 = 0;
    sp0.unk18 = 1;
    sp8C = arg0 + 0x6AC4;
    sp90 = arg0 + 0x6AE4;
    sp94 = arg0 + 0x6B04;
    sp98 = arg0 + 0x6B24;
    if ((s32) ((u8) arg0->unk6AB4 << 0x1E) >= 0) {

    } else {
        temp_r5_4 = func_08008910(arg0);
        temp_r2 = func_08007D4C(temp_r4_5, temp_r4_5->unk4);
        var_r3 = 0;
        if (sp24 != 0) {
            var_r3 = sp0.unk28;
        }
        sp9C = temp_r5_4;
        func_08008F0C(&sp3C, sp24, (temp_r2 << 5) + 0x06010000, var_r3);
        temp_r1_16 = temp_r5_4->unk4;
        if (temp_r1_16 != temp_r5_4->unkC) {
            if (temp_r1_16 != 0) {
                temp_r1_16->unk0 = (s32) sp3C.unk0;
                temp_r1_16->unk4 = (s32) sp3C.unk4;
                temp_r1_16->unk8 = (s32) sp3C.unk8;
                temp_r1_16->unkC = (s32) sp3C.unkC;
            }
            sp9C->unk4 = (void *) (sp9C->unk4 + 0x10);
        } else {
            sp60 = 1;
            temp_r4_6 = (s32) (temp_r1_16 - sp9C->unk0) >> 4;
            sp5C = temp_r4_6;
            var_r0 = &sp5C;
            if ((u32) temp_r4_6 < 1U) {
                var_r0 = &sp60;
            }
            temp_r0_18 = temp_r4_6 + *var_r0;
            if (temp_r0_18 != 0) {
                temp_r4_7 = temp_r0_18 * 0x10;
                var_r0_2 = malloc(temp_r4_7);
                var_sl = temp_r4_7;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sl);
                }
            } else {
                var_r0_2 = 0;
                var_sl = 0;
            }
            spA0 = var_r0_2;
            var_r2_6 = sp9C->unk0;
            var_r3_2 = var_r0_2;
            sp8C = arg0 + 0x6AC4;
            sp90 = arg0 + 0x6AE4;
            sp94 = arg0 + 0x6B04;
            sp98 = arg0 + 0x6B24;
            if (var_r2_6 != temp_r1_16) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2_6->unk0;
                        var_r3_2->unk4 = (s32) var_r2_6->unk4;
                        var_r3_2->unk8 = (s32) var_r2_6->unk8;
                        var_r3_2->unkC = (s32) var_r2_6->unkC;
                    }
                    var_r2_6 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2_6 != temp_r1_16);
            }
            if (sp60 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp3C.unk0;
                    var_r3_2->unk4 = (s32) sp3C.unk4;
                    var_r3_2->unk8 = (s32) sp3C.unk8;
                    var_r3_2->unkC = (s32) sp3C.unkC;
                }
                var_r5 = var_r3_2 + 0x10;
            } else {
                var_r8 = sp60;
                var_r2_7 = var_r3_2;
                if (sp60 != 0) {
                    do {
                        if (var_r2_7 != 0) {
                            var_r2_7->unk0 = (s32) sp3C.unk0;
                            var_r2_7->unk4 = (s32) sp3C.unk4;
                            var_r2_7->unk8 = (s32) sp3C.unk8;
                            var_r2_7->unkC = (s32) sp3C.unkC;
                        }
                        var_r8 -= 1;
                        var_r2_7 += 0x10;
                    } while (var_r8 != 0);
                }
                var_r5 = var_r2_7;
            }
            temp_r2_2 = sp9C->unk4;
            temp_r0_19 = sp9C->unk0;
            var_r1 = temp_r0_19;
            if (temp_r0_19 != temp_r2_2) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_2);
            }
            if (temp_r0_19 != 0) {
                free();
            }
            sp9C->unk0 = spA0;
            sp9C->unk4 = var_r5;
            sp9C->unkC = (void *) (spA0 + var_sl);
        }
    }
    temp_r3_5 = func_08008920(arg0);
    var_r2_8 = 0;
    if (sp1C != 0) {
        var_r2_8 = sp0.unk20;
    }
    func_0805E99C(temp_r3_5, sp1C, var_r2_8, &sp0);
    func_080035C0(arg0, sp0.unk0, sp0.unk2, 1);
    temp_r4_8 = arg0 + 0x6AC0;
    temp_r1_17 = arg0->unk6AC0;
    (*temp_r1_17)->unk10(&sp3C, temp_r1_17, *(*sp8C + (temp_r4_8->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_20 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_18 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_18->unk4 = (s32) temp_r0_20->unk4;
    temp_r1_18->unk8 = (s32) temp_r0_20->unk8;
    temp_r1_18->unkC = (s32) temp_r0_20->unkC;
    (temp_r1_18 + 0xC)->unk4 = (s32) (temp_r0_20 + 0xC)->unk4;
    sp0.unk0 = (s16) temp_r4_8->unk1A;
    sp0.unk2 = (s16) temp_r4_8->unk1E;
    sp0.unk8 = 0;
    temp_r4_9 = arg0 + 0x6CB0;
    sp0.unk6 = func_08007D4C(temp_r4_9, temp_r4_9->unk4);
    temp_r0_21 = arg0 + 0x6CB8;
    sp0.unk4 = func_080074C0(temp_r0_21, temp_r0_21->unk4);
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk6AD4 << 0x1E) >= 0) {

    } else {
        temp_r5_5 = func_08008910(arg0);
        temp_r2_3 = func_08007D4C(temp_r4_9, temp_r4_9->unk4);
        var_r3_3 = 0;
        if (sp24 != 0) {
            var_r3_3 = sp0.unk28;
        }
        sp9C = temp_r5_5;
        func_08008F0C(&sp3C, sp24, (temp_r2_3 << 5) + 0x06010000, var_r3_3);
        temp_r1_19 = temp_r5_5->unk4;
        if (temp_r1_19 != temp_r5_5->unkC) {
            if (temp_r1_19 != 0) {
                temp_r1_19->unk0 = (s32) sp3C.unk0;
                temp_r1_19->unk4 = (s32) sp3C.unk4;
                temp_r1_19->unk8 = (s32) sp3C.unk8;
                temp_r1_19->unkC = (s32) sp3C.unkC;
            }
            sp9C->unk4 = (void *) (sp9C->unk4 + 0x10);
        } else {
            sp68 = 1;
            temp_r4_10 = (s32) (temp_r1_19 - sp9C->unk0) >> 4;
            sp64 = temp_r4_10;
            var_r0_3 = &sp64;
            if ((u32) temp_r4_10 < 1U) {
                var_r0_3 = &sp68;
            }
            temp_r0_22 = temp_r4_10 + *var_r0_3;
            if (temp_r0_22 != 0) {
                temp_r4_11 = temp_r0_22 * 0x10;
                var_r0_4 = malloc(temp_r4_11);
                var_sl_2 = temp_r4_11;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sl_2);
                }
            } else {
                var_r0_4 = 0;
                var_sl_2 = 0;
            }
            spA0 = var_r0_4;
            var_r2_9 = sp9C->unk0;
            var_r3_4 = var_r0_4;
            if (var_r2_9 != temp_r1_19) {
                do {
                    if (var_r3_4 != 0) {
                        var_r3_4->unk0 = (s32) var_r2_9->unk0;
                        var_r3_4->unk4 = (s32) var_r2_9->unk4;
                        var_r3_4->unk8 = (s32) var_r2_9->unk8;
                        var_r3_4->unkC = (s32) var_r2_9->unkC;
                    }
                    var_r2_9 += 0x10;
                    var_r3_4 += 0x10;
                } while (var_r2_9 != temp_r1_19);
            }
            if (sp68 == 1) {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) sp3C.unk0;
                    var_r3_4->unk4 = (s32) sp3C.unk4;
                    var_r3_4->unk8 = (s32) sp3C.unk8;
                    var_r3_4->unkC = (s32) sp3C.unkC;
                }
                var_r5_2 = var_r3_4 + 0x10;
            } else {
                var_r8_2 = sp68;
                var_r2_10 = var_r3_4;
                if (sp68 != 0) {
                    do {
                        if (var_r2_10 != 0) {
                            var_r2_10->unk0 = (s32) sp3C.unk0;
                            var_r2_10->unk4 = (s32) sp3C.unk4;
                            var_r2_10->unk8 = (s32) sp3C.unk8;
                            var_r2_10->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_2 -= 1;
                        var_r2_10 += 0x10;
                    } while (var_r8_2 != 0);
                }
                var_r5_2 = var_r2_10;
            }
            temp_r2_4 = sp9C->unk4;
            temp_r0_23 = sp9C->unk0;
            var_r1_2 = temp_r0_23;
            if (temp_r0_23 != temp_r2_4) {
                do {
                    var_r1_2 += 0x10;
                } while (var_r1_2 != temp_r2_4);
            }
            if (temp_r0_23 != 0) {
                free();
            }
            sp9C->unk0 = spA0;
            sp9C->unk4 = var_r5_2;
            sp9C->unkC = (void *) (spA0 + var_sl_2);
        }
    }
    temp_r3_6 = func_08008920(arg0);
    var_r2_11 = 0;
    if (sp1C != 0) {
        var_r2_11 = sp0.unk20;
    }
    func_0805E99C(temp_r3_6, sp1C, var_r2_11, &sp0);
    func_080035C0(arg0, sp0.unk0, sp0.unk2, 0);
    if ((s8) arg0->unk6C6C == 0) {

    } else {
        temp_r4_12 = arg0 + 0x6B40;
        temp_r1_20 = arg0->unk6B40;
        (*temp_r1_20)->unk10(&sp3C, temp_r1_20, *(arg0->unk6B44 + (temp_r4_12->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0_24 = &sp3C + 0xC;
        sp1C.unk0 = sp3C.unk0;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_21 = &sp1C + 0xC;
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_21->unk4 = (s32) temp_r0_24->unk4;
        temp_r1_21->unk8 = (s32) temp_r0_24->unk8;
        temp_r1_21->unkC = (s32) temp_r0_24->unkC;
        (temp_r1_21 + 0xC)->unk4 = (s32) (temp_r0_24 + 0xC)->unk4;
        sp0.unk0 = (s16) temp_r4_12->unk1A;
        sp0.unk2 = (s16) temp_r4_12->unk1E;
        sp0.unk8 = 0;
        temp_r4_13 = arg0 + 0x6CC0;
        sp0.unk6 = func_08007D4C(temp_r4_13, temp_r4_13->unk4);
        temp_r0_25 = arg0 + 0x6CC8;
        sp0.unk4 = func_080074C0(temp_r0_25, temp_r0_25->unk4);
        sp0.unk18 = 1;
        if ((s32) ((u8) arg0->unk6B54 << 0x1E) >= 0) {

        } else {
            temp_r5_6 = func_08008910(arg0);
            temp_r2_5 = func_08007D4C(temp_r4_13, temp_r4_13->unk4);
            var_r3_5 = 0;
            if (sp24 != 0) {
                var_r3_5 = sp0.unk28;
            }
            sp9C = temp_r5_6;
            func_08008F0C(&sp3C, sp24, (temp_r2_5 << 5) + 0x06010000, var_r3_5);
            temp_r1_22 = temp_r5_6->unk4;
            if (temp_r1_22 != temp_r5_6->unkC) {
                if (temp_r1_22 != 0) {
                    temp_r1_22->unk0 = (s32) sp3C.unk0;
                    temp_r1_22->unk4 = (s32) sp3C.unk4;
                    temp_r1_22->unk8 = (s32) sp3C.unk8;
                    temp_r1_22->unkC = (s32) sp3C.unkC;
                }
                sp9C->unk4 = (void *) (sp9C->unk4 + 0x10);
            } else {
                sp70 = 1;
                temp_r4_14 = (s32) (temp_r1_22 - sp9C->unk0) >> 4;
                sp6C = temp_r4_14;
                var_r0_5 = &sp6C;
                if ((u32) temp_r4_14 < 1U) {
                    var_r0_5 = &sp70;
                }
                temp_r0_26 = temp_r4_14 + *var_r0_5;
                if (temp_r0_26 != 0) {
                    temp_r4_15 = temp_r0_26 * 0x10;
                    var_r0_6 = malloc(temp_r4_15);
                    var_sl_3 = temp_r4_15;
                    if (var_r0_6 == 0) {
                        var_r0_6 = func_080D3BC0(var_sl_3);
                    }
                } else {
                    var_r0_6 = 0;
                    var_sl_3 = 0;
                }
                spA0 = var_r0_6;
                var_r2_12 = sp9C->unk0;
                var_r3_6 = var_r0_6;
                if (var_r2_12 != temp_r1_22) {
                    do {
                        if (var_r3_6 != 0) {
                            var_r3_6->unk0 = (s32) var_r2_12->unk0;
                            var_r3_6->unk4 = (s32) var_r2_12->unk4;
                            var_r3_6->unk8 = (s32) var_r2_12->unk8;
                            var_r3_6->unkC = (s32) var_r2_12->unkC;
                        }
                        var_r2_12 += 0x10;
                        var_r3_6 += 0x10;
                    } while (var_r2_12 != temp_r1_22);
                }
                if (sp70 == 1) {
                    if (var_r3_6 != 0) {
                        var_r3_6->unk0 = (s32) sp3C.unk0;
                        var_r3_6->unk4 = (s32) sp3C.unk4;
                        var_r3_6->unk8 = (s32) sp3C.unk8;
                        var_r3_6->unkC = (s32) sp3C.unkC;
                    }
                    var_r5_3 = var_r3_6 + 0x10;
                } else {
                    var_r8_3 = sp70;
                    var_r2_13 = var_r3_6;
                    if (sp70 != 0) {
                        do {
                            if (var_r2_13 != 0) {
                                var_r2_13->unk0 = (s32) sp3C.unk0;
                                var_r2_13->unk4 = (s32) sp3C.unk4;
                                var_r2_13->unk8 = (s32) sp3C.unk8;
                                var_r2_13->unkC = (s32) sp3C.unkC;
                            }
                            var_r8_3 -= 1;
                            var_r2_13 += 0x10;
                        } while (var_r8_3 != 0);
                    }
                    var_r5_3 = var_r2_13;
                }
                temp_r2_6 = sp9C->unk4;
                temp_r0_27 = sp9C->unk0;
                var_r1_3 = temp_r0_27;
                if (temp_r0_27 != temp_r2_6) {
                    do {
                        var_r1_3 += 0x10;
                    } while (var_r1_3 != temp_r2_6);
                }
                if (temp_r0_27 != 0) {
                    free();
                }
                sp9C->unk0 = spA0;
                sp9C->unk4 = var_r5_3;
                sp9C->unkC = (void *) (spA0 + var_sl_3);
            }
        }
        temp_r3_7 = func_08008920(arg0);
        var_r2_14 = 0;
        if (sp1C != 0) {
            var_r2_14 = sp0.unk20;
        }
        func_0805E99C(temp_r3_7, sp1C, var_r2_14, &sp0);
        if ((u16) sp0.unk2 == 0x94) {
            func_080035C0(arg0, sp0.unk0, 0x94, 0);
        }
        temp_r2_7 = arg0 + 0x6B60;
        sp0.unk0 = (s16) temp_r2_7->unk1A;
        sp0.unk2 = (s16) temp_r2_7->unk1E;
        temp_r0_28 = func_08008920(arg0);
        var_r2_15 = 0;
        if (sp1C != 0) {
            var_r2_15 = sp0.unk20;
        }
        func_0805E99C(temp_r0_28, sp1C, var_r2_15, &sp0);
        if ((u16) sp0.unk2 == 0x94) {
            func_080035C0(arg0, sp0.unk0, 0x94, 0);
        }
    }
    temp_r4_16 = arg0 + 0x6AE0;
    temp_r1_23 = arg0->unk6AE0;
    (*temp_r1_23)->unk10(&sp3C, temp_r1_23, *(*sp90 + (temp_r4_16->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_29 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_24 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_24->unk4 = (s32) temp_r0_29->unk4;
    temp_r1_24->unk8 = (s32) temp_r0_29->unk8;
    temp_r1_24->unkC = (s32) temp_r0_29->unkC;
    (temp_r1_24 + 0xC)->unk4 = (s32) (temp_r0_29 + 0xC)->unk4;
    sp0.unk0 = (s16) (temp_r4_16->unk1A - arg0->unk6D30);
    sp0.unk2 = (s16) temp_r4_16->unk1E;
    sp0.unk8 = 0;
    temp_r4_17 = arg0 + 0x6C88;
    sp0.unk6 = func_08007D4C(temp_r4_17, temp_r4_17->unk4);
    temp_r0_30 = arg0 + 0x6C90;
    sp0.unk4 = func_080074C0(temp_r0_30, temp_r0_30->unk4);
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk6AF4 << 0x1E) >= 0) {

    } else {
        temp_r5_7 = func_08008910(arg0);
        temp_r2_8 = func_08007D4C(temp_r4_17, temp_r4_17->unk4);
        var_r3_7 = 0;
        if (sp24 != 0) {
            var_r3_7 = sp0.unk28;
        }
        sp9C = temp_r5_7;
        func_08008F0C(&sp3C, sp24, (temp_r2_8 << 5) + 0x06010000, var_r3_7);
        temp_r1_25 = temp_r5_7->unk4;
        if (temp_r1_25 != temp_r5_7->unkC) {
            if (temp_r1_25 != 0) {
                temp_r1_25->unk0 = (s32) sp3C.unk0;
                temp_r1_25->unk4 = (s32) sp3C.unk4;
                temp_r1_25->unk8 = (s32) sp3C.unk8;
                temp_r1_25->unkC = (s32) sp3C.unkC;
            }
            sp9C->unk4 = (void *) (sp9C->unk4 + 0x10);
        } else {
            sp78 = 1;
            temp_r4_18 = (s32) (temp_r1_25 - sp9C->unk0) >> 4;
            sp74 = temp_r4_18;
            var_r0_7 = &sp74;
            if ((u32) temp_r4_18 < 1U) {
                var_r0_7 = &sp78;
            }
            temp_r0_31 = temp_r4_18 + *var_r0_7;
            if (temp_r0_31 != 0) {
                temp_r4_19 = temp_r0_31 * 0x10;
                var_r0_8 = malloc(temp_r4_19);
                var_sl_4 = temp_r4_19;
                if (var_r0_8 == 0) {
                    var_r0_8 = func_080D3BC0(var_sl_4);
                }
            } else {
                var_r0_8 = 0;
                var_sl_4 = 0;
            }
            spA0 = var_r0_8;
            var_r2_16 = sp9C->unk0;
            var_r3_8 = var_r0_8;
            if (var_r2_16 != temp_r1_25) {
                do {
                    if (var_r3_8 != 0) {
                        var_r3_8->unk0 = (s32) var_r2_16->unk0;
                        var_r3_8->unk4 = (s32) var_r2_16->unk4;
                        var_r3_8->unk8 = (s32) var_r2_16->unk8;
                        var_r3_8->unkC = (s32) var_r2_16->unkC;
                    }
                    var_r2_16 += 0x10;
                    var_r3_8 += 0x10;
                } while (var_r2_16 != temp_r1_25);
            }
            if (sp78 == 1) {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) sp3C.unk0;
                    var_r3_8->unk4 = (s32) sp3C.unk4;
                    var_r3_8->unk8 = (s32) sp3C.unk8;
                    var_r3_8->unkC = (s32) sp3C.unkC;
                }
                var_r5_4 = var_r3_8 + 0x10;
            } else {
                var_r8_4 = sp78;
                var_r2_17 = var_r3_8;
                if (sp78 != 0) {
                    do {
                        if (var_r2_17 != 0) {
                            var_r2_17->unk0 = (s32) sp3C.unk0;
                            var_r2_17->unk4 = (s32) sp3C.unk4;
                            var_r2_17->unk8 = (s32) sp3C.unk8;
                            var_r2_17->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_4 -= 1;
                        var_r2_17 += 0x10;
                    } while (var_r8_4 != 0);
                }
                var_r5_4 = var_r2_17;
            }
            temp_r2_9 = sp9C->unk4;
            temp_r0_32 = sp9C->unk0;
            var_r1_4 = temp_r0_32;
            if (temp_r0_32 != temp_r2_9) {
                do {
                    var_r1_4 += 0x10;
                } while (var_r1_4 != temp_r2_9);
            }
            if (temp_r0_32 != 0) {
                free();
            }
            sp9C->unk0 = spA0;
            sp9C->unk4 = var_r5_4;
            sp9C->unkC = (void *) (spA0 + var_sl_4);
        }
    }
    temp_r3_8 = func_08008920(arg0);
    var_r2_18 = 0;
    if (sp1C != 0) {
        var_r2_18 = sp0.unk20;
    }
    func_0805E99C(temp_r3_8, sp1C, var_r2_18, &sp0);
    func_080035C0(arg0, sp0.unk0, sp0.unk2, 2);
    temp_r4_20 = arg0 + 0x6B00;
    temp_r1_26 = arg0->unk6B00;
    (*temp_r1_26)->unk10(&sp3C, temp_r1_26, *(*sp94 + (arg0->unk6B0C * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_33 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_27 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_27->unk4 = (s32) temp_r0_33->unk4;
    temp_r1_27->unk8 = (s32) temp_r0_33->unk8;
    temp_r1_27->unkC = (s32) temp_r0_33->unkC;
    (temp_r1_27 + 0xC)->unk4 = (s32) (temp_r0_33 + 0xC)->unk4;
    sp0.unk0 = (s16) temp_r4_20->unk1A;
    sp0.unk2 = (s16) temp_r4_20->unk1E;
    sp0.unk8 = 0;
    temp_r4_21 = arg0 + 0x6C98;
    sp0.unk6 = func_08007D4C(temp_r4_21, temp_r4_21->unk4);
    temp_r0_34 = arg0 + 0x6CA0;
    sp0.unk4 = func_080074C0(temp_r0_34, temp_r0_34->unk4);
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk6B14 << 0x1E) >= 0) {

    } else {
        temp_r5_8 = func_08008910(arg0);
        temp_r2_10 = func_08007D4C(temp_r4_21, temp_r4_21->unk4);
        var_r3_9 = 0;
        if (sp24 != 0) {
            var_r3_9 = sp0.unk28;
        }
        sp9C = temp_r5_8;
        func_08008F0C(&sp3C, sp24, (temp_r2_10 << 5) + 0x06010000, var_r3_9);
        temp_r1_28 = temp_r5_8->unk4;
        if (temp_r1_28 != temp_r5_8->unkC) {
            if (temp_r1_28 != 0) {
                temp_r1_28->unk0 = (s32) sp3C.unk0;
                temp_r1_28->unk4 = (s32) sp3C.unk4;
                temp_r1_28->unk8 = (s32) sp3C.unk8;
                temp_r1_28->unkC = (s32) sp3C.unkC;
            }
            sp9C->unk4 = (void *) (sp9C->unk4 + 0x10);
        } else {
            sp80 = 1;
            temp_r4_22 = (s32) (temp_r1_28 - sp9C->unk0) >> 4;
            sp7C = temp_r4_22;
            var_r2_19 = &sp7C;
            if ((u32) temp_r4_22 < (u32) sp80) {
                var_r2_19 = &sp80;
            }
            temp_r0_35 = temp_r4_22 + *var_r2_19;
            if (temp_r0_35 != 0) {
                temp_r4_23 = temp_r0_35 * 0x10;
                var_r0_9 = malloc(temp_r4_23);
                var_sl_5 = temp_r4_23;
                if (var_r0_9 == 0) {
                    var_r0_9 = func_080D3BC0(var_sl_5);
                }
            } else {
                var_r0_9 = 0;
                var_sl_5 = 0;
            }
            spA0 = var_r0_9;
            var_r2_20 = sp9C->unk0;
            var_r3_10 = var_r0_9;
            if (var_r2_20 != temp_r1_28) {
                do {
                    if (var_r3_10 != 0) {
                        var_r3_10->unk0 = (s32) var_r2_20->unk0;
                        var_r3_10->unk4 = (s32) var_r2_20->unk4;
                        var_r3_10->unk8 = (s32) var_r2_20->unk8;
                        var_r3_10->unkC = (s32) var_r2_20->unkC;
                    }
                    var_r2_20 += 0x10;
                    var_r3_10 += 0x10;
                } while (var_r2_20 != temp_r1_28);
            }
            if (sp80 == 1) {
                if (var_r3_10 != 0) {
                    var_r3_10->unk0 = (s32) sp3C.unk0;
                    var_r3_10->unk4 = (s32) sp3C.unk4;
                    var_r3_10->unk8 = (s32) sp3C.unk8;
                    var_r3_10->unkC = (s32) sp3C.unkC;
                }
                var_r5_5 = var_r3_10 + 0x10;
            } else {
                var_r8_5 = sp80;
                var_r2_21 = var_r3_10;
                if (sp80 != 0) {
                    do {
                        if (var_r2_21 != 0) {
                            var_r2_21->unk0 = (s32) sp3C.unk0;
                            var_r2_21->unk4 = (s32) sp3C.unk4;
                            var_r2_21->unk8 = (s32) sp3C.unk8;
                            var_r2_21->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_5 -= 1;
                        var_r2_21 += 0x10;
                    } while (var_r8_5 != 0);
                }
                var_r5_5 = var_r2_21;
            }
            temp_r2_11 = sp9C->unk4;
            temp_r0_36 = sp9C->unk0;
            var_r1_5 = temp_r0_36;
            if (temp_r0_36 != temp_r2_11) {
                do {
                    var_r1_5 += 0x10;
                } while (var_r1_5 != temp_r2_11);
            }
            if (temp_r0_36 != 0) {
                free();
            }
            sp9C->unk0 = spA0;
            sp9C->unk4 = var_r5_5;
            sp9C->unkC = (void *) (spA0 + var_sl_5);
        }
    }
    temp_r3_9 = func_08008920(arg0);
    var_r2_22 = 0;
    if (sp1C != 0) {
        var_r2_22 = sp0.unk20;
    }
    func_0805E99C(temp_r3_9, sp1C, var_r2_22, &sp0);
    func_080035C0(arg0, sp0.unk0, sp0.unk2, 2);
    temp_r5_9 = arg0 + 0x6B20;
    temp_r1_29 = arg0->unk6B20;
    (*temp_r1_29)->unk10(&sp3C, temp_r1_29, *(*sp98 + (temp_r5_9->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r4_24 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r0_37 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r0_37->unk4 = (s32) temp_r4_24->unk4;
    temp_r0_37->unk8 = (s32) temp_r4_24->unk8;
    temp_r0_37->unkC = (s32) temp_r4_24->unkC;
    (temp_r0_37 + 0xC)->unk4 = (s32) (temp_r4_24 + 0xC)->unk4;
    sp0.unk0 = (s16) temp_r5_9->unk1A;
    sp0.unk2 = (s16) temp_r5_9->unk1E;
    sp0.unk8 = 0;
    temp_r4_25 = arg0 + 0x6CA8;
    sp0.unk6 = func_08007D4C(temp_r4_25, temp_r4_25->unk4);
    temp_r0_38 = arg0 + 0x6CC8;
    sp0.unk4 = func_080074C0(temp_r0_38, temp_r0_38->unk4);
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk6B34 << 0x1E) >= 0) {

    } else {
        temp_r5_10 = func_08008910(arg0);
        temp_r2_12 = func_08007D4C(temp_r4_25, temp_r4_25->unk4);
        var_r3_11 = 0;
        if (sp24 != 0) {
            var_r3_11 = sp0.unk28;
        }
        sp9C = temp_r5_10;
        func_08008F0C(&sp3C, sp24, (temp_r2_12 << 5) + 0x06010000, var_r3_11);
        temp_r1_30 = temp_r5_10->unk4;
        if (temp_r1_30 != temp_r5_10->unkC) {
            if (temp_r1_30 != 0) {
                temp_r1_30->unk0 = (s32) sp3C.unk0;
                temp_r1_30->unk4 = (s32) sp3C.unk4;
                temp_r1_30->unk8 = (s32) sp3C.unk8;
                temp_r1_30->unkC = (s32) sp3C.unkC;
            }
            sp9C->unk4 = (void *) (sp9C->unk4 + 0x10);
        } else {
            sp88 = 1;
            temp_r4_26 = (s32) (temp_r1_30 - sp9C->unk0) >> 4;
            var_r0_10 = &sp84;
            *var_r0_10 = (u32) temp_r4_26;
            if ((u32) temp_r4_26 < (u32) sp88) {
                var_r0_10 = &sp88;
            }
            temp_r0_39 = temp_r4_26 + *var_r0_10;
            if (temp_r0_39 != 0) {
                temp_r4_27 = temp_r0_39 * 0x10;
                var_r0_11 = malloc(temp_r4_27);
                var_sb = temp_r4_27;
                if (var_r0_11 == 0) {
                    var_r0_11 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_11 = 0;
                var_sb = 0;
            }
            spA0 = var_r0_11;
            var_r2_23 = sp9C->unk0;
            var_r3_12 = var_r0_11;
            if (var_r2_23 != temp_r1_30) {
                do {
                    if (var_r3_12 != 0) {
                        var_r3_12->unk0 = (s32) var_r2_23->unk0;
                        var_r3_12->unk4 = (s32) var_r2_23->unk4;
                        var_r3_12->unk8 = (s32) var_r2_23->unk8;
                        var_r3_12->unkC = (s32) var_r2_23->unkC;
                    }
                    var_r2_23 += 0x10;
                    var_r3_12 += 0x10;
                } while (var_r2_23 != temp_r1_30);
            }
            if (sp88 == 1) {
                if (var_r3_12 != 0) {
                    var_r3_12->unk0 = (s32) sp3C.unk0;
                    var_r3_12->unk4 = (s32) sp3C.unk4;
                    var_r3_12->unk8 = (s32) sp3C.unk8;
                    var_r3_12->unkC = (s32) sp3C.unkC;
                }
                var_r5_6 = var_r3_12 + 0x10;
            } else {
                var_r8_6 = sp88;
                var_r2_24 = var_r3_12;
                if (sp88 != 0) {
                    do {
                        if (var_r2_24 != 0) {
                            var_r2_24->unk0 = (s32) sp3C.unk0;
                            var_r2_24->unk4 = (s32) sp3C.unk4;
                            var_r2_24->unk8 = (s32) sp3C.unk8;
                            var_r2_24->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_6 -= 1;
                        var_r2_24 += 0x10;
                    } while (var_r8_6 != 0);
                }
                var_r5_6 = var_r2_24;
            }
            temp_r2_13 = sp9C->unk4;
            temp_r0_40 = sp9C->unk0;
            var_r1_6 = temp_r0_40;
            if (temp_r0_40 != temp_r2_13) {
                do {
                    var_r1_6 += 0x10;
                } while (var_r1_6 != temp_r2_13);
            }
            if (temp_r0_40 != 0) {
                free();
            }
            sp9C->unk0 = spA0;
            sp9C->unk4 = var_r5_6;
            sp9C->unkC = (void *) (spA0 + var_sb);
        }
    }
    temp_r3_10 = func_08008920(arg0);
    var_r2_25 = 0;
    if (sp1C != 0) {
        var_r2_25 = sp0.unk20;
    }
    func_0805E99C(temp_r3_10, sp1C, var_r2_25, &sp0);
    func_080035C0(arg0, sp0.unk0, sp0.unk2, 2);
}

