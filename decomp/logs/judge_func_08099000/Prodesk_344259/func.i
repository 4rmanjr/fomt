# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099000/Prodesk_344259/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099000/Prodesk_344259/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099000/Prodesk_344259/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099000/Prodesk_344259/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099000/Prodesk_344259/func.c" 2
u16 func_080074C0(void *, s32);
s32 func_08007D4C(s32, s32);
u8 *func_08008920(void *);
s32 func_0809A3E0();

void func_08099000(void *arg0, u8 arg1) {
    s32 sp0;
    s32 sp4;
    s32 var_r1;
    s32 var_r5;
    s32 var_r6;
    u8 *temp_r0_2;
    u8 temp_r2;
    void *temp_r0;
    void *temp_r0_3;

    func_0809A3E0();
    if (arg1 == 1) {
        sp0 = ((((sp0 & 0xFFFFFCFF & 0xFFFFF3FF) | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF) | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
        temp_r0 = arg0 + 0x308;
        sp4 = ((u16) ((sp4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0, temp_r0->unk4) & 0xF) << 0xC)) & 0xFFFFF3FF) | 0x400;
        var_r1 = 0;
        do {
            var_r5 = 0;
            var_r6 = 0x98;
loop_3:
            sp0 = (((sp0 & 0xFE00FFFF) | ((0x1FF & var_r6) << 0x10)) & 0xFFFFFF00) | (u8) ((var_r1 * 0x10) + 0x10);
            sp0.unk4 = (s32) ((sp0.unk4 & 0xFFFFFC00) | ((u32) ((func_08007D4C(arg0 + 0x300, arg0->unk304) + ((var_r5 * 2) + (var_r1 * 0x14))) << 0x16) >> 0x16));
            temp_r0_2 = func_08008920(arg0);
            temp_r2 = *temp_r0_2;
            if ((u32) temp_r2 <= 0x7FU) {
                temp_r0_3 = temp_r0_2 + ((temp_r2 * 8) + 4);
                temp_r0_3->unk0 = sp0;
                temp_r0_3->unk4 = (u16) sp0.unk4;
                *temp_r0_2 = temp_r2 + 1;
            }
            var_r6 += 8;
            var_r5 += 1;
            if (var_r5 <= 9) {
                goto loop_3;
            }
            var_r1 += 1;
        } while (var_r1 <= 4);
    }
}
