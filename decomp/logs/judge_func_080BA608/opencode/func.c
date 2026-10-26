#include "common.h"
s32 func_080088CC();                                /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */

void func_080BA608(void *arg0) {
    u8 temp_r1;

    if (8 & func_080088CC()) {
        func_08008B6C(arg0 + 0x714, 0xB8);
        temp_r1 = arg0->unkB31;
        if (temp_r1 != 0) {
            arg0->unkB31 = 0U;
            arg0->unk7A4->unk10 = 0x100;
            arg0->unk7A8->unk10 = 0x100;
            arg0->unk87C->unk10 = 0x100;
            arg0->unk880->unk10 = 0x100;
            arg0->unk91C->unk10 = 0x100;
            arg0->unk920->unk10 = 0x100;
            return;
        }
        arg0->unk7A4->unk10 = (s16) temp_r1;
        arg0->unk7A8->unk10 = (s16) temp_r1;
        arg0->unk87C->unk10 = (s16) temp_r1;
        arg0->unk880->unk10 = (s16) temp_r1;
        arg0->unk91C->unk10 = (s16) temp_r1;
        arg0->unk920->unk10 = (s16) temp_r1;
        arg0->unkB31 = 1U;
    }
}

