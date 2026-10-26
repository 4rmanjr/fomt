# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08088688/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08088688/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08088688/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08088688/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08088688/kilo-1531/func.c" 2
s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);
u32 GetAmount__C9FoodStack(s32 *);
s32 *GetFoodStackAt__6FridgeUi(s32, s32);
s32 GetFood__C9FoodStack(s32 *, s32 *);
u16 GetIconId__C4Food(s32 *);
s32 GetId__C4Food(s32 *);
s32 *GetItemAt__8RucksackUi(s32, s32);
s32 IsEmpty__C9FoodStack(s32 *);
s32 SubtractAmount__9FoodStackUi(s32 *, s32);
s32 __9FoodStackG4FoodUi(s32 *, s32, s32);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
s32 func_0800F20C(s32 *, s32);
s32 func_0800F294(s32 *, s32);
s32 func_0800F388(s32);
s32 func_0800F390(s32);
s32 func_0800F3B0(s32, s32);
s32 func_0800F418(s32);
s32 func_08050DC8(void *, ? *, s32, s32);
void *func_080CB2E8(s32, s32);
void *func_080CB2FC(s32, s32);
s32 func_080CB63C(s32, s32, s32, s32);
s32 func_080CBA60(s32, s32);
s32 func_080CBAF0(s32, ? *, u16, s32);
s32 func_080CBDD4(s32, s32, s32, s32);
s32 func_080CC0B4(s32);
s32 func_080CC728(s32, s32, ? *, u16);
s32 func_080CCD48(s32, s32, u32);
s32 func_080CCDEC(s32, s32);
s32 func_080CE184(void *, s32, s32);
s32 memcpy(s32 *, s32 *, s32);
extern ? gUnk_08100034;
extern ? gUnk_086678A0;

