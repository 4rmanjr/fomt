# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050B50/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050B50/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050B50/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050B50/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050B50/opencode/func.c" 2
s32 func_0804E7A0(s32, void *, s32);
s32 func_0804E8F0(s32, void *, s32, s32);
s32 func_08050C18(void *);
s32 strlen(u8 *);

void func_08050B50(void *arg0, u8 *arg1) {
    u8 *sp0;
    u8 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    u8 **sp14;
    s32 var_r6;
    u32 var_r5;
    u8 *var_r2;
    u8 *var_r7;
    void *temp_r4;

    if (arg1 != 0) {
        var_r6 = strlen(arg1);
    } else {
        var_r6 = 0;
    }
    if ((u32) (var_r6 - 1) > 0xBU) {
        func_08050C18(arg0);
        return;
    }
    var_r7 = arg1;
    var_r5 = 0;
    sp14 = &sp0 + 0xC;
    do {
        spC = 4;
        sp14->unk2 = 2;
        temp_r4 = (var_r5 * 0x104) + arg0 + 0x1F8;
        func_0804E7A0(spC, temp_r4, 0);
        var_r5 += 1;
        if (var_r6 != 0) {
            var_r2 = &sp4;
loop_8:
            *var_r2 = *var_r7;
            var_r7 += 1;
            var_r2 += 1;
            var_r6 -= 1;
            if (var_r6 != 0) {
                if (var_r2 != &sp8) {
                    goto loop_8;
                }
            }
            *var_r2 = 0;
            sp10.unk0 = 4;
            sp10.unk2 = 2;
            sp0 = &sp4;
            func_0804E8F0(sp10, temp_r4, 0, 0);
        }
    } while (var_r5 <= 2U);
    arg0->unk1F0 = (u8) (arg0->unk1F0 | 1 | 2);
}
