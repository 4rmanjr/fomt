#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007770(void *, s32);                       /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s32 func_08007CD8(s32 *, s32);                        /* extern */
s32 func_080083D0(s32 *, s32, s32);                     /* extern */
s32 func_0804E7A0(s32, s32, s32);                     /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
s32 func_080ADC00(void *);                            /* extern */
s32 func_080ADD44(void *);                            /* extern */
extern s32 gUnk_080F9F70;
extern u32 gUnk_080F9F74;
extern ? gUnk_08728208;
extern ? gUnk_08728320;
extern ? gUnk_0872937C;
extern ? vtable_unk_080E5BB4;
extern ? vtable_unk_080E5BD8;
extern ? vtable_unk_080E7878;
extern ? vtable_unk_080E7888;
extern ? vtable_unk_080E7898;
extern ? vtable_unk_080E78C0;
extern ? vtable_unk_080E78E0;

void *func_0804F288(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
s32 sp0;
    s32 sp8;
    s32 spC;
    void *sp10;
    void *sp14;
    void *sp18;
    s32 sp1C;
    ? *temp_r4_2;
    ? *temp_r4_3;
    s32 *var_r1;
    s32 temp_r0_5;
    s32 temp_r1_2;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;
    s32 var_sb;
    u32 temp_r4_4;
    u32 temp_r5_3;
    u32 temp_r6_2;
    u32 var_r0_2;
    void **var_r5_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r7;
    void *var_r5;

    arg0->unk0 = (u8) ((((-4 & arg0->unk0) | (arg1 & 3)) & ~0x7C) | ((arg2 & 0x1F) * 4));
    arg0->unk0 = (s16) ((0xFFFFFE7F & (u16) arg0->unk0) | (((arg2 >> 3) & 3) << 7));
    arg0->unk0 = (s32) (((s32) arg0->unk0 & 0xFFF801FF) | ((((7 & arg2) << 6) + 0x14) << 9));
    arg0->unk2 = (u8) ((-0x79 & arg0->unk2) | ((arg3 & 0xF) * 8));
    arg0->unk4 = arg4;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unkD = 1;
    temp_r5 = arg0 + 0x10;
    func_08007770(temp_r5, arg6);
    func_080083D0(arg0 + 0x18, arg5, 2);
    temp_r2 = arg0 + 0x20;
    arg0->unk20 = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = arg0 + 0x30;
    temp_r2->unkC = temp_r1;
    arg0->unk30 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r0 = arg0 + 0x2C;
    temp_r2->unk10 = temp_r0;
    temp_r2->unk14 = temp_r1;
    arg0->unk3C = 0;
    temp_r0_2 = temp_r0 + 0x94;
    temp_r0->unk94 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk8 = &vtable_unk_080E7898;
    temp_r0_2->unkC = (void *) (temp_r2 + 0x1C);
    temp_r2_2 = arg0 + 0xD0;
    arg0->unkD0 = &vtable_unk_080E78C0;
    temp_r2_2->unk4 = temp_r5;
    var_r1 = arg0 + 0xD8;
    var_r0 = 2;
    do {
        *var_r1 = 0;
        var_r1 += 4;
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r2_2->unk14 = 0;
    temp_r2_2->unk16 = 0;
    temp_r2_2->unk18 = 0;
    temp_r2_2->unk19 = 0;
    temp_r2_2->unk1A = 0;
    temp_r2_2->unk1B = 0;
    var_r4 = 0;
    sp18 = arg0 + 0x10;
    sp10 = arg0 + 0xD0;
    sp14 = arg0 + 0xEC;
    do {
        temp_r0_3 = __builtin_new(0x70);
        var_r5 = temp_r0_3;
        var_r6 = 6;
        spC = var_r4 * 4;
        sp1C = var_r4 + 1;
loop_4:
        var_r5->unk0 = __builtin_new(0x104);
        temp_r4 = var_r5 + 4;
        func_08007874(temp_r4);
        temp_r4->unk4 = 0;
        var_r5->unkC = 0;
        var_r5 += 0x10;
        var_r6 -= 1;
        if (var_r6 != -1) {
            goto loop_4;
        }
        temp_r7 = spC + temp_r2_2;
        temp_r6 = temp_r7->unk8;
        if ((temp_r0_3 != temp_r6) && (temp_r6 != 0)) {
            var_r5_2 = temp_r6 + 0x70;
            if (temp_r6 != var_r5_2) {
                do {
                    var_r5_2 -= 0x10;
                    temp_r4_2 = var_r5_2 + 4;
                    func_08007C28(temp_r4_2, temp_r4_2->unk4);
                    func_080079E8(temp_r4_2, 2);
                    __builtin_delete(*var_r5_2);
                } while (temp_r6 != var_r5_2);
            }
            __builtin_delete(temp_r6);
        }
        temp_r7->unk8 = temp_r0_3;
        var_sb = 0;
loop_11:
        temp_r5_2 = (spC + temp_r2_2)->unk8 + (var_sb * 0x10);
        func_080083D0(&sp0, arg5, 3);
        temp_r4_3 = temp_r5_2 + 4;
        if (sp != temp_r4_3) {
            func_08007C28(temp_r4_3, temp_r4_3->unk4);
            temp_r4_3->unk4 = func_08007CD8(temp_r4_3, sp4);
        }
        func_08007C28(&sp0, sp4);
        func_080079E8(&sp0, 2);
        temp_r1_2 = temp_r4_3->unk4;
        var_r0_2 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        if (var_r0_2 != 0) {
            sp8.unk0 = 4;
            sp8.unk2 = 2;
            func_0804E7A0(sp8, temp_r5_2->unk0 + 4, 0);
            var_r0_2 = 1;
        }
        temp_r5_2->unkC = (s8) var_r0_2;
        var_sb += 1;
        if (var_sb <= 6) {
            goto loop_11;
        }
        var_r4 = sp1C;
    } while (var_r4 <= 2);
    temp_r2_2->unk1A = 1;
    func_080ADD44(sp14);
    temp_r0_4 = arg0 + 0x120;
    arg0->unk120 = 0;
    temp_r0_4->unk4 = 0;
    temp_r0_4->unk8 = &vtable_unk_080E7888;
    temp_r0_4->unkC = sp10;
    var_r4_2 = 0;
    if (arg4 == 1) {
        var_r4_2 = 1;
    }
    temp_r2_3 = arg0 + 0x130;
    arg0->unk130 = 0;
    temp_r2_3->unk4 = 0;
    temp_r2_3->unk8 = &vtable_unk_080E78E0;
    temp_r2_3->unkC = (s32) gUnk_080F9F70;
    temp_r2_3->unk10 = (s32) ((((u32) ((u16) arg0->unk0 << 0x17) >> 0x1E) << 0xE) + (((u32) ((s32) arg0->unk0 << 0xD) >> 0x16) << 5) + 0x06000000);
    temp_r2_3->unk14 = (u16) ((0xFFFFC000 & temp_r2_3->unk14) | (((u32) gUnk_080F9F74 >> 5) & 0x3FFF));
    temp_r2_3->unk15 = (u8) ((-0x41 & temp_r2_3->unk15 & 0x7F) | (var_r4_2 << 7));
    temp_r6_2 = (u32) (arg0->unk0 << 0x19) >> 0x1B;
    temp_r4_4 = (u32) ((s32) arg0->unk0 << 0xD) >> 0x16;
    temp_r5_3 = (u32) (arg0->unk2 << 0x19) >> 0x1C;
    temp_r0_5 = func_080074C0(sp18, sp18->unk4);
    temp_r3 = arg0 + 0x148;
    arg0->unk148 = 0;
    temp_r3->unk4 = 0;
    temp_r3->unk8 = &vtable_unk_080E7878;
    temp_r3->unkC = (u8) ((-0x20 & temp_r3->unkC) | temp_r6_2);
    temp_r3->unkC = (s16) ((0xFFFF801F & (u16) temp_r3->unkC) | (temp_r4_4 << 5));
    temp_r3->unkC = (s32) (((s32) temp_r3->unkC & 0xFFF87FFF) | (temp_r5_3 << 0xF));
    temp_r3->unkE = (u8) ((-0x79 & temp_r3->unkE) | ((temp_r0_5 & 0xF) * 8));
    arg0->unk158 = 0;
    func_0805E6CC(arg0 + 0x160, &gUnk_08728208);
    temp_r4_5 = arg0 + 0x190;
    func_0805E6CC(temp_r4_5, &gUnk_0872937C);
    func_0805E824(arg0 + 0x1C0, temp_r4_5, 0, 0x100);
    func_080083D0(arg0 + 0x1D4, arg5, 7);
    arg0->unk1DC = (u8) (-2 & arg0->unk1DC & ~2);
    func_080ADC00(arg0 + 0x1E4);
    func_08007770(arg0 + 0x1E8, arg6);
    arg0->unk1F0 = (u8) (-2 & arg0->unk1F0 & ~2);
    var_r0_3 = 2;
    do {
        var_r0_3 -= 1;
    } while (var_r0_3 != -1);
    arg0->unk500 = 0;
    temp_r4_6 = arg0 + 0x504;
    func_0805E6CC(temp_r4_6, &gUnk_08728320);
    func_0805E824(arg0 + 0x534, temp_r4_6, 0, 0x100);
    func_08007770(arg0 + 0x548, arg6);
    arg0->unk550 = (u8) (arg0->unk550 | 0x3F);
    return arg0;
}

