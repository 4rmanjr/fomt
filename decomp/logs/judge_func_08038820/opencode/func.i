# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038820/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038820/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038820/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038820/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038820/opencode/func.c" 2
s32 __builtin_delete(s32 *);
void *__builtin_new(s32);
s32 func_080A4740(void *, void **, s32, s32);
s32 func_080A47B4(void *, s32);
s32 *func_080DCB7C(void *, void **, s32);
extern ? vtable_unk_080E602C;
extern ? vtable_unk_080E736C;

void *func_08038820(void *arg0, void ***arg1) {
    u16 *sp0;
    s32 *temp_r0_2;
    s32 *temp_r6;
    s32 var_r2;
    u32 temp_r0;
    void **temp_r4;
    void **temp_r5;
    void *temp_r3;
    void *temp_r4_2;
    void *temp_r5_2;
    void *var_r4;
    void *var_r6;

    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E736C;
    temp_r0 = (u32) (arg1->unk18->unk54 << 0x19) >> 0x1E;
    if (temp_r0 == 1) {
        var_r6 = __builtin_new(0x4C);
        temp_r4 = arg1->unk0;
        temp_r5 = (*temp_r4)->unk74(temp_r4);
        func_080A4740(var_r6, temp_r4, 6, 0x1B);
        var_r6->unk24 = &vtable_unk_080E602C;
        temp_r4_2 = *temp_r5;
        temp_r4_2->unkC(&sp0, temp_r5, 0);
        temp_r4_2->unk10(var_r6 + 0x28, temp_r5, *sp0);
        var_r6->unk48 = (s8) temp_r0;
    } else {
        var_r6 = 0;
    }
    arg0->unk8 = var_r6;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    temp_r3 = __builtin_new(0x194);
    var_r2 = 0;
    if (((u32) (arg1->unk18->unk5D << 0x1C) >> 0x1E) == 1) {
        var_r2 = 1;
    }
    temp_r0_2 = func_080DCB7C(temp_r3, *arg0->unk0, var_r2);
    temp_r6 = arg0->unk14;
    if ((temp_r0_2 != temp_r6) && (temp_r6 != 0)) {
        temp_r5_2 = temp_r6 + ((*temp_r6 * 0x50) + 4);
        var_r4 = temp_r6 + 4;
        if (var_r4 != temp_r5_2) {
            do {
                func_080A47B4(var_r4, 2);
                var_r4 += 0x50;
            } while (var_r4 != temp_r5_2);
        }
        __builtin_delete(temp_r6);
    }
    arg0->unk14 = temp_r0_2;
    return arg0;
}
