#include "common.h"
s32 func_080088D4(void *);                          /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804EDB4(s32, s32, s32, s32, s32);           /* extern */
s32 func_0804EE30(u32, s32, s32, s32, s32);           /* extern */
s32 func_08075BC8(void *, s32, s32);                  /* extern */

void func_080CA98C(void *arg0) {
    s16 temp_r3;
    s16 var_r1;
    s32 var_r2;
    s32 var_r6;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r1;
    u32 temp_r4;
    u32 var_r0;
    void *temp_r0_6;

    var_r6 = 0;
    temp_r4 = arg0->unk14;
    if (func_080088D4(arg0->unk18) & 0x40) {
        temp_r0 = arg0->unk14 + 1;
        arg0->unk14 = temp_r0;
        if (temp_r0 > (u32) arg0->unk4) {
            var_r0 = 1;
            goto block_17;
        }
    } else if (func_080088D4(arg0->unk18) & 0x80) {
        temp_r0_2 = arg0->unk14 - 1;
        arg0->unk14 = temp_r0_2;
        if (temp_r0_2 == 0) {
            var_r0 = arg0->unk4;
            goto block_17;
        }
    } else if (func_080088D4(arg0->unk18) & 0x10) {
        temp_r0_3 = arg0->unk14;
        temp_r1 = arg0->unk4;
        if (temp_r0_3 == temp_r1) {
            var_r0 = 1;
            goto block_17;
        }
        temp_r0_4 = temp_r0_3 + 0xA;
        arg0->unk14 = temp_r0_4;
        if (temp_r0_4 >= temp_r1) {
            arg0->unk14 = temp_r1;
        }
    } else if (func_080088D4(arg0->unk18) & 0x20) {
        temp_r0_5 = arg0->unk14;
        if (temp_r0_5 == 1) {
            var_r0 = arg0->unk4;
        } else if (temp_r0_5 <= 0xBU) {
            var_r0 = 1;
        } else {
            var_r0 = temp_r0_5 - 0xA;
        }
block_17:
        arg0->unk14 = var_r0;
    }
    if (temp_r4 != arg0->unk14) {
        var_r6 = 1;
    }
    if (var_r6 != 0) {
        func_08008EB8(0x03FF03FF, arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + ((arg0->unk10 + 1) * 2), 4);
        func_08008EB8(0x03FF03FF, arg0->unk18->unk1C->unk18 + (arg0->unkC << 6) + 0x18, 0x1C);
        func_08008EB8(0x03FF03FF, arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + 0x18, 0x1C);
        func_0804EE30(arg0->unk14, arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + ((arg0->unk10 + 2) * 2), 0x24, 0, 0x20);
        func_0804EDB4(arg0->unk14 * arg0->unk0, arg0->unk18->unk1C->unk18 + (arg0->unkC << 6) + 0x32, 0xA0, 0, 0x20);
        temp_r0_6 = arg0->unk18->unk1C;
        temp_r3 = temp_r0_6->unkC;
        var_r1 = temp_r3;
        if ((s32) temp_r3 < 0) {
            var_r1 = temp_r3 + 7;
        }
        var_r2 = temp_r3 + 0x100;
        if (var_r2 < 0) {
            var_r2 = temp_r3 + 0x107;
        }
        func_08075BC8(temp_r0_6, var_r1 >> 3, var_r2 >> 3);
        func_08008B6C(arg0->unk18 + 0x18, 0xCB);
    }
}

