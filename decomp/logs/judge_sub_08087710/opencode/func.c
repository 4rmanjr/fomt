#include "common.h"
s32 func_080088CC(void *);                          /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_080C96C4(void *);                            /* extern */
s32 func_080CABA0(void *, ? *);                       /* extern */
s32 sub_08086DFA();                                   /* extern */
extern ? gUnk_080FFE50;
extern ? gUnk_080FFE88;

void sub_08087710(void) {
    if (func_080088CC(saved_reg_r7) & 2) {
        if (saved_reg_r7->unk6A8 != 0) {
            func_080CABA0(saved_reg_r7, &gUnk_080FFE50);
        } else {
            func_080CABA0(saved_reg_r7, &gUnk_080FFE88);
        }
        func_08050E50(saved_reg_r7 + 0x348, 0xB4);
        saved_reg_r7->unk6A4 = 0xB;
    }
    func_080C96C4(saved_reg_r7);
    sub_08086DFA();
}

