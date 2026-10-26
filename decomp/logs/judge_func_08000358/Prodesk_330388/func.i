# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000358/Prodesk_330388/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000358/Prodesk_330388/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000358/Prodesk_330388/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000358/Prodesk_330388/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000358/Prodesk_330388/func.c" 2
s32 func_080006A4(s32, s32, s32 *, s32);
extern u16 gUnk_03000400;
extern s32 gUnk_080E862C;

void func_08000358(s32 arg0) {
    s32 sp0;

    func_080006A4(arg0, 0, &gUnk_080E862C, 0x20);
    if (gUnk_03000400 == 0) {
        sp0 = gUnk_03000400;
        func_080006A4(arg0, 0x20, &sp0, 4);
        if (gUnk_03000400 == 0) {
            func_080006A4(arg0, 0x24, &sp0, 4);
        }
    }
}
