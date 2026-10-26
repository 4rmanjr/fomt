# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2DC8/looptest/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2DC8/looptest/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2DC8/looptest/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2DC8/looptest/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2DC8/looptest/func.c" 2
s32 func_08007128(s32);
s32 func_08007874();
void *func_080D3BC0(s32);
void *malloc(s32);

s32 func_080E2DC8(s32 arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r0;
    void *var_r0_2;

    func_08007874();
    temp_r4 = arg0 + 4;
    temp_r4->unk4 = 0;
    var_r0 = malloc(0x18);
    if (var_r0 == 0) {
        var_r0 = func_080D3BC0(0x18);
    }
    temp_r4->unk4 = var_r0;
    temp_r4->unk8 = 0;
    temp_r4->unkC = 0;
    var_r0->unk0 = 0;
    var_r0->unk4 = 0;
    temp_r0 = temp_r4->unk4;
    temp_r0->unk8 = temp_r0;
    temp_r0_2 = temp_r4->unk4;
    temp_r0_2->unkC = temp_r0_2;
    func_08007128(arg0 + 0x14);
    temp_r4_2 = arg0 + 0x18;
    temp_r4_2->unk4 = 0;
    var_r0_2 = malloc(0x18);
    if (var_r0_2 == 0) {
        var_r0_2 = func_080D3BC0(0x18);
    }
    temp_r4_2->unk4 = var_r0_2;
    temp_r4_2->unk8 = 0;
    temp_r4_2->unkC = 0;
    var_r0_2->unk0 = 0;
    var_r0_2->unk4 = 0;
    temp_r0_3 = temp_r4_2->unk4;
    temp_r0_3->unk8 = temp_r0_3;
    temp_r0_4 = temp_r4_2->unk4;
    temp_r0_4->unkC = temp_r0_4;
    return arg0;
}
