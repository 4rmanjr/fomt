#include "common.h"
s32 func_0803B474(void *, s32, s32);                  /* extern */
s32 func_0805E8F0(void *);                          /* extern */
extern ? gUnk_080F1948;

void func_0803B2A8(void *arg0) {
    u32 sp0;
    s32 sp4;
    s32 sp8;
    u32 temp_r0;
    u32 var_r6;
    u32 var_r7;
    u32 var_r8;
    u8 temp_r2;
    void *temp_r1;
    void *var_r4;
    void *var_r5;

    temp_r2 = arg0->unkE4;
    temp_r1 = (temp_r2 * 0x10) + &gUnk_080F1948;
    var_r7 = 0;
    var_r8 = 0;
    if ((temp_r2 == 0) || (temp_r2 != 1)) {
        sp0 = 2;
    } else {
        sp0 = 3;
    }
    sp4 = (*arg0->unk0)->unk18();
    sp8 = (*arg0->unk0)->unk1C();
    temp_r0 = arg0->unkE8;
    var_r6 = 0;
    if (temp_r0 > 0U) {
        var_r4 = arg0 + 0xEC;
        var_r5 = temp_r1;
        do {
            if ((s32) (func_0805E8F0(var_r4) << 0x1D) < 0) {
                func_0803B474(var_r4, sp4, sp8);
            }
            var_r8 += 1;
            if (var_r8 >= sp0) {
                var_r5 += 8;
                var_r7 += 1;
                if (var_r7 > 1U) {
                    var_r5 = temp_r1;
                    var_r7 = 0;
                }
                var_r8 = 0;
            }
            var_r4->unk14 = (s32) (var_r4->unk14 + var_r5->unk0);
            var_r4->unk18 = (s32) (var_r4->unk18 + var_r5->unk4);
            var_r4 += 0x1C;
            var_r6 += 1;
        } while (var_r6 < temp_r0);
    }
}

