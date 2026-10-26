# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B2A8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B2A8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B2A8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B2A8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B2A8/opencode/func.c" 2
s32 func_0803B474(void *, s32, s32);
s32 func_0805E8F0(void *);
extern ? gUnk_080F1948;

void func_0803B2A8(void *arg0) {
    u32 sp0;
    s32 sp4;
    s32 sp8;
    u32 temp_r0;
    u32 var_r6;
    u32 var_r7;
    u32 var_r8;
    u8 temp_r2;
    void *temp_r1;
    void *var_r4;
    void *var_r5;

    temp_r2 = arg0->unkE4;
    temp_r1 = (temp_r2 * 0x10) + &gUnk_080F1948;
    var_r7 = 0;
    var_r8 = 0;
    if ((temp_r2 == 0) || (temp_r2 != 1)) {
        sp0 = 2;
    } else {
        sp0 = 3;
    }
    sp4 = (*arg0->unk0)->unk18();
    sp8 = (*arg0->unk0)->unk1C();
    temp_r0 = arg0->unkE8;
    var_r6 = 0;
    if (temp_r0 > 0U) {
        var_r4 = arg0 + 0xEC;
        var_r5 = temp_r1;
        do {
            if ((s32) (func_0805E8F0(var_r4) << 0x1D) < 0) {
                func_0803B474(var_r4, sp4, sp8);
            }
            var_r8 += 1;
            if (var_r8 >= sp0) {
                var_r5 += 8;
                var_r7 += 1;
                if (var_r7 > 1U) {
                    var_r5 = temp_r1;
                    var_r7 = 0;
                }
                var_r8 = 0;
            }
            var_r4->unk14 = (s32) (var_r4->unk14 + var_r5->unk0);
            var_r4->unk18 = (s32) (var_r4->unk18 + var_r5->unk4);
            var_r4 += 0x1C;
            var_r6 += 1;
        } while (var_r6 < temp_r0);
    }
}
