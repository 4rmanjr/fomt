#include "common.h"
extern u16 gUnk_0810110C;

void *func_0809A8AC(void *arg0) {
    s16 *var_r0;
    s32 var_r1;
    s32 var_r4;
    u16 *var_r2_2;
    u16 temp_r1;
    u16 var_r0_2;
    u16 var_r3;
    void *var_r2;

    var_r2 = arg0;
    var_r4 = 0x7F;
    do {
        var_r2->unk0 = 0;
        var_r2->unk12 = (u16) (0xFFFFF000 & var_r2->unk12);
        var_r2->unk13 = (u8) (-0x11 & var_r2->unk13);
        var_r4 -= 1;
        var_r1 = 7;
        var_r0 = var_r2 + 0x10;
loop_2:
        *var_r0 = 0;
        var_r0 -= 2;
        var_r1 -= 1;
        if (var_r1 >= 0) {
            goto loop_2;
        }
        var_r2 += 0x14;
    } while (var_r4 != -1);
    arg0->unkA00 = 0;
    arg0->unkA01 = 0;
    arg0->unkA02 = 0;
    arg0->unkA03 = 0;
    arg0->unkA04 = 0;
    arg0->unkA05 = 0;
    var_r0_2 = 0;
    var_r3 = 0;
    var_r2_2 = &gUnk_0810110C;
loop_8:
    temp_r1 = *var_r2_2;
    if (temp_r1 != 0) {
        if (temp_r1 != var_r0_2) {
            *(arg0 + (var_r3 * 0x14)) = temp_r1;
            var_r3 += 1;
            var_r0_2 = *var_r2_2;
        }
        var_r2_2 += 0x14;
        goto loop_8;
    }
    arg0->unkA06 = (s8) var_r3;
    return arg0;
}

