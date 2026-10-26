# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08082F50/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08082F50/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08082F50/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08082F50/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08082F50/opencode/func.c" 2
s32 AddAmountOfTool__8RucksackUiUi(s32, s32, s32);
s32 AddAmountOf__9ToolChestUiUi(s32, s32, s32);
s8 GetArticle__C12RucksackItem();
s32 GetAvailableSpaceForTool__C8RucksackUi(s32, s32);
u32 GetFirstSlotWithArticle__C8RucksackUi(s32, s32);
s32 GetId__C4Tool();
s32 GetId__C7Article();
s32 *GetItemAt__8RucksackUi(s32, u32);
u32 GetSize__C8Rucksack(s32);
s32 GetToolAt__8RucksackUi(s32, u32);
s8 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);
s32 __12RucksackItem(s32 *);
s32 __4ToolUi(u8 *, s32);
s32 __9ToolStackG4ToolUi(s32 *, u8, s32);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088CC(void *);
void *func_08008940(void *);
s32 func_08009378(void *, s32, s32, s32);
s32 func_0800EB2C(s32, s32);
s32 func_0800EB34(s32, ? *);
s32 func_0800EFB4(s32, s32);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
s8 func_0800F258(s32);
s32 func_0800F390(s32);
s32 func_08050DF0(void *);
s32 func_08050E0C(void *, ? *, ? *, s32);
s32 func_08050E50(void *, s32);
s32 func_08050E5C(void *);
s32 func_0808268C(void *);
s32 func_08082C14(void *, s32);
s32 func_0809ACC0(s32, s32);
s32 func_0809EE20(s32, s32, s32);
s32 func_080C8550(void *);
s32 func_080C9020(void *, s32);
s32 func_080C96C4(void *);
s32 func_080CABA0(void *, ? *);
s32 memcpy(s32 *, ? *, s32);
s32 memmove(void *, void *, s32);
extern ? gUnk_080FED8C;
extern ? gUnk_080FF15C;
extern ? gUnk_080FF178;
extern ? gUnk_080FF1A0;
extern ? gUnk_080FF1B0;
extern ? gUnk_080FF200;
extern ? gUnk_080FF228;
extern ? gUnk_080FF230;
extern ? gUnk_080FF240;
extern ? gUnk_080FF270;
extern ? gUnk_080FF29C;
extern ? gUnk_080FF2EC;

