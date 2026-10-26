#include "common.h"
s32 func_08008B6C(s32, u16);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_0803A350(void ***arg0, u16 arg1) {
    s32 *var_r4;
    s32 temp_r5;
    s32 var_r0;
    void *temp_r0;

    temp_r0 = (**arg0)->unk14C();
    var_r4 = temp_r0->unk0;
    temp_r5 = temp_r0->unk4;
    if (var_r4 != temp_r5) {
loop_1:
        if ((func_08008CD0(*var_r4) << 0x18) == 0) {
            var_r0 = *var_r4;
        } else {
            var_r4 += 4;
            if (var_r4 == temp_r5) {
                goto block_4;
            }
            goto loop_1;
        }
    } else {
block_4:
        var_r0 = *(temp_r5 - 4);
    }
    func_08008B6C(var_r0, arg1);
}

