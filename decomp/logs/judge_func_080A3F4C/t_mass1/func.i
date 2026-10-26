# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3F4C/t_mass1/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3F4C/t_mass1/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3F4C/t_mass1/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3F4C/t_mass1/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3F4C/t_mass1/func.c" 2
u32 GetAmountShipped__C11ShippingBini(void *, s32);
s32 *GetName__C7Article(u8 *);
s32 IsDisplayEnabled__C11ShippingBini(void *, s32);
s32 __12RucksackItem(s32 *);
s32 __12RucksackItemG4Food(s32 **, s32);
s32 __12RucksackItemG7Article(s32 **, u8);
s32 __4FoodUi(u8 *, s32);
s32 __7ArticleUi(u8 *, s32);
s32 func_08010F04(void *);
s32 func_0809A970(void *, s32 *, s32);
u8 func_0809CD98(void *, s32, u16);
u16 func_0809CE1C(void *, s32);
s32 func_0809CE24(void *, s32);
s32 *func_0809CE7C(void *, s32);
s32 rand();
extern s32 gUnk_08104E4C;
extern s32 gUnk_08104E54;
extern s32 gUnk_08104EAC;
extern s32 gUnk_08104ED0;
extern s32 gUnk_08104ED2;
extern s32 gUnk_08104ED9;
extern s32 gUnk_08104EE0;
extern s32 gUnk_08104EE7;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkC;
    u8 _pad10[1];
    s32 unk11;
    s32 unk12;
    u8 _pad16[11268];
    s32 unk2C1A;
} GenObj;
void *func_080A3F4C(void *arg0, s32 arg1, u8 arg2, GenObj *arg3) {
    s32 *sp0;
    s32 sp8;
    s32 sp10;
    u8 sp1C;
s32 sp78;
    s16 sp88;
    u8 sp8C;
    GenObj *sp90;
    s32 sp94;
    u32 sp98;
    s32 **sp9C;
    s32 **spA0;
    s32 **temp_r0_4;
    s32 **temp_r3;
    s32 **var_r8_2;
    s32 *var_r2_2;
    s16 *var_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r5_4;
    s32 temp_r6;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r2;
    s32 var_r3_2;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_4;
    s32 var_r6_2;
    s32 var_r7_4;
    s8 temp_r0_3;
    s8 temp_r0_6;
    s8 temp_r0_7;
    s8 temp_r0_8;
    s8 temp_r0_9;
    s8 temp_r1;
    s8 temp_r1_2;
    s8 temp_r5;
    s8 var_r4;
    s8 var_r7;
    s8 var_r7_2;
    s8 var_r7_3;
    s8 var_sl;
    u16 temp_r0_11;
    u16 temp_r0_12;
    u16 temp_r0_13;
    u16 temp_r0_15;
    u32 temp_r0_10;
    u32 temp_r5_2;
    u32 var_r2_4;
    u32 var_r4_3;
    u32 var_r5_3;
    u8 *temp_r0_5;
    u8 *temp_r4_2;
    u8 *var_r1;
    u8 temp_r0;
    u8 temp_r0_16;
    u8 var_r2_3;
    u8 var_r3;
    u8 var_r6;
    void *temp_r0_14;
    void *temp_r0_17;
    GenObj *temp_r1_3;
    void *temp_r4;
    void *temp_r4_3;
    void *temp_r5_3;
    void *var_r8;

    sp90 = arg0;
    sp94 = arg1;
    sp98 = (u32) arg2;
    var_r7 = 0;
    sp0 = &gUnk_08104E4C;
    sp0.unk4 = 0U;
    __12RucksackItem(&sp8);
    sp0.unkC = 0;
    sp0.unkD = 0;
    sp10 = 0x3B;
    sp0.unk14 = 0;
    var_r6 = 0;
    var_r4 = 0;
    var_r3 = 0;
    temp_r5 = (s8) ((s32) (rand() >> 8) % 100);
    var_r1 = (sp94 * 5) + &gUnk_08104EAC;
loop_1:
    if (((s32) (s8) *var_r1 <= 0) || (temp_r0 = var_r4 + *var_r1, temp_r0_2 = temp_r0 << 0x18, var_r4 = (s8) temp_r0, ((s32) temp_r5 >= (s32) (temp_r0_2 >> 0x18)))) {
        var_r1 += 1;
        var_r3 += 1;
        if ((s32) var_r3 <= 4) {
            goto loop_1;
        }
    } else {
        var_r6 = var_r3;
    }
    var_r5 = 0;
    var_r2 = 0;
    temp_r0_3 = (s8) var_r6;
    switch (temp_r0_3) {
    case 1:
        var_r2 = 3;
        break;
    case 2:
        var_r5 = 4;
        var_r2 = 7;
        break;
    case 3:
        var_r5 = 8;
        var_r2 = 0x34;
        break;
    case 4:
        var_r5 = 0x35;
        var_r2 = 0x3A;
        break;
    default:
        var_r7 = -1;
        break;
    }
    if (var_r7 == -1) {
        goto block_120;
    }
    var_sl = 0;
    var_r7_2 = 0;
    var_r8 = 0;
    var_r1_2 = 0;
    temp_r0_4 = &sp0 + 0x18;
    spA0 = temp_r0_4;
    temp_r3 = &sp0 + 0x48;
    sp9C = temp_r3;
    temp_r2 = var_r2 + 1;
    do {
        *((u8 *)temp_r0_4 + var_r1_2) = 0;
        *((u8 *)temp_r3 + var_r1_2) = 0;
        var_r1_2 += 1;
    } while (var_r1_2 <= 0x2C);
    var_r4_2 = var_r5;
    if (var_r4_2 < temp_r2) {
        temp_r5_2 = (u32) (arg3->unk11 << 0x1E) >> 0x1E;
        var_r3_2 = var_r4_2 << 5;
        do {
            switch (temp_r5_2) {
            case 0:
                var_r2_2 = &gUnk_08104ED2;
block_34:
                var_r8 = var_r2_2 + var_r3_2;
                break;
            case 1:
                var_r8 = &gUnk_08104ED9 + var_r3_2;
                break;
            case 2:
                var_r8 = &gUnk_08104EE0 + var_r3_2;
                break;
            case 3:
                var_r2_2 = &gUnk_08104EE7;
                goto block_34;
            }
            temp_r0_5 = sp94 + var_r8;
            var_r2_3 = *temp_r0_5;
            temp_r1 = (s8) *temp_r0_5;
            if (temp_r1 != 0) {
                if ((s32) temp_r1 < 0) {
                    var_r2_3 = 0 - temp_r1;
                }
                var_r2_4 = (u32) ((var_r2_3 << 0x18) + 0xFF000000) >> 0x18;
                if ((sp98 == 6) || (var_r2_4 == 7)) {
                    var_r2_4 = sp98;
                }
                if (sp98 == (s8) var_r2_4) {
                    temp_r0_6 = (s8) *temp_r0_5;
                    if ((s32) temp_r0_6 > 0) {
                        temp_r0_7 = var_r7_2;
                        *((u8 *)sp9C + temp_r0_7) = (s8) var_r4_2;
                        var_r7_2 = (s8) (u8) (temp_r0_7 + 1);
                    } else if ((s32) temp_r0_6 < 0) {
                        temp_r0_8 = var_sl;
                        *((u8 *)spA0 + temp_r0_8) = (s8) var_r4_2;
                        var_sl = (s8) (u8) (temp_r0_8 + 1);
                    }
                }
            }
            var_r3_2 += 0x20;
            var_r4_2 += 1;
        } while (var_r4_2 < temp_r2);
    }
    if ((var_r7_2 == 0) && (var_sl == 0)) {
        goto block_115;
    }
    if (((s32) (var_r7_2 << 0x18) > 0) && ((s32) (var_sl << 0x18) > 0)) {
        if ((s32) ((s32) (rand() >> 8) % 100) <= 0x45) {
            var_sl = 0;
        } else {
            var_r7_2 = 0;
        }
    }
    temp_r1_2 = var_r7_2;
    temp_r0_9 = var_sl;
    if ((s32) temp_r1_2 > (s32) temp_r0_9) {
        var_r7_3 = temp_r1_2;
        var_r8_2 = sp9C;
    } else {
        var_r7_3 = temp_r0_9;
        var_r8_2 = spA0;
    }
    if ((s32) var_r7_3 > 1) {
        var_r7_4 = (s32) (rand() >> 8) % var_r7_3;
    } else {
        var_r7_4 = 0;
    }
    var_r7 = *((u8 *)var_r8_2 + var_r7_4);
    temp_r0_10 = var_r7 - 2;
    switch (temp_r0_10) {
    case 0x0:
        if (func_0809CE1C((GenObj *)((u8 *)arg3 + 0x2C80), 2) == 0) {

        } else {
block_115:
            var_r7 = -1;
        }
        break;
    case 0x1:
        if (func_0809CE1C((GenObj *)((u8 *)arg3 + 0x2C80), 3) == 0) {

        } else {
            goto block_115;
        }
        break;
    case 0x33:
        temp_r0_11 = func_0809CE1C((GenObj *)((u8 *)arg3 + 0x2C80), 0x35);
        if (temp_r0_11 != 0) {
            goto block_115;
        }
        sp78 = temp_r0_11;
        sp78.unk12 = (u16) (0xFFFFF000 & sp78.unk12);
        sp78.unk13 = (u8) (-0x11 & sp78.unk13);
        var_r0 = &sp88;
        do {
            *var_r0 = 0;
            var_r0 -= 2;
        } while ((s32) var_r0 >= (s32) (&sp0 + 0x7A));
        var_r6_2 = 0;
        var_r5_2 = 0;
        if ((s32) arg3->unk2C1A > 0) {
            do {
                func_0809A970((GenObj *)((u8 *)arg3 + 0x2214), &sp78, var_r5_2);
                temp_r0_12 = sp78;
                if (((temp_r0_12 == 0x7A) || (((s32) temp_r0_12 >= 0x7A) && ((s32) temp_r0_12 <= 0x81) && ((s32) temp_r0_12 >= 0x80))) && (0x10 & sp78.unk13)) {
                    var_r6_2 += 1;
                }
                var_r5_2 += 1;
            } while (var_r5_2 < (s32) arg3->unk2C1A);
        }
        if (var_r6_2 > 2) {

        } else {
            goto block_115;
        }
        break;
    case 0x34:
        if (func_0809CE1C((GenObj *)((u8 *)arg3 + 0x2C80), 0x36) != 0) {
            goto block_115;
        }
        if ((u32) ((u32) (((u32) (arg3->unk12 << 0x1B) >> 3) + 0xF8000000) >> 0x18) > 0xBU) {

        } else {
            goto block_115;
        }
        break;
    case 0x35:
        if (func_0809CE1C((GenObj *)((u8 *)arg3 + 0x2C80), 0x37) != 0) {
            goto block_115;
        }
        break;
    case 0x36:
        if (func_0809CE1C((GenObj *)((u8 *)arg3 + 0x2C80), 0x38) == 0) {
            var_r5_3 = 0;
            temp_r4 = (GenObj *)((u8 *)arg3 + 0x54);
            if ((IsDisplayEnabled__C11ShippingBini(temp_r4, 0x3D) << 0x18) != 0) {
                var_r5_3 = GetAmountShipped__C11ShippingBini(temp_r4, 0x3D);
            }
            if ((IsDisplayEnabled__C11ShippingBini(temp_r4, 0x3E) << 0x18) != 0) {
                var_r5_3 += GetAmountShipped__C11ShippingBini(temp_r4, 0x3E);
            }
            if ((IsDisplayEnabled__C11ShippingBini(temp_r4, 0x3F) << 0x18) != 0) {
                var_r5_3 += GetAmountShipped__C11ShippingBini(temp_r4, 0x3F);
            }
            if (var_r5_3 <= 0xC7U) {
                goto block_115;
            }
        } else {
            goto block_115;
        }
        break;
    case 0x37:
        temp_r5_3 = (GenObj *)((u8 *)arg3 + 0x2C80);
        if (func_0809CE1C(temp_r5_3, 0x39) == 0) {
            temp_r0_13 = func_0809CE1C(temp_r5_3, 0x35);
            var_r4_3 = (u32) ((0 - temp_r0_13) | temp_r0_13) >> 0x1F;
            if (func_0809CE1C(temp_r5_3, 0x36) != 0) {
                var_r4_3 += 1;
            }
            if (func_0809CE1C(temp_r5_3, 0x37) != 0) {
                var_r4_3 = (u32) (u8) (var_r4_3 + 1);
            }
            if (func_0809CE1C(temp_r5_3, 0x38) != 0) {
                var_r4_3 = (u32) (u8) (var_r4_3 + 1);
            }
            if (func_0809CE1C(temp_r5_3, 0x3A) != 0) {
                var_r4_3 = (u32) (u8) (var_r4_3 + 1);
            }
            if (var_r4_3 <= 4U) {
                goto block_115;
            }
        } else {
            goto block_115;
        }
        break;
    case 0x38:
        if ((func_0809CE1C((GenObj *)((u8 *)arg3 + 0x2C80), 0x3A) != 0) || ((func_08010F04(arg3) << 0x18) == 0)) {
            goto block_115;
        }
        break;
    }
    if (var_r7 != -1) {
        if ((s32) var_r7 <= 7) {
            if (var_r7 != 2) {
                temp_r5_4 = *((var_r7 * 4) + &gUnk_08104E54);
                __7ArticleUi(&sp8C, temp_r5_4);
                __12RucksackItemG7Article(spA0, sp8C);
                sp8 = sp18;
                temp_r4_2 = &sp0 + 0x8D;
                __7ArticleUi(temp_r4_2, temp_r5_4);
                sp0 = GetName__C7Article(temp_r4_2);
                goto block_120;
            }
            sp0.unkC = 1;
            sp0 = func_0809CE7C((GenObj *)((u8 *)arg3 + 0x2C80), 2);
            sp0.unk4 = 0U;
        } else {
            temp_r0_14 = (var_r7 << 5) + &gUnk_08104ED0;
            sp0.unk4 = (u16) temp_r0_14->unk0;
            temp_r6 = temp_r0_14->unk1 - sp0.unk4;
            if (temp_r6 > 0) {
                sp0.unk4 = (u16) (sp0.unk4 + ((s32) (rand() >> 8) % (s32) (temp_r6 + 1)));
            }
            var_r1_3 = 0xA2;
            temp_r0_15 = sp0.unk4;
            if ((u32) temp_r0_15 <= 0x19U) {
                var_r1_3 = 0xA0;
            } else if ((u32) temp_r0_15 <= 0x31U) {
                var_r1_3 = 0xA1;
            }
            __4FoodUi(&sp1C, var_r1_3);
            __12RucksackItemG4Food(spA0, (sp0.unk1E << 0x10) | ((sp0.unk1D << 8) | sp1C));
            sp8 = sp18;
            sp0 = func_0809CE7C((GenObj *)((u8 *)arg3 + 0x2C80), (s32) var_r7);
            if ((s32) var_r7 > 0x34) {
                sp0.unkD = 1;
                sp10 = (s32) var_r7;
            }
        }
    } else {
block_120:
        sp0.unk4 = 0U;
    }
    if (var_r7 != -1) {
        temp_r4_3 = (GenObj *)((u8 *)arg3 + 0x2C80);
        var_r5_4 = 0;
        if (func_0809CE24(temp_r4_3, (s32) var_r7) == 0) {
            var_r5_4 = 1;
        }
        temp_r0_16 = func_0809CD98(temp_r4_3, (s32) var_r7, sp0.unk4);
        if ((var_r5_4 == 0) && (temp_r0_16 != 0)) {
            sp0.unk14 = 1;
        }
    }
    temp_r0_17 = &sp0 + 0xC;
    sp90->unk0 = (s32 *) sp0.unk0;
    sp90->unk4 = (s32) sp0.unk4;
    sp90->unk8 = (s32) sp0.unk8;
    temp_r1_3 = (GenObj *)((u8 *)sp90 + 0xC);
    sp90->unkC = (s32) sp0.unkC;
    temp_r1_3->unk4 = (s32) temp_r0_17->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_17->unk8;
    return sp90;
}
