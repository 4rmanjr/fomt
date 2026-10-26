# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFBAC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFBAC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFBAC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFBAC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFBAC/opencode/func.c" 2
s32 func_080A5CC0();
s32 func_080CFEA8(void *, s32, s32, void *, s32);
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(void *, void *, void *);

void func_080CFBAC(void *arg0) {
    void *sp4;
    s32 sp8;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_sl;
    void *temp_r6;
    void *temp_r7;
    void *var_r1;
    void *var_r2;

    sp4 = arg0;
    func_080A5CC0();
    if (sp4->unk4 == 0x3E) {
        var_sl = 0;
        temp_r7 = sp4 + 0x94;
        do {
            var_r4 = 0;
            temp_r0 = var_sl + 1;
            sp8 = var_sl - 1;
loop_3:
            temp_r6 = temp_r7 + ((var_r4 + (var_sl * 0xC)) * 4);
            var_r0 = 0;
            if ((var_r4 >= 0) && (temp_r0 >= 0) && (var_r4 <= 0xB) && (temp_r0 <= 6)) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                var_r1 = temp_r7 + ((var_r4 + (temp_r0 * 0xC)) * 4);
            } else {
                var_r1 = 0;
            }
            var_r0_2 = 0;
            if ((var_r4 >= 0) && (sp8 >= 0) && (var_r4 <= 0xB) && (sp8 <= 6)) {
                var_r0_2 = 1;
            }
            if (var_r0_2 != 0) {
                var_r2 = temp_r7 + ((var_r4 + (sp8 * 0xC)) * 4);
            } else {
                var_r2 = 0;
            }
            func_080CFEA8(sp4, var_r4 * 2, (var_sl * 2) + 7, temp_r6, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r6, var_r1, var_r2));
            var_r4 += 1;
            if ((u32) var_r4 <= 0xBU) {
                goto loop_3;
            }
            var_sl = temp_r0;
        } while ((u32) var_sl <= 6U);
    }
}
