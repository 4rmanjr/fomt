# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009094/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009094/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009094/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009094/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009094/opencode/func.c" 2
s32 CpuFastSet(s32 *, s32, s32);
s32 CpuSet(s32 *, s32, s32);

void func_08009094(void *arg0, s32 arg1) {
    ? *sp0;
    s32 sp4;
    ? *var_r4;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_r3;
    void *var_r7;

    var_r7 = arg0;
    if (var_r7 != arg1) {
        do {
            var_r4 = var_r7->unk4;
            if (var_r7->unk0 == 1) {
                sp0 = var_r4;
                var_r4 = &sp0;
            }
            temp_r6 = var_r7->unkC;
            var_r3 = var_r7->unk8;
            if (0x04000000 & temp_r6) {
                temp_r5 = 0xFFFF & temp_r6;
                temp_r0 = 7 & temp_r5;
                temp_r5_2 = temp_r5 - temp_r0;
                if ((temp_r5_2 != 0) || (temp_r0 == 0)) {
                    sp4 = var_r3;
                    CpuFastSet(var_r4, var_r3, temp_r6 - temp_r0);
                    var_r3 += temp_r5_2 * 4;
                    if (!(0x01000000 & temp_r6)) {
                        var_r4 = &var_r4[temp_r5_2];
                    }
                    if (temp_r0 != 0) {
                        goto block_9;
                    }
                } else {
block_9:
                    CpuSet(var_r4, var_r3, temp_r6 - temp_r5_2);
                }
            } else {
                CpuSet(var_r4, var_r3, temp_r6);
            }
            var_r7 += 0x10;
        } while (var_r7 != arg1);
    }
}
