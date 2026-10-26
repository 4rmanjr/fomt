# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0704/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0704/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0704/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0704/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0704/opencode/func.c" 2
s32 func_080D078C(s32 *);
s32 func_080D091C();
s32 func_080D0A14();
s32 func_080D0A54(s32);
extern void *gUnk_03000420;

void func_080D0704(void) {
    s32 sp0;
    s32 var_r5;
    u16 temp_r0;

    var_r5 = 0;
    temp_r0 = *(u16 *)0x04000140;
    if (gUnk_03000420->unk17C == 0) {
        if (2 & temp_r0) {
            sp0 = *(s32 *)0x04000150;
            var_r5 = func_080D078C(&sp0);
        }
        if ((var_r5 == 0) && (4 & temp_r0)) {
            var_r5 = func_080D091C();
        }
        if (1 & temp_r0) {
            func_080D0A14();
        }
    }
    if (var_r5 != 0) {
        *(s16 *)0x04000158 = 0;
        func_080D0A54(var_r5);
    }
    *(void *)0x04000140 = temp_r0;
    gUnk_03000420->unkC = 0;
    gUnk_03000420->unk10 = 0;
}
