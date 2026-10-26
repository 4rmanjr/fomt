# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094AC0/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094AC0/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094AC0/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094AC0/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094AC0/Prodesk_343690/func.c" 2
s32 GetSize__C8Rucksack(void *);
s32 HasKitchenFryingPan__C9FarmHouse(void *);
s32 HasKitchenKnife__C9FarmHouse(void *);
s32 HasKitchenMixer__C9FarmHouse(void *);
s32 HasKitchenOven__C9FarmHouse(void *);
s32 HasKitchenPot__C9FarmHouse(void *);
s32 HasKitchenRollingPin__C9FarmHouse(void *);
s32 HasKitchenSeasoningSet__C9FarmHouse(void *);
s32 HasKitchenWhisk__C9FarmHouse(void *);
s32 __12RucksackItem(s32 *);
s32 func_08007128(void *);
s32 func_0800736C(void *);
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_08008B54(void *, s32);
s32 func_0805E6CC(void *, ? *);
s32 func_0805E824(void *, void *, s32, s32);
s32 func_080CD578();
extern ? gUnk_08527094;
extern ? gUnk_08728208;
extern ? gUnk_08754674;
extern ? gUnk_08754C0C;
extern ? vtable_unk_080E8230;
extern ? vtable_unk_080E823C;

void *func_08094AC0(void *arg0, void *arg1, u8 arg2) {
    s32 sp0;
    s32 sp4;
    s16 *var_r0;
    s16 *var_r0_2;
    s32 *var_r4;
    s32 *var_r5_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r4_2;
    s32 var_r5;
    s8 *var_r0_4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r5;
    void *temp_r5_10;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r5_8;
    void *temp_r5_9;
    void *temp_r6;

    sp4 = (s32) arg2;
    func_080CD578();
    arg0->unk4 = &vtable_unk_080E8230;
    arg0->unk8C = arg1;
    func_08008B54(arg0 + 0x8C + 4, 0);
    func_08008B54(arg0 + 0x94, 2);
    temp_r6 = arg0 + 0x98;
    func_0805E6CC(temp_r6, &gUnk_08527094);
    temp_r0 = arg0 + 0xC8;
    func_0805E6CC(temp_r0, &gUnk_08728208);
    temp_r1 = arg0 + 0xF8;
    func_0805E6CC(temp_r1, &gUnk_08754C0C);
    temp_r2 = arg0 + 0x128;
    func_0805E6CC(temp_r2, &gUnk_08754674);
    func_0805E824(arg0 + 0x158, temp_r6, 3, 0x100);
    temp_r0_2 = arg0 + 0x16C;
    arg0->unk16C = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    arg0->unk18C = 0;
    func_0805E824(arg0 + 0x190, temp_r6, 2, 0x100);
    temp_r0_3 = arg0 + 0x1A4;
    arg0->unk1A4 = 0;
    temp_r0_3->unk2 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk6 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk11 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    arg0->unk1C4 = 0;
    func_0805E824(arg0 + 0x1C8, temp_r6, 0, 0x100);
    temp_r0_4 = arg0 + 0x1DC;
    arg0->unk1DC = 0;
    temp_r0_4->unk2 = 0;
    temp_r0_4->unk4 = 0;
    temp_r0_4->unk6 = 0;
    temp_r0_4->unk8 = 0;
    temp_r0_4->unkC = 0;
    temp_r0_4->unk10 = 0;
    temp_r0_4->unk11 = 0;
    temp_r0_4->unk14 = 0;
    temp_r0_4->unk18 = 0;
    arg0->unk1FC = 0;
    func_0805E824(arg0 + 0x200, temp_r6, 1, 0x100);
    temp_r0_5 = arg0 + 0x214;
    arg0->unk214 = 0;
    temp_r0_5->unk2 = 0;
    temp_r0_5->unk4 = 0;
    temp_r0_5->unk6 = 0;
    temp_r0_5->unk8 = 0;
    temp_r0_5->unkC = 0;
    temp_r0_5->unk10 = 0;
    temp_r0_5->unk11 = 0;
    temp_r0_5->unk14 = 0;
    temp_r0_5->unk18 = 0;
    arg0->unk234 = 0;
    func_0805E824(arg0 + 0x238, temp_r0, 0, 0x100);
    temp_r0_6 = arg0 + 0x24C;
    arg0->unk24C = 0;
    temp_r0_6->unk2 = 0;
    temp_r0_6->unk4 = 0;
    temp_r0_6->unk6 = 0;
    temp_r0_6->unk8 = 0;
    temp_r0_6->unkC = 0;
    temp_r0_6->unk10 = 0;
    temp_r0_6->unk11 = 0;
    temp_r0_6->unk14 = 0;
    temp_r0_6->unk18 = 0;
    arg0->unk26C = 0;
    func_0805E824(arg0 + 0x270, temp_r1, 1, 0x100);
    temp_r0_7 = arg0 + 0x284;
    arg0->unk284 = 0;
    temp_r0_7->unk2 = 0;
    temp_r0_7->unk4 = 0;
    temp_r0_7->unk6 = 0;
    temp_r0_7->unk8 = 0;
    temp_r0_7->unkC = 0;
    temp_r0_7->unk10 = 0;
    temp_r0_7->unk11 = 0;
    temp_r0_7->unk14 = 0;
    temp_r0_7->unk18 = 0;
    arg0->unk2A4 = 0;
    func_0805E824(arg0 + 0x2A8, temp_r2, 0, 0x100);
    temp_r0_8 = arg0 + 0x2BC;
    arg0->unk2BC = 0;
    temp_r0_8->unk2 = 0;
    temp_r0_8->unk4 = 0;
    temp_r0_8->unk6 = 0;
    temp_r0_8->unk8 = 0;
    temp_r0_8->unkC = 0;
    temp_r0_8->unk10 = 0;
    temp_r0_8->unk11 = 0;
    temp_r0_8->unk14 = 0;
    temp_r0_8->unk18 = 0;
    arg0->unk2DC = 0;
    temp_r5 = arg0 + 0x2E0;
    func_08007874(temp_r5);
    temp_r5->unk4 = func_08007B54(temp_r5, 2);
    temp_r5_2 = arg0 + 0x2E8;
    func_08007128(temp_r5_2);
    temp_r5_2->unk4 = 0;
    temp_r5_3 = arg0 + 0x2F0;
    func_08007874(temp_r5_3);
    temp_r5_3->unk4 = func_08007B54(temp_r5_3, 2);
    temp_r5_4 = arg0 + 0x2F8;
    func_08007128(temp_r5_4);
    temp_r5_4->unk4 = func_0800736C(temp_r5_4);
    temp_r5_5 = arg0 + 0x300;
    func_08007874(temp_r5_5);
    arg0->unk304 = func_08007B54(temp_r5_5, 6);
    temp_r5_6 = arg0 + 0x308;
    func_08007128(temp_r5_6);
    temp_r5_6->unk4 = 0;
    temp_r5_7 = arg0 + 0x310;
    func_08007874(temp_r5_7);
    temp_r5_7->unk4 = func_08007B54(temp_r5_7, 4);
    temp_r5_8 = arg0 + 0x318;
    func_08007874(temp_r5_8);
    temp_r5_8->unk4 = func_08007B54(temp_r5_8, 4);
    temp_r5_9 = arg0 + 0x320;
    func_08007128(temp_r5_9);
    temp_r5_9->unk4 = 0;
    temp_r5_10 = arg0 + 0x328;
    func_08007874(temp_r5_10);
    temp_r5_10->unk4 = func_08007B54(temp_r5_10, 7);
    temp_r1_2 = arg0 + 0x334;
    arg0->unk334 = 0;
    temp_r1_2->unk12 = (u16) (0xFFFFF000 & temp_r1_2->unk12);
    temp_r1_2->unk13 = (u8) (-0x11 & temp_r1_2->unk13);
    var_r1 = 7;
    var_r0 = arg0 + 0x344;
    do {
        *var_r0 = 0;
        var_r0 -= 2;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    temp_r1_3 = arg0 + 0x348;
    arg0->unk348 = 0;
    temp_r1_3->unk12 = (u16) (0xFFFFF000 & temp_r1_3->unk12);
    temp_r1_3->unk13 = (u8) (-0x11 & temp_r1_3->unk13);
    var_r1_2 = 7;
    var_r0_2 = arg0 + 0x358;
    do {
        *var_r0_2 = 0;
        var_r0_2 -= 2;
        var_r1_2 -= 1;
    } while (var_r1_2 >= 0);
    var_r0_3 = 7;
    do {
        var_r0_3 -= 1;
    } while (var_r0_3 != -1);
    var_r4 = arg0 + 0x2BB0;
    var_r5 = 7;
    do {
        __12RucksackItem(var_r4);
        var_r4 += 4;
        var_r5 -= 1;
    } while (var_r5 != -1);
    temp_r1_4 = arg0 + 0x33D8;
    arg0->unk33D8 = &vtable_unk_080E823C;
    temp_r1_4->unk4 = 0;
    temp_r1_4->unk6 = 0;
    temp_r1_4->unk7 = 0;
    arg0->unk35E = (u8) sp0.unk4;
    arg0->unk368 = (u8) arg0->unk8C->unk2C1A;
    arg0->unk330 = 0U;
    if ((HasKitchenKnife__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 1);
    }
    if ((HasKitchenFryingPan__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 2);
    }
    if ((HasKitchenPot__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 4);
    }
    if ((HasKitchenMixer__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 8);
    }
    if ((HasKitchenWhisk__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 0x10);
    }
    if ((HasKitchenRollingPin__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 0x20);
    }
    if ((HasKitchenOven__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 0x40);
    }
    if ((HasKitchenSeasoningSet__C9FarmHouse(arg0->unk8C + 0x1F4) << 0x18) != 0) {
        arg0->unk330 = (u16) (arg0->unk330 | 0xF80);
    }
    arg0->unk2BA0 = GetSize__C8Rucksack(arg0->unk8C + 0x1C38);
    var_r5_2 = arg0 + 0x2BB0;
    var_r4_2 = 7;
    do {
        __12RucksackItem(&sp0);
        *var_r5_2 = sp0;
        var_r5_2 += 4;
        var_r4_2 -= 1;
    } while (var_r4_2 >= 0);
    var_r1_3 = 8;
    var_r0_4 = arg0 + 0x2BAF;
    do {
        *var_r0_4 = 0;
        var_r0_4 -= 1;
        var_r1_3 -= 1;
    } while (var_r1_3 >= 0);
    arg0->unk33D0 = 0;
    return arg0;
}
