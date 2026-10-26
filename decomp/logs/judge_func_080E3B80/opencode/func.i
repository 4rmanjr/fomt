# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3B80/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3B80/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3B80/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3B80/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3B80/opencode/func.c" 2
void *GetName__C4Food(s32 *);
void *GetName__C7Article(s32 *);
s32 __4FoodUi(s32 *, s32);
s32 __7ArticleUi(s32 *, s32);
s32 memcpy(s8 *, void *, u32);
s32 strcpy(void *, s8 *);
u32 strlen(void *);
extern ? gUnk_08100AD2;
extern ? gUnk_08100BD7;

s8 *func_080E3B80(s8 *arg0, void *arg1, s32 arg2) {
    s8 sp0;
s32 sp20;
s32 sp24;
    u16 temp_r0;
    u32 var_r4;
    void *var_r0;
    void *var_r5;

    switch (arg2) {
    case 0xF0:
        var_r5 = (arg1->unk6 * 0x1D) + &gUnk_08100AD2;
        var_r0 = var_r5;
block_12:
        var_r4 = strlen(var_r0);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        memcpy(&sp0, var_r5, var_r4);
        (&sp0)[var_r4] = 0;
        *arg0 = 1;
        strcpy(arg0 + 4, &sp0);
        break;
    case 0xF1:
        var_r5 = (arg1->unk7 * 0x1D) + &gUnk_08100BD7;
        var_r0 = var_r5;
        goto block_12;
    case 0xFF:
        temp_r0 = arg1->unk4;
        if ((u32) temp_r0 <= 0xABU) {
            __4FoodUi(&sp20, temp_r0 - 1);
            var_r0 = GetName__C4Food(&sp20);
        } else {
            __7ArticleUi(&sp24, arg1->unk4 - 0xAC);
            var_r0 = GetName__C7Article(&sp24);
        }
        var_r5 = var_r0;
        goto block_12;
    default:
        sp0 = 0;
        *arg0 = 0;
        strcpy(arg0 + 4);
        break;
    }
    return arg0;
}
