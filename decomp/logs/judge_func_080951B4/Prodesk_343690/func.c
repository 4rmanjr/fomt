#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
u32 func_080088D4(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08095580(void *);                            /* extern */
s32 func_0809800C(void *);                            /* extern */
s32 func_080983E8(void *);                            /* extern */
s32 func_0809A970(s32, ? *, s32);                     /* extern */
extern ? vtable_unk_080E5B80;

s32 func_080951B4(void *arg0) {
    s16 sp0;
    void *sp4;
s32 sp8;
    s16 sp18;
    s16 *var_r1_3;
    s32 temp_r1_2;
    s32 temp_r1_6;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_sb;
    s32 var_sl;
    u32 var_r7;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r1_3;
    u8 temp_r1_4;
    u8 temp_r5_2;
    u8 temp_r8;
    u8 var_r1;
    u8 var_r1_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_5;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r5;

    var_sb = 0;
    var_r7 = 0;
    func_08008724(arg0);
    temp_r4 = arg0 + 0x2E8;
    func_080073E0(temp_r4, temp_r4->unk4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    temp_r4_2 = arg0 + 0x308;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    func_0809800C(arg0);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4_3 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_3->unk0 = 0;
    temp_r4_3->unk4 = 0;
    temp_r4_3->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4_3 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4_3;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, sp4);
    func_08095580(arg0);
    var_sl = 0;
loop_1:
    func_080087C8(arg0);
    func_080088B8(arg0);
    switch (var_r7) {                               /* irregular */
    case 0:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            var_r7 = 1;
        }
        break;
    case 1:
        temp_r5_2 = arg0->unk366;
        temp_r8 = arg0->unk364;
        var_r4 = 0;
        if ((func_080088D4(arg0) & 0x10) || (1 & (func_080088D4(arg0) >> 8))) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            temp_r1_3 = arg0->unk366;
            if ((u32) temp_r1_3 < (u32) arg0->unk367) {
                temp_r0_3 = temp_r1_3 + 1;
                arg0->unk366 = temp_r0_3;
                var_r1 = temp_r0_3;
            } else {
                var_r1 = 0;
            }
            goto block_21;
        }
        var_r4_2 = 0;
        if ((func_080088D4(arg0) & 0x20) || (2 & (func_080088D4(arg0) >> 8))) {
            var_r4_2 = 1;
        }
        if (var_r4_2 != 0) {
            temp_r0_4 = arg0->unk366;
            if (temp_r0_4 != 0) {
                temp_r0_5 = temp_r0_4 - 1;
                arg0->unk366 = temp_r0_5;
                var_r1 = temp_r0_5;
            } else {
                var_r1 = arg0->unk367;
            }
block_21:
            arg0->unk366 = var_r1;
            var_r7 = 2;
        } else {
            if (func_080088D4(arg0) & 0x80) {
                temp_r1_4 = arg0->unk364;
                if ((u32) temp_r1_4 < (u32) arg0->unk365) {
                    temp_r0_6 = temp_r1_4 + 1;
                    arg0->unk364 = temp_r0_6;
                    var_r1_2 = temp_r0_6;
                } else {
                    var_r1_2 = 0;
                }
                goto block_30;
            }
            if (func_080088D4(arg0) & 0x40) {
                temp_r0_7 = arg0->unk364;
                if (temp_r0_7 != 0) {
                    temp_r0_8 = temp_r0_7 - 1;
                    arg0->unk364 = temp_r0_8;
                    var_r1_2 = temp_r0_8;
                } else {
                    var_r1_2 = arg0->unk365;
                }
block_30:
                arg0->unk364 = var_r1_2;
            }
        }
        if (temp_r5_2 != arg0->unk366) {
            func_08008B6C(arg0 + 0x94, 0xCA);
        } else if (temp_r8 != arg0->unk364) {
            func_08008B6C(arg0 + 0x94, 0xCB);
        }
        var_r4_3 = 0;
        if ((func_080088CC(arg0) & 1) || (func_080088CC(arg0) & 8)) {
            var_r4_3 = 1;
        }
        if (var_r4_3 != 0) {
            sp8.unk0 = 0;
            sp8.unk12 = (u16) (0xFFFFF000 & sp8.unk12);
            sp8.unk13 = (u8) (-0x11 & sp8.unk13);
            temp_r4_4 = arg0 + 0x94;
            var_r1_3 = &sp18;
            do {
                *var_r1_3 = 0;
                var_r1_3 -= 2;
            } while ((s32) var_r1_3 >= (s32) (&sp8 + 2));
            func_0809A970(arg0->unk8C + 0x2214, &sp8, (arg0->unk366 * 8) + arg0->unk364);
            if (0x10 & sp8.unk13) {
                func_08008B6C(temp_r4_4, 0xC5);
                temp_r1_5 = arg0 + 0x334;
                arg0->unk334 = (s32) sp8.unk0;
                temp_r1_5->unk4 = (s32) sp8.unk4;
                temp_r1_5->unk8 = (s32) sp8.unk8;
                temp_r1_5->unkC = (s32) sp8.unkC;
                (temp_r1_5 + 0xC)->unk4 = (s32) (&sp8 + 0xC)->unk4;
                var_sb = 1;
                var_r7 = 3;
            } else {
                func_08008B6C(temp_r4_4, 0xC7);
            }
        } else if (func_080088CC(arg0) & 2) {
            func_08008B6C(arg0 + 0x94, 0xC6);
            var_sb = -1;
            var_r7 = 3;
        }
        break;
    case 2:
        func_08095580(arg0);
        var_r7 = 1;
        break;
    case 3:
        func_08009378(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_9 = func_08008940(arg0);
        temp_r0_9->unk8->unk10(temp_r0_9, sp4);
        var_r7 = 4;
        break;
    case 4:
        temp_r1_6 = sp4->unk0;
        if ((s32) ((0 - temp_r1_6) | temp_r1_6) >= 0) {
            var_sl = 1;
        }
        break;
    }
    arg0->unk360 = 0x10;
    arg0->unk362 = (s16) ((arg0->unk364 * 0x10) + 0x28);
    func_080983E8(arg0);
    if (var_sl == 0) {
        goto loop_1;
    }
    temp_r4_5 = arg0 + 0x2E8;
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    temp_r4_5->unk4 = 0;
    temp_r4_6 = arg0 + 0x308;
    func_080073E0(temp_r4_6, temp_r4_6->unk4);
    temp_r4_6->unk4 = 0;
    if (sp4 != 0) {
        sp4->unk8->unkC(sp4, 3);
    }
    return var_sb;
}

