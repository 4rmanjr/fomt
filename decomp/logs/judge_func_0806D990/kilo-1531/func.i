# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806D990/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806D990/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806D990/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806D990/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806D990/kilo-1531/func.c" 2
s32 __builtin_new(s32);
s32 func_08007128(void *);
s32 func_0800736C(void *);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_080084DC(void *);
s32 func_08008B54(void *, s32);
s32 func_08050CC0(s32, s32, s32, s32, s32, ? *, ? *);
extern ? vtable_unk_080E7AC4;

void *func_0806D990(void *arg0, s32 arg1) {
s32 spC;
s32 sp10;
s32 sp14;
    s32 temp_r5;
    s8 *var_r1;
    s8 var_r0;
    u32 temp_r0;
    u32 var_r2;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    sp14.unk0 = 0x1E;
    sp14.unk2 = 1;
    func_080084DC(arg0);
    arg0->unk4 = &vtable_unk_080E7AC4;
    arg0->unk8 = 0;
    temp_r5 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unkC = func_08050CC0(temp_r5, 0, 0x1F, 0xF, arg0->unk8, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54(arg0 + 0x10, 1);
    func_08008B54(arg0 + 0x14, 2);
    temp_r4 = arg0 + 0x18;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, 7);
    temp_r4_2 = temp_r4 + 8;
    func_08007128(temp_r4_2);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    temp_r4_3 = temp_r4_2 + 8;
    func_08007874(temp_r4_3);
    temp_r4_3->unk4 = func_08007B54(temp_r4_3, 3);
    temp_r4_4 = temp_r4_3 + 8;
    func_08007128(temp_r4_4);
    temp_r4_4->unk4 = func_0800736C(temp_r4_4);
    arg0->unk448 = (u8) ((-4 & arg0->unk448) | ((u32) (arg1 << 0x1E) >> 0x1E));
    var_r2 = (u32) (arg1 << 0x19) >> 0x1B;
    if (var_r2 > 0x1DU) {
        var_r2 = var_r2 % 30U;
    }
    arg0->unk448 = (u8) ((-0x7D & arg0->unk448) | ((var_r2 & 0x1F) * 4));
    arg0->unk44C = 0;
    arg0->unk44E = 2;
    temp_r0 = (u32) (arg0->unk448 << 0x1E) >> 0x1E;
    switch (temp_r0) {
    case 0:
        var_r1 = arg0 + 0x449;
        var_r0 = 0;
block_13:
        *var_r1 = var_r0;
        break;
    case 1:
        var_r1 = arg0 + 0x449;
        var_r0 = 4;
        goto block_13;
    case 2:
        var_r1 = arg0 + 0x449;
        var_r0 = 8;
        goto block_13;
    case 3:
        var_r1 = arg0 + 0x449;
        var_r0 = 0xC;
        goto block_13;
    }
    arg0->unk44A = (s8) (((u32) (arg0->unk448 << 0x19) >> 0x1B) + 1);
    temp_r0_2 = arg0 + 0x38;
    arg0->unk38 = (u8) arg0->unk449;
    temp_r0_3 = temp_r0_2 + 1;
    temp_r0_2->unk1 = 0;
    temp_r0_3->unk1 = 0;
    (temp_r0_3 + 1)->unkA = 0;
    return arg0;
}
