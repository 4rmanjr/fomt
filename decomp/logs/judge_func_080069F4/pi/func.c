#include "common.h"
s32 func_080088D4();                                /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[17924];
    s32 unk4604;
    s32 unk4605;
} GenObj;
void func_080069F4(GenObj *arg0) {
    s32 temp_r0;
    s8 *var_r1;
    s8 var_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 temp_r5;
    u8 temp_r6;

    temp_r0 = func_080088D4();
    temp_r6 = 0x40 & temp_r0;
    if (temp_r6 != 0) {
        func_08008B6C(arg0 + 0x45F4, 0xCB);
        temp_r0_2 = arg0->unk4605 - 1;
        arg0->unk4605 = temp_r0_2;
        if ((s32) (temp_r0_2 << 0x18) < 0) {
            arg0->unk4605 = 6U;
            arg0->unk4604 = 0xCU;
        }
        if ((s8) arg0->unk4605 != 5) {
            return;
        }
        if ((s32) (s8) arg0->unk4604 <= 0xC) {
            return;
        }
        arg0->unk4605 = (u8) (arg0->unk4605 - 1);
        return;
    }
    temp_r5 = 0x80 & temp_r0;
    if (temp_r5 != 0) {
        func_08008B6C(arg0 + 0x45F4, 0xCB);
        temp_r0_3 = arg0->unk4605 + 1;
        arg0->unk4605 = temp_r0_3;
        if ((s32) (s8) temp_r0_3 > 6) {
            arg0->unk4605 = temp_r6;
        }
        if (((s8) arg0->unk4605 == 5) && ((s32) (s8) arg0->unk4604 > 0xC)) {
            arg0->unk4605 = (u8) (arg0->unk4605 + 1);
        }
        if ((s8) arg0->unk4605 == 6) {
            var_r1 = arg0 + 0x4604;
            var_r0 = 0xC;
            goto block_32;
        }
    } else if (0x10 & temp_r0) {
        func_08008B6C(arg0 + 0x45F4, 0xCB);
        if ((s8) arg0->unk4605 == 6) {
            var_r1 = arg0 + 0x4604;
            var_r0 = 0xC;
            goto block_32;
        }
        temp_r2 = arg0->unk4604 + 1;
        arg0->unk4604 = temp_r2;
        if ((s8) arg0->unk4605 == 5) {
            if ((s32) (s8) arg0->unk4604 > 0xC) {
                arg0->unk4604 = temp_r5;
            }
        } else if ((s32) (s8) temp_r2 > 0xE) {
            arg0->unk4604 = temp_r5;
        }
    } else if (0x20 & temp_r0) {
        func_08008B6C(arg0 + 0x45F4, 0xCB);
        if ((s8) arg0->unk4605 == 6) {
            var_r1 = arg0 + 0x4604;
            var_r0 = 0xC;
            goto block_32;
        }
        var_r1 = arg0 + 0x4604;
        temp_r2_2 = arg0->unk4604 - 1;
        arg0->unk4604 = temp_r2_2;
        if ((s8) arg0->unk4605 == 5) {
            if ((s32) (temp_r2_2 << 0x18) < 0) {
                var_r0 = 0xC;
                goto block_32;
            }
        } else if ((s32) (temp_r2_2 << 0x18) < 0) {
            var_r0 = 0xE;
block_32:
            *var_r1 = var_r0;
        }
    }
}

