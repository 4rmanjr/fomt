# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006858/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006858/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006858/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006858/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006858/opencode/func.c" 2
u8 *func_08008920(void *);

void func_08006858(void *arg0) {
    u8 *temp_r0;
    u8 *temp_r0_3;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r0_2;
    void *temp_r0_4;

    if (arg0->unk463C == 0) {
        temp_r0 = func_08008920(arg0);
        temp_r2 = *temp_r0;
        if ((u32) temp_r2 <= 0x7FU) {
            temp_r0_2 = temp_r0 + ((temp_r2 * 8) + 4);
            temp_r0_2->unk0 = (s32) arg0->unk4608;
            temp_r0_2->unk4 = (u16) arg0->unk460C;
            *temp_r0 = temp_r2 + 1;
        }
    }
    temp_r0_3 = func_08008920(arg0);
    temp_r2_2 = *temp_r0_3;
    if ((u32) temp_r2_2 <= 0x7FU) {
        temp_r0_4 = temp_r0_3 + ((temp_r2_2 * 8) + 4);
        temp_r0_4->unk0 = (s32) arg0->unk4614;
        temp_r0_4->unk4 = (u16) arg0->unk4618;
        *temp_r0_3 = temp_r2_2 + 1;
    }
}
