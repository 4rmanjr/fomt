# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1B38/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1B38/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1B38/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1B38/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1B38/kilo-1531/func.c" 2
s32 __12RucksackItem(s32 *);
s32 __12RucksackItemG4Food(s32 *, s32);
s32 __12RucksackItemG7Article(s32 *, u8);
s32 __4FoodUi(u8 *, s32);
s32 __7ArticleUi(u8 *, s32);
s32 func_080A1C94(?, s32, s32);
s32 func_080A1D20(?, s32, s32, s32);
extern ? gUnk_081043BC;

s32 *func_080A1B38(s32 *arg0, ? arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    u8 sp8;
    u8 spC;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    u32 temp_r0_3;

    __12RucksackItem(&sp0);
    temp_r0 = func_080A1D20(arg1, arg2, arg3, arg4);
    if (temp_r0 < 0) {

    } else {
        temp_r0_2 = *((temp_r0 * 0xC) + &gUnk_081043BC);
        if (temp_r0_2 > 0x12) {

        } else {
            if (temp_r0_2 <= 0xD) {
                var_r1 = 0x2A;
                switch (temp_r0_2) {
                case 0:
                    var_r1 = 0x2A;
                    break;
                case 1:
                    var_r1 = 0x2B;
                    break;
                case 2:
                    var_r1 = 0x2C;
                    break;
                case 3:
                    var_r1 = 0x2D;
                    break;
                case 4:
                    var_r1 = 0x2E;
                    break;
                case 5:
                    var_r1 = 0x2F;
                    break;
                case 6:
                    var_r1 = 0x30;
                    break;
                case 7:
                    var_r1 = 0x31;
                    break;
                case 8:
                    var_r1 = 0x32;
                    break;
                case 9:
                    var_r1 = 0x33;
                    break;
                case 10:
                    var_r1 = 0x34;
                    break;
                case 11:
                    var_r1 = 0x35;
                    break;
                case 12:
                    var_r1 = 0x37;
                    break;
                case 13:
                    var_r1 = 0x28;
                    break;
                }
                __4FoodUi(&sp8, var_r1);
                __12RucksackItemG4Food(&sp4, (sp0.unkA << 0x10) | ((sp0.unk9 << 8) | sp8));
            } else {
                var_r1_2 = 0;
                temp_r0_3 = temp_r0_2 - 0xE;
                switch (temp_r0_3) {
                case 0:
                    var_r1_2 = 0;
                    break;
                case 1:
                    var_r1_2 = 1;
                    break;
                case 2:
                    var_r1_2 = 2;
                    break;
                case 3:
                    var_r1_2 = 4;
                    break;
                case 4:
                    var_r1_2 = 0x32;
                    break;
                }
                __7ArticleUi(&spC, var_r1_2);
                __12RucksackItemG7Article(&sp4, spC);
            }
            sp0 = sp4;
            func_080A1C94(arg1, temp_r0, arg4);
        }
    }
    *arg0 = sp0;
    return arg0;
}
