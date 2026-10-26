# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCDB0/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCDB0/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCDB0/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCDB0/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCDB0/kilo-1531/func.c" 2
s32 __builtin_delete(s32 *);
s32 func_080A47B4(s32 *, s32);
extern ? vtable_unk_080E65E0;

void func_080DCDB0(s32 *arg0, s32 arg1) {
    s32 *temp_r0;
    s32 *temp_r0_2;
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 *var_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r4_2;

    temp_r0 = arg0->unk14;
    if (temp_r0 != 0) {
        temp_r5 = temp_r0 + ((*temp_r0 * 0x50) + 4);
        var_r4 = temp_r0 + 4;
        if (var_r4 != temp_r5) {
            do {
                func_080A47B4(var_r4, 2);
                var_r4 += 0x50;
            } while (var_r4 != temp_r5);
        }
        __builtin_delete(temp_r0);
    }
    temp_r0_2 = arg0->unk10;
    if (temp_r0_2 != 0) {
        temp_r5_2 = temp_r0_2 + ((*temp_r0_2 << 6) + 4);
        var_r4_2 = temp_r0_2 + 4;
        if (var_r4_2 != temp_r5_2) {
            do {
                var_r4_2->unk24->unk8(var_r4_2, 2);
                var_r4_2 += 0x40;
            } while (var_r4_2 != temp_r5_2);
        }
        __builtin_delete(temp_r0_2);
    }
    temp_r4 = arg0->unkC;
    if (temp_r4 != 0) {
        func_080A47B4(temp_r4, 2);
        __builtin_delete(temp_r4);
    }
    temp_r4_2 = arg0->unk8;
    if (temp_r4_2 != 0) {
        func_080A47B4(temp_r4_2, 2);
        __builtin_delete(temp_r4_2);
    }
    arg0->unk4 = &vtable_unk_080E65E0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
