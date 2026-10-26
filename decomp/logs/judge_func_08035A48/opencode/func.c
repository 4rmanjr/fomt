#include "common.h"
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_08035978(void *);                          /* extern */

void func_08035A48(void *arg0, void *arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (arg0->unk4 == ((u32) (arg1->unk0 << 0x16) >> 0x16)) {
        var_r0 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) - arg0->unkA;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        if (var_r0 <= 0x97) {
            var_r0_2 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) - arg0->unkE;
            if (var_r0_2 < 0) {
                var_r0_2 = 0 - var_r0_2;
            }
            if ((var_r0_2 <= 0x6F) && ((func_08035978(arg0) << 0x18) == 0) && ((arg0->unk14->unk28(arg0) << 0x18) == 0)) {
                func_08032384(arg0, 2, 0);
                arg0->unk3F = 0x78;
                arg0->unk14->unk3C(arg0, 1);
            }
        }
    }
}

