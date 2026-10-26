# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0518/Prodesk_347511/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0518/Prodesk_347511/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0518/Prodesk_347511/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0518/Prodesk_347511/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0518/Prodesk_347511/func.c" 2
u32 GetFriendship__C3Npc();
s32 func_080A0030(s32, u32);

s32 func_080A0518(s32 arg0) {
    s32 var_r5;
    u32 temp_r0;
    u32 var_r4;

    var_r5 = 1;
    var_r4 = 1;
    do {
        temp_r0 = var_r4 - 0x17;
        switch (temp_r0) {
        case 0:
        case 3:
        case 7:
        case 9:
        case 12:
            break;
        default:
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 8:
        case 10:
        case 11:
            if ((func_080A0030(arg0, var_r4) != 0) && (GetFriendship__C3Npc() <= 0xF9U)) {
                var_r5 = 0;
            }
            break;
        }
        var_r4 += 1;
    } while (var_r4 <= 0x2AU);
    return var_r5;
}
