# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024BFC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024BFC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024BFC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024BFC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024BFC/opencode/func.c" 2
s32 func_0803240C(s32 *, void *);

void *func_08024BFC(void *arg0, void *arg1) {
    s32 sp0;
    s32 sp8;
    s16 temp_r1;
    s16 temp_r2;
    s32 var_r0;
    s32 var_r1;

    if ((arg1->unk14->unk40(arg1) << 0x18) != 0) {
        temp_r1 = arg1->unkA;
        temp_r2 = arg1->unkE;
        sp0.unk0 = (s16) (temp_r1 - 7);
        sp0.unk2 = (s16) (temp_r2 - 9);
        sp0.unk4 = (s16) (temp_r1 + 7);
        sp0.unk6 = (s16) (temp_r2 + 5);
        var_r0 = sp0;
        var_r1 = sp4;
    } else {
        func_0803240C(&sp8, arg1);
        var_r0 = sp8;
        var_r1 = spC;
    }
    arg0->unk0 = var_r0;
    arg0->unk4 = var_r1;
    return arg0;
}
