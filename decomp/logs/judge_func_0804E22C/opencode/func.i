# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E22C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E22C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E22C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E22C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E22C/opencode/func.c" 2
s32 GetFirstSlotWithArticle__C8RucksackUi(s32, s32);
s32 GetFirstSlotWith__C5ShelfUi(s32, s32);
s32 GetId__C7Article(s8 *);
s32 GetShelf__9FarmHouse(s32);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
s8 func_0800F258(s32);

s32 func_0804E22C(void *arg0, s32 arg1) {
    s8 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_r1;

    temp_r4 = arg0->unk350 + 0x1C2C;
    if (((func_0800F190(temp_r4) << 0x18) == 0) && (func_0800F204(temp_r4) == 1)) {
        sp0 = func_0800F258(temp_r4);
        var_r1 = 0;
        if (GetId__C7Article(&sp0) == arg1) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            goto block_5;
        }
        goto block_8;
    }
block_5:
    temp_r0 = GetFirstSlotWithArticle__C8RucksackUi(arg0->unk350 + 0x1C38, arg1);
    if ((temp_r0 != -1) || ((temp_r0_2 = GetShelf__9FarmHouse(arg0->unk350 + 0x1F4), (temp_r0_2 != 0)) && (GetFirstSlotWith__C5ShelfUi(temp_r0_2, arg1) != temp_r0))) {
block_8:
        return 1;
    }
    return 0;
}
