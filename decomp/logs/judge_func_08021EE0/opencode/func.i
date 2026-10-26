# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021EE0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021EE0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021EE0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021EE0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021EE0/opencode/func.c" 2
s8 GetGrowthStage__C5Horse(s32);
s32 SetHasPlayedToday__3Pet(s32);
s32 func_08022048(void *, s32, u8);
s32 func_080220D4(void *);
s32 method_0809BC24__5HorsePC15UnkBarnAnimal2C(s32, s32 *);

void func_08021EE0(void *arg0) {
    s32 sp0;
    s8 temp_r0;

    temp_r0 = GetGrowthStage__C5Horse(arg0->unk34);
    if (temp_r0 == 1) {
        sp0 = ((sp0 & 0xFFFF0000) | 0x78) & 0xFF00FFFF;
        method_0809BC24__5HorsePC15UnkBarnAnimal2C(arg0->unk34, &sp0);
        func_08022048(arg0, func_080220D4(arg0), arg0->unk20);
        arg0->unk3E = temp_r0;
        SetHasPlayedToday__3Pet(arg0->unk34);
    }
}
