#include "common.h"
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[56];
    s32 unk40;
    s32 unk41;
    s32 unk42;
} GenObj;
void func_0802C908(GenObj *arg0) {
    s32 *var_r4;
    s32 temp_r5;
    s32 var_r0;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    void *temp_r0_4;

    temp_r0 = arg0->unk41;
    if ((temp_r0 != 0) && ((s32) arg0->unk40 < (s32) (temp_r0 - 1))) {
        temp_r0_2 = arg0->unk42 + 1;
        arg0->unk42 = temp_r0_2;
        if (temp_r0_2 == 0x14) {
            arg0->unk42 = 0U;
            temp_r0_3 = arg0->unk40 + 1;
            arg0->unk40 = temp_r0_3;
            if (temp_r0_3 == 5) {
                temp_r0_4 = (*arg0->unk0)->unk14C();
                var_r4 = temp_r0_4->unk0;
                temp_r5 = temp_r0_4->unk4;
                if (var_r4 != temp_r5) {
loop_5:
                    if ((func_08008CD0(*var_r4) << 0x18) == 0) {
                        var_r0 = *var_r4;
                    } else {
                        var_r4 += 4;
                        if (var_r4 == temp_r5) {
                            goto block_8;
                        }
                        goto loop_5;
                    }
                } else {
block_8:
                    var_r0 = *(temp_r5 - 4);
                }
                func_08008B6C(var_r0, 0xB8);
            }
        }
    }
}

