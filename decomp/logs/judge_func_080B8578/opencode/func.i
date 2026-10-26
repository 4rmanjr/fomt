# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8578/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8578/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8578/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8578/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8578/opencode/func.c" 2
s16 *func_08008918(void *);
s32 func_080B8DF4(void *, s32);
s32 rand();

void func_080B8578(void *arg0) {
    s16 sp0;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s32 temp_r0_10;
    s32 temp_r2;
    s8 *var_r1;
    u32 var_r0;
    u32 var_r1_2;
    u8 var_r5;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r3;

    temp_r0 = func_08008918();
    sp0 = 0x1E40;
    *temp_r0 = 0x1E40;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1F45;
    temp_r0_2->unkA = 0x1F45;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x1E43;
    temp_r0_3->unkC = 0x1E43;
    temp_r0_4 = func_08008918(arg0);
    sp0 = 0x1D46;
    temp_r0_4->unkE = 0x1D46;
    var_r5 = 0;
    do {
        temp_r2 = var_r5 << 6;
        temp_r3 = arg0 + temp_r2;
        temp_r3->unk98 = 0;
        temp_r0_5 = (temp_r3 + 0x98) - 0x10;
        temp_r0_5->unk0 = 0;
        temp_r0_6 = temp_r0_5 + 1;
        temp_r0_5->unk1 = 0;
        temp_r0_6->unk10 = 0;
        (temp_r0_6 + 0x10)->unk1 = 0;
        temp_r3->unk8A = 0x7800;
        temp_r3->unk8C = (s16) ((var_r5 * 0x1800) + 0x3A00);
        temp_r3->unk8F = (u8) arg0->unkB5E;
        temp_r3->unk9B = 0;
        *(arg0 + 0x6C + temp_r2) = 2;
        *(arg0 + 0x70 + temp_r2) = 2;
        temp_r3->unk9D = 1;
        *(arg0 + 0x7C + temp_r2) = 3;
        *(arg0 + 0x80 + temp_r2) = 0;
        temp_r0_7 = temp_r3 + 0x90;
        temp_r3->unk90 = 0;
        temp_r0_7->unkC = 1;
        temp_r0_8 = (temp_r0_7 + 0xC) - 0xB;
        temp_r0_8->unk0 = 0;
        temp_r0_8->unk1 = 0;
        temp_r3->unk93 = (u8) arg0->unkB5B;
        temp_r0_9 = temp_r3 + 0x94;
        temp_r3->unk94 = 2;
        temp_r0_9->unk1 = 1;
        (temp_r0_9 + 1)->unk16 = 0;
        var_r5 += 1;
    } while ((u32) var_r5 <= 1U);
    arg0->unk74 = 2;
    arg0->unk78 = 3;
    arg0->unkB4 = 0;
    (arg0 + 0xB4)->unk4 = 1;
    func_080B8DF4(arg0, 0);
    func_080B8DF4(arg0, 1);
    arg0->unkB44 = 1;
    arg0->unkB40 = 1;
    arg0->unkB50 = 0;
    temp_r0_10 = arg0->unkB18;
    switch (temp_r0_10) {
    case 0:
        if (arg0->unkB2C == 0) {
            var_r0 = (u32) (0x56 * (0xFFFF & rand())) >> 0x10;
            var_r1 = arg0 + 0xCE;
block_17:
            *var_r1 = (s8) var_r0;
        } else {
            var_r1_2 = (u32) (0xFFFF & rand()) >> 9;
block_15:
            arg0->unkCE = (s8) var_r1_2;
        }
        break;
    case 1:
        if (arg0->unkB2C == 0) {
            var_r0 = (u32) (0xAB * (0xFFFF & rand())) >> 0x10;
            var_r1 = arg0 + 0xCE;
            goto block_17;
        }
block_14:
        var_r1_2 = (u32) (0xFFFF & rand()) >> 8;
        goto block_15;
    case 2:
        if (arg0->unkB2C == 0) {
            goto block_14;
        }
        var_r1 = arg0 + 0xCE;
        var_r0 = ((u32) (0x55 * (0xFFFF & rand())) >> 0x10) + 0xAB;
        goto block_17;
    }
    arg0->unk8E = (u8) arg0->unkB2D;
    arg0->unkB3A = 0;
}
