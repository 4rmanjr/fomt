# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D6AC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D6AC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D6AC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D6AC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D6AC/opencode/func.c" 2
s32 IsEmpty__C12RucksackItem(s32 *);
s32 __12RucksackItem(s32 *);
s32 func_0800E324(s32);
s32 func_080A1B38(s32 *, s32, u32, ? *, s32);
s32 func_080A1CBC(s32 *, s32, s32);
s32 func_080A1D20(s32, u32, ? *, s32);
s32 func_080A5F78(s32 *, s32, ? *, s32, s32);

s32 *func_0801D6AC(s32 *arg0, void *arg1, void *arg2) {
    s32 sp4;
    s32 sp8;
s32 spC;
s32 sp1C;
s32 sp24;
    s16 temp_r0_2;
    s16 temp_r1;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;

    temp_r0 = arg1->unk1038;
    temp_r6 = temp_r0 + 0x34C8;
    temp_sb = func_0800E324(temp_r0 + 0x10);
    temp_r1 = ((arg2->unk2 & 0x3FF) << 6) | ((u8) arg2->unk1 >> 2);
    temp_r0_2 = ((arg2->unk4 & 0x3FF) << 6) | ((u8) arg2->unk3 >> 2);
    sp1C.unk0 = temp_r1;
    sp1C.unk2 = temp_r0_2;
    sp1C.unk4 = (s16) (temp_r1 + 1);
    sp1C.unk6 = (s16) (temp_r0_2 + 1);
    temp_r8 = func_080A1D20(temp_r6, (u32) (arg2->unk0 << 0x16) >> 0x16, &sp1C, temp_sb);
    __12RucksackItem(&sp4);
    if (temp_r8 != -1) {
        func_080A1B38(&sp8, temp_r6, (u32) (arg2->unk0 << 0x16) >> 0x16, &sp1C, temp_sb);
        sp4 = sp8;
        if (((IsEmpty__C12RucksackItem(&sp4) << 0x18) == 0) && (((u32) (arg2->unk0 << 0x16) >> 0x16) == *arg1->unk4)) {
            func_080A1CBC(&spC, temp_r6, temp_r8);
            var_r0 = spC.unk8;
            if ((s32) var_r0 < 0) {
                var_r0 += 7;
            }
            var_r0_2 = spC.unkA;
            if ((s32) var_r0_2 < 0) {
                var_r0_2 += 7;
            }
            sp24.unk0 = (s16) (var_r0 >> 3);
            sp24.unk2 = (s16) (var_r0_2 >> 3);
            func_080A5F78(arg1->unk4, 1, &sp24, 2, 2);
        }
    }
    *arg0 = sp4;
    return arg0;
}
