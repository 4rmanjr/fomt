# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C2E0/Prodesk_357796/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C2E0/Prodesk_357796/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C2E0/Prodesk_357796/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C2E0/Prodesk_357796/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C2E0/Prodesk_357796/func.c" 2
s32 func_08008B6C(s32, u16);
s32 func_08008CD0(s32);
s32 func_08025944(void *);
s32 func_08025B10(void *);
s32 func_0802A4C0(void *, s32, s32);
s32 func_0802AC2C(void *, s32, s32);
extern ? gUnk_080F1020;
extern ? gUnk_080F1184;
extern ? gUnk_080F118C;
extern ? gUnk_080F1194;
extern ? gUnk_080F119C;
extern ? gUnk_080F11A4;
extern ? gUnk_080F11AC;

void func_0802C2E0(void *arg0) {
    ? *var_r0_3;
    s32 *var_r4_2;
    s32 *var_r4_3;
    s32 *var_r4_4;
    s32 *var_r4_5;
    s32 *var_r4_6;
    s32 *var_r4_7;
    s32 *var_r4_8;
    s32 *var_r4_9;
    s32 *var_r6;
    s32 *var_r6_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_2;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r1;
    s32 var_r1_3;
    s32 var_r1_5;
    s32 var_r1_7;
    s32 var_r2;
    s32 var_r2_2;
    s8 var_r5;
    u8 *var_r4;
    u8 *var_r5_2;
    u8 *var_r6_3;
    u8 temp_r0;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 var_r3;
    void **temp_r0_12;
    void **temp_r0_5;
    void **temp_r0_9;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r2;
    void *temp_r4;
    void *var_r1_2;
    void *var_r1_4;
    void *var_r1_6;

    arg0->unk3C = 9;
    var_r5 = 0;
    temp_r0 = arg0->unk3F;
    switch ((u32) temp_r0) {
    case 5:
        func_0802A4C0(arg0, 0xA2, 1);
        temp_r2 = arg0 + 0x88;
        temp_r2->unk4 = 0;
        temp_r2->unk8 = 0;
        temp_r2->unk14 = 0x100000;
        temp_r3 = arg0->unk20;
        switch (temp_r3) {
        case 2:
            temp_r2->unkC = 0xFFFE4925;
            temp_r2->unk10 = 0;
block_16:
            temp_r2->unk18 = 0x28000;
            break;
        case 3:
            temp_r2->unkC = 0x1B6DB;
            temp_r2->unk10 = 0;
            goto block_16;
        case 1:
            var_r0 = 0xFFFE4925;
            temp_r2->unkC = 0;
block_15:
            temp_r2->unk10 = var_r0;
            goto block_16;
        case 0:
            var_r0 = 0x1B6DB;
            temp_r2->unkC = (s32) temp_r3;
            goto block_15;
        }

    case 0:
    case 1:
    case 3:
    case 4:
        var_r5_2 = arg0 + 0x40;
        var_r4 = arg0 + 0x3F;
        arg0->unk44 = (u16) *((((arg0->unk3F * 7) + arg0->unk40) * 8) + &gUnk_080F1020);
        temp_r0_2 = (*arg0->unk0)->unk14C();
        var_r6 = temp_r0_2->unk0;
        temp_r7 = temp_r0_2->unk4;
        if (var_r6 != temp_r7) {
loop_18:
            if ((func_08008CD0(*var_r6) << 0x18) != 0) {
                var_r6 += 4;
                if (var_r6 == temp_r7) {
                    goto block_20;
                }
                goto loop_18;
            }
            var_r2 = *var_r6;
        } else {
block_20:
            var_r2 = *(temp_r7 - 4);
        }
        func_08008B6C(var_r2, ((((arg0->unk3F * 7) + arg0->unk40) * 8) + &gUnk_080F1020)->unk2);
        if ((func_08025944(arg0) << 0x18) != 0) {
block_30:
            var_r5 = ((((*var_r4 * 7) + *var_r5_2) * 8) + &gUnk_080F1020)->unk5;
        } else {
block_29:
            var_r5 = ((((*var_r4 * 7) + *var_r5_2) * 8) + &gUnk_080F1020)->unk4;
        }
        break;
    case 2:
        var_r5_2 = arg0 + 0x40;
        var_r4 = arg0 + 0x3F;
        arg0->unk44 = (u16) *((((arg0->unk3F * 7) + arg0->unk40) * 8) + &gUnk_080F1020);
        temp_r0_3 = (*arg0->unk0)->unk14C();
        var_r6_2 = temp_r0_3->unk0;
        temp_r7_2 = temp_r0_3->unk4;
        if (var_r6_2 != temp_r7_2) {
loop_25:
            if ((func_08008CD0(*var_r6_2) << 0x18) != 0) {
                var_r6_2 += 4;
                if (var_r6_2 == temp_r7_2) {
                    goto block_27;
                }
                goto loop_25;
            }
            var_r2_2 = *var_r6_2;
        } else {
block_27:
            var_r2_2 = *(temp_r7_2 - 4);
        }
        func_08008B6C(var_r2_2, ((((arg0->unk3F * 7) + arg0->unk40) * 8) + &gUnk_080F1020)->unk2);
        if ((func_08025944(arg0) << 0x18) == 0) {
            goto block_29;
        }
        goto block_30;
    case 6:
        arg0->unk44 = 0x1AEU;
        temp_r0_4 = (*arg0->unk0)->unk14C();
        var_r4_2 = temp_r0_4->unk0;
        temp_r5 = temp_r0_4->unk4;
        var_r6_3 = arg0 + 0xB2;
        if (var_r4_2 != temp_r5) {
loop_33:
            if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                var_r4_2 += 4;
                if (var_r4_2 == temp_r5) {
                    goto block_35;
                }
                goto loop_33;
            }
            var_r0_2 = *var_r4_2;
        } else {
block_35:
            var_r0_2 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0_2, 0x9DU);
        var_r0_3 = &gUnk_080F1184;
block_37:
        func_0802AC2C(arg0, var_r0_3->unk0, var_r0_3->unk4);
        var_r3 = *var_r6_3;
        var_r1 = 0;
        if ((u32) (var_r3 - 0x2B) <= 0x1AU) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
block_100:
            temp_r0_5 = arg0->unk0;
            var_r1_2 = (*temp_r0_5)->unk40(temp_r0_5, var_r3);
        } else {
block_101:
            var_r1_2 = 0;
        }
