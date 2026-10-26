#include "common.h"
u32 func_080077DC(s32 *, u32);                      /* extern */
s32 func_080D6E98(void *);                            /* extern */

s32 func_080D73E4(void *arg0, u32 arg1) {
    s32 *var_r4;
    s32 var_r0;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r8;
    s8 var_r3;
    u32 temp_r0;
    u8 var_r1;

    if (arg1 <= 5U) {
        var_r8 = 0;
        var_r4 = arg0 + 4;
loop_2:
        var_r1 = 0;
        if ((*var_r4 + 1) == 0) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            temp_r0 = func_080077DC(var_r4, arg1);
            var_r0 = 0;
            if (temp_r0 <= 0x1FU) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                arg0->unk1 = var_r1;
                var_r3 = 0;
                var_r1_2 = 0;
                if ((arg0->unk4 + 1) == 0) {
                    var_r1_2 = 1;
                }
                if (var_r1_2 != 0) {
                    var_r1_3 = 0;
                    if ((arg0->unk8 + 1) == 0) {
                        var_r1_3 = 1;
                    }
                    if (var_r1_3 != 0) {
                        var_r3 = 1;
                    }
                }
                arg0->unk0 = var_r3;
                return (var_r8 << 5) | temp_r0;
            }
            goto block_16;
        }
block_16:
        var_r4 += 4;
        var_r8 += 1;
        if (var_r8 > 1) {
            goto block_21;
        }
        goto loop_2;
    }
    if ((arg1 == 6) && (arg0->unk1 != 0)) {
        func_080D6E98(arg0);
        return 0;
    }
block_21:
    return 0x40;
}