u8 func_08088688(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
s32 sp18;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 *temp_r6;
    s32 *temp_r6_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 var_r1;
    s32 var_r1_2;
    u16 temp_r3;
    u16 temp_r3_2;
    u32 temp_r0_4;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r0_6;

    sp28 = arg2;
    sp2C = 1;
    if (arg1 == 0) {

    } else if (arg1 > 8) {
        sp30 = func_080CE184(arg0, arg1, sp28);
        sp4 = *GetFoodStackAt__6FridgeUi(arg0->unk104, sp30);
        if ((func_0800F190(arg0->unkFC) << 0x18) != 0) {
            if ((IsEmpty__C9FoodStack(&sp4) << 0x18) != 0) {

            } else {
                temp_r5 = arg0->unkFC;
                GetFood__C9FoodStack(&sp8, &sp4);
                func_0800F3B0(temp_r5, (sp0.unkA << 0x10) | ((sp0.unk9 << 8) | sp8));
                SubtractAmount__9FoodStackUi(GetFoodStackAt__6FridgeUi(arg0->unk104, sp30), 1);
                temp_r5_2 = arg0->unk78;
                GetFood__C9FoodStack(&sp8, &sp4);
                func_080CBAF0(temp_r5_2, &gUnk_086678A0, GetIconId__C4Food(&sp8), 1);
                if (arg0->unk94->unkBC != sp28) {

                } else {
                    GetFoodStackAt__6FridgeUi(arg0->unk104, sp30);
                    if ((IsEmpty__C9FoodStack() << 0x18) != 0) {
                        temp_r4 = arg0->unk7C;
                        func_080CCDEC(temp_r4, func_080CE184(arg0, arg1, 0));
                    } else {
                        temp_r5_3 = arg0->unk7C;
                        temp_r4_2 = func_080CE184(arg0, arg1, 0);
                        GetFoodStackAt__6FridgeUi(arg0->unk104, sp30);
                        func_080CCD48(temp_r5_3, temp_r4_2, GetAmount__C9FoodStack());
                    }
                }
            }
        } else {
            temp_r0 = func_0800F204(arg0->unkFC);
            if (temp_r0 > 4) {

            } else if (temp_r0 >= 1) {
                sp2C = 0;
            } else if (temp_r0 != 0) {

            } else {
                func_0800F20C(&sp8, arg0->unkFC);
                if ((IsEmpty__C9FoodStack(&sp4) << 0x18) != 0) {
                    if ((func_0800F388(arg0->unkFC) << 0x18) == 0) {
                        func_0800F390(arg0->unkFC);
                        temp_r6 = GetFoodStackAt__6FridgeUi(arg0->unk104, sp30);
                        memcpy(&sp10, &sp8, 3);
                        __9FoodStackG4FoodUi(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10), 1);
                        *temp_r6 = spC;
                        func_080CC0B4(arg0->unk78);
                        if (arg0->unk94->unkBC == sp28) {
                            temp_r5_4 = arg0->unk7C;
                            temp_r4_3 = func_080CE184(arg0, arg1, 0);
                            temp_r3 = GetIconId__C4Food(&sp8);
                            sp0 = sp2C;
                            func_080CC728(temp_r5_4, temp_r4_3, &gUnk_086678A0, temp_r3);
                        }
                    } else {
                        func_08050DC8(arg0 + 0x80, &gUnk_08100034, 0, 0);
                        arg0->unk108 = sp2C;
                        goto block_49;
                    }
                } else if (GetAmount__C9FoodStack(&sp4) > 1U) {
block_49:
                    sp2C = 0;
                } else if ((func_0800F388(arg0->unkFC) << 0x18) == 0) {
                    func_0800F390(arg0->unkFC);
                    temp_r4_4 = arg0->unkFC;
                    GetFood__C9FoodStack(&spC, &sp4);
                    func_0800F3B0(temp_r4_4, (sp0.unkE << 0x10) | ((sp0.unkD << 8) | spC));
                    temp_r6_2 = GetFoodStackAt__6FridgeUi(arg0->unk104, sp30);
                    memcpy(&sp10, &sp8, 3);
                    __9FoodStackG4FoodUi(&spC, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | sp10), 1);
                    *temp_r6_2 = spC;
                    temp_r4_5 = arg0->unk78;
                    GetFood__C9FoodStack(&spC, &sp4);
                    func_080CBAF0(temp_r4_5, &gUnk_086678A0, GetIconId__C4Food(&spC), 1);
                    if (arg0->unk94->unkBC != sp28) {

                    } else {
                        temp_r5_5 = arg0->unk7C;
                        temp_r4_6 = func_080CE184(arg0, arg1, 0);
                        temp_r3_2 = GetIconId__C4Food(&sp8);
                        sp0 = sp2C;
                        func_080CC728(temp_r5_5, temp_r4_6, &gUnk_086678A0, temp_r3_2);
                    }
                } else {
                    temp_r5_6 = GetId__C4Food(&sp8);
                    GetFood__C9FoodStack(&spC, &sp4);
                    temp_r0_2 = GetId__C4Food(&spC) ^ temp_r5_6;
                    if ((s32) ((0 - temp_r0_2) | temp_r0_2) < 0) {
                        func_08050DC8(arg0 + 0x80, &gUnk_08100034, 0, 0);
                        arg0->unk108 = sp2C;
                    }
                    goto block_44;
                }
            }
        }
    } else if ((func_0800F190(arg0->unkFC) << 0x18) != 0) {
        temp_r4_7 = arg0->unk78;
        temp_r0_3 = func_080CB2E8(temp_r4_7, func_080CE184(arg0, arg1, 0));
        sp4.unk0 = temp_r0_3->unk0;
        sp4.unk4 = (s32) temp_r0_3->unk4;
        sp4.unk8 = (s32) temp_r0_3->unk8;
        var_r1 = 0;
        if ((sp8 == 0) || (spC == 0)) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {

        } else {
            func_080CBDD4(arg0->unk78, sp8, spC, 1);
            temp_r4_8 = arg0->unk78;
            func_080CBA60(temp_r4_8, func_080CE184(arg0, arg1, 0));
            temp_r4_9 = arg0->unk100;
            ExtractItemAt__8RucksackUi(&sp10, temp_r4_9, func_080CE184(arg0, arg1, 0));
            sp14 = sp10;
            func_0800F418(arg0->unkFC);
        }
    } else {
        temp_r0_4 = (u32) func_0800F204(arg0->unkFC);
        switch (temp_r0_4) {
        case 0:
        case 1:
            temp_r4_10 = arg0->unk78;
            temp_r0_5 = func_080CB2E8(temp_r4_10, func_080CE184(arg0, arg1, 0));
            sp4.unk0 = temp_r0_5->unk0;
            sp4.unk4 = (s32) temp_r0_5->unk4;
            sp4.unk8 = (s32) temp_r0_5->unk8;
            temp_r0_6 = func_080CB2FC(arg0->unk78, &sp4 + 0xC);
            sp18.unk0 = (s32) temp_r0_6->unk0;
            sp18.unk4 = (s32) temp_r0_6->unk4;
            sp18.unk8 = (s32) temp_r0_6->unk8;
            var_r1_2 = 0;
            if ((sp8 == 0) || (spC == 0)) {
                var_r1_2 = 1;
            }
            if (var_r1_2 == 0) {
                func_080CBDD4(arg0->unk78, sp8, spC, 1);
                temp_r4_11 = arg0->unk78;
                temp_r1 = func_080CE184(arg0, arg1, 0);
                sp0 = 1;
                func_080CB63C(temp_r4_11, temp_r1, sp1C, sp20);
                func_0800F294(&sp10, arg0->unkFC);
                func_0800F390(arg0->unkFC);
                temp_r4_12 = arg0->unk100;
                ExtractItemAt__8RucksackUi(&sp14, temp_r4_12, func_080CE184(arg0, arg1, 0));
                temp_r4_13 = arg0->unk100;
                *GetItemAt__8RucksackUi(temp_r4_13, func_080CE184(arg0, arg1, 0)) = sp10;
                sp24 = sp14;
                func_0800F418(arg0->unkFC);
            } else {
                func_080CC0B4(arg0->unk78);
                temp_r4_14 = arg0->unk78;
                temp_r1_2 = func_080CE184(arg0, arg1, 0);
                sp0 = 1;
                func_080CB63C(temp_r4_14, temp_r1_2, sp1C, sp20);
                func_0800F294(&sp24, arg0->unkFC);
                func_0800F390(arg0->unkFC);
                temp_r4_15 = arg0->unk100;
                *GetItemAt__8RucksackUi(temp_r4_15, func_080CE184(arg0, arg1, 0)) = sp24;
            }
            break;
        case 2:
        case 3:
        case 4:
block_44:
            sp2C = 0;
            break;
        }
    }
    return sp2C;
}