block_102:
        if (var_r1_2 != 0) {
            var_r1_2->unk14->unk88(var_r1_2, 0x3C);
        }
block_104:
        var_r5 = -4;
        break;
    case 7:
        arg0->unk44 = 0x1BEU;
        temp_r0_6 = (*arg0->unk0)->unk14C();
        var_r4_3 = temp_r0_6->unk0;
        temp_r5_2 = temp_r0_6->unk4;
        var_r6_3 = arg0 + 0xB2;
        if (var_r4_3 != temp_r5_2) {
loop_44:
            if ((func_08008CD0(*var_r4_3) << 0x18) != 0) {
                var_r4_3 += 4;
                if (var_r4_3 == temp_r5_2) {
                    goto block_46;
                }
                goto loop_44;
            }
            var_r0_4 = *var_r4_3;
        } else {
block_46:
            var_r0_4 = *(temp_r5_2 - 4);
        }
        func_08008B6C(var_r0_4, 0x9DU);
        var_r0_3 = &gUnk_080F118C;
        goto block_37;
    case 8:
        arg0->unk44 = 0x1BAU;
        temp_r0_7 = (*arg0->unk0)->unk14C();
        var_r4_4 = temp_r0_7->unk0;
        temp_r5_3 = temp_r0_7->unk4;
        if (var_r4_4 != temp_r5_3) {
loop_50:
            if ((func_08008CD0(*var_r4_4) << 0x18) != 0) {
                var_r4_4 += 4;
                if (var_r4_4 == temp_r5_3) {
                    goto block_52;
                }
                goto loop_50;
            }
            var_r0_5 = *var_r4_4;
        } else {
block_52:
            var_r0_5 = *(temp_r5_3 - 4);
        }
        func_08008B6C(var_r0_5, 0x94U);
