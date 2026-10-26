# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050AD8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050AD8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050AD8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050AD8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050AD8/opencode/func.c" 2
s32 func_08050B3C(void *);
s32 func_080ADCA4(void *, u32);
u32 func_080ADD20();

void func_08050AD8(void *arg0, u32 arg1) {
    u8 temp_r1;

    if ((arg1 < 0U) || (arg1 >= func_080ADD20())) {
        func_08050B3C(arg0);
        return;
    }
    temp_r1 = arg0->unk1DC;
    if ((temp_r1 << 0x1F) != 0) {
        if (arg0->unk1E0 != arg1) {
            goto block_7;
        }
    } else {
        arg0->unk1DC = (u8) (1 | temp_r1);
block_7:
        func_080ADCA4(arg0 + 0x1E4, arg1);
        arg0->unk1E0 = arg1;
        arg0->unk1DC = (u8) (arg0->unk1DC | 2);
    }
}
