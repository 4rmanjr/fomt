# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/t_struct7/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/t_struct7/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/t_struct7/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/t_struct7/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/t_struct7/func.c" 2
s32 func_08008920(void *);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[120];
    s32 unk80;
} GenObj;
void func_08003DF0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r1;
    void *temp_r0;

    sp0 = arg2;
    sp4 = arg3;
    temp_r2 = (arg2 & 0xFFFFFF00) | (u8) (sp0.unk0 + 8 + (((arg1 * 2) + 1) * 8));
    sp0 = temp_r2;
    var_r1 = ((u32) (temp_r2 << 7) >> 0x17) + 0x80;
    if (*((u8 *)arg0 + 0x84 + arg1) != 0) {
        var_r1 += 0x40;
    }
    temp_r1 = (0xFE00FFFF & temp_r2) | ((var_r1 & 0x1FF) << 0x10);
    sp0 = temp_r1;
    if ((arg1 == 1) && (arg0->unk80 != 1)) {
        sp0 = (0xFFFFFCFF & temp_r1) | 0x200;
    }
    temp_r0 = func_08008920(arg0) + (((0x7F & arg1) * 8) + 4);
    temp_r0->unk0 = sp0;
    temp_r0->unk4 = (u16) sp0.unk4;
}
