#include "common.h"
s32 func_0800E4E0(s32);                             /* extern */
s32 method_08009AF4__C4Farm(s32);                   /* extern */

void func_0807A708(void *arg0, void *arg1, u8 *arg2) {
s32 sp0;
    s32 var_ip;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;
    u8 *var_r2;
    u8 *var_r5;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r1;
    u8 temp_r1_2;
    void *temp_r3;
    void *var_r3;
    void *var_r7;

    var_r3 = arg1;
    var_r5 = arg2;
    var_ip = 0;
    sp0.unk0 = (u8) var_r3->unk0;
    sp0.unk1 = (u8) var_r3->unk1;
    if (sp0.unk0 == 0) {

    } else {
loop_3:
        temp_r0 = sp0.unk0;
        if (temp_r0 != 0x3C) {
            var_r5->unk0 = temp_r0;
            var_r5->unk1 = (u8) sp0.unk1;
            var_r5 += 2;
            var_r3 += 2;
            goto block_34;
        }
        temp_r1 = sp0.unk1;
        if ((u32) (u8) (temp_r1 - 0x30) <= 9U) {
            var_r3 += 5;
block_34:
            var_r6 = var_ip + 1;
        } else {
            if (temp_r1 == 0x70) {
                var_r4 = 0;
                var_r7 = var_r3 + 3;
                var_r6 = var_ip + 1;
loop_10:
                if (var_r4 <= 0xC) {
                    if (*(func_0800E4E0(arg0->unk8 + 0x1BD8) + var_r4) == 0) {

                    } else {
                        *var_r5 = *(func_0800E4E0(arg0->unk8 + 0x1BD8) + var_r4);
                        var_r5 += 1;
                        var_r4 += 1;
                        goto loop_10;
                    }
                }
                goto block_18;
            }
            if (temp_r1 == 0x66) {
                var_r4_2 = 0;
                var_r7 = var_r3 + 3;
                var_r6 = var_ip + 1;
loop_16:
                if ((var_r4_2 <= 0xC) && (*(method_08009AF4__C4Farm(arg0->unk8 + 0x14) + var_r4_2) != 0)) {
                    *var_r5 = *(method_08009AF4__C4Farm(arg0->unk8 + 0x14) + var_r4_2);
                    var_r5 += 1;
                    var_r4_2 += 1;
                    goto loop_16;
                }
block_18:
                var_r3 = var_r7;
            } else {
                var_r6 = var_ip + 1;
                if (temp_r1 == 0x63) {
                    temp_r0_2 = var_r3->unk2;
                    sp0.unk2 = temp_r0_2;
                    var_r2 = 0;
                    temp_r0_3 = temp_r0_2;
                    switch (temp_r0_3) {            /* irregular */
                    case 0x70:
                        var_r0 = arg0->unk8;
                        var_r1 = 0x21F0;
block_26:
                        var_r2 = var_r0 + var_r1;
                        break;
                    case 0x66:
                        var_r0 = arg0->unk8;
                        var_r1 = 0x21E0;
                        goto block_26;
                    case 0x73:
                        var_r0 = arg0->unk8;
                        var_r1 = 0x2200;
                        goto block_26;
                    }
                    var_r6 = var_ip + 1;
                    if ((var_r2 != 0) && (*var_r2 != 0)) {
                        temp_r3 = var_r2 + 0x10;
loop_30:
                        *var_r5 = *var_r2;
                        var_r5 += 1;
                        var_r2 += 1;
                        if ((s32) var_r2 <= (s32) temp_r3) {
                            if (*var_r2 != 0) {
                                goto loop_30;
                            }
                        }
                    }
                    var_r3 += 4;
                }
            }
        }
        var_ip = var_r6;
        if (var_r6 <= 0xD) {
            temp_r1_2 = var_r3->unk0;
            sp0.unk0 = temp_r1_2;
            sp0.unk1 = (u8) var_r3->unk1;
            if ((temp_r1_2 << 0x18) != 0) {
                goto loop_3;
            }
        }
    }
    *var_r5 = 0;
}