s32 sub_08082F50(s32 arg4, s32 arg8, s32 argA, void *argE, s32 argF, ? arg10, ? arg12, u8 arg14, s8 arg15, s8 arg16, s8 arg17) {
    ? *temp_r5;
    s32 *temp_r4_3;
    s32 *var_r1;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 temp_r6;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r4_3;
    s32 var_r5_2;
    s32 var_r6;
    u32 temp_r0;
    u32 temp_r0_5;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r3;
    u32 temp_r5_2;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r5;
    void *temp_r0_10;
    void *temp_r0_3;
    void *temp_r0_7;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;

    func_080087C8(saved_reg_r7);
    func_080088B8(saved_reg_r7);
    temp_r1 = argE->unk0;
    if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {
        if (saved_reg_r8 != 0) {
            argE->unk8->unkC(argE, 3);
            return 0;
        }
        temp_r0 = saved_reg_r7->unk6A4;
        switch (temp_r0) {
        case 0:
        case 0:
            temp_r1_2 = saved_reg_r7->unk10;
            if (saved_reg_r7->unk14 != temp_r1_2) {
                func_08082C14(saved_reg_r7, ((temp_r1_2 * 4) + saved_reg_r7)->unk2A8);
            }
            if (saved_reg_r7->unk6A1 == 0) {
                if (func_080088CC(saved_reg_r7) & 2) {
                    if (saved_reg_r7->unk6A8 != 0) {
                        func_080CABA0(saved_reg_r7, &gUnk_080FF15C);
                    } else {
                        func_080CABA0(saved_reg_r7, &gUnk_080FF178);
                    }
                    func_08050E50(saved_reg_r7 + 0x348, 0xA8);
                    saved_reg_r7->unk6A4 = 0xBU;
                }
                goto block_17;
            }
            temp_r3 = ((saved_reg_r7->unk10 * 4) + saved_reg_r7)->unk2A8;
            temp_r1_3 = (temp_r3 * 0x14) + &gUnk_080FED8C;
            arg8.unk0 = temp_r1_3->unk0;
            arg8.unk4 = (s32) temp_r1_3->unk4;
            arg8.unk8 = (s32) temp_r1_3->unk8;
            arg8.unkC = (s32) temp_r1_3->unkC;
            (&arg8 + 0xC)->unk4 = (s32) (temp_r1_3 + 0xC)->unk4;
            if (temp_r3 > 0xAU) {
block_17:
                saved_reg_r7->unk14 = (s32) saved_reg_r7->unk10;
                func_080C9020(saved_reg_r7, saved_reg_r7->unk2A4);
                goto block_128;
            }
            switch (*(0x08083044 + (temp_r3 * 4))) {
            case 1:
            case 1:
                temp_r1_4 = (((saved_reg_r7->unk10 * 4) + saved_reg_r7)->unk2A8 * 0x14) + &gUnk_080FED8C;
                arg8.unk0 = temp_r1_4->unk0;
                arg8.unk4 = (s32) temp_r1_4->unk4;
                arg8.unk8 = (s32) temp_r1_4->unk8;
                arg8.unkC = (s32) temp_r1_4->unkC;
                (&arg8 + 0xC)->unk4 = (s32) (temp_r1_4 + 0xC)->unk4;
                func_0809ACC0(saved_reg_r7->unk8 + 0x1AA8, argA);
                func_080C8550(saved_reg_r7);
                if ((IsEmpty__C9ToolStack(saved_reg_r7->unk8 + 0x1C34) << 0x18) != 0) {
                    temp_r5 = saved_reg_r7->unk8 + 0x1C34;
                    __4ToolUi(&arg14, arg8);
                    __9ToolStackG4ToolUi(saved_reg_r9, arg14, 1);
                    memcpy(temp_r5, saved_reg_r9, 2);
                    goto block_22;
                }
                if (GetAvailableSpaceForTool__C8RucksackUi(saved_reg_r7->unk8 + 0x1C38, arg8) != 0) {
                    AddAmountOfTool__8RucksackUiUi(saved_reg_r7->unk8 + 0x1C38, arg8, 1);
block_22:
                    func_080CABA0(saved_reg_r7, &gUnk_080FF1A0);
                } else {
                    AddAmountOf__9ToolChestUiUi(saved_reg_r7->unk8 + 0x380, arg8, 1);
                    func_080CABA0(saved_reg_r7, &gUnk_080FF1B0);
                }
                func_08050E50(saved_reg_r7 + 0x348, 0xA9);
                temp_r1_5 = saved_reg_r7 + 0x2A4;
                temp_r3_2 = temp_r1_5 + ((saved_reg_r7->unk10 * 4) + 4);
                temp_r0_2 = saved_reg_r7->unk2A4;
                if (temp_r0_2 != 0) {
                    temp_r0_3 = temp_r1_5 + ((temp_r0_2 * 4) + 4);
                    temp_r1_6 = temp_r3_2 + 4;
                    if ((temp_r1_6 != temp_r0_3) && (temp_r0_3 != temp_r1_6)) {
                        memmove(temp_r3_2, temp_r1_6, temp_r0_3 - temp_r1_6);
                    }
                    saved_reg_r7->unk2A4 = (s32) (saved_reg_r7->unk2A4 - 1);
                }
                func_0808268C(saved_reg_r7);
                saved_reg_r7->unk6A8 = 1U;
                saved_reg_r7->unk10 = 0;
                saved_reg_r7->unk14 = -1;
                saved_reg_r7->unk6A4 = 2U;
                goto block_128;
            case 2:
            case 2:
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    func_080CABA0(saved_reg_r7, &gUnk_080FF200);
                    func_08050E50(saved_reg_r7 + 0x348, 0xA8);
                    var_r1 = saved_reg_r7 + 0x6A4;
block_91:
                    *var_r1 = 4;
                }
                goto block_128;
            case 3:
            case 3:
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    func_080CABA0(saved_reg_r7, &gUnk_080FF200);
                    var_r1 = saved_reg_r7 + 0x6A4;
                    goto block_91;
                }
                goto block_128;
            case 4:
            case 4:
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    func_08050E5C(saved_reg_r7 + 0x348);
                    saved_reg_r7->unk6A4 = 0U;
                    saved_reg_r7->unk14 = -1;
                }
                goto block_128;
            case 5:
            case 5:
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    temp_r4 = saved_reg_r7 + 0x348;
                    arg4 = 0;
                    arg5 = 0;
                    arg6 = 0;
                    arg7 = 0;
                    func_08050E0C(temp_r4, &gUnk_080FF228, &gUnk_080FF230, 0);
                    func_08050E5C(temp_r4);
                    saved_reg_r7->unk6A4 = 6U;
                }
                goto block_128;
            case 6:
            case 6:
                temp_r5_2 = saved_reg_r7->unk350;
                if (temp_r5_2 != 3) {

                } else {
                    temp_r4_2 = saved_reg_r7 + 0x348;
                    temp_r0_4 = func_08050DF0(temp_r4_2);
                    switch (temp_r0_4) {
                    case 2:
                        func_080CABA0(saved_reg_r7, &gUnk_080FF270);
                        func_08050E50(temp_r4_2, 0xA8);
                        saved_reg_r7->unk6A4 = temp_r5_2;
                        break;
                    case 1:
                        func_080CABA0(saved_reg_r7, &gUnk_080FF240);
                        func_08050E50(temp_r4_2, 0xA8);
                        temp_r0_5 = ((saved_reg_r7->unk10 * 4) + saved_reg_r7)->unk2A8 - 4;
                        switch (temp_r0_5) {
                        case 0:
                            func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, 0x23, saved_reg_r7->unk48E4);
                            break;
                        case 1:
                            func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, 0x24, saved_reg_r7->unk48E4);
                            break;
                        case 2:
                            func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, 0x25, saved_reg_r7->unk48E4);
                            break;
                        case 3:
                            func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, 0x20, saved_reg_r7->unk48E4);
                            break;
                        case 4:
                            func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, 0x21, saved_reg_r7->unk48E4);
                            break;
                        case 5:
                            func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, 0x1F, saved_reg_r7->unk48E4);
                            break;
                        case 6:
                            func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, 0x22, saved_reg_r7->unk48E4);
                            break;
                        }
                        saved_reg_r7->unk6A4 = 0xAU;
                        saved_reg_r7->unk6A8 = 1U;
                        break;
                    }
                }
                goto block_128;
            case 8:
            case 8:
                if (saved_reg_r7->unk350 != 3) {

                } else {
                    if (((IsEmpty__C9ToolStack(saved_reg_r7->unk8 + 0x1C34) << 0x18) != 0) || (arg4.unk41 = GetTool__C9ToolStack(saved_reg_r7->unk8 + 0x1C34), (GetId__C4Tool() > 0x2F))) {
                        var_r4 = 0;
loop_68:
                        if (var_r4 < GetSize__C8Rucksack(saved_reg_r7->unk8 + 0x1C38)) {
                            GetToolAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, var_r4);
                            if (((IsEmpty__C9ToolStack() << 0x18) != 0) || (GetToolAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, var_r4), arg4.unk42 = GetTool__C9ToolStack(), (GetId__C4Tool() > 0x2F))) {
                                var_r4 += 1;
                                goto loop_68;
                            }
                        }
                        if (var_r4 == GetSize__C8Rucksack(saved_reg_r7->unk8 + 0x1C38)) {
                            func_080CABA0(saved_reg_r7, &gUnk_080FF29C);
                            func_08050E50(saved_reg_r7 + 0x348, 0xA8);
                            var_r1 = saved_reg_r7 + 0x6A4;
                            goto block_91;
                        }
                        goto block_71;
                    }
