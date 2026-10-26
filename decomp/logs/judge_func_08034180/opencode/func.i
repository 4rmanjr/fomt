# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034180/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034180/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034180/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034180/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034180/opencode/func.c" 2
s32 SetAnimFacing__12AActorEntityUi(void *, s32);
s32 SetAnim__12AActorEntityUi(void *);
s32 func_08032384(void *, s32, s32);
s32 func_080323C8(void *);
s32 func_08034248();

void func_08034180(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    s32 var_r1;

    if (arg0->unk22 != func_08034248()) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    arg0->unk42 = 0;
    switch (arg1) {
    default:
    case 0:
        arg0->unk18 = 0;
        arg0->unk1C = 0;
        break;
    case 1:
        var_r0 = arg3;
        if (arg3 < 0) {
            var_r0 = 0 - arg3;
        }
        switch (arg2) {
        case 0:
            arg0->unk1C = var_r0;
            arg0->unk18 = 0;
            break;
        case 1:
            arg0->unk1C = (s32) (0 - var_r0);
            arg0->unk18 = 0;
            break;
        case 2:
            arg0->unk18 = (s32) (0 - var_r0);
block_23:
            arg0->unk1C = 0;
            break;
        case 3:
            arg0->unk18 = var_r0;
            goto block_23;
        }
        break;
    }
    if (arg1 != arg0->unk40) {
        var_r1 = -1;
        switch (arg1) {
        case 2:
            var_r1 = 8;
block_31:
            func_08032384(arg0, var_r1, 1);
            break;
        case 3:
            var_r1 = 5;

        default:
            if (var_r1 >= 0) {
                goto block_31;
            }
            func_080323C8(arg0);
            break;
        }
    }
    arg0->unk40 = (u8) arg1;
}
