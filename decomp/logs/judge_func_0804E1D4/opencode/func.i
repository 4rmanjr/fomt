# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E1D4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E1D4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E1D4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E1D4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E1D4/opencode/func.c" 2
s32 GetAvailableSpaceFor__C5ShelfUi(s32, s32);
s32 GetEmptyItemSlotCount__C8Rucksack(s32);
s32 GetShelf__9FarmHouse(s32);
s32 func_0800F190(s32);

s32 func_0804E1D4(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (((func_0800F190(arg0->unk350 + 0x1C2C) << 0x18) != 0) || (GetEmptyItemSlotCount__C8Rucksack(arg0->unk350 + 0x1C38) != 0) || ((temp_r0 = GetShelf__9FarmHouse(arg0->unk350 + 0x1F4), (temp_r0 != 0)) && (GetAvailableSpaceFor__C5ShelfUi(temp_r0, arg1) != 0))) {
        return 1;
    }
    return 0;
}
