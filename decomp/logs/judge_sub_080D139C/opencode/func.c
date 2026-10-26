#include "common.h"
s32 *func_080D11A4();                               /* extern */
s32 *func_080D14EC();                               /* extern */

void sub_080D139C(void) {
    s32 *temp_r0;
    s32 *temp_ret;
    s32 *temp_ret_2;
    s32 *temp_ret_3;
    s32 *temp_ret_4;
    s32 *var_r0;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    u16 *var_r1;
    u32 var_r6_2;
    u8 temp_r4;
    u8 temp_r4_2;
    void *temp_r5;
    void *temp_r5_2;

    var_r5 = 3;
    temp_ret = func_080D14EC();
    var_r0 = temp_ret;
    var_r1 = SECOND_REG(temp_ret);
    do {
        var_r3 = M2C_ERROR(/* Read from unset register $r3 */) - 1;
        if (var_r3 < 0) {
            var_r0 += 4;
            var_r3 += 0x20;
        }
        if (!M2C_CARRY(M2C_ERROR(/* Read from unset register $lsl_fictive_ on line 13 */))) {
            saved_reg_r9(var_r0, var_r1, M2C_ERROR(/* Read from unset register $r2 */) * 2, var_r3);
        }
        func_080D11A4();
        if (2 != 3) {
            temp_r5 = saved_reg_r7 + 8;
            temp_r4 = temp_r5->unk6;
            func_080D11A4();
            var_r5 = (temp_r5->unk4 + temp_r4) * 2;
            temp_ret_2 = func_080D11A4();
            var_r0 = temp_ret_2;
            var_r1 = SECOND_REG(temp_ret_2);
            var_r6 = 5;
        } else {
            var_r6_2 = 0;
            do {
                temp_r0 = func_080D11A4();
                var_r6_2 = (u32) ((var_r6_2 * 8) + 3) >> 1;
            } while (M2C_CARRY(M2C_ERROR(/* Read from unset register $lsr_fictive_ on line 42 */)));
            if ((s32) (M2C_ERROR(/* Read from unset register $r3 */) - 1) < 0) {

            }
            if (M2C_CARRY(M2C_ERROR(/* Read from unset register $lsl_fictive_ on line 47 */))) {
                func_080D11A4();
                temp_r5_2 = saved_reg_r7 + 8;
                temp_r4_2 = temp_r5_2->unk6;
                func_080D11A4();
                var_r5 = (temp_r5_2->unk4 + temp_r4_2) * 2;
                temp_ret_3 = func_080D11A4();
                var_r0 = temp_ret_3;
                var_r1 = SECOND_REG(temp_ret_3);
                var_r6 = (var_r6_2 * 8) + 3 + 2;
            } else {
                var_r6 = var_r6_2 + 1;
                temp_ret_4 = saved_reg_r9();
                var_r0 = temp_ret_4;
                var_r1 = SECOND_REG(temp_ret_4);
            }
        }
        var_r5 = var_r1 - var_r5;
loop_13:
        var_r5 += 2;
        var_r1 += 2;
        *var_r1 = *var_r5;
        var_r6 -= 1;
        if (var_r6 != 0) {
            goto loop_13;
        }
    } while ((u32) var_r1 < (u32) saved_reg_r8);
}

