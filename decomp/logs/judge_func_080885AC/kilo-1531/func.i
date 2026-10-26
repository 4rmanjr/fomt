# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080885AC/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080885AC/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080885AC/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080885AC/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080885AC/kilo-1531/func.c" 2
? *GetDesc__C4Food(s32 *);
s32 GetFoodStackAt__6FridgeUi(s32, s32);
s32 GetFood__C9FoodStack(s32 *, s32);
s32 *GetItemAt__8RucksackUi(s32, s32);
s32 IsEmpty__C12RucksackItem(s32 *);
s32 IsEmpty__C9FoodStack();
s32 func_0800F190(s32);
s32 func_08050DC8(void *, ? *, s32, s32);
s32 func_080CE184(void *, s32, s32);
? *func_080CF67C(void *, s32, s32);
? *func_080CFA38(void *, s32);
extern ? gUnk_08100030;

void func_080885AC(void *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    ? *var_r0;
    ? *var_r7;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;

    var_r7 = 0;
    temp_r6 = arg0 + 0x98;
    arg0->unk98 = 0;
    if (arg1 == 0) {
        if ((func_0800F190(arg0->unkFC) << 0x18) == 0) {
            var_r0 = func_080CF67C(arg0, temp_r6, arg0->unkFC);
            goto block_8;
        }
    } else if (arg1 <= 8) {
        temp_r4 = arg0->unk100;
        sp0 = *GetItemAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
        if ((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) {
            sp4 = sp0;
            var_r0 = func_080CFA38(arg0, temp_r6);
            goto block_8;
        }
    } else {
        temp_r4_2 = arg0->unk94->unkBC;
        temp_r6_2 = (temp_r4_2 * 8) + func_080CE184(arg0, arg1, 0);
        GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r6_2);
        if ((IsEmpty__C9FoodStack() << 0x18) == 0) {
            GetFood__C9FoodStack(&sp0, GetFoodStackAt__6FridgeUi(arg0->unk104, temp_r6_2));
            var_r0 = GetDesc__C4Food(&sp0);
block_8:
            var_r7 = var_r0;
        }
    }
    if (var_r7 != 0) {
        func_08050DC8(arg0 + 0x80, var_r7, 0, 0);
        return;
    }
    func_08050DC8(arg0 + 0x80, &gUnk_08100030, 0, 0);
}
