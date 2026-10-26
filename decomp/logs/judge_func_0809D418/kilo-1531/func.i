# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D418/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D418/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D418/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D418/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809D418/kilo-1531/func.c" 2
s32 func_0809D418(u32 arg1) {
    s32 var_r0;
    u32 var_r2;
    u32 var_r2_2;

    var_r0 = 0;
    if (arg1 != 0) {
        if (arg1 <= 9U) {
            return 1;
        }
        if (arg1 <= 0x63U) {
            var_r0 = 2;
            var_r2 = 0x14;
            if (arg1 >= 0x14U) {
loop_5:
                var_r0 += 1;
                var_r2 += 0x14;
                if (var_r2 <= 0x63U) {
                    if (arg1 < var_r2) {
                        return var_r0;
                    }
                    goto loop_5;
                }

                return var_r0;
            }

            return var_r0;
        }
        if (arg1 == 0x64) {
            return 7;
        }
        if (arg1 <= 0xF9U) {
            var_r0 = 8;
            var_r2_2 = 0x82;
            if (arg1 >= 0x82U) {
loop_12:
                var_r0 += 1;
                var_r2_2 += 0x1E;
                if (var_r2_2 <= 0xF9U) {
                    if (arg1 < var_r2_2) {
                        return var_r0;
                    }
                    goto loop_12;
                }

                return var_r0;
            }

            return var_r0;
        }
        var_r0 = 0xE;
        if (arg1 <= 0xFEU) {
            var_r0 = 0xD;
        }

        return var_r0;
    }
    return var_r0;
}
