#include "common.h"
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008E64(s32, s32, u32);                     /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_0805B38C(void *arg0) {
    s32 sp0;
    s32 sp8;
    s32 sp10;
    s32 sp18;
s32 sp20;
    s32 *sp58;
    s32 *sp5C;
    s32 *sp60;
    s32 *sp64;
    s32 *sp68;
    void *sp6C;
    s32 *sp70;
    s32 sp74;
    void **sp78;
    s32 *sp7C;
    s32 *sp80;
    void *sp84;
    s32 *sp88;
    s32 *sp8C;
    s16 var_r7_3;
    s16 var_r7_4;
    s32 temp_r1_10;
    s32 temp_r1_13;
    s32 temp_r1_14;
    s32 temp_r1_17;
    s32 temp_r1_18;
    s32 temp_r1_21;
    s32 temp_r1_22;
    s32 temp_r1_25;
    s32 temp_r1_26;
    s32 temp_r1_28;
    s32 temp_r1_29;
    s32 temp_r1_31;
    s32 temp_r1_34;
    s32 temp_r1_36;
    s32 temp_r1_38;
    s32 temp_r1_39;
    s32 temp_r1_3;
    s32 temp_r1_41;
    s32 temp_r1_44;
    s32 temp_r1_46;
    s32 temp_r1_49;
    s32 temp_r1_6;
    s32 temp_r1_9;
    s32 var_r3;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_sl;
    u16 var_r0;
    u16 var_r0_2;
    u16 var_r0_3;
    u16 var_r0_4;
    u16 var_r0_5;
    u16 var_r1;
    u16 var_r1_2;
    u16 var_r1_3;
    u16 var_r1_4;
    u16 var_r2;
    u16 var_r2_10;
    u16 var_r2_11;
    u16 var_r2_12;
    u16 var_r2_13;
    u16 var_r2_14;
    u16 var_r2_15;
    u16 var_r2_17;
    u16 var_r2_18;
    u16 var_r2_19;
    u16 var_r2_20;
    u16 var_r2_21;
    u16 var_r2_22;
    u16 var_r2_23;
    u16 var_r2_24;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r2_5;
    u16 var_r2_6;
    u16 var_r2_7;
    u16 var_r2_8;
    u16 var_r2_9;
    void **temp_r1;
    void **temp_r1_11;
    void **temp_r1_15;
    void **temp_r1_19;
    void **temp_r1_23;
    void **temp_r1_32;
    void **temp_r1_42;
    void **temp_r1_47;
    void **temp_r1_4;
    void **temp_r1_7;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_23;
    void *temp_r0_24;
    void *temp_r0_25;
    void *temp_r0_26;
    void *temp_r0_27;
    void *temp_r0_28;
    void *temp_r0_29;
    void *temp_r0_2;
    void *temp_r0_30;
    void *temp_r0_31;
    void *temp_r0_32;
    void *temp_r0_33;
    void *temp_r0_34;
    void *temp_r0_35;
    void *temp_r0_36;
    void *temp_r0_37;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_12;
    void *temp_r1_16;
    void *temp_r1_20;
    void *temp_r1_24;
    void *temp_r1_27;
    void *temp_r1_2;
    void *temp_r1_30;
    void *temp_r1_33;
    void *temp_r1_35;
    void *temp_r1_37;
    void *temp_r1_40;
    void *temp_r1_43;
    void *temp_r1_45;
    void *temp_r1_48;
    void *temp_r1_5;
    void *temp_r1_8;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r2_16;

    sp0 = 0;
    sp0.unk4 = 0;
    sp8 = 0;
    sp8.unk4 = 0U;
    sp10 = 0;
    sp10.unk4 = 0;
    sp18 = 0;
    sp18.unk4 = 0;
    temp_r1 = arg0->unk1D0;
    (*temp_r1)->unk10(&sp20, temp_r1, *(arg0->unk1D4 + ((arg0 + 0x1D0)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_2 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r0_2 = arg0 + 0x5C8;
    temp_r1_3 = (func_080074C0(temp_r0_2, temp_r0_2->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp10 != 0) {
        var_r2 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_3, (u32) var_r2);
    var_r7 = 0;
    var_r6 = 0;
    sp5C = arg0 + 0x20C;
    sp70 = arg0 + 0x244;
    sp80 = arg0 + 0x2B4;
    sp6C = arg0 + 0x50;
    sp88 = arg0 + 0x324;
    sp78 = arg0 + 0x80;
    sp60 = &sp0 + 0x40;
    sp84 = arg0 + 0xE0;
    sp64 = &sp0 + 0x48;
    sp7C = arg0 + 0x474;
    sp68 = &sp0 + 0x50;
    sp8C = arg0 + 0x58C;
    temp_r5 = arg0 + 0x1D0;
    do {
        func_0805E860(temp_r5, var_r6);
        temp_r1_4 = arg0->unk1D0;
        (*temp_r1_4)->unk10(&sp20, temp_r1_4, *(arg0->unk1D4 + (temp_r5->unkC * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_3 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_5 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_5->unk4 = (s32) temp_r0_3->unk4;
        temp_r1_5->unk8 = (s32) temp_r0_3->unk8;
        temp_r1_5->unkC = (s32) temp_r0_3->unkC;
        (temp_r1_5 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
        temp_r0_4 = arg0 + 0x5C0;
        temp_r1_6 = ((func_08007D4C(temp_r0_4, temp_r0_4->unk4) + var_r7) << 5) + 0x06010000;
        var_r2_2 = 0;
        if (sp8 != 0) {
            var_r2_2 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_6, (u32) var_r2_2);
        var_r1 = 0;
        if (sp8 != 0) {
            var_r1 = (u16) sp0.unkC;
        }
        var_r7 += var_r1 >> 5;
        var_r6 += 1;
    } while (var_r6 <= 3);
    temp_r1_7 = arg0->unk208;
    (*temp_r1_7)->unk10(&sp20, temp_r1_7, *(*sp5C + ((arg0 + 0x208)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_5 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_8 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_8->unk4 = (s32) temp_r0_5->unk4;
    temp_r1_8->unk8 = (s32) temp_r0_5->unk8;
    temp_r1_8->unkC = (s32) temp_r0_5->unkC;
    (temp_r1_8 + 0xC)->unk4 = (s32) (temp_r0_5 + 0xC)->unk4;
    temp_r0_6 = arg0 + 0x660;
    temp_r1_9 = (func_080074C0(temp_r0_6, temp_r0_6->unk4) << 5) + 0x05000200;
    var_r2_3 = 0;
    if (sp10 != 0) {
        var_r2_3 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_9, var_r2_3 >> 1);
    var_r0 = 0;
    if (sp10 != 0) {
        var_r0 = sp0.unk14;
    }
    temp_r0_7 = arg0 + 0x668;
    temp_r1_10 = (func_080074C0(temp_r0_7, temp_r0_7->unk4) << 5) + 0x05000200;
    var_r2_4 = 0;
    if (sp10 != 0) {
        var_r2_4 = sp0.unk14;
    }
    func_08008E64(sp10 + (var_r0 >> 1), temp_r1_10, var_r2_4 >> 1);
    temp_r1_11 = arg0->unk240;
    (*temp_r1_11)->unk10(&sp20, temp_r1_11, *(*sp70 + ((arg0 + 0x240)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_8 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_12 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_12->unk4 = (s32) temp_r0_8->unk4;
    temp_r1_12->unk8 = (s32) temp_r0_8->unk8;
    temp_r1_12->unkC = (s32) temp_r0_8->unkC;
    (temp_r1_12 + 0xC)->unk4 = (s32) (temp_r0_8 + 0xC)->unk4;
    temp_r0_9 = arg0 + 0x678;
    temp_r1_13 = (func_080074C0(temp_r0_9, temp_r0_9->unk4) << 5) + 0x05000200;
    var_r2_5 = 0;
    if (sp10 != 0) {
        var_r2_5 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_13, var_r2_5 >> 1);
    var_r0_2 = 0;
    if (sp10 != 0) {
        var_r0_2 = sp0.unk14;
    }
    temp_r0_10 = arg0 + 0x680;
    temp_r1_14 = (func_080074C0(temp_r0_10, temp_r0_10->unk4) << 5) + 0x05000200;
    var_r2_6 = 0;
    if (sp10 != 0) {
        var_r2_6 = sp0.unk14;
    }
    func_08008E64(sp10 + (var_r0_2 >> 1), temp_r1_14, var_r2_6 >> 1);
    if (arg0->unk140E == 0) {
        temp_r1_15 = arg0->unk278;
        (*temp_r1_15)->unk10(&sp20, temp_r1_15, *(arg0->unk27C + ((arg0 + 0x278)->unkC * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_11 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_16 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_16->unk4 = (s32) temp_r0_11->unk4;
        temp_r1_16->unk8 = (s32) temp_r0_11->unk8;
        temp_r1_16->unkC = (s32) temp_r0_11->unkC;
        (temp_r1_16 + 0xC)->unk4 = (s32) (temp_r0_11 + 0xC)->unk4;
        temp_r0_12 = arg0 + 0x690;
        temp_r1_17 = (func_080074C0(temp_r0_12, temp_r0_12->unk4) << 5) + 0x05000200;
        var_r2_7 = 0;
        if (sp10 != 0) {
            var_r2_7 = sp0.unk14;
        }
        func_08008E64(sp10, temp_r1_17, var_r2_7 >> 1);
        var_r0_3 = 0;
        if (sp10 != 0) {
            var_r0_3 = sp0.unk14;
        }
        temp_r0_13 = arg0 + 0x698;
        temp_r1_18 = (func_080074C0(temp_r0_13, temp_r0_13->unk4) << 5) + 0x05000200;
        var_r2_8 = 0;
        if (sp10 != 0) {
            var_r2_8 = sp0.unk14;
        }
        func_08008E64(sp10 + (var_r0_3 >> 1), temp_r1_18, var_r2_8 >> 1);
    } else {
        temp_r1_19 = arg0->unk2E8;
        (*temp_r1_19)->unk10(&sp20, temp_r1_19, *(arg0->unk2EC + ((arg0 + 0x2E8)->unkC * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_14 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_20 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_20->unk4 = (s32) temp_r0_14->unk4;
        temp_r1_20->unk8 = (s32) temp_r0_14->unk8;
        temp_r1_20->unkC = (s32) temp_r0_14->unkC;
        (temp_r1_20 + 0xC)->unk4 = (s32) (temp_r0_14 + 0xC)->unk4;
        temp_r0_15 = arg0 + 0x690;
        temp_r1_21 = (func_080074C0(temp_r0_15, temp_r0_15->unk4) << 5) + 0x05000200;
        var_r2_9 = 0;
        if (sp10 != 0) {
            var_r2_9 = sp0.unk14;
        }
        func_08008E64(sp10, temp_r1_21, var_r2_9 >> 1);
        var_r0_4 = 0;
        if (sp10 != 0) {
            var_r0_4 = sp0.unk14;
        }
        temp_r0_16 = arg0 + 0x698;
        temp_r1_22 = (func_080074C0(temp_r0_16, temp_r0_16->unk4) << 5) + 0x05000200;
        var_r2_10 = 0;
        if (sp10 != 0) {
            var_r2_10 = sp0.unk14;
        }
        func_08008E64(sp10 + (var_r0_4 >> 1), temp_r1_22, var_r2_10 >> 1);
    }
    temp_r1_23 = arg0->unk2B0;
    (*temp_r1_23)->unk10(&sp20, temp_r1_23, *(*sp80 + ((arg0 + 0x2B0)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_17 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_24 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_24->unk4 = (s32) temp_r0_17->unk4;
    temp_r1_24->unk8 = (s32) temp_r0_17->unk8;
    temp_r1_24->unkC = (s32) temp_r0_17->unkC;
    (temp_r1_24 + 0xC)->unk4 = (s32) (temp_r0_17 + 0xC)->unk4;
    temp_r0_18 = arg0 + 0x6A8;
    temp_r1_25 = (func_080074C0(temp_r0_18, temp_r0_18->unk4) << 5) + 0x05000200;
    var_r2_11 = 0;
    if (sp10 != 0) {
        var_r2_11 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_25, var_r2_11 >> 1);
    var_r0_5 = 0;
    if (sp10 != 0) {
        var_r0_5 = sp0.unk14;
    }
    temp_r0_19 = arg0 + 0x6B0;
    temp_r1_26 = (func_080074C0(temp_r0_19, temp_r0_19->unk4) << 5) + 0x05000200;
    var_r2_12 = 0;
    if (sp10 != 0) {
        var_r2_12 = sp0.unk14;
    }
    func_08008E64(sp10 + (var_r0_5 >> 1), temp_r1_26, var_r2_12 >> 1);
    func_0805E790(&sp20, sp6C, 0);
    temp_r0_20 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_27 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_27->unk4 = (s32) temp_r0_20->unk4;
    temp_r1_27->unk8 = (s32) temp_r0_20->unk8;
    temp_r1_27->unkC = (s32) temp_r0_20->unkC;
    (temp_r1_27 + 0xC)->unk4 = (s32) (temp_r0_20 + 0xC)->unk4;
    temp_r0_21 = arg0 + 0x5D8;
    temp_r1_28 = (func_080074C0(temp_r0_21, temp_r0_21->unk4) << 5) + 0x05000200;
    var_r2_13 = 0;
    if (sp10 != 0) {
        var_r2_13 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_28, (u32) var_r2_13);
    temp_r4 = arg0 + 0x5D0;
    temp_r1_29 = (func_08007D4C(temp_r4, temp_r4->unk4) << 5) + 0x06010000;
    var_r2_14 = 0;
    if (sp8 != 0) {
        var_r2_14 = (u16) sp0.unkC;
    }
    func_08008E64(sp8, temp_r1_29, (u32) var_r2_14);
    func_0805E790(&sp20, sp6C, 1);
    temp_r0_22 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_30 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_30->unk4 = (s32) temp_r0_22->unk4;
    temp_r1_30->unk8 = (s32) temp_r0_22->unk8;
    temp_r1_30->unkC = (s32) temp_r0_22->unkC;
    (temp_r1_30 + 0xC)->unk4 = (s32) (temp_r0_22 + 0xC)->unk4;
    temp_r1_31 = (func_08007D4C(temp_r4, temp_r4->unk4) << 5) + 0x06010100;
    var_r2_15 = 0;
    if (sp8 != 0) {
        var_r2_15 = (u16) sp0.unkC;
    }
    func_08008E64(sp8, temp_r1_31, (u32) var_r2_15);
    var_r3 = 0;
    var_r2_16 = arg0 + 0x6B8;
    do {
        var_r2_16->unk0 = (u16) (var_r2_16->unk0 | 0xFFFF);
        var_r2_16->unk2 = (s16) (((var_r3 >> 3) * 0x18) + 0x40);
        var_r2_16 += 4;
        var_r3 += 1;
    } while (var_r3 <= 0x1F);
    temp_r1_32 = arg0->unk320;
    (*temp_r1_32)->unk10(&sp20, temp_r1_32, *(*sp88 + ((arg0 + 0x320)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_23 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_33 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_33->unk4 = (s32) temp_r0_23->unk4;
    temp_r1_33->unk8 = (s32) temp_r0_23->unk8;
    temp_r1_33->unkC = (s32) temp_r0_23->unkC;
    (temp_r1_33 + 0xC)->unk4 = (s32) (temp_r0_23 + 0xC)->unk4;
    temp_r0_24 = arg0 + 0x5E8;
    temp_r1_34 = (func_080074C0(temp_r0_24, temp_r0_24->unk4) << 5) + 0x05000200;
    var_r2_17 = 0;
    if (sp10 != 0) {
        var_r2_17 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_34, (u32) var_r2_17);
    var_r7_2 = 0;
    var_sl = 0;
    sp58 = &sp0 + 8;
    do {
        var_r6_2 = 0;
        sp74 = var_sl + 1;
loop_53:
        temp_r4_2 = *sp78;
        temp_r4_2->unkC(sp60, sp78, var_sl);
        temp_r4_2->unk10(&sp20, sp78, *(sp40 + (var_r6_2 * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_25 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_35 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_35->unk4 = (s32) temp_r0_25->unk4;
        temp_r1_35->unk8 = (s32) temp_r0_25->unk8;
        temp_r1_35->unkC = (s32) temp_r0_25->unkC;
        (temp_r1_35 + 0xC)->unk4 = (s32) (temp_r0_25 + 0xC)->unk4;
        temp_r0_26 = arg0 + 0x5E0;
        temp_r1_36 = ((func_08007D4C(temp_r0_26, temp_r0_26->unk4) + var_r7_2) << 5) + 0x06010000;
        var_r2_18 = 0;
        if (sp8 != 0) {
            var_r2_18 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_36, (u32) var_r2_18);
        var_r1_2 = 0;
        if (sp8 != 0) {
            var_r1_2 = sp58->unk4;
        }
        var_r7_2 += var_r1_2 >> 5;
        var_r6_2 += 1;
        if (var_r6_2 <= 1) {
            goto loop_53;
        }
        var_sl = sp74;
    } while (sp74 <= 2);
    func_0805E790(&sp20, sp84, 0);
    temp_r0_27 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_37 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_37->unk4 = (s32) temp_r0_27->unk4;
    temp_r1_37->unk8 = (s32) temp_r0_27->unk8;
    temp_r1_37->unkC = (s32) temp_r0_27->unkC;
    (temp_r1_37 + 0xC)->unk4 = (s32) (temp_r0_27 + 0xC)->unk4;
    temp_r0_28 = arg0 + 0x5F8;
    temp_r1_38 = (func_080074C0(temp_r0_28, temp_r0_28->unk4) << 5) + 0x05000200;
    var_r2_19 = 0;
    if (sp10 != 0) {
        var_r2_19 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_38, (u32) var_r2_19);
    temp_r0_29 = arg0 + 0x5F0;
    temp_r1_39 = (func_08007D4C(temp_r0_29, temp_r0_29->unk4) << 5) + 0x06010000;
    var_r2_20 = 0;
    if (sp8 != 0) {
        var_r2_20 = (u16) sp0.unkC;
    }
    func_08008E64(sp8, temp_r1_39, (u32) var_r2_20);
    var_r7_3 = 0;
    var_r5 = 0;
    temp_r6 = arg0 + 0x110;
    do {
        *(arg0 + 0xBDA + (var_r5 * 2)) = var_r7_3;
        temp_r4_3 = arg0->unk110;
        temp_r4_3->unkC(sp64, temp_r6, 0);
        temp_r4_3->unk10(&sp20, temp_r6, *(sp48 + (var_r5 * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_30 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_40 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_40->unk4 = (s32) temp_r0_30->unk4;
        temp_r1_40->unk8 = (s32) temp_r0_30->unk8;
        temp_r1_40->unkC = (s32) temp_r0_30->unkC;
        (temp_r1_40 + 0xC)->unk4 = (s32) (temp_r0_30 + 0xC)->unk4;
        temp_r0_31 = arg0 + 0x628;
        temp_r1_41 = ((func_08007D4C(temp_r0_31, temp_r0_31->unk4) + var_r7_3) << 5) + 0x06010000;
        var_r2_21 = 0;
        if (sp8 != 0) {
            var_r2_21 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_41, (u32) var_r2_21);
        var_r1_3 = 0;
        if (sp8 != 0) {
            var_r1_3 = sp8.unk4;
        }
        var_r7_3 += var_r1_3 >> 5;
        var_r5 += 1;
    } while (var_r5 <= 3);
    temp_r1_42 = arg0->unk470;
    (*temp_r1_42)->unk10(&sp20, temp_r1_42, *(*sp7C + ((arg0 + 0x470)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_32 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_43 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_43->unk4 = (s32) temp_r0_32->unk4;
    temp_r1_43->unk8 = (s32) temp_r0_32->unk8;
    temp_r1_43->unkC = (s32) temp_r0_32->unkC;
    (temp_r1_43 + 0xC)->unk4 = (s32) (temp_r0_32 + 0xC)->unk4;
    temp_r0_33 = arg0 + 0x638;
    temp_r1_44 = (func_080074C0(temp_r0_33, temp_r0_33->unk4) << 5) + 0x05000200;
    var_r2_22 = 0;
    if (sp10 != 0) {
        var_r2_22 = sp0.unk14;
    }
    func_08008E64(sp10, temp_r1_44, (u32) var_r2_22);
    var_r7_4 = 0;
    var_r5_2 = 0;
    temp_r6_2 = arg0 + 0x140;
    do {
        *(arg0 + 0xBE2 + (var_r5_2 * 2)) = var_r7_4;
        temp_r4_4 = arg0->unk140;
        temp_r4_4->unkC(sp68, temp_r6_2, 0);
        temp_r4_4->unk10(&sp20, temp_r6_2, *(sp50 + (var_r5_2 * 4)));
        memcpy(&sp20, &sp20, 0x20);
        temp_r0_34 = &sp20 + 0xC;
        sp0.unk0 = sp20.unk0;
        sp0.unk4 = (s32) sp20.unk4;
        sp0.unk8 = (s32) sp20.unk8;
        temp_r1_45 = &sp0 + 0xC;
        sp0.unkC = (s32) sp20.unkC;
        temp_r1_45->unk4 = (s32) temp_r0_34->unk4;
        temp_r1_45->unk8 = (s32) temp_r0_34->unk8;
        temp_r1_45->unkC = (s32) temp_r0_34->unkC;
        (temp_r1_45 + 0xC)->unk4 = (s32) (temp_r0_34 + 0xC)->unk4;
        temp_r0_35 = arg0 + 0x630;
        temp_r1_46 = ((func_08007D4C(temp_r0_35, temp_r0_35->unk4) + var_r7_4) << 5) + 0x06010000;
        var_r2_23 = 0;
        if (sp8 != 0) {
            var_r2_23 = (u16) sp0.unkC;
        }
        func_08008E64(sp8, temp_r1_46, (u32) var_r2_23);
        var_r1_4 = 0;
        if (sp8 != 0) {
            var_r1_4 = sp8.unk4;
        }
        var_r7_4 += var_r1_4 >> 5;
        var_r5_2 += 1;
    } while (var_r5_2 <= 3);
    temp_r1_47 = arg0->unk588;
    (*temp_r1_47)->unk10(&sp20, temp_r1_47, *(*sp8C + ((arg0 + 0x588)->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0_36 = &sp20 + 0xC;
    sp0.unk0 = sp20.unk0;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_48 = &sp0 + 0xC;
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_48->unk4 = (s32) temp_r0_36->unk4;
    temp_r1_48->unk8 = (s32) temp_r0_36->unk8;
    temp_r1_48->unkC = (s32) temp_r0_36->unkC;
    (temp_r1_48 + 0xC)->unk4 = (s32) (temp_r0_36 + 0xC)->unk4;
    temp_r0_37 = arg0 + 0x650;
    temp_r1_49 = (func_08007D4C(temp_r0_37, temp_r0_37->unk4) << 5) + 0x06010000;
    var_r2_24 = 0;
    if (sp8 != 0) {
        var_r2_24 = (u16) sp0.unkC;
    }
    func_08008E64(sp8, temp_r1_49, (u32) var_r2_24);
}

