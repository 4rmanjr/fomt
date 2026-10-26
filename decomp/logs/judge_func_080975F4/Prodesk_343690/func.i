# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080975F4/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080975F4/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080975F4/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080975F4/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080975F4/Prodesk_343690/func.c" 2
s32 AddBonuses__4FoodScSc(s32 *, s8, s8);
s32 GetFoodStackAt__6FridgeUi(s32, s32);
s32 GetFridge__9FarmHouse(s32);
s32 *GetItemAt__8RucksackUi(s32);
s32 IsEmpty__C12RucksackItem(void *);
s32 SubtractAmount__9FoodStackUi(s32, s32);
s32 __12RucksackItem(s32 *);
s32 __4FoodUi(s32 *, s32);
s32 __7ArticleUi(u8 *, s32);
s32 func_0800F3B0(s32, s32);
s32 func_0800F3E8(s32, u8);
s16 func_08096FB4(void *, void *);
u16 func_080977A0(void *, s32, ? *);
u16 func_08097800(void *, ? *);
s32 memcpy(u8 *, s32 *, s32);

s16 func_080975F4(void *arg0) {
s32 sp0;
    s32 sp14;
    u8 sp18;
    u8 sp1C;
    s16 *var_r1;
    s16 temp_r1;
    s16 temp_r2;
    s16 var_r0;
    s32 *temp_r4;
    s32 temp_r5;
    s32 temp_sb;
    s32 var_r8;
    u16 temp_r0;
    u16 temp_r0_2;
    void *var_r6;

    arg0->unk348 = func_080977A0(arg0, arg0 + 0x348, &sp0);
    temp_sb = GetFridge__9FarmHouse(arg0->unk8C + 0x1F4);
    var_r6 = arg0 + 0x2BB0;
    var_r8 = 7;
    do {
        if ((IsEmpty__C12RucksackItem(var_r6) << 0x18) == 0) {
            temp_r1 = func_08096FB4(arg0, var_r6);
            if (temp_r1 != -1) {
                if ((s32) temp_r1 <= 7) {
                    temp_r4 = GetItemAt__8RucksackUi(arg0->unk8C + 0x1C38);
                    __12RucksackItem(&sp14);
                    *temp_r4 = sp14;
                } else {
                    SubtractAmount__9FoodStackUi(GetFoodStackAt__6FridgeUi(temp_sb, temp_r1 - 8), 1);
                }
            }
        }
        var_r6 += 4;
        var_r8 -= 1;
    } while (var_r8 >= 0);
    temp_r0_2 = arg0->unk348;
    if ((u32) temp_r0_2 <= 0xABU) {
        __4FoodUi(&sp14, temp_r0_2 - 1);
        AddBonuses__4FoodScSc(&sp14, (s8) sp0.unk2, sp0.unk4);
        temp_r5 = arg0->unk8C + 0x1C2C;
        memcpy(&sp18, &sp14, 3);
        func_0800F3B0(temp_r5, (sp0.unk1A << 0x10) | ((sp0.unk19 << 8) | sp18));
    } else {
        __7ArticleUi(&sp1C, arg0->unk348 - 0xAC);
        func_0800F3E8(arg0->unk8C + 0x1C2C, sp1C);
    }
    temp_r0 = func_08097800(arg0, &sp0);
    temp_r2 = (s16) temp_r0;
    if (temp_r2 != 0) {
        arg0->unk33DC = (u16) arg0->unk348;
    }
    switch (temp_r2) {
    case 0:
        var_r1 = arg0 + 0x33D4;
        var_r0 = 3;
block_23:
        *var_r1 = var_r0;
        break;
    case 1:
        var_r1 = arg0 + 0x33D4;
        var_r0 = 4;
        goto block_23;
    case 2:
        var_r1 = arg0 + 0x33D4;
        var_r0 = 5;
        goto block_23;
    case 3:
        var_r1 = arg0 + 0x33D4;
        var_r0 = 6;
        goto block_23;
    }
    arg0->unk33D2 = 0;
    return (s16) temp_r0;
}
