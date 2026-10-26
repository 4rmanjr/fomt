# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BCFAC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BCFAC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BCFAC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BCFAC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BCFAC/opencode/func.c" 2
s32 Unpack(s32 *, s32);
s16 *func_08008918(?);
s32 func_08008E64(s32 *, s32, s32);
s32 func_08008EB8(s32, s32, s32);
extern ? gUnk_0873BE24;
extern ? gUnk_0873BF48;
extern ? gUnk_0873BFF0;
extern ? gUnk_0873CBF4;

void func_080BCFAC(s32 arg0) {
    s16 sp0;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;

    func_08008EB8(-1, 0x0600F000, 0x800);
    func_08008EB8(-1, 0x0600F800, 0x800);
    Unpack(&gUnk_0873BE24, 0x0600F800);
    Unpack(&gUnk_0873BF48, 0x0600F000);
    Unpack(&gUnk_0873BFF0, 0x06000000);
    func_08008E64(&gUnk_0873CBF4, 0x05000000, 0x200);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x1640;
    *temp_r0 = 0x1640;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1E41;
    temp_r0_2->unkA = 0x1E41;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x1F42;
    temp_r0_3->unkC = 0x1F42;
}
