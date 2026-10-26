# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC96C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC96C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC96C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC96C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC96C/opencode/func.c" 2
u8 func_080AC96C(void *arg0, s8 arg1) {
    u32 temp_r7;
    u8 temp_r3;
    void *temp_r0;
    void *var_r1;

    temp_r0 = arg0 + (arg1 * 0x84);
    temp_r7 = (u32) (~temp_r0->unkA0 << 0x18) >> 0x1F;
    if (temp_r7 != 0) {
        var_r1 = arg0 + 0xB78 + ((s8) temp_r0->unkA0 * 0xC);
        goto block_2;
    }
    temp_r3 = arg0->unkC14;
    if ((u32) temp_r3 < 0xDU) {
        arg0->unkC14 = (u8) (temp_r3 + 1);
        var_r1 = arg0 + 0xB78 + (temp_r3 * 0xC);
        if (var_r1->unk9 != arg1) {
            var_r1->unk9 = arg1;
            var_r1->unkA = (s8) temp_r7;
        }
        if ((s8) temp_r0->unkA0 != temp_r3) {
            temp_r0->unkA0 = temp_r3;
        }
block_2:
        return var_r1->unk8;
    }
    return -1U;
}
