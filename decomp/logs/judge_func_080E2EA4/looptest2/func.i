# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2EA4/looptest2/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2EA4/looptest2/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2EA4/looptest2/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2EA4/looptest2/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2EA4/looptest2/func.c" 2
void *func_080D3BC0(s32);
s32 func_080E21E0(void *, void *);
void *malloc(s32);

void **func_080E2EA4(void **arg0, void *arg1, s32 arg2, void *arg3, void *arg4, s32 arg5) {
    s32 var_r3;
    u8 temp_r0;
    u8 temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2;
    void *temp_r2_2;
    void *var_r1;
    void *var_r1_2;
    void *var_r4;

    if (arg3 != arg1->unk4) {
        if (arg5 == 0) {
            if (arg2 == 0) {
                var_r3 = 0;
                temp_r1 = arg4->unk0;
                temp_r0 = arg3->unk10;
                if (((u32) temp_r1 < (u32) temp_r0) || (((u32) temp_r0 >= (u32) temp_r1) && ((u32) arg4->unk1 < (u32) (arg3 + 0x10)->unk1))) {
                    var_r3 = 1;
                }
                if (var_r3 != 0) {
                    goto block_8;
                }
                goto block_16;
            }
            goto block_8;
        }
block_16:
        var_r1 = malloc(0x18);
        if (var_r1 == 0) {
            var_r1 = func_080D3BC0(0x18);
        }
        temp_r2 = var_r1 + 0x10;
        if (temp_r2 != 0) {
            var_r1->unk10 = (s32) arg4->unk0;
            temp_r2->unk4 = (u8) arg4->unk4;
        }
        var_r4 = var_r1;
        arg3->unkC = var_r4;
        temp_r1_2 = arg1->unk4;
        if (arg3 == temp_r1_2->unkC) {
            temp_r1_2->unkC = var_r4;
        }
    } else {
block_8:
        var_r1_2 = malloc(0x18);
        if (var_r1_2 == 0) {
            var_r1_2 = func_080D3BC0(0x18);
        }
        temp_r2_2 = var_r1_2 + 0x10;
        if (temp_r2_2 != 0) {
            var_r1_2->unk10 = (s32) arg4->unk0;
            temp_r2_2->unk4 = (u8) arg4->unk4;
        }
        var_r4 = var_r1_2;
        arg3->unk8 = var_r4;
        temp_r1_3 = arg1->unk4;
        if (arg3 == temp_r1_3) {
            arg3->unk4 = var_r4;
            arg1->unk4->unkC = var_r4;
        } else if (arg3 == temp_r1_3->unk8) {
            temp_r1_3->unk8 = var_r4;
        }
    }
    var_r4->unk4 = arg3;
    var_r4->unk8 = 0;
    var_r4->unkC = 0;
    func_080E21E0(var_r4, arg1->unk4 + 4);
    arg1->unk8 = (s32) (arg1->unk8 + 1);
    *arg0 = var_r4;
    return arg0;
}
