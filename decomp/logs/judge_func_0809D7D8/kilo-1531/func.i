# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D7D8/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D7D8/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D7D8/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D7D8/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D7D8/kilo-1531/func.c" 2
u32 func_0809D7D8(u32 arg1) {
    u32 var_r0;

    var_r0 = arg1;
    if (var_r0 != 0x78) {
        if (var_r0 <= 0x78U) {
            switch (var_r0) {
            case 0x46:
            case 0x5A:
            case 0x1E:
                return 0x1EU;
            case 0x50:
            case 0x28:
            case 0x3C:
                return 0x1FU;
            }
        } else {
            switch (var_r0) {
            case 0xFF:
                return 0x37U;
            case 0xC8:
            case 0x96:
            case 0x64:
            case 0x32:
                return 0x20U;
            case 0xAA:
            case 0xBE:
            case 0x82:
            case 0x6E:
                return 0x2AU;
            }
        }
    } else {
    case 0xB4:
    case 0x8C:
    case 0xA0:
        return 0x2BU;
    }
# 48 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D7D8/kilo-1531/func.c"
    var_r0 = (var_r0 % 10U) + 0x2B;

    return var_r0;
}
