#include "common.h"
s8 GetArticle__C12RucksackItem(s32);                /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32);               /* extern */
u16 GetIconId__C4Food(s32 *);                         /* extern */
u16 GetIconId__C7Article(s8 *);                     /* extern */
s32 GetId__C4Food(s32 *);                             /* extern */
s32 GetId__C7Article(s8 *);                         /* extern */
s32 GetKind__C12RucksackItem(s32);                  /* extern */
s32 IsWrapped__C12RucksackItem(s32);                /* extern */
s32 __12RucksackItemG4Food(s32 *, s32);                 /* extern */
s32 __4FoodUi(u8 *, s32);                             /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_08011458(s32);                               /* extern */
s32 func_080A1484(s32, void *, s32);                  /* extern */
s32 func_080A45A8(void *);                          /* extern */
void *func_080A4A00(s32, s32, u16, void *);         /* extern */
s32 func_080AC5D0(s32 *, s16, s16);                   /* extern */

s32 func_0801EE00(void *arg0, void *arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
s32 spC;
s32 sp10;
s32 sp14;
    u8 sp18;
    s32 sp1C;
    s8 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s8 *sp34;
    s32 *sp38;
    s32 *var_r4;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r2;
    s32 temp_r5;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r5;
    s32 var_r6;
    u16 var_r0_2;
    u16 var_r5_2;
    void *temp_r0;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r6;
    void *temp_r8;

    arg0->unk0->unk34(&spC, arg0, (u32) (arg1->unk0 << 0x16) >> 0x16);
    sp2C = (s32) (u8) (func_080AC5D0(&spC, (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)), (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2))) ^ 1);
    sp30 = 0;
    var_r6 = 1;
    sp38 = &sp0 + 0x28;
    sp34 = (s8 *) (&sp0 + 8);
    if (sp2C != 0) {

    } else {
        temp_r0 = arg0->unk0->unk14C(arg0);
        var_r4 = temp_r0->unk0;
        temp_r5 = temp_r0->unk4;
        if (var_r4 != temp_r5) {
loop_3:
            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                var_r4 += 4;
                if (var_r4 == temp_r5) {
                    goto block_5;
                }
                goto loop_3;
            }
            var_r0 = *var_r4;
        } else {
block_5:
            var_r0 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0, 0x6D);
        temp_r0_2 = func_080A45A8(arg1);
        switch (temp_r0_2) {                        /* irregular */
        case 4:
            if (GetKind__C12RucksackItem(arg2) == 0) {
                GetFood__C12RucksackItem(&spC, arg2);
                if (GetId__C4Food(&spC) == 0xA0) {
                    func_08011458(arg0->unk1038);
                }
            }
            break;
        case 6:
            var_r5 = 0;
            if (GetKind__C12RucksackItem(arg2) == 0) {
                GetFood__C12RucksackItem(&spC, arg2);
                if (GetId__C4Food(&spC) > 0xE) {
                    GetFood__C12RucksackItem(&sp10, arg2);
                    if (GetId__C4Food(&sp10) <= 0x14) {
                        var_r5 = 1;
                    }
                }
            }
            if (var_r5 != 0) {
                temp_r6 = arg0->unk8;
                temp_r8 = temp_r6->unk14;
                __4FoodUi(&sp18, 0x15);
                __12RucksackItemG4Food(&sp14, (sp0.unk1A << 0x10) | ((sp0.unk19 << 8) | sp18));
                temp_r8->unk5C(temp_r6, &sp14, 0);
block_27:
                var_r6 = 0;
            }
            break;
        case 2:
            sp30 = 0x23B;
            goto block_27;
        case 0:
            if (GetKind__C12RucksackItem(arg2) == 0) {
                GetFood__C12RucksackItem(&spC, arg2);
                if (GetId__C4Food(&spC) == 2) {
                    sp30 = 0x23C;
                    goto block_27;
                }
            }
            break;
        }
    }
    if (sp30 != 0) {
        sp1C = sp30;
        sp1C.unk4 = 0;
        arg0->unk0->unk140(arg0);
    }
    if (var_r6 != 0) {
        temp_r2 = arg0->unk1038;
        func_080A1484(temp_r2 + 0x1CD4, arg1, temp_r2 + 0x214C);
    }
    if ((IsWrapped__C12RucksackItem(arg2) << 0x18) == 0) {
        temp_r0_3 = GetKind__C12RucksackItem(arg2);
        if ((temp_r0_3 == 0) || (temp_r0_3 != 1)) {
            GetFood__C12RucksackItem(&spC, arg2);
            var_r0_2 = GetIconId__C4Food(&spC);
            goto block_38;
        }
        sp24 = GetArticle__C12RucksackItem(arg2);
        if (GetId__C7Article(&sp24) != 0x1B) {
            var_r0_2 = GetIconId__C7Article(&sp24);
block_38:
            var_r5_2 = var_r0_2;
        } else {
            var_r5_2 = 3;
            if ((s32) ((u32) (arg1->unk0 << 0x16) >> 0x16) <= 8) {
                var_r5_2 = 4;
            }
        }
    } else {
        var_r5_2 = 0x160;
    }
    sp28 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2));
    sp38->unk2 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2));
    temp_r4 = arg0 + 0x102C;
    temp_r6_2 = arg0->unk0->unk64(arg0);
    temp_r4->unk4 = sp28;
    temp_r1 = arg0->unk102C;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk24->unk8(temp_r1, 3);
    }
    arg0->unk102C = 0;
    temp_r4->unk8 = (u8) sp2C;
    if (sp2C != 0) {
        temp_r0_4 = __builtin_new(0x40);
        sp0 = 2;
        sp4 = 3;
        *sp34 = 0;
        temp_r0_5 = func_080A4A00(temp_r0_4, temp_r6_2, var_r5_2, arg0);
        temp_r1_2 = arg0->unk102C;
        if ((temp_r0_5 != temp_r1_2) && (temp_r1_2 != 0)) {
            temp_r1_2->unk24->unk8(temp_r1_2, 3);
        }
        arg0->unk102C = temp_r0_5;
        temp_r4->unk9 = 0x10;
        temp_r4->unkA = 0;
        return 0x10;
    }
    temp_r0_6 = __builtin_new(0x40);
    sp0 = 2;
    sp4 = 3;
    *sp34 = (s8) sp2C;
    temp_r0_7 = func_080A4A00(temp_r0_6, temp_r6_2, 0x1A9U, arg0);
    temp_r1_3 = arg0->unk102C;
    if ((temp_r0_7 != temp_r1_3) && (temp_r1_3 != 0)) {
        temp_r1_3->unk24->unk8(temp_r1_3, 3);
    }
    arg0->unk102C = temp_r0_7;
    return 0;
}

