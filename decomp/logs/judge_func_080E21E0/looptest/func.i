# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E21E0/looptest/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E21E0/looptest/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E21E0/looptest/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E21E0/looptest/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E21E0/looptest/func.c" 2
s32 func_080E2170(u8 *, s8 **);
s32 func_080E21A8(u8 *, s8 **);

void func_080E21E0(u8 *arg0, s8 **arg1) {
    u8 *temp_r1_2;
    u8 *temp_r1_3;
    u8 *var_r0;
    u8 *var_r2;
    u8 *var_r4;
    u8 var_r1;
    void *temp_r1;

    var_r4 = arg0;
    var_r4->unk0 = 0;
    if (var_r4 != *arg1) {
        var_r2 = var_r4->unk4;
        if (*var_r2 == 0) {
loop_3:
            temp_r1 = var_r2->unk4;
            var_r0 = temp_r1->unk8;
            if (var_r2 == var_r0) {
                var_r0 = temp_r1->unkC;
                if ((var_r0 == 0) || (var_r1 = *var_r0, (var_r1 != 0))) {
                    temp_r1_2 = var_r4->unk4;
                    if (var_r4 == temp_r1_2->unkC) {
                        var_r4 = temp_r1_2;
                        func_080E2170(var_r4, arg1);
                    }
                    var_r4->unk4->unk0 = 1;
                    *var_r4->unk4->unk4 = 0;
                    func_080E21A8(var_r4->unk4->unk4, arg1);
                } else {
                    goto block_11;
                }
            } else if ((var_r0 != 0) && (var_r1 = *var_r0, (var_r1 == 0))) {
block_11:
                var_r2->unk0 = 1;
                *var_r0 = 1;
                *var_r4->unk4->unk4 = var_r1;
                var_r4 = var_r4->unk4->unk4;
            } else {
                temp_r1_3 = var_r4->unk4;
                if (var_r4 == temp_r1_3->unk8) {
                    var_r4 = temp_r1_3;
                    func_080E21A8(var_r4, arg1);
                }
                var_r4->unk4->unk0 = 1;
                *var_r4->unk4->unk4 = 0;
                func_080E2170(var_r4->unk4->unk4, arg1);
            }
            if (var_r4 != *arg1) {
                var_r2 = var_r4->unk4;
                if (*var_r2 == 0) {
                    goto loop_3;
                }
            }
        }
    }
    **arg1 = 1;
}
