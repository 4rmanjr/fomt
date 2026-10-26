# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800FF8C/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800FF8C/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800FF8C/common.h" 1
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h"
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/limits.h" 1
# 32 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 2



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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800FF8C/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800FF8C/func.c" 2
void func_0800FF8C(s32 *arg0) {
    s32 *temp_r4;

    arg0[0] = 0;
    temp_r4 = (s32 *)((s8 *)arg0 + 0x24);
    *(u16 *)((s8 *)arg0 + 0x24) = (u16) ((0xFFFFFC00 & *(u16 *)((s8 *)arg0 + 0x24)) | 0x234);
    *((u8 *)temp_r4 + 1) = (u8) (3 & *((u8 *)temp_r4 + 1));
    *(u16 *)((s8 *)temp_r4 + 2) = (u16) (0xFFFFFC00 & *(u16 *)((s8 *)temp_r4 + 2));
    *((u8 *)temp_r4 + 3) = (u8) (3 & *((u8 *)temp_r4 + 3));
    *(u16 *)((s8 *)temp_r4 + 4) = (u16) (0xFFFFFC00 & *(u16 *)((s8 *)temp_r4 + 4));
}
