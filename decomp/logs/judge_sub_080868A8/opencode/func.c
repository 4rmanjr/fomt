#include "common.h"
/* Warning: missing "bx $lr" in last block of sub_080868A8 (initial). */
s32 func_080CABEC(s32, s32);                          /* extern */
extern s32 .L080868CC;

void sub_080868A8(void) {
    func_080CABEC(saved_reg_r8, (saved_reg_r10 * 0x84) + saved_reg_r8 + .L080868CC);
}

