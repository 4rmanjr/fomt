# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BA2C4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BA2C4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BA2C4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BA2C4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BA2C4/opencode/func.c" 2
s32 func_080088DC(void *);
s32 func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08050D34(s32);
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
s32 func_08050D8C(s32, ? *);
s32 func_08050DD8(s32);
s32 func_08050DE4(s32);
s32 func_08050DF0(s32);
s32 func_08050E30(s32, ? *, ? *, ? *, s32, s32, s32);
s32 func_080B5318(void *);
s32 func_080BA574(void *, u8);
extern ? gUnk_08107A68;
extern ? gUnk_08107A80;
extern ? gUnk_08107A9C;
extern ? gUnk_08107AB4;
extern ? gUnk_08107B00;
extern ? gUnk_08107B14;
extern ? gUnk_08107B1C;

s32 func_080BA2C4(void *arg0, s32 arg1) {
    s32 spC;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_sl;
    u32 temp_r0;
    u8 temp_r0_2;

    var_sl = arg1;
    temp_r6 = func_08050D34(arg0->unk718);
    spC = arg0->unk718;
    temp_r8 = func_080088DC(arg0);
    temp_sb = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(spC, temp_r8, temp_sb, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x708);
    switch (temp_r0) {
    case 0:
        if (arg0->unkB34 != 0) {
            arg0->unkB14 = 2;
        } else if ((arg0->unkB3C == 3) && ((u32) arg0->unkB3B <= 0xB3U)) {

        } else {
            func_08050D5C(arg0->unk718);
        }
        break;
    case 3:
        if (temp_r6 <= 5) {
            if (temp_r6 < 4) {
                if (temp_r6 != 1) {
                    goto block_14;
                }
                if ((arg0->unkB3C == 4) && ((s32) arg0->unk84 > 0)) {
                    func_08050DD8(arg0->unk718);
                }
                if ((arg0->unkB3C == 5) && (arg0->unk84 == 0)) {
                    func_08050DD8(arg0->unk718);
                }
                func_080BA574(arg0, arg0->unkB3C);
            } else {
                temp_r0_2 = arg0->unkB3C + 1;
                arg0->unkB3C = temp_r0_2;
                if (temp_r0_2 == 6) {
                    func_08050E30(arg0->unk718, &gUnk_08107B00, &gUnk_08107B14, &gUnk_08107B1C, 0, 0, 0);
                }
            }
        } else if (temp_r6 != 6) {
block_14:
            func_08050D74(arg0->unk718);
        } else {
            temp_r0_3 = func_08050DF0(arg0->unk718);
            switch (temp_r0_3) {
            case 1:
                temp_r0_4 = arg0->unkB18;
                switch (temp_r0_4) {
                case 0:
                    func_08050D8C(arg0->unk718, &gUnk_08107A68);
                    break;
                case 1:
                    func_08050D8C(arg0->unk718, &gUnk_08107A80);
                    break;
                case 2:
                    func_08050D8C(arg0->unk718, &gUnk_08107A9C);
                    break;
                }
                func_08050DD8(arg0->unk718);
                var_sl = 0;
                break;
            case 2:
                arg0->unkB3C = 1U;
                arg0->unkB33 = 1;
                break;
            }
        }

    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
        if (var_sl <= 0x77) {
            var_sl += 1;
        }
        if (var_sl == 0x78) {
            arg0->unkB50 = 1;
            var_sl = 0x7A;
            func_08050DE4(arg0->unk718);
            func_08050D8C(arg0->unk718, &gUnk_08107AB4);
            func_08050DD8(arg0->unk718);
        }
        if ((u32) (var_sl - 0x7A) <= 0x59U) {
            var_sl += 1;
        }
        if (var_sl == 0xD4) {
            arg0->unkB50 = 0;
            var_sl = 0x79;
            func_08050DE4(arg0->unk718);
            func_08050D74(arg0->unk718);
            arg0->unkB33 = 0;
            arg0->unkB34 = 1U;
        }
        break;
    }
    func_080B5318(arg0);
    return var_sl;
}
