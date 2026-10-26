# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006ED8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006ED8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006ED8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006ED8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006ED8/opencode/func.c" 2
s32 func_080088DC(void *);
s32 func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08050D34(s32);
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
u8 func_08050DF0(s32);
s32 func_08050E30(s32, ? *, ? *, ? *, s32, s32, s32);
s32 strcpy(void *, void *);
extern ? gUnk_080E8C2C;
extern ? gUnk_080E8C44;
extern ? gUnk_080E8C48;

void func_08006ED8(void *arg0, ? arg3) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;
    u32 temp_r0;
    u8 temp_r0_2;

    if (arg0->unk463C == 0) {
        return;
    }
    temp_r6 = func_08050D34(arg0->unk45F8);
    temp_sb = arg0->unk45F8;
    temp_r8 = func_080088DC(arg0);
    temp_sl = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_sl, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x45F0);
    switch (temp_r0) {
    case 0:
        if (arg0->unk4638 != 0) {
            arg0->unk463C = 0;
            arg0->unk4638 = 0U;
        }
        if (arg0->unk4639 != 0) {
            arg0->unk4639 = 0U;
            arg0->unk4636 = 1;
            strcpy(arg0 + 0x461C, arg0 + 0x4629);
        }
        func_08050D5C(arg0->unk45F8);
        return;
    case 3:
        switch (temp_r6) {
        default:
            func_08050D74(arg0->unk45F8);
            return;
        case 1:
            if (arg0->unk463C == 1) {
                func_08050E30(arg0->unk45F8, &gUnk_080E8C2C, &gUnk_080E8C44, &gUnk_080E8C48, 0, 0, 0);
                return;
            }
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
            return;
        case 6:
            temp_r0_2 = func_08050DF0(arg0->unk45F8);
            switch (temp_r0_2) {
            case 1:
                arg0->unk4639 = temp_r0_2;
                return;
            case 2:
                arg0->unk4638 = 1U;
                break;
            }
            break;
        }
        break;
    }
}
