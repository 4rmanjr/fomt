#include "common.h"
s32 func_080069F4(void *);                            /* extern */
s32 func_08006B90(void *);                            /* extern */
s32 func_08006C28(void *, u8);                        /* extern */
s32 func_08006C60(void *);                          /* extern */
s32 func_080088D4(void *);                          /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */

void func_08006CDC(void *arg0) {
    s32 sp0;
    s32 *var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r1_3;
    s8 *var_r1_4;
    s8 temp_r0_4;
    s8 var_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r1;
    u8 temp_r1_2;
    u8 var_r1_2;
    u8 var_r2;

    temp_r6 = arg0->unk463C;
    if (temp_r6 != 0) {
        return;
    }
    func_080069F4(arg0);
    sp0 = func_080088D4(arg0);
    temp_r1 = sp0.unk0;
    if (1 & temp_r1) {
        if ((s32) (s8) arg0->unk4605 <= 5) {
            func_08008B6C(arg0 + 0x45F4, 0x6A);
            func_08006B90(arg0);
            return;
        }
        if ((s32) (s8) arg0->unk4604 <= 4) {
            var_r1 = arg0 + 0x4600;
            temp_r0 = arg0->unk4600;
            if (temp_r0 == 2) {
                arg0->unk4600 = temp_r6;
            } else {
                var_r0 = temp_r0 + 1;
                goto block_13;
            }
            goto block_14;
        }
        if ((u32) (u8) (arg0->unk4604 - 5) <= 4U) {
            var_r1 = arg0 + 0x4600;
            temp_r0_2 = arg0->unk4600;
            if (temp_r0_2 == 0) {
                var_r0 = 2;
            } else {
                var_r0 = temp_r0_2 - 1;
            }
block_13:
            *var_r1 = var_r0;
block_14:
            arg0->unk4637 = 1;
            func_08008B6C(arg0 + 0x45F4, 0xCA);
            return;
        }
        if ((func_08006C60(arg0) << 0x18) == 0) {
            goto block_25;
        }
        goto block_33;
    }
    if (2 & temp_r1) {
        temp_r0_3 = arg0->unk4610;
        if (temp_r0_3 != 0) {
            arg0->unk4610 = (u8) (temp_r0_3 - 1);
            var_r1_2 = arg0->unk4610;
            goto block_27;
        }
        var_r2 = 0;
        var_r1_3 = 0;
        do {
            if (*(arg0 + 0x461C + var_r1_3) == 0x5F) {
                var_r2 += 1;
            }
            var_r1_3 += 1;
        } while (var_r1_3 <= 0xB);
        if (var_r2 == 0xC) {
block_25:
            func_08008B6C(arg0 + 0x45F4, 0xC7);
            return;
        }
        var_r1_2 = 0;
block_27:
        func_08006C28(arg0, var_r1_2);
        func_08008B6C(arg0 + 0x45F4, 0x6C);
        return;
    }
    if (8 & temp_r1) {
        if ((s8) arg0->unk4605 == 6) {
            temp_r0_4 = (s8) arg0->unk4604;
            if (((s32) temp_r0_4 > 9) && ((s32) temp_r0_4 <= 0xE)) {
                if ((func_08006C60(arg0) << 0x18) != 0) {
block_33:
                    arg0->unk463C = 1;
                }
                func_08008B6C(arg0 + 0x45F4, 0xC5);
                return;
            }
        }
        arg0->unk4604 = 0xCU;
        var_r1_4 = arg0 + 0x4605;
        var_r0_2 = 6;
        goto block_39;
    }
    temp_r1_2 = sp0.unk1;
    if (2 & temp_r1_2) {
        var_r1_4 = arg0 + 0x4610;
        temp_r0_5 = arg0->unk4610;
        if (temp_r0_5 != 0) {
            var_r0_2 = temp_r0_5 - 1;
block_39:
            *var_r1_4 = var_r0_2;
        }
        func_08008B6C(arg0 + 0x45F4, 0xCB);
        return;
    }
    if (1 & temp_r1_2) {
        temp_r0_6 = arg0->unk4610;
        if (temp_r0_6 != 0xB) {
            arg0->unk4610 = (u8) (temp_r0_6 + 1);
        }
        func_08008B6C(arg0 + 0x45F4, 0xCB);
    }
}

