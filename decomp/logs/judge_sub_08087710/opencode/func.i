# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08087710/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08087710/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08087710/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08087710/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08087710/opencode/func.c" 2
s32 func_080088CC(void *);
s32 func_08050E50(void *, s32);
s32 func_080C96C4(void *);
s32 func_080CABA0(void *, ? *);
s32 sub_08086DFA();
extern ? gUnk_080FFE50;
extern ? gUnk_080FFE88;

void sub_08087710(void) {
    if (func_080088CC(saved_reg_r7) & 2) {
        if (saved_reg_r7->unk6A8 != 0) {
            func_080CABA0(saved_reg_r7, &gUnk_080FFE50);
        } else {
            func_080CABA0(saved_reg_r7, &gUnk_080FFE88);
        }
        func_08050E50(saved_reg_r7 + 0x348, 0xB4);
        saved_reg_r7->unk6A4 = 0xB;
    }
    func_080C96C4(saved_reg_r7);
    sub_08086DFA();
}
