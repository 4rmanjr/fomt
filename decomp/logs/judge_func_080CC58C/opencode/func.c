#include "common.h"
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_0804EA94(s32 *, u32, u32, s32, s32, s32, s32, s32); /* extern */
s32 func_080CAF6C();                                  /* extern */
extern u32 gUnk_0811785C;
extern ? gUnk_08117860;

void func_080CC58C(void *arg0, u8 *arg1) {
    s32 sp10;
    s32 sp18;
    u8 *sp20;
    u32 sp24;
    u32 *sp28;
    s32 sp2C;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 var_r1;
    s32 var_r2;
    u32 temp_r4_2;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r6;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r1_2;
    void *var_r7;
    void *var_sb;

    sp20 = arg1;
    func_080CAF6C();
    sp24 = 0;
    if (sp24 < (u32) arg0->unk214) {
        sp28 = arg0 + 0x214;
        var_sb = arg0 + 0x2B0;
        var_r7 = arg0 + 0x21C;
        do {
            var_r1 = 0;
            if ((var_r7->unk0 == 0) || (var_r7->unk4 == 0)) {
                var_r1 = 1;
            }
            sp2C = var_r1;
            if (var_r1 == 0) {
                temp_r5 = *((sp24 * 4) + &gUnk_08117860);
                temp_r6 = (u32) ((temp_r5 + 0xF) << 0x18) >> 0x15;
                temp_r5_2 = (u32) ((temp_r5 & 0xFFFFFF00) << 0x10) >> 0x15;
                temp_r4 = sp24 * 8;
                temp_r8 = func_08007D4C(temp_r4 + arg0 + 0x2AC, var_sb->unk0);
                func_0804EA94(&sp10, temp_r6, temp_r5_2, temp_r8, func_080074C0(temp_r4 + arg0 + 0x2EC, var_sb->unk40), 1, 1, sp2C);
                temp_r2 = *sp20;
                if ((u32) temp_r2 <= 0x7FU) {
                    temp_r1 = sp20 + ((temp_r2 * 8) + 4);
                    temp_r1->unk0 = sp10;
                    temp_r1->unk4 = (u16) sp10.unk4;
                    *sp20 = temp_r2 + 1;
                }
            }
            var_sb += 8;
            var_r7 += 0xC;
            sp24 += 1;
        } while (sp24 < (u32) *sp28);
    }
    temp_r1_2 = arg0 + 0x280;
    var_r2 = 0;
    if ((temp_r1_2->unk4 == 0) || (temp_r1_2->unk8 == 0)) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        temp_r5_3 = (u32) ((gUnk_0811785C + 0xF) << 0x18) >> 0x15;
        temp_r4_2 = (u32) (((u32) gUnk_0811785C >> 8) << 0x18) >> 0x15;
        temp_r0 = arg0 + 0x29C;
        temp_r6_2 = func_08007D4C(temp_r0, temp_r0->unk4);
        temp_r0_2 = arg0 + 0x2A4;
        func_0804EA94(&sp18, temp_r5_3, temp_r4_2, temp_r6_2, func_080074C0(temp_r0_2, temp_r0_2->unk4), 1, 1, var_r2);
        temp_r2_2 = *sp20;
        if ((u32) temp_r2_2 <= 0x7FU) {
            temp_r0_3 = sp20 + ((temp_r2_2 * 8) + 4);
            temp_r0_3->unk0 = sp18;
            temp_r0_3->unk4 = (u16) sp18.unk4;
            *sp20 = temp_r2_2 + 1;
        }
    }
}

