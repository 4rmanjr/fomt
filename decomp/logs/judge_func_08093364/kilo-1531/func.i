# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093364/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093364/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093364/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093364/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093364/kilo-1531/func.c" 2
void *__builtin_new(s32);
s32 func_0800050C(s32);
s32 func_08000540(s32, s32);
s32 func_08008724();
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088DC(void *);
s16 *func_08008918(void *);
s32 func_08008920(void *);
void *func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08008E64(s32, s32, s32);
s32 func_08008EB8(s32, s32, s32);
s32 func_08009300(void *, s16 *);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_08050D34(void *);
s32 func_08050D3C(void *, s32, s32, s16 *, void *, s32, void *);
s32 func_08050D5C(void *);
s32 func_08050D8C(void *, ? *);
u8 func_08050DF0(void *);
s32 func_08050E30(void *, ? *, ? *, ? *, s32, s32, s32);
s32 func_08050E50(void *, s32);
s32 func_08050E68(void *, s32);
s32 func_08094844(s32);
s32 func_080948E0(s32);
s32 func_080948EC(s32);
s32 func_080948FC(s32);
s32 func_08094900(s32);
s32 func_08094904(s32);
s32 func_08094908(s32);
s32 func_0809490C(s32);
s32 func_08094910(s32);
s32 func_08094940(s32, s32 *);
s32 func_0809494C(s32, s32 *);
s32 func_0809495C(s32, s32 *);
s32 func_0809496C(s32);
s32 func_0809FE3C(s32, s32);
s32 func_080D02EC();
s32 func_080D100C(s32, ? *);
s32 memcpy(s32 *, s32 *, u32);
s32 memmove(s32, s32, s32);
u32 strlen(s32 *);
extern ? func_080D0704;
extern s32 gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 gUnk_080F9F78;
extern ? gUnk_0810058C;
extern ? gUnk_08100590;
extern ? gUnk_08100610;
extern ? gUnk_08100638;
extern ? gUnk_08100678;
extern ? gUnk_081006C4;
extern ? gUnk_0810073C;
extern ? gUnk_08100758;
extern ? gUnk_08100790;
extern ? vtable_unk_080E5B80;

void func_08093364(void *arg0) {
    s16 sp10;
    void *sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp30;
    s32 sp40;
    s32 sp50;
    s32 sp54;
    void *sp58;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r1;
    s16 *temp_r5_2;
    s32 *temp_r6_3;
    s32 *temp_r6_4;
    s32 *temp_r6_5;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_8;
    s32 temp_r1_3;
    s32 temp_r4_11;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 var_r0_3;
    s8 *var_r0_2;
    s8 *var_r1_2;
    u32 temp_r0_7;
    u32 temp_r0_9;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u8 *var_r0;
    u8 temp_r0_10;
    u8 var_r1;
    void *temp_r0_14;
    void *temp_r0_6;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_12;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;

    func_08008724();
    temp_r0 = func_08008918(arg0);
    sp10 = 0x1D40;
    temp_r0->unk8 = 0x1D40;
    temp_r0_2 = func_08008918(arg0);
    sp10 = 0x1E41;
    temp_r0_2->unkA = 0x1E41;
    temp_r0_3 = func_08008918(arg0);
    sp10 = 0x1F42;
    temp_r0_3->unkC = 0x1F42;
    func_08008EB8(-1, 0x0600F000, 0x800);
    func_08008EB8(-1, 0x0600F800, 0x800);
    func_08008EB8(0, 0x06007FE0, 0x8000);
    temp_r0_4 = func_08008918(arg0);
    sp10 = 0x1640;
    *temp_r0_4 = 0x1640;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600F800, 0x800);
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    func_08008EB8(0x03FF03FF, 0x0600F000, 0x800);
    temp_r4 = arg0 + 0x1D0;
    func_08050D5C(temp_r4);
    func_08050E50(temp_r4, 0x38);
    func_08050E68(temp_r4, func_0809FE3C(arg0->unk1CC + 0x1CD4, 0x1F));
    func_080D100C(7, &func_080D0704);
    func_0800050C(0x80);
    func_08000540(0, 0x80);
    temp_r0_5 = func_08008918(arg0);
    sp10 = 0x3F;
    temp_r0_5->unk50 = 0x3F;
    temp_r4_2 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_2->unk0 = 0;
    temp_r4_2->unk4 = 0;
    temp_r4_2->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4_2 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp14 = temp_r4_2;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_6 = func_08008940(arg0);
    temp_r0_6->unk8->unk10(temp_r0_6, sp14);
    sp50 = 0;
