# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD3B0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD3B0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD3B0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD3B0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD3B0/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_0803AB30(s32, void *);
s32 func_0803AC78(s32, s32);
s32 func_080A56DC(void *, s32, s32, s32, s32);
s32 func_080AAFC8(s32, void *, s32);
s32 func_080AB2E4(s32, s32);

void func_080AD3B0(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r5;
    void **var_r4;
    void **var_r4_2;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r5_2;

    var_r4 = arg0 + 8;
    temp_r5 = arg0 + 0x198;
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                temp_r2->unk14->unk14(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
    temp_r0 = arg0->unk1024;
    if ((temp_r0 != 0) && (temp_r0 != 0)) {
        func_0803AC78(temp_r0, 3);
    }
    arg0->unk1024 = 0;
    temp_r0_2 = arg0->unk1028;
    if ((temp_r0_2 != 0) && (temp_r0_2 != 0)) {
        func_080AB2E4(temp_r0_2, 3);
    }
    arg0->unk1028 = 0;
    func_080A56DC(arg0->unk4, arg1, 0, 0, 0x1E);
    temp_r0_3 = func_0803AB30(__builtin_new(0xA0), arg0);
    temp_r0_4 = arg0->unk1024;
    if ((temp_r0_3 != temp_r0_4) && (temp_r0_4 != 0)) {
        func_0803AC78(temp_r0_4, 3);
    }
    arg0->unk1024 = temp_r0_3;
    temp_r0_5 = func_080AAFC8(__builtin_new(4), arg0, arg0->unk4->unk4);
    temp_r0_6 = arg0->unk1028;
    if ((temp_r0_5 != temp_r0_6) && (temp_r0_6 != 0)) {
        func_080AB2E4(temp_r0_6, 3);
    }
    arg0->unk1028 = temp_r0_5;
    var_r4_2 = arg0 + 8;
    temp_r5_2 = arg0 + 0x198;
    if (var_r4_2 != temp_r5_2) {
        do {
            temp_r2_2 = *var_r4_2;
            if (temp_r2_2 != 0) {
                temp_r2_2->unk14->unk10(temp_r2_2);
            }
            var_r4_2 += 4;
        } while (var_r4_2 != temp_r5_2);
    }
}
