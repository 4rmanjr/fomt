# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E7DC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E7DC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E7DC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E7DC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E7DC/opencode/func.c" 2
s32 CpuFastSet(s32 *, s32, s32);

void func_0804E7DC(u16 arg0, s32 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5, s32 arg6) {
    s32 sp0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r5;
    u16 temp_r2_2;
    u32 temp_r0;
    u32 temp_r1_4;
    u32 temp_r4;
    u32 var_ip;
    u32 var_r6;
    u32 var_r6_2;

    var_ip = arg4;
    var_r6 = arg5;
    temp_r1 = arg6 & 0xF;
    temp_r1_2 = temp_r1 | (temp_r1 * 0x10);
    temp_r1_3 = temp_r1_2 | (temp_r1_2 << 8);
    temp_r2 = (temp_r1_3 << 0x10) | temp_r1_3;
    temp_r2_2 = arg0;
    temp_r0 = arg0 >> 0x10;
    temp_r1_4 = temp_r2_2 * 8;
    temp_r4 = temp_r0 * 8;
    if ((arg2 == 0) && (arg3 == 0) && (var_ip >= temp_r1_4) && (var_r6 >= temp_r4)) {
        sp0 = temp_r2;
        CpuFastSet(&sp0, arg1, (((u32) ((temp_r0 << 5) * temp_r2_2) >> 2) & 0x1FFFFF) | 0x01000000);
        return;
    }
    if ((arg2 < (u32) temp_r2_2) && (arg3 < temp_r0)) {
        if ((u32) (arg2 + var_ip) >= temp_r1_4) {
            var_ip = temp_r1_4 - arg2;
        }
        if ((u32) (arg3 + var_r6) >= temp_r4) {
            var_r6 = temp_r4 - arg3;
        }
        var_r1 = 0;
        if (!(arg2 & 7)) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r1_2 = 0;
            if (!(arg3 & 7)) {
                var_r1_2 = 1;
            }
            if (var_r1_2 != 0) {
                var_r1_3 = 0;
                if (!(var_ip & 7)) {
                    var_r1_3 = 1;
                }
                if (var_r1_3 != 0) {
                    var_r1_4 = 0;
                    if (!(var_r6 & 7)) {
                        var_r1_4 = 1;
                    }
                    if (var_r1_4 != 0) {
                        var_r6_2 = var_r6 >> 3;
                        var_r5 = arg1 + (((temp_r2_2 * (arg3 >> 3)) + (arg2 >> 3)) << 5);
                        do {
                            sp0 = temp_r2;
                            CpuFastSet(&sp0, var_r5, 0x01000000 | (0x3FFFFFF8 & var_ip & 0x1FFFFF));
                            var_r5 += temp_r2_2 << 5;
                            var_r6_2 -= 1;
                        } while (var_r6_2 != 0);
                    }
                }
            }
        }
    }
}
