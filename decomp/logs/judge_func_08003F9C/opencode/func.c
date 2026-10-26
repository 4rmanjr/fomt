#include "common.h"
s32 func_080003DC(void *, u8);                      /* extern */
s32 func_080003E8(void *, u8);                        /* extern */
s32 func_08000470(void *, u8);                        /* extern */
s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_08003788(void *, void *, s32);               /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_080115B0(s32, void *, s32);                /* extern */
s32 func_08050DC8(void *, ? *, s32, s32);             /* extern */
extern ? gUnk_080E88C8;

s32 func_08003F9C(void *arg0) {
    u16 sp0;
    s32 sp4;
    u16 *sp8;
    s32 *spC;
    void *sp10;
    void *sp14;
    s32 temp_r6;
    s32 var_sb;
    u8 temp_r0;
    void *temp_r1;
    void *temp_r4;

    if (arg0->unk8 != 0) {
        temp_r0 = arg0->unk85;
        temp_r4 = arg0 + 0x90;
        sp4 = func_080003DC(temp_r4, temp_r0);
        var_sb = 3;
        temp_r1 = arg0 + 0x10;
        sp10 = temp_r1;
        spC = arg0 + 0x8C;
        sp14 = temp_r1 + 8;
        sp8 = &sp0;
        temp_r6 = temp_r0 << 7;
loop_2:
        *sp8 = 0x1000 & func_08000528(0x1000);
        if (func_080115B0(arg0->unk8, temp_r4, sp4) == 0) {
            func_08003788(arg0, arg0 + (temp_r6 + 0x98), arg0->unk8);
            func_08050DC8(sp10, temp_r6 + arg0 + 0x98, 0, 0);
            *spC = 3;
            func_08008B6C(sp14, 0xC5);
            func_080003E8(temp_r4, temp_r0);
            func_08000470(temp_r4, temp_r0);
            if (sp0 != 0) {
                func_080004F4();
            }
            return 1;
        }
        if (sp0 != 0) {
            func_080004F4();
        }
        var_sb -= 1;
        if (var_sb == 0) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    func_08050DC8(arg0 + 0x10, &gUnk_080E88C8, 0, 0);
    arg0->unk8C = 3;
    func_08008B6C(arg0 + 0x18, 0xC7);
    return 0;
}

