# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003E88/t_structA/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003E88/t_structA/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003E88/t_structA/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003E88/t_structA/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003E88/t_structA/func.c" 2
void *func_08008920(s32);

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
    s32 unk38;
} GenObj;
void func_08003E88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_r2;
    s32 var_r4;
    void *temp_r0;

    var_r4 = arg1;
    if (var_r4 == 1) {
        var_r4 = 0;
    }
    sp0 = arg2;
    sp4 = arg3;
    temp_r2 = (arg2 & 0xFFFFFF00) | (u8) (sp0 + 8 + (((var_r4 * 2) + 1) * 8));
    sp0 = (0xFE00FFFF & temp_r2) | (((((u32) (temp_r2 << 7) >> 0x17) + 0x10) & 0x1FF) << 0x10);
    temp_r0 = func_08008920(arg0);
    temp_r0->unk34 = sp0;
    temp_r0->unk38 = (u16) sp0.unk4;
}
