#include "common.h"
s32 func_08007EE8(void *, u32, s32);                  /* extern */
s32 func_08007F84(void *, u16, u16);                  /* extern */
s32 func_080080A0(void *, u32, u32);                  /* extern */
extern void *gUnk_03000408;

void func_08007A28(u32 arg1, s32 arg2) {
    u32 sp0;
    s32 sp4;
    u32 sp8;
    void *spC;
    u16 *sp10;
    u16 *sp14;
    s32 *temp_r2_2;
    s32 temp_r1;
    u16 *temp_r4;
    u32 temp_r2;
    u32 temp_r3;
    u32 var_r0;
    u32 var_r7;
    void *temp_r5;
    void *var_r6;
    void *var_r8;

    sp0 = arg1;
    sp4 = arg2;
    temp_r5 = gUnk_03000408;
    temp_r4 = temp_r5 + 0x92A;
    if (temp_r5->unk92A != 0) {
        func_08007F84(temp_r5 + 0x824, temp_r5->unk928, temp_r5->unk92A);
        *temp_r4 = 0;
    }
    if (sp4 != 0) {
        sp8 = sp0 + sp4;
        var_r7 = 0;
        sp14 = temp_r4;
        spC = temp_r5 + 0x824;
        sp10 = temp_r5 + 0x928;
        if (temp_r5->unk920 != 0) {
            var_r8 = temp_r5 + 0x24;
            var_r6 = var_r8;
loop_5:
            var_r0 = 0;
            if (var_r7 <= 0xFFU) {
                temp_r1 = *(temp_r5 + ((var_r7 >> 5) * 4)) & (1 << (0x1F & var_r7));
                var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            }
            if (var_r0 != 0) {
                temp_r3 = (u32) (var_r6->unk0 << 0x16) >> 0x16;
                temp_r2 = var_r6->unk1 << 0x1A;
                if ((sp0 < (u32) (temp_r3 + (1 << (temp_r2 >> 0x1C)))) && (temp_r3 < sp8)) {
                    func_080080A0(spC, temp_r3, temp_r2 >> 0x1C);
                    var_r6->unk4 = 0;
                    var_r6->unk0 = (void *) temp_r5->unk20;
                    temp_r5->unk20 = var_r8;
                    if (var_r7 <= 0xFFU) {
                        temp_r2_2 = temp_r5 + ((var_r7 >> 5) * 4);
                        *temp_r2_2 &= ~(1 << (0x1F & var_r7));
                    }
                    temp_r5->unk920 = (u16) (temp_r5->unk920 - 1);
                }
            }
            var_r6 += 8;
            var_r8 += 8;
            var_r7 += 1;
            if ((temp_r5->unk920 != 0) && (var_r7 <= 0xFFU)) {
                goto loop_5;
            }
        }
        func_08007EE8(spC, sp0, sp4);
        *sp10 = sp0.unk0;
        *sp14 = sp0.unk4;
    }
}

