# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D7E64/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D7E64/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D7E64/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D7E64/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D7E64/opencode/func.c" 2
s32 __builtin_delete(void *);

void func_080D7E64(void *arg0, s32 arg1) {
    s32 temp_r1;
    void *temp_r0;
    void *temp_r1_2;
    void *var_r0;
    void *var_r1;
    void *var_r2;

    temp_r1 = arg0 + 0x158 + ((arg0->unk158 * 8) + 4);
    var_r0 = arg0 + 0x15C;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 8;
        } while (var_r0 != temp_r1);
    }
    temp_r1_2 = arg0 + 0x14 + ((arg0->unk14 * 8) + 4);
    var_r2 = arg0 + 0x18;
    if (var_r2 != temp_r1_2) {
        do {
            var_r2 += 8;
        } while (var_r2 != temp_r1_2);
    }
    temp_r0 = arg0 + ((arg0->unk0 * 8) + 4);
    var_r1 = arg0 + 4;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 8;
        } while (var_r1 != temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