block_54:
        var_r5 = -2;
        break;
    case 9:
        arg0->unk44 = 0x1AAU;
        temp_r0_8 = (*arg0->unk0)->unk14C();
        var_r4_5 = temp_r0_8->unk0;
        temp_r5_4 = temp_r0_8->unk4;
        if (var_r4_5 != temp_r5_4) {
loop_57:
            if ((func_08008CD0(*var_r4_5) << 0x18) != 0) {
                var_r4_5 += 4;
                if (var_r4_5 == temp_r5_4) {
                    goto block_59;
                }
                goto loop_57;
            }
            var_r0_6 = *var_r4_5;
        } else {
block_59:
            var_r0_6 = *(temp_r5_4 - 4);
        }
        func_08008B6C(var_r0_6, 0x93U);
        func_0802AC2C(arg0, gUnk_080F1194.unk0, gUnk_080F1194.unk4);
        temp_r3_2 = arg0->unkB2;
        var_r1_3 = 0;
        if ((u32) (temp_r3_2 - 0x2B) <= 0x1AU) {
            var_r1_3 = 1;
        }
        if (var_r1_3 != 0) {
            temp_r0_9 = arg0->unk0;
            var_r1_4 = (*temp_r0_9)->unk40(temp_r0_9, temp_r3_2);
        } else {
            var_r1_4 = 0;
        }
        if (var_r1_4 != 0) {
            var_r1_4->unk14->unk88(var_r1_4, 0x3C);
        }
        goto block_54;
    case 10:
        arg0->unk44 = 0x1B6U;
        temp_r0_10 = (*arg0->unk0)->unk14C();
        var_r4_6 = temp_r0_10->unk0;
        temp_r5_5 = temp_r0_10->unk4;
        var_r6_3 = arg0 + 0xB2;
        if (var_r4_6 != temp_r5_5) {
loop_69:
            if ((func_08008CD0(*var_r4_6) << 0x18) != 0) {
                var_r4_6 += 4;
                if (var_r4_6 == temp_r5_5) {
                    goto block_71;
                }
                goto loop_69;
            }
            var_r0_7 = *var_r4_6;
        } else {
block_71:
            var_r0_7 = *(temp_r5_5 - 4);
        }
        func_08008B6C(var_r0_7, 0x9FU);
        var_r0_3 = &gUnk_080F119C;
        goto block_37;
    case 11:
        arg0->unk44 = 0x1B2U;
        temp_r0_11 = (*arg0->unk0)->unk14C();
        var_r4_7 = temp_r0_11->unk0;
        temp_r5_6 = temp_r0_11->unk4;
        if (var_r4_7 != temp_r5_6) {
loop_75:
            if ((func_08008CD0(*var_r4_7) << 0x18) != 0) {
                var_r4_7 += 4;
                if (var_r4_7 == temp_r5_6) {
                    goto block_77;
                }
                goto loop_75;
            }
            var_r0_8 = *var_r4_7;
        } else {
block_77:
            var_r0_8 = *(temp_r5_6 - 4);
        }
        func_08008B6C(var_r0_8, 0xA0U);
        func_0802AC2C(arg0, gUnk_080F11A4.unk0, gUnk_080F11A4.unk4);
        temp_r3_3 = arg0->unkB2;
        var_r1_5 = 0;
        if ((u32) (temp_r3_3 - 0x2B) <= 0x1AU) {
            var_r1_5 = 1;
        }
        if (var_r1_5 != 0) {
            temp_r0_12 = arg0->unk0;
            var_r1_6 = (*temp_r0_12)->unk40(temp_r0_12, temp_r3_3);
        } else {
            var_r1_6 = 0;
        }
        if (var_r1_6 != 0) {
            var_r1_6->unk14->unk88(var_r1_6, 0x3C);
        }
        var_r5 = -8;
        break;
    case 12:
        arg0->unk44 = 0x1A6U;
        temp_r0_13 = (*arg0->unk0)->unk14C();
        var_r4_8 = temp_r0_13->unk0;
        temp_r5_7 = temp_r0_13->unk4;
        if (var_r4_8 != temp_r5_7) {
loop_88:
            if ((func_08008CD0(*var_r4_8) << 0x18) != 0) {
                var_r4_8 += 4;
                if (var_r4_8 == temp_r5_7) {
                    goto block_90;
                }
                goto loop_88;
            }
            var_r0_9 = *var_r4_8;
        } else {
block_90:
            var_r0_9 = *(temp_r5_7 - 4);
        }
        func_08008B6C(var_r0_9, 0x9EU);
        goto block_104;
    case 13:
        arg0->unk44 = 0x1A2U;
        temp_r0_14 = (*arg0->unk0)->unk14C();
        var_r4_9 = temp_r0_14->unk0;
        temp_r5_8 = temp_r0_14->unk4;
        if (var_r4_9 != temp_r5_8) {
loop_94:
            if ((func_08008CD0(*var_r4_9) << 0x18) != 0) {
                var_r4_9 += 4;
                if (var_r4_9 == temp_r5_8) {
                    goto block_96;
                }
                goto loop_94;
            }
            var_r0_10 = *var_r4_9;
        } else {
block_96:
            var_r0_10 = *(temp_r5_8 - 4);
        }
        func_08008B6C(var_r0_10, 0x9DU);
        func_0802AC2C(arg0, gUnk_080F11AC.unk0, gUnk_080F11AC.unk4);
        var_r3 = arg0->unkB2;
        var_r1_7 = 0;
        if ((u32) (var_r3 - 0x2B) <= 0x1AU) {
            var_r1_7 = 1;
        }
        if (var_r1_7 != 0) {
            goto block_100;
        }
        goto block_101;
        goto block_102;
    }
    temp_r4 = arg0->unk14;
    temp_r4->unk64(arg0, var_r5, func_08025B10(arg0));
}
