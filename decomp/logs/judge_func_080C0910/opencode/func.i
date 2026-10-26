# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C0910/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C0910/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C0910/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C0910/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C0910/opencode/func.c" 2
s32 func_08008B6C(void *, s32);

void func_080C0910(void *arg0) {
    u8 temp_r0;

    temp_r0 = arg0->unk5FA;
    switch (temp_r0) {
    case 19:
        if (arg0->unk5AC == 3) {
            arg0->unk60A = 0U;
            return;
        }
        arg0->unk60A = 1U;
        return;
    case 20:
        arg0->unk5F9 = 0;
        arg0->unk5F8 = 0;
        arg0->unk5FA = 0U;
        arg0->unk609 = 0;
        if (arg0->unk60A == 0) {
            arg0->unk5FF = (u8) (arg0->unk5FF + 1);
            func_08008B6C(arg0 + 0x580, 0xC7);
        } else {
            arg0->unk5FE = (u8) (arg0->unk5FE + 1);
            func_08008B6C(arg0 + 0x580, 0xBC);
        }
        arg0->unk5AC = 0;
        arg0->unk60E = 1;
        arg0->unk5A4 = 1;
        return;
    }
}
