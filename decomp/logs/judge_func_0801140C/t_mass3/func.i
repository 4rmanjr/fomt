# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801140C/t_mass3/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801140C/t_mass3/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801140C/t_mass3/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801140C/t_mass3/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801140C/t_mass3/func.c" 2
s32 GetValueShipped__C11ShippingBin(s32);
s32 ResetValueShipped__11ShippingBin(s32);
s32 func_0809ABD8(s32, s32);

typedef struct GenObj {
    u8 _pad0[13509];
    s32 unk34C5;
} GenObj;
u32 func_0801140C(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r7;

    temp_r7 = arg0 + 0x54;
    temp_r0 = GetValueShipped__C11ShippingBin(temp_r7);
    temp_r6 = arg0 + 0x1AA8;
    func_0809ABD8(temp_r6, temp_r0);
    if (arg0->unk34C5 != 0) {
        func_0809ABD8(temp_r6, temp_r0);
        arg0->unk34C5 = 0U;
    }
    ResetValueShipped__11ShippingBin(temp_r7);
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}
