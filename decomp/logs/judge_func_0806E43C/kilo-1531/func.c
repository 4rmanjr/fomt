#include "common.h"
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008E64(s32, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
extern s32 gUnk_080F9F78;

void func_0806E43C(void *arg0) {
    s32 temp_r4;
    s32 var_r5;
    s32 var_r7;
    void *temp_r4_2;
    void *temp_r5;

    temp_r4 = gUnk_080F9F78;
    temp_r5 = arg0 + 0x30;
    func_08008E64(temp_r4, (func_080074C0(temp_r5, temp_r5->unk4) << 5) + 0x05000200, 0x20);
    *(0x0500020E + (func_080074C0(temp_r5, temp_r5->unk4) << 5)) = 0x27F;
    func_08008EB8(0, arg0 + 0x3C, 8);
    arg0->unk3F = (u8) ((0x3F & arg0->unk3F) | 0x40);
    arg0->unk3D = (u8) ((0x3F & arg0->unk3D & ~0xC) | 4);
    temp_r4_2 = arg0 + 0x28;
    arg0->unk40 = (u16) ((0xFFFFFC00 & arg0->unk40) | (func_08007D4C(temp_r4_2, temp_r4_2->unk4) & 0x3FF));
    arg0->unk41 = (u8) ((0xF & arg0->unk41) | (func_080074C0(temp_r5, temp_r5->unk4) * 0x10) | 0xC);
    var_r7 = 0;
    do {
        var_r5 = 0;
loop_2:
        *(0x06010000 + (s32) (((func_08007D4C(temp_r4_2, temp_r4_2->unk4) + var_r7) << 5) + (var_r5 * 4))) = 0x77777777;
        var_r5 += 1;
        if (var_r5 <= 7) {
            goto loop_2;
        }
        var_r7 += 1;
    } while (var_r7 <= 7);
    arg0->unk3E = (u16) ((0xFFFFFE00 & arg0->unk3E) | ((arg0->unk38 * 0x10) & 0x1FF));
    arg0->unk3C = 0x28;
}

