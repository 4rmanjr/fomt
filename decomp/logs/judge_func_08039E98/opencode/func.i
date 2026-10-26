# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039E98/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039E98/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039E98/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039E98/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039E98/opencode/func.c" 2
void *__builtin_new(s32);
s32 func_080A4740(void *, void **, s32, s32);
s32 func_080A4A00(void *, void **, s16, void **, s32, s32);
extern ? vtable_unk_080E602C;
extern ? vtable_unk_080E76BC;

void *func_08039E98(void *arg0, void **arg1, s16 arg2, s8 arg3) {
    s8 sp8;
    u16 *spC;
    void **temp_r1;
    void **temp_r4;
    void *temp_r6;
    void *var_r5;

    arg0->unk4C = &vtable_unk_080E76BC;
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    temp_r1 = (*arg1)->unk68(arg1);
    sp8 = 0;
    func_080A4A00(arg0 + 8, temp_r1, arg2, arg1, 3, 0x1B);
    if (arg3 == 1) {
        var_r5 = __builtin_new(0x4C);
        temp_r4 = (*arg1)->unk68(arg1);
        func_080A4740(var_r5, arg1, 2, 0xF);
        var_r5->unk24 = &vtable_unk_080E602C;
        temp_r6 = *temp_r4;
        temp_r6->unkC(&spC, temp_r4, 0x91A);
        temp_r6->unk10(var_r5 + 0x28, temp_r4, *spC);
        var_r5->unk48 = arg3;
    } else {
        var_r5 = 0;
    }
    arg0->unk48 = var_r5;
    return arg0;
}
