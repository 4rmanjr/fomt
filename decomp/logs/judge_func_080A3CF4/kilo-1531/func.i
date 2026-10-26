# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3CF4/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3CF4/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3CF4/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3CF4/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3CF4/kilo-1531/func.c" 2
s32 GetChicken__4CoopUi(s32, u8);
s32 GetCow__4BarnUi(s32, u8);
s32 GetHorse__4Farm(s32);
s32 GetSheep__4BarnUi(s32, u8);
s32 SetName__6AnimalPCc(s32, s32);
s32 func_08007078(s32 *, ? *, s32);
s32 func_080070A4(s32 *, s32);
s32 func_080070D4(void ***, ? *);
s32 func_08007110(s32 *);
s32 func_0800E9A8(s32, s32);
s32 func_0809EB20(s32, s32);
s32 func_080A0A04(s32);
extern ? gUnk_08104E0C;
extern ? gUnk_08104E14;
extern ? gUnk_08104E1C;
extern ? gUnk_08104E24;
extern ? gUnk_08104E30;
extern ? gUnk_08104E38;

s32 *func_080A3CF4(s32 *arg0, void *arg1) {
s32 sp0;
    void **sp8;
    ? *var_r1;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r0 = arg1->unkC;
    switch (temp_r0) {
    case 0:
        var_r1 = &gUnk_08104E0C;
block_9:
        func_08007078(&sp0, var_r1, 0);
        func_080070D4(&sp8, &sp0);
        if (sp8 != 0) {
            (*sp8)->unk8(sp8, 3);
        }
        temp_r0_2 = arg1->unkC;
        switch (temp_r0_2) {
        case 0:
            var_r0 = GetHorse__4Farm(arg1->unk8 + 0x14);
block_17:
            if (var_r0 != 0) {
                SetName__6AnimalPCc(var_r0, func_08007110(&sp0));
            }
block_23:
            temp_r1 = arg1->unk4;
            arg1->unk4 = 0;
            *arg0 = temp_r1;
            func_080070A4(&sp0, 2);
            break;
        case 1:
            var_r0 = GetCow__4BarnUi(arg1->unk8 + 0x5F0, arg1->unk10);
            goto block_17;
        case 2:
            var_r0 = GetSheep__4BarnUi(arg1->unk8 + 0x5F0, arg1->unk10);
            goto block_17;
        case 3:
            var_r0 = GetChicken__4CoopUi(arg1->unk8 + 0x410, arg1->unk10);
            goto block_17;
        case 4:
            temp_r0_3 = func_080A0A04(arg1->unk8 + 0x1CD4);
            if (temp_r0_3 != 0) {
                func_0809EB20(temp_r0_3, func_08007110(&sp0));
            }
            goto block_23;
        case 5:
            temp_r4 = arg1->unk8 + 0x1BD8;
            func_0800E9A8(temp_r4, func_08007110(&sp0));
            goto block_23;
        default:
            temp_r1_2 = arg1->unk4;
            arg1->unk4 = 0;
            *arg0 = temp_r1_2;
            func_080070A4(&sp0, 2);
            break;
        }
        break;
    case 1:
        var_r1 = &gUnk_08104E14;
        goto block_9;
    case 2:
        var_r1 = &gUnk_08104E1C;
        goto block_9;
    case 3:
        var_r1 = &gUnk_08104E24;
        goto block_9;
    case 4:
        var_r1 = &gUnk_08104E30;
        goto block_9;
    case 5:
        var_r1 = &gUnk_08104E38;
        goto block_9;
    default:
        temp_r0_4 = arg1->unk4;
        arg1->unk4 = 0;
        *arg0 = temp_r0_4;
        break;
    }
    return arg0;
}
