# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ED64/t_mass1/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ED64/t_mass1/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ED64/t_mass1/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ED64/t_mass1/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ED64/t_mass1/func.c" 2
typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
    s32 unk15;
} GenObj;
void func_0809ED64(GenObj *arg0) {
    s32 var_r1;
    u32 temp_r0;

    temp_r0 = ((u32) (arg0->unk14 << 0x1A) >> 0x1A) - 4;
    switch (temp_r0) {
    case 0:
        var_r1 = 2;
block_8:
        arg0->unk15 = (u8) (arg0->unk15 | var_r1);
        break;
    case 5:
        var_r1 = 4;
        goto block_8;
    case 10:
        var_r1 = 8;
        goto block_8;
    case 15:
        var_r1 = 0x10;
        goto block_8;
    case 20:
        var_r1 = 0x20;
        goto block_8;
    case 25:
        var_r1 = 0x40;
        goto block_8;
    }
    arg0->unk14 = (u8) (-0x40 & arg0->unk14);
}
