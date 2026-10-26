#include "common.h"
s32 func_080088C4(void *);                          /* extern */
s32 func_080088CC(void *);                          /* extern */
s32 func_080088D4();                                  /* extern */
s32 func_080B34DC(void *);                            /* extern */
s32 func_080B3A28(void *);                            /* extern */
s32 func_080B3BA8(void *);                            /* extern */

void func_080B3518(void *arg0) {
    s32 temp_r1;
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r8;
    s8 *var_r1;
    s8 *var_r1_2;
    s8 var_r0;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    func_080088D4();
    temp_r7 = func_080088C4(arg0);
    temp_r8 = func_080088CC(arg0);
    temp_r1 = arg0->unk844;
    switch (temp_r1) {                              /* irregular */
    default:
        temp_r5 = 0x30 & temp_r7;
        if (temp_r5 == 0) {
            func_080B34DC(arg0);
            if (arg0->unk884 != 5) {
                arg0->unk844 = temp_r5;
                var_r1 = arg0 + 0x929;
                goto block_24;
            }
        } else if ((0x20 & temp_r7) && (temp_r1 != 1)) {
            arg0->unk844 = 1;
block_21:
            arg0->unk929 = 1;
        } else if ((0x10 & temp_r7) && (arg0->unk844 != 2)) {
            arg0->unk844 = 2;
            var_r1 = arg0 + 0x929;
block_24:
            *var_r1 = 1;
        }
        break;
    case 0:
        if ((1 & temp_r7) && (arg0->unk914 != 0)) {
            func_080B3A28(arg0);
        }
        if (arg0->unk844 == 0) {
            if (0x20 & temp_r7) {
                arg0->unk844 = 1;
                goto block_21;
            }
            if (0x10 & temp_r7) {
                arg0->unk844 = 2;
                var_r1 = arg0 + 0x929;
                goto block_24;
            }
        }
        break;
    case 3:
        temp_r0 = arg0->unk8FA + 1;
        arg0->unk8FA = temp_r0;
        if ((u32) temp_r0 > 0x1EU) {
            arg0->unk844 = 0;
            arg0->unk929 = 1;
            arg0->unk8FA = 0U;
            if (temp_r7 & 1) {
                arg0->unk914 = 0U;
            }
        }
        break;
    }
    if ((arg0->unk914 == 0) && !(temp_r7 & 1)) {
        arg0->unk914 = 1U;
    }
    if (arg0->unk844 == 1) {
        var_r1_2 = arg0 + 0x8E0;
        temp_r0_2 = arg0->unk8E0;
        if ((u32) temp_r0_2 > 0x49U) {
            var_r0 = temp_r0_2 - 2;
            goto block_37;
        }
    }
    if (arg0->unk844 == 2) {
        var_r1_2 = arg0 + 0x8E0;
        temp_r0_3 = arg0->unk8E0;
        if ((u32) temp_r0_3 <= 0xA6U) {
            var_r0 = temp_r0_3 + 2;
block_37:
            *var_r1_2 = var_r0;
        }
    }
    if (8 & temp_r8) {
        func_080B3BA8(arg0);
    }
}

