# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A59BC/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A59BC/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A59BC/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A59BC/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A59BC/Prodesk_349095/func.c" 2
u16 Sqrt(s32);
s32 func_080A58EC(s32 *, void *, s32, s32);

void func_080A59BC(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_r3;
    s32 var_r4;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 var_r4_2;
    u32 var_r7;

    var_r7 = arg3;
    func_080A58EC(&sp0, arg0, arg1, arg2);
    sp4 = sp0;
    if (var_r7 == 0) {
        var_r7 = 1;
    }
    temp_r3 = sp4.unk0 - arg0->unkA;
    temp_r2 = sp4.unk2 - arg0->unkE;
    if ((temp_r3 != 0) || (temp_r2 != 0)) {
        temp_r2_2 = (temp_r3 * temp_r3) + (temp_r2 * temp_r2);
        var_r4 = 0;
        if (temp_r2_2 <= 0x3FFFFFFFU) {
            do {
                var_r4 += 1;
            } while ((u32) (temp_r2_2 << (var_r4 * 2)) <= 0x3FFFFFFFU);
        }
        var_r4_2 = (u32) ((s32) Sqrt(temp_r2_2 << (var_r4 * 2)) >> var_r4) / var_r7;
        if (var_r4_2 == 0) {
            var_r4_2 = 1;
        }
        arg0->unk84 = (s32) ((s32) ((sp4.unk0 << 0x10) - arg0->unk8) / (s32) var_r4_2);
        arg0->unk88 = (s32) ((s32) ((sp4.unk2 << 0x10) - arg0->unkC) / (s32) var_r4_2);
        arg0->unk8C = var_r4_2;
        return;
    }
    arg0->unk8C = temp_r2;
}
