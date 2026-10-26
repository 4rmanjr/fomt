# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C96C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C96C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C96C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C96C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C96C/kilo-1531/func.c" 2
s32 func_080088CC(void *);
s32 func_08008B6C(void *, s32);
s32 func_0805E860(void *, s32);
s32 rand();

s32 func_0805C96C(void *arg0) {
    s32 sp20;
    s16 *temp_r3;
    s16 temp_r4;
    s32 *temp_r4_2;
    s32 *var_r2;
    s32 *var_r5_2;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r3_2;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 var_r1_3;
    s32 var_r2_2;
    s32 var_r3;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_sb;
    s32 var_sb_2;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_5;
    u16 temp_r0_8;
    u16 temp_r0_9;
    u16 temp_r1_4;
    u32 temp_r7;
    u8 temp_r0;
    u8 temp_r4_3;
    void *temp_r5;
    void *var_r0;
    void *var_r0_2;
    void *var_r1;
    void *var_r1_2;
    void *var_r4;
    void *var_r5;

    var_r5 = arg0 + 0x142C;
    sp20 = 0x06B80000;
    var_r8 = 0;
loop_1:
    temp_r0 = var_r5->unk1C + 1;
    var_r5->unk1C = temp_r0;
    if ((u32) temp_r0 > 9U) {
        var_r5->unk1C = 0U;
        temp_r0_2 = var_r5->unk1A + 3;
        var_r5->unk1A = temp_r0_2;
        if ((s32) (s16) temp_r0_2 > 0xFE) {
            var_r5->unk1A = 0xFFU;
        }
    }
    temp_r0_3 = var_r5->unk22;
    switch ((u32) temp_r0_3) {
    case 0:
        break;
    case 1:
        switch (var_r8) {
        case 0:
            (arg0 + 0x208)->unk10 = 0x180;
            (arg0 + 0x390)->unk10 = 0x180;
            var_r0 = arg0 + 0x470;
block_20:
            func_0805E860(var_r0, 0);
            break;
        case 1:
            (arg0 + 0x240)->unk10 = 0x180;
            (arg0 + 0x3C8)->unk10 = 0x180;
            var_r0 = arg0 + 0x4A8;
            goto block_20;
        case 2:
            if (arg0->unk140E == 0) {
                var_r1 = arg0 + 0x278;
            } else {
                var_r1 = arg0 + 0x2E8;
            }
            var_r1->unk10 = 0x180;
            arg0->unk410 = 0x180;
            var_r0 = arg0 + 0x4E0;
            goto block_20;
        case 3:
            (arg0 + 0x2B0)->unk10 = 0x180;
            (arg0 + 0x438)->unk10 = 0x180;
            func_0805E860(arg0 + 0x518, 0);
            break;
        }
        var_r5->unk18 = 0x3CU;
        var_r5->unk22 = 2U;

    case 2:
        temp_r1 = var_r5->unk10 + var_r5->unk8;
        var_r5->unk10 = temp_r1;
        var_r5->unk18 = (u16) (var_r5->unk18 - 1);
        temp_r0_4 = var_r5->unk4;
        if (temp_r1 >= temp_r0_4) {
            var_r5->unk18 = 0U;
        }
        if ((s32) (s16) var_r5->unk18 <= 0) {
            var_r5->unk22 = 3U;
            var_r5->unk10 = temp_r0_4;
            var_r5->unk18 = 0x3CU;
        }
        break;
    case 3:
        temp_r0_5 = var_r5->unk18 - 1;
        var_r5->unk18 = temp_r0_5;
        if ((s32) (temp_r0_5 << 0x10) <= 0) {
            var_r5->unk22 = 4U;
            var_r5->unk18 = (u16) ((0x3C / (s16) var_r5->unk1A) + 0x1E);
            var_r5->unkC = (s32) ((s32) (var_r5->unk4 - var_r5->unk0) / (s16) var_r5->unk18);
        }
        break;
    case 4:
        temp_r1_2 = var_r5->unk10 - var_r5->unkC;
        var_r5->unk10 = temp_r1_2;
        var_r5->unk18 = (u16) (var_r5->unk18 - 1);
        temp_r0_6 = var_r5->unk0;
        if (temp_r1_2 <= temp_r0_6) {
            var_r5->unk18 = 0U;
        }
        if ((s32) (s16) var_r5->unk18 <= 0) {
            var_r5->unk22 = 0U;
            var_r5->unk10 = temp_r0_6;
            var_r5->unk18 = 0xCU;
            switch (var_r8) {
            case 0:
                (arg0 + 0x208)->unk10 = 0x100;
                var_r0_2 = arg0 + 0x390;
block_46:
                var_r0_2->unk10 = 0x100;
                break;
            case 1:
                (arg0 + 0x240)->unk10 = 0x100;
                var_r0_2 = arg0 + 0x3C8;
                goto block_46;
            case 2:
                if (arg0->unk140E == 0) {
                    var_r1_2 = arg0 + 0x278;
                } else {
                    var_r1_2 = arg0 + 0x2E8;
                }
                var_r1_2->unk10 = 0x100;
                arg0->unk410 = 0x100;
                break;
            case 3:
                (arg0 + 0x2B0)->unk10 = 0x100;
                var_r0_2 = arg0 + 0x438;
                goto block_46;
            }
        }
        break;
    }
    temp_r1_3 = var_r5->unk14 - var_r5->unk10;
    var_r5->unk14 = temp_r1_3;
    (&sp10[0])[var_r8] = temp_r1_3;
    if (sp20 > temp_r1_3) {
        sp20 = temp_r1_3;
    }
    temp_r7 = (u32) temp_r1_3 >> 0x10;
    temp_r4 = (s16) temp_r7;
    if ((s32) temp_r4 > 0x1F) {
        temp_r3 = arg0 + 0x6B8 + (((var_r8 * 8) + (((s32) (temp_r7 << 0x10) >> 0x15) & 7)) * 4);
        if ((*temp_r3 & 0xFFE0) != (temp_r4 & 0xFFE0)) {
            *temp_r3 = (s16) temp_r7;
        }
    }
    var_r8 += 1;
    var_r5 += 0x2C;
    if (var_r8 <= 3) {
        goto loop_1;
    }
    var_r8_2 = 0;
    var_r5_2 = &sp10[0];
    do {
        var_sb_2 = 0;
        var_r3 = 0;
        var_r2 = &sp10[0];
loop_56:
        if ((var_r8_2 != var_r3) && ((s32) *var_r5_2 > (s32) *var_r2)) {
            var_sb_2 += 1;
        }
        var_r2 += 4;
        var_r3 += 1;
        if (var_r3 <= 3) {
            goto loop_56;
        }
        *((var_sb_2 * 4) + sp) = var_r8_2;
        var_r5_2 += 4;
        var_r8_2 += 1;
    } while (var_r8_2 <= 3);
    var_sb = 0;
    var_r8_3 = 0;
loop_62:
    temp_r4_2 = &(&sp0[0])[var_r8_3];
    temp_r3_2 = *temp_r4_2;
    temp_r5 = arg0 + ((temp_r3_2 * 0x2C) + 0x142C);
    if (temp_r5->unk1F != 0xFF) {
        if ((s32) temp_r5->unk14 < 0) {
            temp_r5->unk10 = 0;
            var_sb += 1;
        }
    } else {
        temp_r7_2 = temp_r5->unk14;
        if (temp_r7_2 <= 0xB80000) {
            *(arg0 + 0x13FE + (arg0->unk13FC * 2)) = (s16) temp_r3_2;
            temp_r1_4 = (u16) arg0->unk13FC;
            arg0->unk13FC = (s16) (temp_r1_4 + 1);
            temp_r5->unk1F = (u8) temp_r1_4;
            if ((temp_r1_4 << 0x18) != 0) {

            } else {
                temp_r0_7 = *temp_r4_2;
                switch (temp_r0_7) {
                case 0:
                    var_r4 = arg0 + 0x208;
                    var_r1_3 = 0x76A;
block_80:
                    func_0805E860(var_r4, var_r1_3);
                    var_r4->unk10 = 0x100;
                    break;
                case 1:
                    var_r4 = arg0 + 0x240;
                    var_r1_3 = 0x746;
                    goto block_80;
                case 2:
                    if (arg0->unk140E == 0) {
                        var_r4 = arg0 + 0x278;
                        var_r1_3 = 0x752;
                    } else {
                        var_r4 = arg0 + 0x2E8;
                        var_r1_3 = 0x776;
                    }
                    goto block_80;
                case 3:
                    var_r4 = arg0 + 0x2B0;
                    var_r1_3 = 0x75E;
                    goto block_80;
                }
            }
        } else if ((arg0->unk140E == 1) && (temp_r3_2 == 2)) {
            if (!(func_080088CC(arg0) & 1)) {

            } else {
                func_08008B6C(arg0 + 0x1C, 0xA8);
                if ((s32) temp_r5->unk1A > 0x28) {
                    temp_r0_8 = temp_r5->unk22;
                    switch (temp_r0_8) {
                    case 1:
                    case 2:
                        break;
                    case 0:
                    case 4:
                        temp_r5->unk22 = 1U;
block_90:
                        temp_r5->unk1A = (s16) ((u16) temp_r5->unk1A - 0x28);
                        break;
                    case 3:
                        temp_r5->unk18 = (u16) (temp_r5->unk18 + 0x3C);
                        goto block_90;
                    }
                }
            }
        } else if (temp_r5->unk22 == 0) {
            if ((s32) (s16) temp_r5->unk18 > 0) {
                temp_r5->unk18 = (u16) (temp_r5->unk18 - 1);
            } else {
                var_r2_2 = 0;
                if ((var_r8_3 > 0) && ((s32) ((&sp10[0])[(&sp0[0])[var_r8_3]] - (&sp10[0])[*(((var_r8_3 - 1) * 4) + sp)]) > 0x1FFFFF)) {
                    var_r2_2 = 1;
                }
                if (temp_r7_2 <= 0x02FFFFFF) {
                    var_r2_2 += 2;
                }
                temp_r4_3 = *(temp_r5 + 0x24 + var_r2_2);
                if ((s32) temp_r4_3 > (s32) (rand() % 100)) {
                    if ((s32) temp_r5->unk1A > 0x27) {
                        temp_r5->unk1A = (s16) ((u16) temp_r5->unk1A - 0x28);
                        temp_r5->unk22 = 1U;
                        if (arg0->unk140E == 0) {
                            func_08008B6C(arg0 + 0x1C, 0xA8);
                        }
                    }
                } else {
                    temp_r5->unk18 = 0xCU;
                }
            }
        }
    }
    var_r8_3 += 1;
    if (var_r8_3 <= 3) {
        goto loop_62;
    }
    if (arg0->unk140E == 1) {
        sp20 = sp10[0].unk8;
    }
    if ((u32) arg0->unk13EC > 0x30U) {
        temp_r7_3 = sp20 >> 0x10;
        sp20 = temp_r7_3;
        if (temp_r7_3 < (s32) (arg0->unk13EC + 0x78)) {
            temp_r0_9 = temp_r7_3 - 0x78;
            arg0->unk13EC = temp_r0_9;
            if ((u32) temp_r0_9 <= 0x2FU) {
                arg0->unk13EC = 0x30U;
            }
            arg0->unk13EA = (s16) (0x600 - ((0x600 - arg0->unk13EC) * 2));
            arg0->unk13EE = (u16) arg0->unk13EC;
        }
    }
    return var_sb;
}
