# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA9C8/Prodesk_349697/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA9C8/Prodesk_349697/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA9C8/Prodesk_349697/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA9C8/Prodesk_349697/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA9C8/Prodesk_349697/func.c" 2
void *GetMapData(s32);
s32 func_080AAE44(s32 *, void *);
extern ? gUnk_086DC54C;
extern ? gUnk_086DC57C;
extern ? gUnk_086DCC88;
extern ? gUnk_086DD690;
extern ? gUnk_086DD6B0;
extern ? gUnk_086DD6E0;
extern ? gUnk_086DDDEC;
extern ? gUnk_086DE7F4;
extern ? gUnk_086EACDC;
extern ? gUnk_086EAD64;
extern ? gUnk_086EAD84;
extern ? gUnk_086EAD8C;

void func_080AA9C8(void *arg0, void *arg1, ? arg3) {
    s32 sp0;
    s32 sp4;
s32 sp8;
    u32 spC;
    s32 sp10;
    s32 sp14;
    s8 *sp18;
    ? *var_r0_3;
    ? *var_r0_4;
    ? *var_r8;
    s16 var_r0;
    s16 var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r0_2;
    s32 var_r5;
    u16 *var_r4;
    u32 temp_r2;
    u32 var_r4_2;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r7;
    u32 var_sl;
    u8 *temp_r2_5;
    u8 *temp_r3;
    void *temp_r2_4;
    void *temp_r3_4;

    if (arg1->unk4 != arg0->unk0) {
        return;
    }
    sp0.unk0 = 0xFFFFU;
    sp0.unk2 = 0xFFU;
    var_r5 = 0;
    var_r8 = 0;
    var_sl = 0;
    spC = 0;
    sp10 = 0;
    temp_r2 = arg1->unk0;
    switch (temp_r2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        func_080AAE44(&sp4, arg0 + 0x9C);
        sp0 = sp4;
    default:
block_45:
        sp14 = (s32) GetMapData(arg0->unk4)->unk20;
        var_r0 = arg1->unk8;
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        var_r1 = arg1->unkA;
        if ((s32) var_r1 < 0) {
            var_r1 += 7;
        }
        sp8.unk0 = (s16) (var_r0 >> 3);
        sp8.unk2 = (s16) (var_r1 >> 3);
        if (var_r5 != 0) {
            sp18 = arg0 + 0x29;
            if (var_r8 != 0) {
                var_r7 = 0;
                if (spC > 0U) {
                    do {
                        var_r5_2 = 0;
                        if (var_sl > 0U) {
                            var_r4 = var_r8 + (var_r7 * var_sl * 2);
                            do {
                                temp_r2_2 = sp0.unk8 + var_r5_2 + (sp14 * (sp8.unk2 + var_r7));
                                *(arg0->unk14 + (temp_r2_2 * 2)) = *var_r4;
                                temp_r2_3 = temp_r2_2 * 4;
                                temp_r3 = temp_r2_3 + arg0->unk2C;
                                *temp_r3 |= 1;
                                temp_r2_4 = temp_r2_3 + arg0->unk2C;
                                temp_r2_4->unk2 = (u16) ((1 & temp_r2_4->unk2) | (sp10 * 2));
                                var_r4 += 2;
                                var_r5_2 += 1;
                            } while (var_r5_2 < var_sl);
                        }
                        var_r7 += 1;
                    } while (var_r7 < spC);
                }
            }
        } else {
            var_r5_3 = 0;
            sp18 = arg0 + 0x29;
            do {
                var_r4_2 = 0;
loop_59:
                temp_r3_2 = sp0.unk8 + var_r4_2 + (sp14 * (sp8.unk2 + var_r5_3));
                *(arg0->unk14 + (temp_r3_2 * 2)) = (sp0.unk0 + var_r4_2 + (var_r5_3 * 2)) | ((sp0.unk2 + 1) << 0xC);
                temp_r3_3 = temp_r3_2 * 4;
                temp_r2_5 = temp_r3_3 + arg0->unk2C;
                *temp_r2_5 |= 1;
                temp_r3_4 = temp_r3_3 + arg0->unk2C;
                temp_r3_4->unk2 = (u16) ((1 & temp_r3_4->unk2) | (sp10 * 2));
                var_r4_2 += 1;
                if (var_r4_2 <= 1U) {
                    goto loop_59;
                }
                var_r5_3 += 1;
            } while (var_r5_3 <= 1U);
        }
        *sp18 = 1;
        return;
    case 19:
        var_r5 = 1;
        temp_r0 = arg0->unk4;
        switch (temp_r0) {
        case 14:
            var_r8 = &gUnk_086DCC88;
block_11:
            var_sl = 4;
            spC = 4;
            var_r0_2 = 0x3CB;
block_44:
            sp10 = var_r0_2;
            goto block_45;
        case 15:
            var_r8 = &gUnk_086DDDEC;
            goto block_11;
        }
        break;
    case 18:
        var_r5 = 1;
        temp_r0_2 = arg0->unk4;
        switch (temp_r0_2) {
        case 14:
            var_r8 = &gUnk_086DC57C;
block_24:
            var_sl = 2;
            spC = 2;
            goto block_45;
        case 15:
            var_r0_3 = &gUnk_086DD6E0;
block_23:
            var_r8 = var_r0_3;
            goto block_24;
        case 12:
            var_r8 = &gUnk_086EACDC;
            goto block_24;
        case 13:
            var_r0_3 = &gUnk_086EAD84;
            goto block_23;
        }
        break;
    case 21:
        var_r5 = 1;
        temp_r0_3 = arg0->unk4;
        switch (temp_r0_3) {
        case 14:
            var_r8 = &gUnk_086DD690;
block_37:
            var_sl = 4;
            spC = 4;
            sp10 = 0x3CC;
            goto block_45;
        case 15:
            var_r0_4 = &gUnk_086DE7F4;
block_36:
            var_r8 = var_r0_4;
            goto block_37;
        case 12:
            var_r8 = &gUnk_086EAD64;
            goto block_37;
        case 13:
            var_r0_4 = &gUnk_086EAD8C;
            goto block_36;
        }
        break;
    case 20:
        var_r5 = 1;
        temp_r0_4 = arg0->unk4;
        switch (temp_r0_4) {
        case 14:
            var_r8 = &gUnk_086DC54C;
block_43:
            var_sl = 6;
            spC = 4;
            var_r0_2 = 0x3C9;
            goto block_44;
        case 15:
            var_r8 = &gUnk_086DD6B0;
            goto block_43;
        }
        break;
    }
}
