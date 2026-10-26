# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CB948/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CB948/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CB948/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CB948/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CB948/opencode/func.c" 2
s32 func_080CAD10(s32, u32);
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32);
s32 func_080CAEEC(s32, u32, s32, s32, s32, s32);
extern ? gUnk_08117860;

void func_080CB948(s32 arg0, s32 arg1, u32 arg2) {
    s32 spC;

    func_080CAD10((arg1 * 0xC) + arg0 + 0x218, arg2);
    spC = *((arg1 * 4) + &gUnk_08117860);
    func_080CAE60(arg0, (spC.unk1 << 6) + ((spC.unk0 * 2) + 0x0600F080), 0x54, 2, 1, 0, 0x20);
    if (arg2 > 1U) {
        func_080CAEEC(arg0, arg2, (spC.unk1 << 6) + ((spC.unk0 * 2) + 0x0600F082), 0x20, 0, 0x20);
    }
}
