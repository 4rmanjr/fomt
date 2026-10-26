#include "common.h"
s8 GetArticle__C12RucksackItem(s32 *);              /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32 *);             /* extern */
s32 GetId__C4Food(s32 *);                             /* extern */
s32 GetId__C7Article();                             /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 func_08096EE8(void *, s32 *, s32, s32);           /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */

void func_08097114(void *arg0, s32 *arg1) {
    s32 sp0;
s32 sp4;
    s32 sp8;
    s8 spC;
    s32 *var_r4_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r1;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    u8 *temp_r2;

    __12RucksackItem(&sp0);
    temp_r0 = GetKind__C12RucksackItem(arg1);
    if (temp_r0 == 0) {
        GetFood__C12RucksackItem(&sp4, arg1);
        var_r0 = GetId__C4Food(&sp4);
    } else {
        spC = GetArticle__C12RucksackItem(arg1);
        var_r0 = GetId__C7Article();
    }
    var_r4 = 0;
    do {
        func_08096EE8(arg0, &sp0, 0, var_r4);
        if (((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) && (GetKind__C12RucksackItem(&sp0) == temp_r0)) {
            if (temp_r0 == 0) {
                GetFood__C12RucksackItem(&sp4, &sp0);
                var_r0_2 = GetId__C4Food(&sp4);
            } else {
                sp0.unkD = GetArticle__C12RucksackItem(&sp0);
                var_r0_2 = GetId__C7Article();
            }
            if (var_r0_2 == var_r0) {
                arg0->unk2BA7 = (u8) (arg0->unk2BA7 & ~(1 << var_r4));
            }
        }
        var_r4 += 1;
    } while (var_r4 <= 7);
    if (temp_r0 == 0) {
        var_r5 = 8;
        do {
            var_r0_3 = var_r5;
            if (var_r5 < 0) {
                var_r0_3 = var_r5 + 7;
            }
            temp_r4 = var_r0_3 >> 3;
            temp_r6 = var_r5 - (temp_r4 * 8);
            func_08096EE8(arg0, &sp0, temp_r4, temp_r6);
            if ((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) {
                GetFood__C12RucksackItem(&sp4, &sp0);
                var_r1 = 0;
                if (var_r0 == GetId__C4Food(&sp4)) {
                    var_r1 = 1;
                }
                if (var_r1 != 0) {
                    temp_r2 = arg0 + 0x2BA7 + temp_r4;
                    *temp_r2 &= ~(1 << temp_r6);
                }
            }
            var_r5 += 1;
        } while (var_r5 <= 0x47);
    }
    var_r5_2 = 0;
    var_r4_2 = arg0 + 0x2BB0;
    do {
        sp0 = *var_r4_2;
        if (((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) && (GetKind__C12RucksackItem(&sp0) == temp_r0)) {
            if (temp_r0 == 0) {
                GetFood__C12RucksackItem(&sp4, &sp0);
                var_r0_4 = GetId__C4Food(&sp4);
            } else {
                sp0.unkE = GetArticle__C12RucksackItem(&sp0);
                var_r0_4 = GetId__C7Article();
            }
            if (var_r0_4 == var_r0) {
                __12RucksackItem(&sp8);
                *var_r4_2 = sp8;
                func_080CBA60(arg0->unk78, var_r5_2);
            }
        }
        var_r4_2 += 4;
        var_r5_2 += 1;
    } while (var_r5_2 <= 7);
}

