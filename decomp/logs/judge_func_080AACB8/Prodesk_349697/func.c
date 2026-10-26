#include "common.h"
s32 func_0800E324(s32);                             /* extern */
s32 func_080A1CBC(s32 *, s32, u32);                     /* extern */
s32 func_080A1ED4(s32, u32, s32);                   /* extern */
s32 func_080AA9C8(void *, ? *);                       /* extern */
s32 func_080AAE14(void *, s32, s32);                  /* extern */
extern ? gUnk_08107450;

void func_080AACB8(void *arg0) {
s32 sp0;
    s32 temp_r1;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r1;
    u32 temp_r0;
    u32 var_r4_2;
    u8 temp_r7;
    u8 var_r4;
    void *var_r0;

    temp_r8 = func_0800E324(arg0->unk94 + 0x10);
    temp_r0 = arg0->unk4;
    switch (temp_r0) {
    case 14:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x3C8;
block_8:
        func_080AAE14(var_r0, var_r1, 9);
block_12:
        temp_r6 = arg0->unk94 + 0x34C8;
        temp_r1 = temp_r8 * 2;
        temp_r7 = *(temp_r1 + (&gUnk_08107450 + 1));
        var_r4 = *(temp_r1 + &gUnk_08107450);
        if ((u32) var_r4 < (u32) temp_r7) {
            do {
                if ((func_080A1ED4(temp_r6, (u32) var_r4, temp_r8) << 0x18) != 0) {
                    func_080A1CBC(&sp0, temp_r6, (u32) var_r4);
                    func_080AA9C8(arg0, &sp0);
                }
                var_r4 += 1;
            } while ((u32) var_r4 < (u32) temp_r7);
        }
        var_r4_2 = 0x60;
        do {
            if ((func_080A1ED4(temp_r6, var_r4_2, temp_r8) << 0x18) != 0) {
                func_080A1CBC(&sp0, temp_r6, var_r4_2);
                func_080AA9C8(arg0, &sp0);
            }
            var_r4_2 += 1;
        } while (var_r4_2 <= 0x73U);
        return;
    case 15:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x3E4;
        goto block_8;
    case 8:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x2C0;
        goto block_8;
    case 4:
        func_080AAE14(arg0 + 0x9C, 0x3E6, 0xC);
        goto block_12;
    case 10:
    case 12:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x3E0;
        goto block_8;
    case 11:
    case 13:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x2B4;
        goto block_8;
    case 0:
        func_080AAE14(arg0 + 0x9C, 0, 0);
        if (temp_r8 != 2) {
            return;
        }
        goto block_12;
    default:
        func_080AAE14(arg0 + 0x9C, 0, 0);
        return;
    }
}

