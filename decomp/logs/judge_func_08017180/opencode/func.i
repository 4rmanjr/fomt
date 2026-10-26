# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08017180/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08017180/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08017180/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08017180/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08017180/opencode/func.c" 2
void func_08017180(s32 arg0, u32 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 *var_r4;
    s32 *var_r5;
    s32 temp_r0;
    u32 var_r0;
    u32 var_r1;
    u8 *var_r2;
    u8 temp_r4;
    u8 temp_r7;

    if ((arg0 != 0) && (arg1 != 0)) {
        var_r2 = arg2->unk14;
        if (var_r2 != 0) {
            temp_r0 = arg2->unk10;
            if (temp_r0 != 0) {
                temp_r7 = arg2->unk0;
                if ((u32) (arg3 + temp_r7) <= arg1) {
                    var_r5 = arg0 + (arg3 * 4) + (arg1 * arg4 * 4);
                    temp_r4 = arg2->unk1;
                    var_r0 = 0;
                    if ((u32) temp_r4 > 0U) {
                        do {
                            var_r1 = 0;
                            if ((u32) temp_r7 > 0U) {
                                var_r4 = var_r5;
                                do {
                                    *var_r4 = *((*var_r2 * 4) + temp_r0);
                                    var_r4 += 4;
                                    var_r2 += 1;
                                    var_r1 += 1;
                                } while (var_r1 < (u32) temp_r7);
                            }
                            var_r5 += arg1 * 4;
                            var_r0 += 1;
                        } while (var_r0 < (u32) temp_r4);
                    }
                }
            }
        }
    }
}
