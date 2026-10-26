#include "common.h"
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32, void *);     /* extern */
s32 func_08076EA8(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    u8 _pad6[1418];
    s32 unk590;
    u8 _pad594[36];
    s32 unk5B8;
    u8 _pad5BC[36];
    s32 unk5E0;
} GenObj;
s32 func_08070CA4(GenObj *arg0) {
    s32 sp4;
    s32 sp8;
    s16 *var_r2;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;
    s32 var_r8;
    s8 *var_r3;
    void *temp_r5;

    var_r8 = 0;
    var_r2 = arg0 + 0x5B8;
    temp_r0 = arg0->unk5B8;
    if ((s32) temp_r0 < 0) {

    } else if ((s32) (temp_r0 + 0x30) < (s32) arg0->unk590) {
        var_r3 = arg0 + 0x5E0;
loop_4:
        *var_r3 = 0;
        var_r2 += 0x2C;
        var_r3 += 0x2C;
        var_r8 += 1;
        temp_r0_2 = *var_r2;
        if ((s32) temp_r0_2 >= 0) {
            if ((s32) (temp_r0_2 + 0x30) >= (s32) arg0->unk590) {
                goto block_6;
            }
            goto loop_4;
        }
    } else {
block_6:
        if ((s32) (arg0 + (0x2C * var_r8))->unk5B8 >= 0) {
            do {
                temp_r2 = 0x2C * var_r8;
                temp_r5 = arg0 + temp_r2;
                if ((s32) temp_r5->unk5B8 <= (s32) (arg0->unk590 + 0xA0)) {
                    if (temp_r5->unk5E0 == 0) {
                        temp_r4 = *((u8 *)arg0 + 0x5DC + temp_r2) * 0x504;
                        sp4 = 0x14;
                        sp4.unk2 = 2;
                        func_0804E7A0(sp4, temp_r4 + arg0 + 0x1A58 + 4, 0);
                        sp8 = 0x14;
                        sp8.unk2 = 2;
                        func_0804E8F0(sp8, temp_r4 + arg0 + 0x1A58 + 4, 0, 0, temp_r5 + 0x5BC);
                        temp_r5->unk5E0 = 1U;
                    }
                } else {
                    temp_r5->unk5E0 = 0U;
                }
                var_r8 += 1;
            } while ((s32) (arg0 + (0x2C * var_r8))->unk5B8 >= 0);
        }
    }
    func_08076EA8(arg0);
    return 1;
}

