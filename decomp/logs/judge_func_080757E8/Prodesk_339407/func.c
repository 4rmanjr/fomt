#include "common.h"
s32 free();                                           /* extern */
s32 func_0800736C(s32);                             /* extern */
s32 func_080074C0(s32, s32);                        /* extern */
s32 func_08007B54(s32, u32);                        /* extern */
s32 func_08007C28(s32, s32);                          /* extern */
s32 func_08007D4C(s32, s32);                        /* extern */
u32 func_08007DB8(s32, s32);                        /* extern */
s32 func_08008E64(u32, s32, s32);                     /* extern */
s32 func_080E2444(void **, void *, void **, u32 *);   /* extern */
s32 func_080E25FC(void *, void *, void *, void *);  /* extern */
s32 func_080E2970(void **, void *, void **, u32 *);   /* extern */

void func_080757E8(s32 *arg0, void *arg1, ? arg3) {
    void *sp0;
    void *sp4;
    void *sp8;
    void *spC;
    u32 sp10;
    s32 sp14;
    void *sp18;
    u32 sp1C;
    u32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    u32 *sp30;
    void *sp34;
    s32 temp_r0;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r6_2;
    s32 temp_sb;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r3_2;
    s32 var_r3_4;
    u16 var_r0;
    u32 temp_r1;
    u32 temp_r6;
    u32 var_r1;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r3;
    void *var_r1_4;
    void *var_r2;
    void *var_r3;
    void *var_r3_3;
    void *var_r7;

    temp_sb = *arg0;
    sp24 = arg1->unk8;
    sp28 = arg1->unk10;
    var_r7 = arg1->unk0;
    var_r0 = 0;
    if (var_r7 != 0) {
        var_r0 = arg1->unk4;
    }
    temp_r0 = var_r7 + (var_r0 * 8);
    sp2C = temp_r0;
    if (var_r7 == temp_r0) {
        return;
    }
loop_4:
    var_r1 = 0x53216420;
    if (((u8) var_r7->unk1 >> 6) != 0) {
        var_r1 = 0x5321;
    }
    temp_r6 = (var_r1 >> (((u8) var_r7->unk3 >> 6) * 4)) & 0xF;
    temp_r1 = sp24 + ((u32) (var_r7->unk4 << 0x16) >> 0x11);
    sp1C = temp_r1;
    temp_r0_2 = temp_sb + 4;
    var_r3 = temp_r0_2->unk4;
    var_r2 = var_r3->unk4;
    temp_r0_3 = temp_sb + 0x18;
    sp30 = (u32 *) (&sp0 + 0x20);
    sp34 = var_r7 + 8;
    if (var_r2 != 0) {
        do {
            var_r1_2 = 0;
            if ((u32) var_r2->unk10 < temp_r1) {
                var_r1_2 = 1;
            }
            if (var_r1_2 == 0) {
                var_r3 = var_r2;
                var_r2 = var_r3->unk8;
            } else {
                var_r2 = var_r2->unkC;
            }
        } while (var_r2 != 0);
    }
    sp0 = var_r3;
    var_r3_2 = 0;
    temp_r0_4 = temp_r0_2->unk4;
    sp4 = temp_r0_4;
    var_r2_2 = 0;
    if (sp0 == temp_r0_4) {
        var_r2_2 = 1;
    }
    if ((var_r2_2 != 0) || (sp0->unk10 != sp1C)) {
        var_r3_2 = 1;
    }
    if (var_r3_2 != 0) {
        temp_r0_5 = func_08007B54(temp_sb, temp_r6);
        if (temp_r0_5 != 0) {
            spC = sp0;
            sp10 = sp1C;
            sp14 = temp_r0_5;
            sp18 = sp0;
            func_080E2444(&sp8, temp_r0_2, &sp18, &sp10);
            var_r1_3 = (func_08007D4C(temp_sb, temp_r0_5) << 5) + 0x06010000;
            goto block_25;
        }
    } else if (func_08007DB8(temp_sb, sp0->unk14) < temp_r6) {
        func_08007C28(temp_sb, sp0->unk14);
        if (func_08007B54(temp_sb, temp_r6) != 0) {
            var_r1_3 = (func_08007D4C(temp_sb) << 5) + 0x06010000;
block_25:
            func_08008E64(sp1C, var_r1_3, 0x20 << temp_r6);
        } else {
            sp8 = sp0;
            spC = sp0;
            temp_r3 = temp_r0_2->unk4;
            if (func_080E25FC(sp0, temp_r3 + 4, temp_r3 + 8, temp_r3 + 0xC) != 0) {
                free();
            }
            temp_r0_2->unk8 = (s32) (temp_r0_2->unk8 - 1);
        }
    }
    sp20 = sp28 + (((u8) var_r7->unk5 >> 4) << 5);
    var_r3_3 = temp_r0_3->unk4;
    var_r1_4 = var_r3_3->unk4;
    if (var_r1_4 != 0) {
        do {
            var_r2_3 = 0;
            if ((u32) var_r1_4->unk10 < (u32) *sp30) {
                var_r2_3 = 1;
            }
            if (var_r2_3 == 0) {
                var_r3_3 = var_r1_4;
                var_r1_4 = var_r3_3->unk8;
            } else {
                var_r1_4 = var_r1_4->unkC;
            }
        } while (var_r1_4 != 0);
    }
    sp0 = var_r3_3;
    var_r3_4 = 0;
    temp_r0_6 = temp_r0_3->unk4;
    sp4 = temp_r0_6;
    var_r2_4 = 0;
    if (sp0 == temp_r0_6) {
        var_r2_4 = 1;
    }
    if ((var_r2_4 != 0) || (sp0->unk10 != sp20)) {
        var_r3_4 = 1;
    }
    if (var_r3_4 != 0) {
        temp_r6_2 = temp_sb + 0x14;
        temp_r0_7 = func_0800736C(temp_r6_2);
        if (temp_r0_7 != 0) {
            spC = sp0;
            sp10 = sp20;
            sp14 = temp_r0_7;
            sp18 = sp0;
            func_080E2970(&sp8, temp_r0_3, &sp18, &sp10);
            func_08008E64(sp20, (func_080074C0(temp_r6_2, temp_r0_7) << 5) + 0x05000200, 0x20);
        }
    }
    var_r7 = sp34;
    if (var_r7 != sp2C) {
        goto loop_4;
    }
}

