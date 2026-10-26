# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE2FC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE2FC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE2FC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE2FC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE2FC/opencode/func.c" 2
s32 func_08007128(void *);
s32 func_0800736C(void *);
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_0805E6CC(void *, ? *);
s32 func_0805E824(void *, void *, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern ? gUnk_08527094;

void *func_080CE2FC(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r6;
    void *var_r0;

    arg0->unk0 = arg1;
    temp_r4 = arg0 + 4;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, 2);
    temp_r4_2 = arg0 + 0xC;
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 2);
    temp_r4_3 = temp_r4_2 + 8;
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    temp_r6 = arg0 + 0x1C;
    func_0805E6CC(temp_r6, &gUnk_08527094);
    temp_r0 = arg0 + 0x4C;
    arg0->unk4C = 0;
    temp_r0->unk2 = 0;
    func_0805E824(temp_r0 + 4, temp_r6, 0, 0x100);
    temp_r0_2 = arg0 + 0x64;
    arg0->unk64 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r0_3 = temp_r0_2 + 0x1C;
    temp_r0_2->unk1C = 0;
    temp_r0_4 = temp_r0_3 + 4;
    temp_r0_3->unk4 = 0;
    temp_r0_4->unk2 = 0;
    func_0805E824(temp_r0_4 + 4, temp_r6, 1, 0x100);
    temp_r0_5 = arg0 + 0x9C;
    arg0->unk9C = 0;
    temp_r0_5->unk2 = 0;
    temp_r0_5->unk4 = 0;
    temp_r0_5->unk6 = 0;
    temp_r0_5->unk8 = 0;
    temp_r0_5->unkC = 0;
    temp_r0_5->unk10 = 0;
    temp_r0_5->unk11 = 0;
    temp_r0_5->unk14 = 0;
    temp_r0_5->unk18 = 0;
    temp_r0_5->unk1C = 0;
    (temp_r0_5 + 0x1C)->unk4 = 0;
    temp_r5 = arg0 + 0xC0;
    temp_r5->unk4 = 0;
    var_r0 = malloc(0xC);
    if (var_r0 == 0) {
        var_r0 = func_080D3BC0(0xC);
    }
    var_r0->unk0 = var_r0;
    var_r0->unk4 = var_r0;
    temp_r5->unk4 = var_r0;
    return arg0;
}
