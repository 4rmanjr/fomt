# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DDE8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DDE8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DDE8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DDE8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DDE8/opencode/func.c" 2
s32 func_0803D52C(s32 *, void *);
s32 func_0803D644(u8, u8);

s32 func_0803DDE8(void *arg0) {
s32 sp0;
    u8 temp_r0;
    u8 temp_r4;
    u8 temp_r6;
    u8 temp_r7;

    if (((s32) (arg0->unk21CA << 0x19) < 0) || (func_0803D52C(&sp0, arg0 + 0x10), temp_r6 = sp0.unk0, temp_r7 = sp0.unk1, temp_r0 = sp0.unk2, temp_r4 = sp0.unk3, (((u32) (arg0->unk2181 << 0x1A) >> 0x1E) == 2)) || (((s32) (arg0->unk2175 << 0x1B) >= 0) && (((u32) temp_r6 > 1U) || ((temp_r6 == 1) && (temp_r7 == 3) && ((u32) temp_r0 > 0x1CU))))) {
        return 0;
    }
    if (((u32) (arg0->unk2181 << 0x1E) >> 0x1E) == 1) {
        return 5;
    }
    if ((func_0803D644(temp_r7, temp_r0) << 0x18) != 0) {
        return 4;
    }
    if ((temp_r6 == 1) && (temp_r7 == 2) && (temp_r0 == 0xF) && ((s32) (arg0->unk2175 << 0x1B) < 0)) {
        goto block_16;
    }
    if ((arg0->unk2174 & 0x61000) == 0x41000) {
        if (temp_r4 == 6) {
            return 3;
        }
block_16:
        return 2;
    }
    return 1;
}
