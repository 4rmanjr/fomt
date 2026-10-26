#include "common.h"
? .L080D145C();                                     /* extern */
s32 func_080D11A4();                                  /* extern */
s32 func_080D14EC();                                  /* extern */

void sub_080D129A(void) {
    u8 temp_r4;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    func_080D14EC();
    if ((s32) (M2C_ERROR(/* Read from unset register $r3 */) - 1) < 0) {
        goto block_4;
    }
block_1:
    if (!M2C_CARRY(M2C_ERROR(/* Read from unset register $lsl_fictive_ on line 14 */))) {
        goto block_3;
    }
    func_080D11A4();
    temp_r4 = (saved_reg_r7 + 8)->unk6;
    func_080D11A4();
    func_080D11A4();
    .L080D145C();
    return;
block_3:
    saved_reg_r9();
block_4:
    goto block_1;
}