block_71:
                    if (((func_0800F190(saved_reg_r7->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(saved_reg_r7->unk8 + 0x1C2C) == 1)) {
                        var_r5 = 0;
                        arg4.unk43 = func_0800F258(saved_reg_r7->unk8 + 0x1C2C);
                        if (GetId__C7Article() != 0x12) {
                            arg15 = func_0800F258(saved_reg_r7->unk8 + 0x1C2C);
                            if (GetId__C7Article() != 0x13) {
                                arg4.unk45 = func_0800F258(saved_reg_r7->unk8 + 0x1C2C);
                                if (GetId__C7Article() != 0x14) {
                                    arg4.unk46 = func_0800F258(saved_reg_r7->unk8 + 0x1C2C);
                                    if (GetId__C7Article() != 0x15) {
                                        arg4.unk47 = func_0800F258(saved_reg_r7->unk8 + 0x1C2C);
                                        temp_r0_6 = GetId__C7Article() ^ 0x1C;
                                        var_r5 = (u32) ((0 - temp_r0_6) | temp_r0_6) >> 0x1F;
                                    }
                                }
                            }
                        }
                        if (var_r5 != 0) {
                            goto block_79;
                        }
                        goto block_92;
                    }
block_79:
                    var_r4_2 = 0;
loop_88:
                    if (var_r4_2 < GetSize__C8Rucksack(saved_reg_r7->unk8 + 0x1C38)) {
                        var_r6 = 0;
                        GetItemAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, var_r4_2);
                        arg16 = GetArticle__C12RucksackItem();
                        if ((GetId__C7Article() == 0x12) || (GetItemAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, var_r4_2), arg4.unk49 = GetArticle__C12RucksackItem(), (GetId__C7Article() == 0x13)) || (GetItemAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, var_r4_2), arg4.unk4A = GetArticle__C12RucksackItem(), (GetId__C7Article() == 0x14)) || (GetItemAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, var_r4_2), arg4.unk4B = GetArticle__C12RucksackItem(), (GetId__C7Article() == 0x15)) || (GetItemAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, var_r4_2), arg17 = GetArticle__C12RucksackItem(), (GetId__C7Article() == 0x1C))) {
                            var_r6 = 1;
                        }
                        if (var_r6 == 0) {
                            var_r4_2 += 1;
                            goto loop_88;
                        }
                    }
                    if (var_r4_2 == GetSize__C8Rucksack(saved_reg_r7->unk8 + 0x1C38)) {
                        func_080CABA0(saved_reg_r7, &gUnk_080FF2EC);
                        func_08050E50(saved_reg_r7 + 0x348, 0xA8);
                        var_r1 = saved_reg_r7 + 0x6A4;
                        goto block_91;
                    }
