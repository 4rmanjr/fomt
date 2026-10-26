#include "common.h"
? .L080D145C();                                     /* extern */
s32 *func_080D11A4(s32 *, s32, s32, s32);           /* extern */
s32 *func_080D14EC();                               /* extern */

void sub_080D12EC(void) {
    s32 *temp_r0;
    s32 *temp_ret;
    s32 *temp_ret_2;
    s32 *var_r0;
    s32 var_r1;
    s32 var_r3;
    u8 temp_r4;
    u8 temp_r4_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_ret = func_080D14EC();
    var_r0 = temp_ret;
    var_r1 = SECOND_REG(temp_ret);
    var_r3 = M2C_ERROR(/* Read from unset register $r3 */) - 1;
    if (var_r3 < 0) {
        goto block_11;
    }
block_1:
    if (!M2C_CARRY(M2C_ERROR(/* Read from unset register $lsl_fictive_ on line 14 */))) {
        goto block_10;
    }
    func_080D11A4(var_r0, var_r1, M2C_ERROR(/* Read from unset register $r2 */) * 2, var_r3);
    if (3 == 7) {
        goto block_4;
    }
    temp_r4 = (saved_reg_r7 + 0xC)->unk6;
    func_080D11A4();
    func_080D11A4();
    .L080D145C();
    return;
block_4:
loop_5:
    temp_r0 = func_080D11A4();
    if (M2C_CARRY(M2C_ERROR(/* Read from unset register $lsr_fictive_ on line 37 */))) {
        goto loop_5;
    }
    if ((s32) (M2C_ERROR(/* Read from unset register $r3 */) - 1) < 0) {
        goto block_12;
    }
block_7:
    if (!M2C_CARRY(M2C_ERROR(/* Read from unset register $lsl_fictive_ on line 42 */))) {
        goto block_9;
    }
    func_080D11A4();
    temp_r4_2 = (saved_reg_r7 + 0xC)->unk6;
    func_080D11A4();
    func_080D11A4();
    .L080D145C();
    return;
block_9:
    saved_reg_r9();
block_10:
    temp_ret_2 = saved_reg_r9();
    var_r0 = temp_ret_2;
    var_r1 = SECOND_REG(temp_ret_2);
block_11:
    var_r0 += 4;
    var_r3 = M2C_ERROR(/* Read from unset register $r3 */) + 0x20;
    goto block_1;
block_12:
    goto block_7;
}

