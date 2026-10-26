# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096FB4/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096FB4/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096FB4/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096FB4/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096FB4/Prodesk_343690/func.c" 2
s8 GetArticle__C12RucksackItem(s32 *);
s32 GetFood__C12RucksackItem(s32 *, ? *);
s32 GetId__C4Food(s32 *);
s32 GetId__C7Article();
s32 GetKind__C12RucksackItem(s32 *);
s32 IsEmpty__C12RucksackItem(s32 *);
s32 __12RucksackItem(s32 *);
s32 func_08096EE8(void *, ? *, s32, u16);

s16 func_08096FB4(void *arg0, ? *arg1) {
s32 sp0;
s32 sp4;
    s8 sp8;
    s16 var_sb;
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_4;
    s32 var_r1;
    s32 var_r6;
    u16 temp_r7;
    u16 var_r0_3;
    u16 var_r0_5;
    u16 var_r5;
    u8 *temp_r2;

    __12RucksackItem(&sp0);
    var_sb = -1;
    temp_r0 = GetKind__C12RucksackItem(arg1);
    if (temp_r0 == 0) {
        GetFood__C12RucksackItem(&sp4, arg1);
        var_r0 = GetId__C4Food(&sp4);
    } else {
        sp8 = GetArticle__C12RucksackItem(arg1);
        var_r0 = GetId__C7Article();
    }
    var_r5 = 0;
    do {
        func_08096EE8(arg0, &sp0, 0, var_r5);
        if (((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) && (GetKind__C12RucksackItem(&sp0) == temp_r0)) {
            if (temp_r0 == 0) {
                GetFood__C12RucksackItem(&sp4, &sp0);
                var_r0_2 = GetId__C4Food(&sp4);
            } else {
                sp0.unk9 = GetArticle__C12RucksackItem(&sp0);
                var_r0_2 = GetId__C7Article();
            }
            if (var_r0_2 == var_r0) {
                arg0->unk2BA7 = (u8) ((1 << var_r5) | arg0->unk2BA7);
                if (var_sb == -1) {
                    var_r0_3 = var_r5;
                } else {
                    var_r0_3 = (u16) var_sb;
                }
                var_sb = (s16) var_r0_3;
            }
        }
        var_r5 += 1;
    } while ((s32) var_r5 <= 7);
    if (temp_r0 == 0) {
        var_r6 = 8;
        do {
            var_r0_4 = var_r6;
            if (var_r6 < 0) {
                var_r0_4 = var_r6 + 7;
            }
            temp_r5 = var_r0_4 >> 3;
            temp_r7 = var_r6 - (temp_r5 * 8);
            func_08096EE8(arg0, &sp0, temp_r5, temp_r7);
            if ((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) {
                GetFood__C12RucksackItem(&sp4, &sp0);
                var_r1 = 0;
                if (var_r0 == GetId__C4Food(&sp4)) {
                    var_r1 = 1;
                }
                if (var_r1 != 0) {
                    temp_r2 = arg0 + 0x2BA7 + temp_r5;
                    *temp_r2 |= 1 << temp_r7;
                    if (var_sb == -1) {
                        var_r0_5 = (u16) var_r6;
                    } else {
                        var_r0_5 = (u16) var_sb;
                    }
                    var_sb = (s16) var_r0_5;
                }
            }
            var_r6 += 1;
        } while (var_r6 <= 0x47);
    }
    return var_sb;
}
