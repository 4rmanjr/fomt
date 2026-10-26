#include "common.h"
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800F4D8(s32);                               /* extern */
s32 func_0802A588(void *);                            /* extern */

void func_08025FC4(void *arg0) {
    s32 *var_r4;
    s32 temp_r5;
    s32 var_r0_2;
    s32 var_r1;
    u8 temp_r3;
    void *temp_r0;
    void *var_r0;

    func_0800F4D8(arg0->unk38 + 0x54);
    func_0802A588(arg0);
    arg0->unk3C = 0x11;
    temp_r3 = arg0->unk20;
    switch (temp_r3) {                              /* irregular */
    case 2:
        var_r0 = arg0 + 0x88;
        var_r0->unk4 = 0xFFF60000;
        var_r0->unk8 = 0;
block_13:
        var_r0->unk14 = 0xC0000;
        break;
    case 3:
        var_r0 = arg0 + 0x88;
        var_r0->unk4 = 0xA0000;
        var_r0->unk8 = 0;
        goto block_13;
    case 1:
        var_r0 = arg0 + 0x88;
        var_r1 = 0xFFF60000;
        var_r0->unk4 = 0;
block_12:
        var_r0->unk8 = var_r1;
        goto block_13;
    case 0:
        var_r0 = arg0 + 0x88;
        var_r1 = 0xA0000;
        var_r0->unk4 = (s32) temp_r3;
        goto block_12;
    }
    temp_r0 = (*arg0->unk0)->unk14C();
    var_r4 = temp_r0->unk0;
    temp_r5 = temp_r0->unk4;
    if (var_r4 != temp_r5) {
loop_15:
        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
            var_r4 += 4;
            if (var_r4 == temp_r5) {
                goto block_17;
            }
            goto loop_15;
        }
        var_r0_2 = *var_r4;
    } else {
block_17:
        var_r0_2 = *(temp_r5 - 4);
    }
    func_08008B6C(var_r0_2, 0x6A);
}

