#include "common.h"
s32 func_080074C0(s32, s32);                        /* extern */
s32 func_08007D4C(s32, s32);                        /* extern */
extern ? gUnk_080FC066;

void func_080E2BB4(s32 arg0, u8 *arg1, void *arg2, s32 arg3, s32 arg4) {
    u32 sp0;
    s32 sp4;
    u32 sp8;
    u32 spC;
    u8 *sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    void *sp24;
    s32 temp_r0;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r2;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r0_2;
    s32 var_r2_2;
    s32 var_r2_4;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r4_3;
    u16 var_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r1;
    u32 temp_r3_3;
    u8 temp_r2_2;
    void *temp_r0_4;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r2;
    void *var_r2_3;
    void *var_r3;
    void *var_r4;
    void *var_r4_2;

    sp10 = arg1;
    sp14 = arg3;
    sp18 = arg2->unk8;
    sp1C = arg2->unk10;
    var_r3 = arg2->unk0;
    var_r0 = 0;
    if (var_r3 != 0) {
        var_r0 = arg2->unk4;
    }
    temp_r0 = var_r3 + (var_r0 * 8);
    sp20 = temp_r0;
    if (var_r3 == temp_r0) {
        return;
    }
loop_4:
    sp0 = var_r3->unk0;
    sp4 = var_r3->unk4;
    temp_r6 = ((s32) (sp0 << 7) >> 0x17) + sp14;
    sp24 = var_r3 + 8;
    if (temp_r6 > 0xEF) {

    } else {
        temp_r8 = (s8) sp0.unk0 + arg4;
        if (temp_r8 > 0x9F) {

        } else {
            temp_r1 = (((u32) (sp0 << 0x10) >> 0x1E) * 4) + (sp0 >> 0x1E);
            temp_r2 = (s32) *((temp_r1 >> 1) + &gUnk_080FC066) >> ((temp_r1 & 1) * 4);
            if ((s32) (temp_r6 + (8 << (temp_r2 & 3))) <= 0) {

            } else if ((s32) ((8 << (((u32) temp_r2 >> 2) & 3)) + temp_r8) <= 0) {

            } else {
                temp_r0_2 = sp18 + ((u32) (sp4 << 0x16) >> 0x11);
                sp8 = temp_r0_2;
                temp_r1_2 = arg0 + 4;
                var_r4 = temp_r1_2->unk4;
                var_r2 = var_r4->unk4;
                if (var_r2 != 0) {
                    do {
                        var_r3_2 = 0;
                        if ((u32) var_r2->unk10 < temp_r0_2) {
                            var_r3_2 = 1;
                        }
                        if (var_r3_2 == 0) {
                            var_r4 = var_r2;
                            var_r2 = var_r4->unk8;
                        } else {
                            var_r2 = var_r2->unkC;
                        }
                    } while (var_r2 != 0);
                }
                temp_r3 = temp_r1_2->unk4;
                if (var_r4 != temp_r3) {
                    var_r2_2 = 0;
                    if ((u32) sp8 < (u32) var_r4->unk10) {
                        var_r2_2 = 1;
                    }
                    if (var_r2_2 != 0) {
                        goto block_24;
                    }
                } else {
block_24:
                    var_r4 = temp_r3;
                }
                temp_r1_3 = (s32) temp_r1_2->unk4 ^ (s32) var_r4;
                if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
                    var_r0_2 = func_08007D4C(arg0, var_r4->unk14);
                } else {
                    var_r0_2 = -1;
                }
                if (var_r0_2 >= 0) {
                    temp_r0_3 = sp1C + (((u32) (sp4 << 0x10) >> 0x1C) << 5);
                    spC = temp_r0_3;
                    temp_r1_4 = arg0 + 0x18;
                    var_r4_2 = temp_r1_4->unk4;
                    var_r2_3 = var_r4_2->unk4;
                    if (var_r2_3 != 0) {
                        do {
                            var_r3_3 = 0;
                            if ((u32) var_r2_3->unk10 < temp_r0_3) {
                                var_r3_3 = 1;
                            }
                            if (var_r3_3 == 0) {
                                var_r4_2 = var_r2_3;
                                var_r2_3 = var_r4_2->unk8;
                            } else {
                                var_r2_3 = var_r2_3->unkC;
                            }
                        } while (var_r2_3 != 0);
                    }
                    temp_r3_2 = temp_r1_4->unk4;
                    if (var_r4_2 != temp_r3_2) {
                        var_r2_4 = 0;
                        if ((u32) spC < (u32) var_r4_2->unk10) {
                            var_r2_4 = 1;
                        }
                        if (var_r2_4 != 0) {
                            goto block_41;
                        }
                    } else {
block_41:
                        var_r4_2 = temp_r3_2;
                    }
                    temp_r1_5 = (s32) temp_r1_4->unk4 ^ (s32) var_r4_2;
                    if ((s32) ((0 - temp_r1_5) | temp_r1_5) < 0) {
                        var_r4_3 = func_080074C0(arg0 + 0x14, var_r4_2->unk14);
                    } else {
                        var_r4_3 = -1;
                    }
                    if (var_r4_3 >= 0) {
                        temp_r3_3 = (((sp0 & 0xFFFFFF00) | (u8) temp_r8) & 0xFE00FFFF) | ((temp_r6 & 0x1FF) << 0x10);
                        sp0 = temp_r3_3;
                        sp4 = (((sp4 & 0xFFFFFC00) | ((u32) (var_r0_2 << 0x16) >> 0x16)) & 0xFFFF0FFF) | (((u16) var_r4_3 & 0xF) << 0xC);
                        temp_r2_2 = *sp10;
                        if ((u32) temp_r2_2 <= 0x7FU) {
                            temp_r0_4 = sp10 + ((temp_r2_2 * 8) + 4);
                            temp_r0_4->unk0 = temp_r3_3;
                            temp_r0_4->unk4 = (u16) sp0.unk4;
                            *sp10 = temp_r2_2 + 1;
                        }
                    }
                }
            }
        }
    }
    var_r3 = sp24;
    if (var_r3 != sp20) {
        goto loop_4;
    }
}

