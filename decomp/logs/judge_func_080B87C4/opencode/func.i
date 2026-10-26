# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B87C4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B87C4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B87C4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B87C4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B87C4/opencode/func.c" 2
s32 func_080088DC(void *);
s16 *func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08008EB8(s32, s32, s32);
s32 func_08050D3C(s32, s32, s32, s16 *, s32, s32, s32);

void func_080B87C4(void *arg0) {
    s16 spC;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r6;
    s32 temp_r5;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;

    temp_r0 = func_08008918();
    spC = 0x1F40;
    *temp_r0 = 0x1F40;
    temp_r0_2 = func_08008918(arg0);
    spC = 0x1F45;
    temp_r0_2->unkA = 0x1F45;
    temp_r0_3 = func_08008918(arg0);
    spC = 0x1E43;
    temp_r0_3->unkC = 0x1E43;
    temp_r0_4 = func_08008918(arg0);
    spC = 0x1D46;
    temp_r0_4->unkE = 0x1D46;
    func_08008EB8(0, 0x0600BFE0, 0x20);
    temp_sl = arg0->unk718;
    temp_sb = func_080088DC(arg0);
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r5 = func_08008940(arg0);
    func_08050D3C(temp_sl, temp_sb, temp_r8, temp_r6, temp_r5, func_0800894C(arg0), 0);
    arg0->unkDD = 1;
    arg0->unk9D = 1;
}
