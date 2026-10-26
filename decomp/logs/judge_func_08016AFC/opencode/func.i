# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016AFC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016AFC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016AFC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016AFC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016AFC/opencode/func.c" 2
s32 GetUnkEnt__C4Coop(void *);
s32 method_0800D058__C4Barn(void *);

s32 func_08016AFC(void *arg0, u32 arg1) {
    s32 var_r0;
    s32 var_r1;
    void *temp_r2;
    void *temp_r2_2;

    temp_r2 = arg0->unk4;
    switch (arg1) {
    case 0:
        temp_r2_2 = temp_r2->unk8C;
        if (!(2 & temp_r2_2->unk219A) && !(4 & temp_r2_2->unk21A1)) {
        default:
            var_r1 = -1;
        } else {
block_6:
            var_r1 = 0;
        }
        break;
    case 4:
        var_r1 = -1;
        if (0x10 & temp_r2->unk8C->unk219C) {
            goto block_6;
        }
        break;
    case 1:
    case 2:
        var_r0 = method_0800D058__C4Barn(temp_r2->unk8C + 0x5F0);
block_9:
        var_r1 = var_r0;
        break;
    case 3:
        var_r0 = GetUnkEnt__C4Coop(temp_r2->unk8C + 0x410);
        goto block_9;
    }
    return var_r1;
}