loop_1:
    func_080087C8(arg0);
    func_080088B8(arg0);
    temp_r1_2 = arg0 + 8;
    arg0->unk8->unkC(temp_r1_2);
    temp_r2 = arg0 + 0x1D0;
    arg0->unk1D8 = func_08050D34(temp_r2);
    temp_sb = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5_2 = func_08008918(arg0);
    temp_r4_3 = func_08008940(arg0);
    arg0->unk1DC = func_08050D3C(temp_r2, temp_sb, temp_r6, temp_r5_2, temp_r4_3, func_0800894C(arg0), arg0 + 0x1D4);
    sp58 = temp_r1_2;
    if (arg0->unk3EC != 0) {
        arg0->unk3EC = 0U;
        temp_r0_7 = arg0->unk3E8;
        switch (temp_r0_7) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
            break;
        case 6:
            temp_r0_8 = arg0->unk8->unk18(sp58);
            switch (temp_r0_8) {
            case 1:
                temp_r4_4 = arg0 + 0x1D0;
                func_08050D8C(temp_r4_4, &gUnk_08100610);
                func_08050E50(temp_r4_4, 0x38);
                break;
            case 2:
                temp_r4_5 = arg0 + 0x1D0;
                func_08050D8C(temp_r4_5, &gUnk_08100638);
                func_08050E50(temp_r4_5, 0x3A);
                break;
            case 3:
                temp_r4_6 = arg0 + 0x1D0;
                func_08050D8C(temp_r4_6, &gUnk_08100678);
                func_08050E50(temp_r4_6, 0x3A);
                break;
            }
            break;
        }
    }
    temp_r0_9 = arg0->unk3E8;
    switch (temp_r0_9) {
    case 0:
        temp_r4_7 = arg0 + 0x1D0;
        func_08050D8C(temp_r4_7, &gUnk_081006C4);
        func_08050E50(temp_r4_7, 0x38);
        var_r1 = 1;
        arg0->unk3E8 = 1U;
        var_r0 = arg0 + 0x3EC;
block_52:
        *var_r0 = var_r1;
        break;
    case 1:
        if (arg0->unk1DC != 3) {

        } else {
            arg0->unk3E8 = 2U;
            var_r1_2 = arg0 + 0x3EC;
block_28:
            *var_r1_2 = 1;
        }
        break;
    case 2:
        temp_r4_8 = arg0 + 0x1D0;
        func_08050E30(temp_r4_8, &gUnk_0810073C, &gUnk_0810058C, &gUnk_08100590, 0, 0, 0);
        func_08050E50(temp_r4_8, 0x39);
        arg0->unk3E8 = 3U;
        var_r1_2 = arg0 + 0x3EC;
        goto block_28;
    case 3:
        if (arg0->unk1DC != 3) {

        } else {
            temp_r4_9 = arg0 + 0x1D0;
            temp_r0_10 = func_08050DF0(temp_r4_9);
            switch (temp_r0_10) {
            case 1:
                arg0->unk3E8 = 4U;
                arg0->unk3EC = temp_r0_10;
                break;
            case 2:
                func_08050D8C(temp_r4_9, &gUnk_08100758);
                func_08050E50(temp_r4_9, 0x3A);
                arg0->unk3E8 = 7U;
                var_r0_2 = arg0 + 0x3EC;
block_49:
                *var_r0_2 = 1;
                arg0->unk1C4 = 1;
                break;
            }
        }
        break;
    case 4:
        func_08094844(arg0->unk1C8);
        sp54 = func_080948E0(arg0->unk1C8);
        temp_sl = func_080948EC(arg0->unk1C8);
        temp_sb_2 = func_080948FC(arg0->unk1C8);
        temp_r8 = func_08094900(arg0->unk1C8);
        temp_r6_2 = func_08094904(arg0->unk1C8);
        temp_r5_3 = func_08094908(arg0->unk1C8);
        arg0->unk8->unk8(sp58, sp54, temp_sl, temp_sb_2, temp_r8, temp_r6_2, temp_r5_3, func_0809490C(arg0->unk1C8));
        arg0->unk3E8 = 5U;
        var_r1_2 = arg0 + 0x3EC;
        goto block_28;
    case 5:
        arg0->unk3EC = 1U;
        if ((arg0->unk8->unk14(sp58) << 0x18) == 0) {

        } else {
            temp_r0_11 = arg0->unk8->unk18(sp58);
            if (temp_r0_11 != 0) {
                arg0->unk3E8 = 6U;
                arg0->unk3EC = 1U;
            } else {
                temp_r4_10 = arg0 + 0x1D0;
                func_08050D8C(temp_r4_10, &gUnk_08100790);
                func_08050E50(temp_r4_10, 0x39);
                arg0->unk3E8 = 7U;
                arg0->unk3EC = 1U;
                arg0->unk1C4 = temp_r0_11;
                (arg0->unk1CC + 0x21CC)->unk4 = func_08094910(arg0->unk1C8);
                temp_r0_12 = func_0809496C(arg0->unk1C8);
                var_r0_3 = arg0->unk1CC + 0x21D4;
                temp_r5_4 = temp_r0_12 + 8;
                if (temp_r5_4 != temp_r0_12) {
                    temp_r4_11 = temp_r5_4 - temp_r0_12;
                    var_r0_3 = memmove(var_r0_3, temp_r0_12, temp_r4_11) + temp_r4_11;
                }
                sp18 = temp_r5_4;
                sp1C = var_r0_3;
                memcpy(&sp18, &sp18, 8U);
                func_08094940(arg0->unk1C8, &sp20);
                temp_r6_3 = arg0->unk1CC + 0x21E0;
                var_r4 = strlen(&sp20);
                if (var_r4 > 0xEU) {
                    var_r4 = 0xE;
                }
                memcpy(temp_r6_3, &sp20, var_r4);
                *(temp_r6_3 + var_r4) = 0;
                func_0809494C(arg0->unk1C8, &sp30);
                temp_r6_4 = arg0->unk1CC + 0x21F0;
                var_r4_2 = strlen(&sp30);
                if (var_r4_2 > 0xEU) {
                    var_r4_2 = 0xE;
                }
                memcpy(temp_r6_4, &sp30, var_r4_2);
                *(temp_r6_4 + var_r4_2) = 0;
                func_0809495C(arg0->unk1C8, &sp40);
                temp_r6_5 = arg0->unk1CC + 0x2200;
                var_r4_3 = strlen(&sp40);
                if (var_r4_3 > 0xEU) {
                    var_r4_3 = 0xE;
                }
                memcpy(temp_r6_5, &sp40, var_r4_3);
                *(temp_r6_5 + var_r4_3) = 0;
            }
        }
        break;
    case 6:
        temp_r4_12 = arg0 + 0x1D0;
        if (func_08050D34(temp_r4_12) == 3) {
            temp_r0_13 = arg0->unk8->unk18(sp58);
            if (temp_r0_13 != 2) {
                if (temp_r0_13 == 3) {
                    func_08050D8C(temp_r4_12, &gUnk_08100610);
                    func_08050E50(temp_r4_12, 0x38);
                    arg0->unk3E8 = 7U;
                    arg0->unk3EC = 1U;
                    arg0->unk1C4 = 2;
                } else {
                    goto block_48;
                }
            } else {
                func_08050D8C(temp_r4_12, &gUnk_08100610);
                func_08050E50(temp_r4_12, 0x38);
block_48:
                arg0->unk3E8 = 7U;
                var_r0_2 = arg0 + 0x3EC;
                goto block_49;
            }
        }
        break;
    case 7:
        if (arg0->unk1DC == 3) {
            func_080D02EC();
            sp50 = 1;
            func_08009378(sp14 + 0xC, 0x889, 1, 1);
            temp_r0_14 = func_08008940(arg0);
            temp_r0_14->unk8->unk10(temp_r0_14, sp14);
            arg0->unk3E8 = 8U;
            var_r0 = arg0 + 0x3EC;
            var_r1 = sp50;
            goto block_52;
        }
        break;
    }
    arg0->unk8->unk10(sp58);
    temp_r1_3 = sp14->unk0;
    if (sp50 == 0) {
        goto loop_1;
    }
    if (((u32) ((0 - temp_r1_3) | temp_r1_3) >> 0x1F) != 0) {
        goto loop_1;
    }
    sp14->unk8->unkC(sp14, 3);
}
