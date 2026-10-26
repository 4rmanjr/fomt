#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088C4(void *);                          /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_080516F0(void *);                            /* extern */
s32 func_08051D70(void *);                            /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[2];
    s32 unk16;
    u8 _pad1A[54];
    s32 unk50;
    u8 _pad54[2148];
    s32 unk8B8;
    s32 unk8BC;
} GenObj;
s32 *func_08051504(s32 *arg0, GenObj *arg1) {
    u16 sp0;
    GenObj *sp4;
    void **sp8;
    void ***spC;
    s32 temp_r0_3;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 var_r4;
    s32 var_r7;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r1_3;
    u8 temp_r4_2;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r1;
    GenObj *temp_r4;

    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    func_08009300((GenObj *)((u8 *)temp_r4 + 0xC), temp_r1);
    sp4 = temp_r4;
    func_080516F0(arg1);
    func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    arg1->unk8BC = 0;
    var_r7 = 0;
loop_1:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unk8BC;
    switch (temp_r0_3) {                            /* irregular */
    case 0:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
            arg1->unk8BC = 1;
        }
        break;
    case 1:
        temp_r4_2 = func_080088C4(arg1) & 0x80;
        if (temp_r4_2 != 0) {
            temp_r0_4 = arg1->unk8B8 + 4;
            arg1->unk8B8 = temp_r0_4;
            if ((s32) (s16) temp_r0_4 > 0x20) {
                arg1->unk8B8 = 0x20U;
            }
        } else if (func_080088C4(arg1) & 0x40) {
            temp_r0_5 = arg1->unk8B8 - 4;
            arg1->unk8B8 = temp_r0_5;
            if ((s32) (temp_r0_5 << 0x10) < 0) {
                arg1->unk8B8 = (u16) temp_r4_2;
            }
        }
        var_r4 = 0;
        if ((func_080088CC(arg1) & 2) || (func_080088CC(arg1) & 8)) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            func_08008B6C((GenObj *)((u8 *)arg1 + 0xC), 0xC6);
            arg1->unk8BC = 2;
        }
        temp_r0_6 = func_08008918(arg1);
        temp_r1_3 = arg1->unk8B8;
        sp0 = temp_r1_3;
        temp_r0_6->unk16 = temp_r1_3;
        break;
    case 2:
        func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
        temp_r0_7 = func_08008940(arg1);
        ((void (*)(void *,...))(temp_r0_7->unk8->unk10))(temp_r0_7, sp4);
        arg1->unk8BC = 3;
        break;
    case 3:
        temp_r1_4 = sp4->unk0;
        if ((s32) ((0 - temp_r1_4) | temp_r1_4) >= 0) {
            var_r7 = 1;
        }
        break;
    }
    func_08051D70(arg1);
    if (var_r7 == 0) {
        goto loop_1;
    }
    sp8 = 0;
    spC = &sp8;
    spC.unk4 = 0;
    sp8 = 0;
    *arg0 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        ((void (*)(void *,...))(sp4->unk8->unkC))(sp4, 3);
    }
    return arg0;
}

