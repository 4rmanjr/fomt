# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B368/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B368/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B368/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B368/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B368/opencode/func.c" 2
s32 func_030004DC(s32, s32, s32, s32, s32, void *, void **, s32, void *);
s32 func_08007D4C(void *, s32);

void func_0803B368(void *arg0, s32 arg1) {
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    void *sp20;
    void *sp24;
    s32 temp_r5;
    s32 temp_r6;
    u32 temp_r0;
    u32 temp_r3;
    u32 var_r4;
    u32 var_r8;
    u32 var_sl;
    u8 temp_r1;
    u8 var_r0;
    void *temp_r0_2;
    void *temp_r4;
    void *var_r7;

    sp14 = arg1;
    temp_r0 = arg0->unkE8;
    temp_r3 = temp_r0 >> 1;
    temp_r1 = arg0->unkE6;
    if ((temp_r1 == 0) || (temp_r1 != 1)) {
        var_r4 = 0;
        var_sl = temp_r3;
        var_r0 = 1;
    } else {
        var_r4 = temp_r3;
        var_sl = temp_r0;
        var_r0 = 0;
    }
    arg0->unkE6 = var_r0;
    sp18 = (*arg0->unk0)->unk18();
    sp1C = (*arg0->unk0)->unk1C();
    var_r8 = var_r4;
    if (var_r8 < var_sl) {
        sp20 = arg0 + 4;
        var_r7 = (var_r4 * 0x1C) + 0xF0 + arg0;
        sp24 = arg0 + 0xD0;
        do {
            temp_r6 = (u8) ((var_r7->unk12 - sp18) + 8) - 8;
            temp_r5 = (u8) ((var_r7->unk16 - sp1C) + 8) - 8;
            temp_r4 = sp20 + ((*(var_r7->unk0 + (var_r7->unk8 * 4)) * 0x28) + 4);
            temp_r0_2 = temp_r4 + 0x20;
            func_030004DC(sp14, temp_r6, temp_r5, 0x55, 0, temp_r4, arg0->unk0, func_08007D4C(temp_r0_2, temp_r0_2->unk4), sp24);
            var_r7 += 0x1C;
            var_r8 += 1;
        } while (var_r8 < var_sl);
    }
}
