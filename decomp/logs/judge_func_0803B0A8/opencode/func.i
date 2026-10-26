# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);

void func_0803B0A8(void *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4;
    void *temp_r6;
    void *var_r0;
    void *var_r5;

    temp_r0 = arg0->unk0;
    (*temp_r0)->unk4C(temp_r0, arg0->unkD4);
    temp_r2 = arg0 + 0xE8 + ((arg0->unkE8 * 0x1C) + 4);
    var_r0 = arg0 + 0xEC;
    if (var_r0 != temp_r2) {
        do {
            var_r0 += 0x1C;
        } while (var_r0 != temp_r2);
    }
    temp_r2_2 = arg0 + 4;
    temp_r6 = temp_r2_2 + ((arg0->unk4 * 0x28) + 4);
    var_r5 = temp_r2_2 + 4;
    if (var_r5 != temp_r6) {
        do {
            temp_r4 = var_r5 + 0x20;
            func_08007C28(temp_r4, temp_r4->unk4);
            func_080079E8(temp_r4, 2);
            var_r5 += 0x28;
        } while (var_r5 != temp_r6);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
