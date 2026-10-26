#include "common.h"
s32 func_0804E9F4(s32, s32, s32, s32, s32, s32);      /* extern */
s32 func_0804EDB4(u32, s32, s32, s32, s32);           /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[16];
    struct GenObj *unk18;
} GenObj;
void func_08075220(GenObj *arg0, u32 arg1, s32 arg2) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r6;
    u32 temp_r0_2;
    u32 temp_r7;
    GenObj *temp_r0;

    var_r6 = 0x1A;
    temp_r0 = arg0->unk4;
    if (arg1 != 0) {
        temp_r0_2 = arg1 % 30U;
        if (temp_r0_2 != 0) {
            temp_r5 = arg2 << 6;
            func_0804E9F4(temp_r0->unk18 + temp_r5 + 0x34, 0x88, 2, 2, 0, 0x20);
            func_0804EDB4(temp_r0_2, temp_r0->unk18 + temp_r5 + 0x32, 0x120, 0, 0x20);
            var_r6 = 0x16;
        }
        temp_r7 = (arg1 / 30U) & 3;
        if (temp_r7 != 0) {
            temp_r6 = var_r6 - 4;
            temp_r5_2 = arg2 << 6;
            func_0804E9F4(temp_r0->unk18 + temp_r5_2 + (temp_r6 * 2), 0x84, 2, 2, 0, 0x20);
            func_0804EDB4(temp_r7, temp_r0->unk18 + temp_r5_2 + ((temp_r6 - 1) * 2), 0x120, 0, 0x20);
            var_r6 = temp_r6 - 6;
        }
        if ((arg1 / 120U) != 0) {
            temp_r6_2 = var_r6 - 6;
            temp_r5_3 = arg2 << 6;
            func_0804E9F4(temp_r0->unk18 + temp_r5_3 + (temp_r6_2 * 2), 0x78, 6, 2, 0, 0x20);
            func_0804EDB4(temp_r7, temp_r0->unk18 + temp_r5_3 + ((temp_r6_2 - 1) * 2), 0x120, 0, 0x20);
        }
    }
}

