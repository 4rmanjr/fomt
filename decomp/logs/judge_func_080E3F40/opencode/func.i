# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3F40/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3F40/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3F40/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3F40/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3F40/opencode/func.c" 2
s32 func_0804EC84(s8, ? *, s32);
s32 memcpy(s32 *, ? *, u32);
s32 strcpy(void *, ? *);
u32 strlen(s32 *);
extern ? gUnk_08104938;
extern ? gUnk_08104940;
extern ? gUnk_08104948;
extern ? gUnk_08104950;

s8 *func_080E3F40(s8 *arg0, void *arg1, s32 arg2) {
s32 sp0;
s32 sp8;
s32 sp20;
    ? *temp_r7;
    ? *var_r0;
    ? *var_r1;
    ? *var_r5;
    ? *var_r5_2;
    s8 temp_r5;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;

    switch (arg2) {
    case 0xF2:
        var_r5 = &sp8;
        temp_r7 = arg1->unk8;
        var_r4 = strlen(temp_r7);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        var_r0 = var_r5;
        var_r1 = temp_r7;
block_35:
        memcpy(var_r0, var_r1, var_r4);
        *(var_r5 + var_r4) = 0;
        *arg0 = 1;
        strcpy(arg0 + 4, var_r5);
        break;
    case 0xF0:
        temp_r5 = arg1->unk5;
        switch (temp_r5) {
        case 0:
            var_r4_2 = strlen(&gUnk_08104938);
            if (var_r4_2 > 0x1FU) {
                var_r4_2 = 0x1F;
            }
            memcpy(&sp0, &gUnk_08104938, var_r4_2);
            *(&sp0 + var_r4_2) = temp_r5;
            *arg0 = 1;
            strcpy(arg0 + 4);
            break;
        case 1:
            var_r4_3 = strlen(&gUnk_08104940);
            if (var_r4_3 > 0x1FU) {
                var_r4_3 = 0x1F;
            }
            memcpy(&sp0, &gUnk_08104940, var_r4_3);
            *(&sp0 + var_r4_3) = 0;
            *arg0 = temp_r5;
block_25:
            strcpy(arg0 + 4, &sp0);
            break;
        case 2:
            var_r5_2 = &gUnk_08104948;
block_22:
            var_r4_4 = strlen(var_r5_2);
            if (var_r4_4 > 0x1FU) {
                var_r4_4 = 0x1F;
            }
            memcpy(&sp0, var_r5_2, var_r4_4);
            *(&sp0 + var_r4_4) = 0;
            *arg0 = 1;
            goto block_25;
        case 3:
            var_r5_2 = &gUnk_08104950;
            goto block_22;
        }
        break;
    case 0xF1:
        if ((s32) arg1->unk4 <= 9) {
            sp0.unk0 = 0x81;
            sp0.unk1 = 0x40;
            func_0804EC84(arg1->unk4, &sp0 + 2, 0);
        } else {
            func_0804EC84(arg1->unk4, &sp0, 0);
        }
        var_r5 = &sp20;
        var_r4 = strlen(&sp0);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        var_r0 = var_r5;
        var_r1 = &sp0;
        goto block_35;
    default:
        sp0.unk0 = 0;
        *arg0 = 0;
        strcpy(arg0 + 4);
        break;
    }
    return arg0;
}
