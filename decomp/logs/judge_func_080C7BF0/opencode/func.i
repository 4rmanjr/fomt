# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7BF0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7BF0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7BF0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7BF0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7BF0/opencode/func.c" 2
s32 func_080088C4();
s32 func_08008B6C(void *, s32);

void func_080C7BF0(void *arg0) {
    s32 temp_r1;
    s32 var_r8;
    s8 *var_r5;
    void *var_r0;
    void *var_r1;

    if (!(1 & func_080088C4())) {
        return;
    }
    temp_r1 = arg0->unk8BC;
    if (temp_r1 > 3) {
        return;
    }
    if (arg0->unk968 == 0) {
        return;
    }
    arg0->unk8C0 = temp_r1;
    arg0->unk96F = (u8) (arg0->unk96F + 1);
    var_r8 = 0;
    var_r5 = arg0 + 0x8C9;
    var_r1 = arg0 + 0x8C8;
loop_7:
    if (var_r1->unk0 != 0) {
        arg0->unk978 = (u8) (arg0->unk978 + 1);
        arg0->unk8BC = 9;
        arg0->unk8C4 = 1;
        arg0->unk969 = 1U;
        var_r0 = arg0 + 0x820;
        goto block_12;
    }
    if (var_r1->unk2 == (arg0->unk8B6 + (arg0->unk8B7 * 5))) {
        if (var_r1->unk1 != 0) {
            arg0->unk8BC = 9;
            arg0->unk8C4 = 1;
            arg0->unk978 = (u8) (arg0->unk978 + 1);
            arg0->unk969 = 1U;
            var_r0 = arg0 + 0x820;
block_12:
            func_08008B6C(var_r0, 0xC7);
        } else {
            *var_r5 = 1;
            if ((var_r8 == (arg0->unk96F - 1)) && (arg0->unk969 == 0)) {
                arg0->unk970 = (u8) (arg0->unk970 + 1);
            } else {
                arg0->unk969 = 1U;
            }
            arg0->unk8BC = 8;
            arg0->unk8C4 = 1;
            func_08008B6C(arg0 + 0x820, 0xBC);
            func_08008B6C(arg0 + 0x818, 0xBE);
            arg0->unk97F = (u8) (arg0->unk97F + 1);
        }
    } else {
        var_r5 += 4;
        var_r1 += 4;
        var_r8 += 1;
        if (var_r8 <= 0xE) {
            goto loop_7;
        }
    }
    if (var_r8 == 0xF) {
        arg0->unk978 = (u8) (arg0->unk978 + 1);
        arg0->unk8BC = 9;
        arg0->unk8C4 = 1;
        arg0->unk969 = 1U;
        func_08008B6C(arg0 + 0x820, 0xC7);
    }
}
