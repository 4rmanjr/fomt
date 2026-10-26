# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096EE8/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096EE8/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096EE8/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096EE8/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096EE8/Prodesk_343690/func.c" 2
u8 GetAmount__C9FoodStack(s32 *);
s32 *GetFoodStackAt__6FridgeUi(s32, s32);
s32 GetFood__C9FoodStack(u8 *, s32 *);
s32 GetFridge__9FarmHouse(s32);
s32 *GetItemAt__8RucksackUi(s32, s32);
s32 IsEmpty__C9FoodStack(s32 *);
s32 __12RucksackItem(s32 *);
s32 __12RucksackItemG4Food(s32 *, s32);

u8 func_08096EE8(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    u8 sp8;
    s32 var_r0;
    u8 var_r8;

    var_r8 = 0;
    if (arg2 == 0) {
        if (arg3 < (s32) arg0->unk2BA0) {
            *arg1 = *GetItemAt__8RucksackUi(arg0->unk8C + 0x1C38, arg3);
            var_r8 = 1;
        } else {
            __12RucksackItem(&sp0);
            var_r0 = sp0;
            goto block_7;
        }
    } else {
        sp0 = *GetFoodStackAt__6FridgeUi(GetFridge__9FarmHouse(arg0->unk8C + 0x1F4), ((arg2 - 1) * 8) + arg3);
        if ((IsEmpty__C9FoodStack(&sp0) << 0x18) == 0) {
            GetFood__C9FoodStack(&sp8, &sp0);
            __12RucksackItemG4Food(&sp4, (sp0.unkA << 0x10) | ((sp0.unk9 << 8) | sp8));
            *arg1 = sp4;
            var_r8 = GetAmount__C9FoodStack(&sp0);
        } else {
            __12RucksackItem(&sp4);
            var_r0 = sp4;
block_7:
            *arg1 = var_r0;
        }
    }
    return var_r8;
}
