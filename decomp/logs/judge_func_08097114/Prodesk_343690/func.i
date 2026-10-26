# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097114/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097114/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097114/Prodesk_343690/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097114/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097114/Prodesk_343690/func.c" 2
s8 GetArticle__C12RucksackItem(s32 *);
s32 GetFood__C12RucksackItem(s32 *, s32 *);
s32 GetId__C4Food(s32 *);
s32 GetId__C7Article();
s32 GetKind__C12RucksackItem(s32 *);
s32 IsEmpty__C12RucksackItem(s32 *);
s32 __12RucksackItem(s32 *);
s32 func_08096EE8(void *, s32 *, s32, s32);
s32 func_080CBA60(s32, s32);

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
