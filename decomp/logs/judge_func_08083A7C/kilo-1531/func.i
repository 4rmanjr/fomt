# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08083A7C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08083A7C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08083A7C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08083A7C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08083A7C/kilo-1531/func.c" 2
s32 __builtin_new(s32);
s32 func_080821D0(s32, s32, u8, s32, s32, s32, s32);
extern ? vtable_unk_080E7D04;

void *func_08083A7C(void *arg0, s32 *arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    arg0->unk0 = &vtable_unk_080E7D04;
    arg0->unk4 = func_080821D0(__builtin_new(0x48E8), arg2, arg3, arg4, arg5, arg6, arg7);
    *arg1 = 0;
    arg0->unk8 = (s32) *arg1;
    arg0->unkC = arg4;
    arg0->unk10 = arg5;
    arg0->unk14 = arg6;
    arg0->unk18 = arg7;
    arg0->unk1C = arg2;
    return arg0;
}
