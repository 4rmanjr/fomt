# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7F58/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7F58/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7F58/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7F58/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7F58/opencode/func.c" 2
s32 func_08007128(void *);
s32 func_0800736C(void *);
s32 func_080073E0(void *, s32);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_08007C28(void *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_08008444();
s32 func_08008B54(void *, s32);
s32 func_08050CC0(void *, s32, s32, s32);
s32 func_0805E6CC(void *, ? *);
s32 func_0805E824(void *, void *, s32, s32);
s32 func_080CA770(void *, void *);
s32 func_080E542C(void *, s32 *);
extern ? gUnk_08527094;
extern ? gUnk_08728208;
extern ? gUnk_087536E4;
extern ? vtable_unk_080E8570;

void *func_080C7F58(void *arg0, s32 arg1) {
    s32 sp0;
    ? *sp4;
    ? *sp8;
s32 spC;
s32 sp10;
    void *sp14;
    void *sp18;
    s32 *sp1C;
    s8 *sp20;
    void *sp24;
    void *sp28;
    void *sp2C;
    s8 *sp30;
    s8 *sp34;
    void *sp38;
    void *sp3C;
    s8 *sp40;
    void *sp44;
    void *sp48;
    void *sp4C;
    s32 *sp50;
    s8 *sp54;
    s32 temp_r5;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5_2;
    void *temp_r6;
    void *var_r4;
    void *var_r4_2;
    void *var_r6;

    func_08008444();
    arg0->unk4 = &vtable_unk_080E8570;
    arg0->unk8 = arg1;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = -1;
    func_08008B54(arg0 + 0x18, 1);
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk2A4 = 0;
    func_0800835C(&spC);
    func_0800770C(&sp10);
    sp0 = 0;
    sp4 = &spC;
    sp8 = &sp10;
    func_08050CC0(arg0 + 0x348, 0, 0x1C, 0);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    temp_r4 = arg0 + 0x354;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, 2);
    temp_r4_2 = arg0 + 0x35C;
    func_08007128(temp_r4_2);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    temp_r4_3 = arg0 + 0x364;
    func_08007874(temp_r4_3);
    temp_r4_3->unk4 = func_08007B54(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x36C;
    func_08007128(temp_r4_4);
    temp_r4_4->unk4 = func_0800736C(temp_r4_4);
    temp_r4_5 = arg0 + 0x374;
    func_08007874(temp_r4_5);
    temp_r4_5->unk4 = func_08007B54(temp_r4_5, 1);
    temp_r4_6 = arg0 + 0x37C;
    func_08007874(temp_r4_6);
    temp_r4_6->unk4 = func_08007B54(temp_r4_6, 1);
    temp_r4_7 = arg0 + 0x384;
    func_08007128(temp_r4_7);
    temp_r4_7->unk4 = func_0800736C(temp_r4_7);
    temp_r4_8 = arg0 + 0x38C;
    func_08007874(temp_r4_8);
    temp_r4_8->unk4 = func_08007B54(temp_r4_8, 1);
    temp_r4_9 = arg0 + 0x394;
    func_08007874(temp_r4_9);
    temp_r4_9->unk4 = func_08007B54(temp_r4_9, 1);
    temp_r4_10 = arg0 + 0x39C;
    func_08007128(temp_r4_10);
    temp_r4_10->unk4 = func_0800736C(temp_r4_10);
    var_r4 = arg0 + 0x3A4;
    var_r5 = 8;
    sp50 = &sp0 + 0x14;
    do {
        func_08007874(var_r4);
        var_r4->unk4 = 0;
        var_r4 += 8;
        var_r5 -= 1;
    } while (var_r5 != -1);
    var_r4_2 = arg0 + 0x3EC;
    var_r5_2 = 8;
    sp48 = arg0 + 0x568;
    temp_r0 = arg0 + 0x57C;
    sp20 = arg0 + 0x598;
    sp28 = arg0 + 0x5A0;
    temp_r1 = arg0 + 0x5B4;
    sp34 = arg0 + 0x5D0;
    sp38 = arg0 + 0x5D8;
    sp3C = arg0 + 0x5EC;
    sp40 = arg0 + 0x608;
    sp44 = arg0 + 0x610;
    sp4C = arg0 + 0x624;
    sp54 = arg0 + 0x640;
    sp1C = arg0 + 0x648;
    sp24 = arg0 + 0x64C;
    sp2C = arg0 + 0x660;
    sp30 = arg0 + 0x67C;
    do {
        func_08007128(var_r4_2);
        var_r4_2->unk4 = 0;
        var_r4_2 += 8;
        var_r5_2 -= 1;
    } while (var_r5_2 != -1);
    arg0->unk434 = 0;
    sp14 = arg0;
    func_080E542C(arg0 + 0x438, sp50);
    temp_r6 = arg0 + 0x4D4;
    func_0805E6CC(temp_r6, &gUnk_08527094);
    temp_r1_2 = arg0 + 0x504;
    sp18 = temp_r1_2;
    func_0805E6CC(sp18, &gUnk_08728208);
    temp_r0_2 = arg0 + 0x534;
    func_0805E6CC(temp_r0_2, &gUnk_087536E4);
    arg0->unk564 = 0;
    (arg0 + 0x564)->unk2 = 0;
    func_0805E824(sp48, temp_r6, 0, 0x100);
    arg0->unk57C = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    *sp20 = 0;
    arg0->unk59C = 0;
    (arg0 + 0x59C)->unk2 = 0;
    func_0805E824(sp28, temp_r6, 1, 0x100);
    arg0->unk5B4 = 0;
    temp_r1->unk2 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk6 = 0;
    temp_r1->unk8 = 0;
    temp_r1->unkC = 0;
    temp_r1->unk10 = 0;
    temp_r1->unk11 = 0;
    temp_r1->unk14 = 0;
    temp_r1->unk18 = 0;
    *sp34 = 0;
    arg0->unk5D4 = 0;
    (arg0 + 0x5D4)->unk2 = 0;
    func_0805E824(sp38, temp_r0_2, 0, 0x100);
    sp3C->unk0 = 0;
    sp3C->unk2 = 0;
    sp3C->unk4 = 0;
    sp3C->unk6 = 0;
    sp3C->unk8 = 0;
    sp3C->unkC = 0;
    sp3C->unk10 = 0;
    sp3C->unk11 = 0;
    sp3C->unk14 = 0;
    sp3C->unk18 = 0;
    *sp40 = 0;
    arg0->unk60C = 0;
    (arg0 + 0x60C)->unk2 = 0;
    func_0805E824(sp44, temp_r0_2, 1, 0x100);
    sp4C->unk0 = 0;
    sp4C->unk2 = 0;
    sp4C->unk4 = 0;
    sp4C->unk6 = 0;
    sp4C->unk8 = 0;
    sp4C->unkC = 0;
    sp4C->unk10 = 0;
    sp4C->unk11 = 0;
    sp4C->unk14 = 0;
    sp4C->unk18 = 0;
    *sp54 = 0;
    arg0->unk644 = 0xC;
    *sp1C = 0x28;
    func_0805E824(sp24, temp_r1_2, 0, 0x100);
    sp2C->unk0 = 0;
    sp2C->unk2 = 0;
    sp2C->unk4 = 0;
    sp2C->unk6 = 0;
    sp2C->unk8 = 0;
    sp2C->unkC = 0;
    sp2C->unk10 = 0;
    sp2C->unk11 = 0;
    sp2C->unk14 = 0;
    sp2C->unk18 = 0;
    *sp30 = 1;
    (arg0 + 0x644)->unk3C = 0;
    func_080CA770(arg0 + 0x684, arg0);
    arg0->unk6A0 = 0;
    arg0->unk6A1 = 0;
    arg0->unk6A2 = 0;
    arg0->unk6A3 = 0;
    var_r8 = 0;
    var_r6 = arg0 + 0x3A8;
    do {
        temp_r5 = var_r8 * 8;
        temp_r4_11 = temp_r5 + arg0 + 0x3A4;
        func_08007C28(temp_r4_11, var_r6->unk0);
        var_r6->unk0 = func_08007B54(temp_r4_11, 2);
        temp_r5_2 = temp_r5 + arg0 + 0x3EC;
        func_080073E0(temp_r5_2, var_r6->unk48);
        var_r6->unk48 = func_0800736C(temp_r5_2);
        var_r6 += 8;
        var_r8 += 1;
    } while (var_r8 <= 8);
    return arg0;
}
