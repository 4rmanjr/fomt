#include "common.h"
s32 func_080C2D54(void *);                            /* extern */
s32 sub_080C3DC4();                                   /* extern */

void sub_080C4BBC(s8 *arg1) {
    *arg1 = 1;
    arg25 = 0x33;
    func_080C2D54(saved_reg_r7);
    if (saved_reg_r7->unk89C == 0) {
        sub_080C3DC4();
    }
}

