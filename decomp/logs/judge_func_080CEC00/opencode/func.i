# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CEC00/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CEC00/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CEC00/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CEC00/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CEC00/opencode/func.c" 2
s32 func_08007128(void *);
s32 func_0800736C(void *);
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_0805E6CC(s32, ? *);
s32 func_0805E824(void *, s32, s32, s32);
extern ? gUnk_08754C0C;

void *func_080CEC00(void *arg0, s32 arg1) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r4_2;
    void *temp_r4_3;

    arg0->unk0 = arg1;
    temp_r4 = arg0 + 4;
    func_0805E6CC(temp_r4, &gUnk_08754C0C);
    arg0->unk34 = 0;
    arg0->unk36 = 0;
    func_0805E824(arg0 + 0x38, temp_r4, 1, 0x100);
    temp_r0 = arg0 + 0x4C;
    arg0->unk4C = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    temp_r0->unk1C = 0;
    temp_r4_2 = arg0 + 0x6C;
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 4);
    temp_r4_3 = temp_r4_2 + 8;
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    arg0->unk7C = 0x12;
    arg0->unk80 = 0;
    (arg0 + 0x80)->unk4 = 0;
    return arg0;
}
