# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E1C70/looptest/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E1C70/looptest/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E1C70/looptest/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E1C70/looptest/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E1C70/looptest/func.c" 2
u8 *func_08008920(s32);
s32 func_0804EA94(s32 *, s32, s32, s32, s32, s32, s32, s32);
s32 func_08076EA8();

s32 func_080E1C70(void *arg0) {
    s32 sp10;
    s16 *var_r1;
    s16 temp_r1;
    u32 var_r8;
    u8 *temp_r4;
    u8 temp_r2;
    void *temp_r1_2;
    void *var_r5;

    func_08076EA8();
    var_r8 = 0;
    temp_r1 = arg0->unk590;
    if ((s32) (arg0->unk2168 + 0x30) < (s32) temp_r1) {
        var_r1 = arg0 + 0x2168;
        do {
            var_r1 += 0x10;
            var_r8 += 1;
        } while ((s32) (*var_r1 + 0x30) < (s32) temp_r1);
    }
    if (var_r8 < (u32) arg0->unk2164) {
        var_r5 = (var_r8 * 0x10) + 0x2168 + arg0;
        do {
            if ((s32) var_r5->unk0 <= (s32) (arg0->unk590 + 0xA0)) {
                temp_r4 = func_08008920(arg0->unk0);
                func_0804EA94(&sp10, var_r5->unk4, var_r5->unk0 - arg0->unk590, 5, 1, 1, 0, 0);
                temp_r2 = *temp_r4;
                if ((u32) temp_r2 <= 0x7FU) {
                    temp_r1_2 = temp_r4 + ((temp_r2 * 8) + 4);
                    temp_r1_2->unk0 = sp10;
                    temp_r1_2->unk4 = (u16) sp10.unk4;
                    *temp_r4 = temp_r2 + 1;
                }
            }
            var_r5 += 0x10;
            var_r8 += 1;
        } while (var_r8 < (u32) arg0->unk2164);
    }
    return 1;
}
