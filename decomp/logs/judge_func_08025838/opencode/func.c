#include "common.h"
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800EB3C(s32);                             /* extern */
s32 func_0800EBC4(s32);                             /* extern */
s32 func_0802A588(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[48];
    s32 unk38;
    s32 unk3C;
} GenObj;
void func_08025838(GenObj *arg0, s32 arg1) {
    s32 *var_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    void *temp_r0;

    if ((arg1 << 0x18) == 0) {
        var_r0 = func_0800EB3C(arg0->unk38);
    } else {
        var_r0 = func_0800EBC4(arg0->unk38);
    }
    if (var_r0 != 0) {
        func_0802A588(arg0);
        arg0->unk3C = 0x14;
        temp_r0 = (*arg0->unk0)->unk14C();
        var_r4 = temp_r0->unk0;
        temp_r5 = temp_r0->unk4;
        if (var_r4 != temp_r5) {
loop_6:
            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                var_r4 += 4;
                if (var_r4 == temp_r5) {
                    goto block_8;
                }
                goto loop_6;
            }
            var_r0_2 = *var_r4;
        } else {
block_8:
            var_r0_2 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0_2, 0x6B);
    }
}

