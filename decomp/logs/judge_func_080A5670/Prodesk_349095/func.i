# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5670/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5670/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5670/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5670/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5670/Prodesk_349095/func.c" 2
s32 func_080D0EBC(s32, s32, s32, s32);

s32 func_080A5670(void *arg0) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r6;
    s32 temp_sb;
    s32 var_r4;
    s32 var_r5;
    u32 var_r1;

    temp_sb = arg0->unk24 * 2;
    var_r1 = 0;
    do {
        temp_r2 = var_r1 * 8;
        temp_r0 = *(arg0 + 0xC + temp_r2);
        if (temp_r0 != 0) {
            var_r5 = temp_r0;
            var_r4 = *(arg0 + 0x10 + temp_r2);
            temp_r6 = var_r4 + 0x540;
            do {
                func_080D0EBC(var_r5, var_r4, 0x8000001F, 0x040000D4);
                var_r5 += temp_sb;
                var_r4 += 0x40;
            } while (var_r4 != temp_r6);
        }
        var_r1 += 1;
    } while (var_r1 <= 2U);
    return 0;
}
