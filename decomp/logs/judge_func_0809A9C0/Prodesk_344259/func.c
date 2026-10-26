#include "common.h"
void func_0809A9C0(void *arg0, void *arg1) {
    s32 var_r1;
    s32 var_r3_2;
    u16 *var_r1_2;
    u16 *var_r2;
    u8 *temp_r4;
    void *var_r3;

    var_r3 = arg0;
    var_r1 = 0;
    if ((s32) var_r3->unkA06 > 0) {
        temp_r4 = var_r3 + 0xA06;
loop_2:
        if (var_r3->unk0 == arg1->unk0) {
            var_r3->unk13 = (u8) (var_r3->unk13 | 0x10);
            var_r3->unk12 = (u16) ((0xFFFFF000 & var_r3->unk12) | ((u32) (arg1->unk12 << 0x14) >> 0x14));
            var_r2 = arg1 + 2;
            var_r1_2 = var_r3 + 2;
            var_r3_2 = 7;
            do {
                *var_r1_2 = *var_r2;
                var_r2 += 2;
                var_r1_2 += 2;
                var_r3_2 -= 1;
            } while (var_r3_2 >= 0);
            return;
        }
        var_r3 += 0x14;
        var_r1 += 1;
        if (var_r1 >= (s32) *temp_r4) {

        } else {
            goto loop_2;
        }
    }
}

