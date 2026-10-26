#include "common.h"
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */

void func_0803C7C8(void **arg0, s32 arg1, s32 arg2, u8 *arg3, void *arg4) {
s32 sp0;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    u16 *sp30;
    s32 sp38;
    s32 sp3C;
    u16 *sp40;
    s32 sp48;
    s32 sp4C;
    u16 *sp50;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 temp_r1;
    s32 temp_r1_10;
    s32 temp_r1_11;
    s32 temp_r1_12;
    s32 temp_r1_13;
    s32 temp_r1_14;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 temp_r1_9;
    s32 temp_r7_2;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 temp_sl_2;
    s32 temp_sl_3;
    u32 temp_r0_5;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 temp_r5;
    u32 temp_r7;
    u8 temp_r2_10;
    u8 temp_r2_3;
    u8 temp_r2_5;
    u8 temp_r2_7;
    u8 temp_r2_8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_9;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r6;

    temp_r6 = *arg0;
    temp_r2 = temp_r6 + 0x60;
    temp_r1 = temp_r2->unk4;
    if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {
        return;
    }
    sp58 = func_080074C0(temp_r2);
    if (temp_r6->unk80 != 0) {
        temp_r4 = temp_r6 + 0x68;
        temp_r1_2 = temp_r6->unk68;
        temp_r5 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        if (temp_r5 == 0) {
            func_0805E790(&sp0, temp_r6, 0);
            temp_r4->unkC = sp10;
            temp_r4->unk10 = (s32) ((sp58 << 5) + 0x05000200);
            temp_r4->unk14 = 0x20;
            arg4->unk8->unk10(arg4, temp_r4);
            temp_r6->unk80 = (u8) temp_r5;
        }
    }
    sp5C = arg1 + 4;
    sp60 = arg2 + 4;
    temp_r2_2 = temp_r6 + 0x184;
    temp_r1_3 = temp_r2_2->unk4;
    if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
        temp_sb = func_08007D4C(temp_r2_2);
        if (temp_r6->unk18C != 0) {
            temp_r3 = temp_r6 + 0x190;
            temp_r1_4 = temp_r6->unk190;
            temp_r4_2 = (u32) ((0 - temp_r1_4) | temp_r1_4) >> 0x1F;
            if (temp_r4_2 == 0) {
                temp_r3->unkC = (void *) (temp_r6 + 0x84);
                temp_r3->unk10 = (s32) ((temp_sb << 5) + 0x06010000);
                temp_r3->unk14 = 0x100;
                arg4->unk8->unk10(arg4, temp_r3);
                temp_r6->unk18C = (u8) temp_r4_2;
            }
        }
        sp20 = 0;
        sp24 = 0;
        sp20 = (((((((0x1000 & 0xFFFF3FFF) | 0x4000) & 0x3FFFFFFF) | 0x80000000) & 0xFFFFFF00) | (u8) sp60) & 0xFE00FFFF) | ((0x1FF & sp5C) << 0x10);
        sp20.unk4 = (s32) ((((sp20.unk4 & 0xFFFFFC00) | ((u32) (temp_sb << 0x16) >> 0x16)) & 0xFFFF0FFF) | (((u16) sp58 & 0xF) << 0xC));
        temp_r2_3 = *arg3;
        if ((u32) temp_r2_3 <= 0x7FU) {
            temp_r0 = (temp_r2_3 * 8) + 4 + arg3;
            temp_r0->unk0 = sp20;
            temp_r0->unk4 = (u16) sp20.unk4;
            *arg3 = temp_r2_3 + 1;
        }
    }
    temp_r2_4 = temp_r6 + 0x2A8;
    temp_r1_5 = temp_r2_4->unk4;
    if ((s32) ((0 - temp_r1_5) | temp_r1_5) < 0) {
        temp_sl = func_08007D4C(temp_r2_4);
        if (temp_r6->unk2B0 != 0) {
            temp_r3_2 = temp_r6 + 0x2B4;
            temp_r1_6 = temp_r6->unk2B4;
            temp_r4_3 = (u32) ((0 - temp_r1_6) | temp_r1_6) >> 0x1F;
            if (temp_r4_3 == 0) {
                temp_r3_2->unkC = (void *) (temp_r6 + 0x1A8);
                temp_r3_2->unk10 = (s32) ((temp_sl << 5) + 0x06010000);
                temp_r3_2->unk14 = 0x100;
                arg4->unk8->unk10(arg4, temp_r3_2);
                temp_r6->unk2B0 = (u8) temp_r4_3;
            }
        }
        sp28 = 0;
        sp2C = 0;
        sp28 = (((((((0x1000 & 0xFFFF3FFF) | 0x4000) & 0x3FFFFFFF) | 0x80000000) & 0xFFFFFF00) | (u8) sp60) & 0xFE00FFFF) | (((sp5C + 0x20) & 0x1FF) << 0x10);
        sp28.unk4 = (s32) ((((sp28.unk4 & 0xFFFFFC00) | ((u32) (temp_sl << 0x16) >> 0x16)) & 0xFFFF0FFF) | (((u16) sp58 & 0xF) << 0xC));
        temp_r2_5 = *arg3;
        if ((u32) temp_r2_5 <= 0x7FU) {
            temp_r0_2 = (temp_r2_5 * 8) + 4 + arg3;
            temp_r0_2->unk0 = sp28;
            temp_r0_2->unk4 = (u16) sp28.unk4;
            *arg3 = temp_r2_5 + 1;
        }
    }
    sp64 = 0;
    sp68 = 0;
    sp64 = 0x1000;
    sp64 = 0x40001000;
    temp_r2_6 = temp_r6 + 0x2D0;
    temp_r1_7 = temp_r2_6->unk4;
    if ((s32) ((0 - temp_r1_7) | temp_r1_7) < 0) {
        temp_sl_2 = func_08007D4C(temp_r2_6);
        if (temp_r6->unk2F0 != 0) {
            temp_r5_2 = temp_r6 + 0x2D8;
            temp_r1_8 = temp_r6->unk2D8;
            temp_r7 = (u32) ((0 - temp_r1_8) | temp_r1_8) >> 0x1F;
            if (temp_r7 == 0) {
                temp_r4_4 = temp_r6->unk0;
                temp_r4_4->unkC(&sp30, temp_r6, temp_r6->unk2CC);
                temp_r4_4->unk10(&sp0, temp_r6, *sp30);
                temp_r5_2->unkC = sp8;
                temp_r5_2->unk10 = (s32) ((temp_sl_2 << 5) + 0x06010000);
                temp_r5_2->unk14 = 0x80;
                arg4->unk8->unk10(arg4, temp_r5_2);
                temp_r6->unk2F0 = (u8) temp_r7;
            }
        }
        sp38 = sp64;
        sp3C = sp68;
        sp38 = (((sp38 & 0xFFFFFF00) | (u8) sp60) & 0xFE00FFFF) | (((sp5C + 0x40) & 0x1FF) << 0x10);
        sp38.unk4 = (s32) ((((sp38.unk4 & 0xFFFFFC00) | ((u32) (temp_sl_2 << 0x16) >> 0x16)) & 0xFFFF0FFF) | (((u16) sp58 & 0xF) << 0xC));
        temp_r2_7 = *arg3;
        if ((u32) temp_r2_7 <= 0x7FU) {
            temp_r0_3 = (temp_r2_7 * 8) + 4 + arg3;
            temp_r0_3->unk0 = sp38;
            temp_r0_3->unk4 = (u16) sp38.unk4;
            *arg3 = temp_r2_7 + 1;
        }
    }
    temp_r3_3 = temp_r6 + 0x314;
    temp_r1_9 = temp_r3_3->unk4;
    if ((s32) ((0 - temp_r1_9) | temp_r1_9) >= 0) {
        return;
    }
    temp_r4_5 = temp_r6 + 0x2F4;
    temp_r1_10 = temp_r4_5->unk4;
    if ((s32) ((0 - temp_r1_10) | temp_r1_10) >= 0) {
        return;
    }
    sp48 = sp64;
    sp4C = sp68;
    sp48 = (((sp48 & 0xFFFFFF00) | (u8) sp60) & 0xFE00FFFF) | (((sp5C + 0x58) & 0x1FF) << 0x10);
    if (temp_r6->unk2F1 == 0) {

    } else {
        temp_sb_2 = func_08007D4C(temp_r3_3, temp_r3_3->unk4);
        temp_sl_3 = func_080074C0(temp_r4_5, temp_r4_5->unk4);
        if (temp_r6->unk334 != 0) {
            temp_r5_3 = temp_r6 + 0x30;
            temp_r4_6 = temp_r6->unk30;
            temp_r4_6->unkC(&sp40, temp_r5_3, temp_r6->unk2F2);
            temp_r4_6->unk10(&sp0, temp_r5_3, *sp40);
            temp_r3_4 = temp_r6 + 0x31C;
            temp_r1_11 = temp_r6->unk31C;
            if ((s32) ((0 - temp_r1_11) | temp_r1_11) >= 0) {
                temp_r3_4->unkC = sp8;
                temp_r3_4->unk10 = (s32) ((temp_sb_2 << 5) + 0x06010000);
                temp_r3_4->unk14 = 0x80;
                arg4->unk8->unk10(arg4, temp_r3_4);
            }
            temp_r3_5 = temp_r6 + 0x2FC;
            temp_r1_12 = temp_r6->unk2FC;
            if ((s32) ((0 - temp_r1_12) | temp_r1_12) >= 0) {
                temp_r3_5->unkC = sp10;
                temp_r3_5->unk10 = (s32) ((temp_sl_3 << 5) + 0x05000200);
                temp_r3_5->unk14 = 0x20;
                arg4->unk8->unk10(arg4, temp_r3_5);
            }
            temp_r6->unk334 = 0U;
        }
        sp48.unk4 = (s32) ((((sp48.unk4 & 0xFFFFFC00) | ((u32) (temp_sb_2 << 0x16) >> 0x16)) & 0xFFFF0FFF) | (((u16) temp_sl_3 & 0xF) << 0xC));
        temp_r2_8 = *arg3;
        if ((u32) temp_r2_8 <= 0x7FU) {
            temp_r0_4 = (temp_r2_8 * 8) + 4 + arg3;
            temp_r0_4->unk0 = sp48;
            temp_r0_4->unk4 = (u16) sp48.unk4;
            *arg3 = temp_r2_8 + 1;
        }
    }
    temp_r2_9 = temp_r6 + 0x338;
    temp_r1_13 = temp_r2_9->unk4;
    if ((s32) ((0 - temp_r1_13) | temp_r1_13) < 0) {
        temp_r7_2 = func_08007D4C(temp_r2_9);
        if (temp_r6->unk358 != 0) {
            temp_r5_4 = temp_r6 + 0x340;
            temp_r1_14 = temp_r6->unk340;
            temp_r0_5 = (u32) ((0 - temp_r1_14) | temp_r1_14) >> 0x1F;
            if (temp_r0_5 == 0) {
                temp_r4_7 = temp_r6->unk0;
                temp_r4_7->unkC(&sp50, temp_r6, 5U);
                temp_r4_7->unk10(&sp0, temp_r6, *sp50);
                temp_r5_4->unkC = sp8;
                temp_r5_4->unk10 = (s32) ((temp_r7_2 << 5) + 0x06010000);
                temp_r5_4->unk14 = 0x80;
                arg4->unk8->unk10(arg4, temp_r5_4);
                temp_r6->unk358 = (u8) temp_r0_5;
            }
        }
        sp48.unk4 = (s16) ((0xFFFFFC00 & (u16) sp48.unk4) | (temp_r7_2 & 0x3FF));
        sp48.unk5 = (u8) ((0xF & sp48.unk5) | (sp58 * 0x10));
        temp_r2_10 = *arg3;
        if ((u32) temp_r2_10 <= 0x7FU) {
            temp_r0_6 = (temp_r2_10 * 8) + 4 + arg3;
            temp_r0_6->unk0 = sp48;
            temp_r0_6->unk4 = (u16) sp48.unk4;
            *arg3 = temp_r2_10 + 1;
        }
    }
}

