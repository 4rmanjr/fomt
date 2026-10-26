# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008724/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008724/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008724/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008724/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008724/opencode/func.c" 2
void *func_08008AE0(void *);
s32 func_08008AF0(void *);
s32 func_080098AC(s32 *, s32);
extern ? vtable_unk_080E5AF0;

void func_08008724(void **arg0) {
    s32 sp0;
    s32 sp4;
    ? *sp8;
    s32 spC;
    void *temp_r0;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = *arg0;
    temp_r4->unk34 = (u16) (temp_r4->unk34 | 0x80);
    sp0 = 0;
    sp4 = 0;
    sp8 = &vtable_unk_080E5AF0;
    spC = temp_r4 + 0x34;
    temp_r4_2 = temp_r4 + 0x490;
    temp_r0 = func_08008AE0(temp_r4_2);
    temp_r0->unk8->unk10(temp_r0, &sp0);
    func_08008AF0(temp_r4_2);
    func_080098AC(&sp0, 2);
}
