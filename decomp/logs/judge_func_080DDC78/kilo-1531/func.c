#include "common.h"
s16 func_0803A320(void *, u8);                      /* extern */
s32 func_0803A334(void *, u8);                      /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_080AB788(s32);                             /* extern */
s32 rand();                                         /* extern */

void func_080DDC78(void *arg0) {
    s16 temp_r4_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s8 temp_r0;
    s8 temp_r4;
    s8 temp_r7;
    u16 *var_r4;
    u16 temp_r0_4;
    u16 var_r5;
    u8 *var_r8;

    temp_r4 = arg0->unk62;
    if (temp_r4 != 1) {
        if ((s32) temp_r4 <= 1) {
            if (temp_r4 != 0) {
                var_r4 = arg0 + 0x60;
                var_r8 = arg0 + 0x47;
            } else {
                temp_r0 = ((rand() >> 8) & 1) + 1;
                arg0->unk62 = temp_r0;
                if (temp_r0 == 1) {
                    var_r4 = arg0 + 0x60;
                    arg0->unk60 = (s16) ((func_080AB788(4) << 8) + 0x100);
                    arg0->unk64 = (u16) (((rand() >> 8) & temp_r0) << 0xB);
                } else {
                    arg0->unk60 = (s16) ((func_080AB788(2) * 0x3C) + 0xB4);
                    var_r4 = arg0 + 0x60;
                }
                arg0->unk66 = (u16) ((func_080AB788(2) * 4) + 0xC);
                var_r8 = arg0 + 0x47;
            }
        } else if (temp_r4 == 2) {
            temp_r0_2 = arg0->unk68;
            var_r4 = arg0 + 0x60;
            var_r8 = arg0 + 0x47;
            if (temp_r0_2 > 0) {
                var_r0 = temp_r0_2 + 0xFFFFE000;
                goto block_22;
            }
        } else {
            var_r4 = arg0 + 0x60;
            var_r8 = arg0 + 0x47;
        }
    } else {
        temp_r7 = 0xFF0 & arg0->unk64;
        if (temp_r7 == 0) {
            var_r5 = 0x205;
            var_r8 = arg0 + 0x47;
            if (arg0->unk4 != 0x205) {
                func_0805E860(arg0 + 0x30, 0x205);
                arg0->unk44 = temp_r4;
                (arg0 + 0x44)->unk2 = temp_r7;
                arg0->unk47 = temp_r4;
                goto block_17;
            }
        } else {
            var_r8 = arg0 + 0x47;
            if (temp_r7 == 0x800) {
                var_r5 = 0x204;
                if (arg0->unk4 != 0x204) {
                    func_0805E860(arg0 + 0x30, 0x204);
                    arg0->unk44 = temp_r4;
                    (arg0 + 0x44)->unk2 = 0;
                    arg0->unk47 = temp_r4;
block_17:
                    arg0->unk4 = var_r5;
                }
            }
        }
        temp_r4_2 = func_0803A320(arg0, (u8) ((s32) (arg0->unk64 << 0x10) >> 0x14));
        temp_r0_3 = func_0803A334(arg0, (u8) (((s32) (arg0->unk64 << 0x10) >> 0x14) * 2)) << 0x10;
        arg0->unk64 = (u16) (arg0->unk66 + arg0->unk64);
        temp_r2 = arg0->unk58 + (temp_r4_2 << 6);
        arg0->unk58 = temp_r2;
        arg0->unk5C = (s32) (arg0->unk5C + (temp_r0_3 >> 0xA));
        arg0->unk54 = (s16) (temp_r2 >> 0x10);
        arg0->unk56 = (s16) ((s32) arg0->unk5C >> 0x10);
        temp_r1 = arg0->unk68;
        var_r4 = arg0 + 0x60;
        if (temp_r1 <= 0x7FFFF) {
            var_r0 = temp_r1 + 0x2000;
block_22:
            arg0->unk68 = var_r0;
        }
    }
    temp_r0_4 = *var_r4 - 1;
    *var_r4 = temp_r0_4;
    if ((s32) (temp_r0_4 << 0x10) < 0) {
        arg0->unk62 = 0;
    }
    if (*var_r8 == 0) {
        if ((s32) (func_0805E8F0(arg0 + 0x30) << 0x1E) < 0) {
            arg0->unk44 = 1;
        }
    } else {
        *var_r8 = 0;
    }
}

