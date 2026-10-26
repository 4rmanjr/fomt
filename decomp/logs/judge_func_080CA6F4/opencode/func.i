# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA6F4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA6F4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA6F4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA6F4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA6F4/opencode/func.c" 2
void func_080CA6F4(void) {
    s32 var_r0;
    u8 temp_r0;

    temp_r0 = *(u8 *)0x04000006;
    switch (temp_r0) {
    case 0x17:
        if (!(2 & *(void *)0x04000004)) {
            do {

            } while (!(2 & *(void *)0x04000004));
        }
        *(void *)0x0400000C = 0x3E43;
        *(void *)0x04000004 = (u16) (0xFF & *(void *)0x04000004);
        var_r0 = 0x9F00;
block_8:
        *(void *)0x04000004 = (u16) (var_r0 | *(void *)0x04000004);
        return;
    case 0x9F:
        *(s16 *)0x0400000C = 0x3E41;
        *(u16 *)0x04000004 &= 0xFF;
        var_r0 = 0x1700;
        goto block_8;
    }
}