block_92:
                    func_08009378(argE + 0xC, 0x889, 1, 1);
                    temp_r0_7 = func_08008940(saved_reg_r7);
                    temp_r0_7->unk8->unk10(temp_r0_7, argE);
                    saved_reg_r7->unk6A4 = 0xCU;
                }
                goto block_128;
            case 9:
            case 9:
                temp_r0_8 = saved_reg_r7->unk48DC - 0x12;
                switch (temp_r0_8) {
                case 1:
                    var_r4_3 = 1;
                    break;
                case 2:
                    var_r4_3 = 2;
                    break;
                case 3:
                    var_r4_3 = 3;
                    break;
                case 10:
                    var_r4_3 = 4;
                    break;
                default:
                    var_r4_3 = 0;
                    break;
                }
                func_0809EE20(saved_reg_r7->unk8 + 0x1DAC, (((u32) saved_reg_r7->unk48D8 >> 3) * 5) + var_r4_3 + 1, saved_reg_r7->unk48E4);
                var_r2 = 1;
                temp_r0_9 = (u32) saved_reg_r7->unk48D8 >> 3;
                switch (temp_r0_9) {
                case 0:
                    var_r2 = 1;
                    break;
                case 1:
                    var_r2 = 0;
                    break;
                case 2:
                    var_r2 = 2;
                    break;
                case 3:
                    var_r2 = 3;
                    break;
                case 4:
                    var_r2 = 4;
                    break;
                case 5:
                    var_r2 = 5;
                    break;
                }
                if (!(saved_reg_r7->unk48D8 & 7)) {
                    func_0800EFB4(func_0800EB2C(saved_reg_r7->unk8 + 0x1BD8, var_r2), var_r4_3 + 1);
                }
                saved_reg_r7->unk6A4 = 0xAU;
                goto block_128;
            case 10:
            case 10:
                var_r5_2 = 0;
                if (((func_0800F190(saved_reg_r7->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(saved_reg_r7->unk8 + 0x1C2C) == 1)) {
                    arg4.unk4D = func_0800F258(saved_reg_r7->unk8 + 0x1C2C);
                    var_r2_2 = 0;
                    if (GetId__C7Article() == saved_reg_r7->unk48DC) {
                        var_r2_2 = 1;
                    }
                    if (var_r2_2 != 0) {
                        var_r5_2 = 1;
                    }
                }
                if (var_r5_2 != 0) {
                    func_0800F390(saved_reg_r7->unk8 + 0x1C2C);
                } else {
                    temp_r4_3 = GetItemAt__8RucksackUi(saved_reg_r7->unk8 + 0x1C38, GetFirstSlotWithArticle__C8RucksackUi(saved_reg_r7->unk8 + 0x1C38, saved_reg_r7->unk48DC));
                    __12RucksackItem(&argF);
                    *temp_r4_3 = argF;
                }
                func_0809ACC0(saved_reg_r7->unk8 + 0x1AA8, saved_reg_r7->unk48E0);
                func_080C8550(saved_reg_r7);
                temp_r6 = saved_reg_r7->unk8 + 0x1BD8;
                arg12.unk0 = (u16) ((0xFFFFFC00 & arg12.unk0) | 7);
                arg12.unk1 = (u8) ((3 & arg12.unk1) | 0xA0);
                arg12.unk2 = (u16) ((0xFFFFFC00 & arg12.unk2) | 4);
                arg12.unk3 = (u8) ((3 & arg12.unk3) | 0xE0);
                arg12.unk4 = (u16) ((0xFFFFFC00 & arg12.unk4) | 1);
                memcpy(&arg10, &arg12, 6);
                arg10.unk6 = 0;
                func_0800EB34(temp_r6, &arg10);
                func_080CABA0(saved_reg_r7, &gUnk_080FF240);
                func_08050E50(saved_reg_r7 + 0x348, 0xA8);
                saved_reg_r7->unk6A4 = 0xBU;
                goto block_128;
            case 11:
            case 11:
                if (saved_reg_r7->unk350 == 3) {
                    temp_r1_7 = argE->unk0;
                    if ((s32) ((0 - temp_r1_7) | temp_r1_7) >= 0) {
                        func_08009378(argE + 0xC, 0x889, 1, 1);
                        temp_r0_10 = func_08008940(saved_reg_r7);
                        temp_r0_10->unk8->unk10(temp_r0_10, argE);
                    }
                }
                goto block_128;
            case 12:
            case 12:
                temp_r1_8 = argE->unk0;
                if ((s32) ((0 - temp_r1_8) | temp_r1_8) >= 0) {
                    if (saved_reg_r7->unk6A8 != 0) {
                        argE->unk8->unkC(argE, 3);
                        return 2;
                    }
                    argE->unk8->unkC(argE, 3);
                    return 1;
                }
                goto block_128;
            }
            break;
        }
    } else {
    default:
    case 7:
block_128:
        func_080C96C4(saved_reg_r7);
        return sub_08082F50();
    }
}
