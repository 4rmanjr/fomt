# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8DF4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8DF4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8DF4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8DF4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8DF4/opencode/func.c" 2
s32 __builtin_delete();
void *__builtin_new(s32);
s32 func_0805E824(void *, s32, s32, s32);
s32 func_0805E860(void *, u16);
u16 func_080B8DAC(void *, s32, s32, u8);

void func_080B8DF4(void *arg0, u8 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r7;
    u8 temp_r1;
    void *temp_r0_2;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r7_2;

    temp_r1 = arg1;
    temp_r0 = func_0805E824(__builtin_new(0x14), arg0->unk77C, 0, 0x100);
    temp_r7 = temp_r1 * 4;
    temp_r5 = temp_r7 + arg0;
    if (temp_r0 != temp_r5->unk7A4) {
        __builtin_delete();
    }
    temp_r5->unk7A4 = temp_r0;
    temp_r0_2 = __builtin_new(0x1C);
    temp_r0_2->unk0 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r4 = temp_r7 + arg0;
    temp_r7_2 = temp_r7 + arg0;
    if (temp_r0_2 != temp_r4->unk7AC) {
        __builtin_delete();
    }
    temp_r4->unk7AC = temp_r0_2;
    temp_r5_2 = temp_r7_2->unk7A4;
    temp_r2 = temp_r1 << 6;
    func_0805E860(temp_r5_2, func_080B8DAC(arg0, *(arg0 + 0x6C + temp_r2), *(arg0 + 0x74 + temp_r2), temp_r1));
    temp_r7_2->unk7A4->unk10 = 0x100;
}
