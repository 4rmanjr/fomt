# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD69C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD69C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD69C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD69C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD69C/opencode/func.c" 2
void *GetMapData(s32);
s32 func_0803A8A4(u32, s32, s32, s32, s32);

void *func_080AD69C(void *arg0, void *arg1, u32 arg2) {
    s32 temp_r7;
    s32 var_r0_2;
    u16 temp_r6;
    u16 temp_r8;
    u16 var_r0;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    if (arg2 > 0x233U) {
        var_r0 = 0;
        arg0->unk0 = 0;
        arg0->unk4 = 0;
        arg0->unk8 = 0U;
        goto block_8;
    }
    temp_r0 = arg1->unk4;
    temp_r7 = temp_r0->unk0;
    if (temp_r7 == arg2) {
        var_r0_2 = temp_r0->unk4;
    } else {
        var_r0_2 = func_0803A8A4(arg2, 1, 0, 0, 0);
    }
    temp_r0_2 = GetMapData(var_r0_2);
    temp_r6 = temp_r0_2->unk20;
    temp_r8 = temp_r0_2->unk22;
    if (temp_r7 == arg2) {
        temp_r4 = arg1->unk4;
        GetMapData(temp_r4->unk4);
        arg0->unk0 = (s32) temp_r4->unk2C;
        arg0->unk4 = 0;
        arg0->unk8 = temp_r6;
        arg0->unkA = temp_r8;
    } else {
        arg0->unk0 = (s32) temp_r0_2->unk18;
        arg0->unk4 = (s32) temp_r0_2->unk1C;
        arg0->unk8 = temp_r6;
        var_r0 = temp_r8;
block_8:
        arg0->unkA = var_r0;
    }
    return arg0;
}
