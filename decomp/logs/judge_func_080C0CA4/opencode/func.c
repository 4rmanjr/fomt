#include "common.h"
s32 func_080088CC();                                /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */

void func_080C0CA4(void *arg0) {
    s32 temp_r0;
    s32 var_r0;

    if (8 & func_080088CC()) {
        func_08008B6C(arg0 + 0x584, 0xB8);
        temp_r0 = arg0->unk5A4;
        switch (temp_r0) {                          /* irregular */
        case 0:
            var_r0 = 2;
block_12:
            arg0->unk5A4 = var_r0;
            break;
        case 1:
            arg0->unk5A4 = 3;
            arg0->unk4D8->unk10 = 0;
            return;
        case 3:
            arg0->unk5A4 = 1;
            arg0->unk4D8->unk10 = 0x100;
            return;
        case 2:
            var_r0 = 0;
            goto block_12;
        }
    }
}

