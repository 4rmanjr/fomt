#include "common.h"
s32 func_0800E4FC(s32);                             /* extern */
s32 func_080123CC(s32, s32, s32, ? *);                /* extern */

void func_0801DB58(void *arg0) {
s32 sp0;
    s16 temp_r2_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_r0;
    u32 temp_r2;
    u32 var_r1;

    sp0.unk0 = 0x100;
    sp0.unk2 = 0x100;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk7 = 0;
    sp0.unk8 = 0;
    temp_r0 = arg0->unk0->unk14(arg0);
    temp_r2 = temp_r0 - 0x34;
    if ((temp_r2 <= 0x1FFU) || (temp_r0 == 0x2B)) {
        if (temp_r0 != 0x2B) {
            if (temp_r0 > 0x133) {
                var_r1 = temp_r0 + 0xFFFFFECC;
            } else {
                var_r1 = temp_r2;
            }
        } else {
            var_r1 = 9;
        }
        temp_r2_2 = sp0.unk4;
        var_r0 = (var_r1 + 1) * (0xFFFFF600 - temp_r2_2);
        if (var_r0 < 0) {
            var_r0 += 0xFF;
        }
        sp0.unk4 = (s16) (temp_r2_2 + (var_r0 >> 8));
    }
    temp_r0_2 = func_0800E4FC(arg0->unk1038 + 0x1BD8);
    if (temp_r0_2 > 0x4F) {
        sp0.unk7 = (s8) (temp_r0_2 - 0x4F);
        sp0.unk8 = 3;
    }
    temp_r4 = arg0->unk1054;
    func_080123CC(temp_r4, 1, arg0->unk0->unk148(arg0), &sp0);
}

