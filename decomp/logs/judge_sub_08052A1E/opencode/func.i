# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08052A1E/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08052A1E/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08052A1E/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08052A1E/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08052A1E/opencode/func.c" 2
s32 SetFestivalWinner__6Animal(void *);
s32 free();
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088CC(void *);
void *func_08008910(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08008B6C(void *, s32);
s32 func_08008F0C(void ***, void *, s32, s32);
s32 func_0800934C(s32, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_080522D8(void *, ? *, s32);
s32 func_080522E8(void *, ? *, s32);
s32 func_08053634(void *);
u16 func_08053960(void *);
s32 func_080550AC(void *, s16);
s32 func_080558C4(void *);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 rand();

s32 *sub_08052A1E(s32 arg4, void *arg5, void **arg6, ? argA, s32 argB, s32 argC, s32 *argF, s32 arg10, s32 arg11, s32 arg12, void *arg13, void *arg14, void *arg15) {
    s16 *var_r1;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 *var_r1_5;
    s16 *var_r1_7;
    s16 temp_r0;
    s16 temp_r0_5;
    s16 temp_r2;
    s16 var_r0;
    s16 var_r0_2;
    s32 *var_r0_4;
    s32 temp_r0_13;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_ip_2;
    s32 var_r4;
    s32 var_r6;
    s32 var_sb;
    s32 var_sb_2;
    u16 *var_r0_3;
    u16 *var_r1_4;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_6;
    u16 temp_r0_7;
    u16 temp_r0_8;
    u16 temp_r1_7;
    u16 var_r1_6;
    u32 temp_r1_2;
    u32 temp_r1_4;
    u32 temp_r1_6;
    u8 temp_r0_10;
    u8 temp_r0_12;
    u8 temp_r2_2;
    u8 var_r2;
    void *temp_r0_11;
    void *temp_r0_14;
    void *temp_r0_2;
    void *temp_r0_9;
    void *temp_r1_8;
    void *temp_r2_3;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r6;
    void *var_ip;
    void *var_r0_5;
    void *var_r1_8;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r4_2;

    func_080087C8(saved_reg_r5);
    func_080088B8(saved_reg_r5);
    rand();
    if (2 & saved_reg_r5->unk2321) {
        if (func_080088CC(saved_reg_r5) & 8) {
            saved_reg_r5->unk2321 = (u8) (saved_reg_r5->unk2321 ^ 1);
            func_08008B6C(saved_reg_r5 + 0x1C, 0xB8);
        }
        if (1 & saved_reg_r5->unk2321) {
            func_080558C4(saved_reg_r5);
        } else {
            goto block_5;
        }
    } else {
block_5:
        temp_r0 = saved_reg_r5->unk2328;
        switch (temp_r0) {
        case 0:
        case 10:
            saved_reg_r5->unk2268 = 0x600000;
            saved_reg_r5->unk226C = 0x500000;
            saved_reg_r5->unk2290 = 0U;
            saved_reg_r5->unk228E = 0;
            saved_reg_r5->unk2288 = 0x33B;
            saved_reg_r5->unk2330 = 0U;
            saved_reg_r5->unk22D8 = 0x8F;
            saved_reg_r5->unk22C4 = 0U;
            if (arg12 == 1) {
                func_080550AC(saved_reg_r5, saved_reg_r5->unk2264);
                var_r1 = saved_reg_r5 + 0x2328;
                var_r0 = 0xB;
            } else {
                func_080550AC(saved_reg_r5, 0x80);
                var_r1 = saved_reg_r5 + 0x2328;
                var_r0 = 1;
            }
            *var_r1 = var_r0;
            saved_reg_r5->unk34C = 0;
            saved_reg_r5->unk22C2 = 0;
            saved_reg_r5->unk232A = 0;
            saved_reg_r5->unk22C0 = 0;
            saved_reg_r5->unk2292 = 0;
            func_0800934C(arg5 + 0xC, 0x889, 1, 1);
            temp_r0_2 = func_08008940(saved_reg_r5);
            temp_r0_2->unk8->unk10(temp_r0_2, arg5);
            break;
        case 1:
            temp_r1 = arg5->unk0;
            temp_r1_2 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            if (temp_r1_2 == 0) {
                saved_reg_r5->unk232C = (s16) temp_r1_2;
                if (arg12 == 0) {
                    saved_reg_r5->unk2328 = 2;
                } else {
                    var_r1_2 = saved_reg_r5 + 0x2328;
block_19:
                    *var_r1_2 = 3;
                }
            }
            break;
        case 2:
            if (saved_reg_r5->unk232C == 2) {
                if (saved_reg_r5->unk232E == 1) {
                    saved_reg_r5->unk2321 = 0U;
                    arg12 = 1;
                    var_r1_3 = saved_reg_r5 + 0x2328;
block_114:
                    *var_r1_3 = 0x1B;
                } else {
                    saved_reg_r5->unk232A = 4;
                    var_r1_2 = saved_reg_r5 + 0x2328;
                    goto block_19;
                }
            }
            break;
        case 3:
            if (saved_reg_r5->unk232C == 2) {
                saved_reg_r5->unk232A = 4;
                saved_reg_r5->unk2328 = 4;
            }
            break;
        case 4:
            if ((s32) saved_reg_r5->unk22DE <= 2) {

            } else if ((s32) saved_reg_r5->unk22D8 > 0x6F) {

            } else {
                saved_reg_r5->unk2321 = 1U;
                saved_reg_r5->unk232C = 0;
                saved_reg_r5->unk2328 = 5;
            }
            break;
        case 5:
            if (saved_reg_r5->unk232C != 2) {

            } else {
                saved_reg_r5->unk232C = 0;
                saved_reg_r5->unk2328 = 6;
            }
            break;
        case 6:
            if (saved_reg_r5->unk232C != 2) {

            } else {
                saved_reg_r5->unk232C = 0;
                if (saved_reg_r5->unk2324 == 0) {
                    saved_reg_r5->unk2328 = 7;
                } else {
                    saved_reg_r5->unk2328 = 8;
                }
            }
            break;
        case 7:
        case 8:
        case 9:
            temp_r2 = saved_reg_r5->unk232C;
            if (temp_r2 != 2) {

            } else {
                if (saved_reg_r5->unk232E == 0) {
                    arg12 = 1;
                } else {
                    saved_reg_r5->unk2321 = 0U;
                    saved_reg_r5->unk232A = temp_r2;
                    arg12 = 2;
                }
                var_r1_3 = saved_reg_r5 + 0x2328;
                goto block_114;
            }
            break;
        case 11:
            temp_r1_3 = arg5->unk0;
            temp_r1_4 = (u32) ((0 - temp_r1_3) | temp_r1_3) >> 0x1F;
            if (temp_r1_4 != 0) {

            } else {
                saved_reg_r5->unk2321 = (u8) temp_r1_4;
                saved_reg_r5->unk232A = 2;
                saved_reg_r5->unk2322 = 0x3CU;
                saved_reg_r5->unk2328 = 0xC;
            }
            break;
        case 12:
            temp_r0_3 = saved_reg_r5->unk2322 - 1;
            saved_reg_r5->unk2322 = temp_r0_3;
            if ((s32) (temp_r0_3 << 0x10) >= 0) {

            } else {
                func_08008B6C(saved_reg_r5 + 0x1C, 0xBB);
                saved_reg_r5->unk22D8 = 0x8F;
                saved_reg_r5->unk2322 = 0x3CU;
                saved_reg_r5->unk225C = 1;
                var_r1_4 = saved_reg_r5 + 0x2328;
block_116:
                *var_r1_4 += 1;
            }
            break;
        case 13:
            temp_r0_4 = saved_reg_r5->unk2322 - 1;
            saved_reg_r5->unk2322 = temp_r0_4;
            if ((s32) (temp_r0_4 << 0x10) >= 0) {

            } else {
                saved_reg_r5->unk225C = 0;
                saved_reg_r5->unk232A = 4;
                var_r1_4 = saved_reg_r5 + 0x2328;
                goto block_116;
            }
            break;
        case 14:
            if (!(func_080088CC(saved_reg_r5) & 1)) {

            } else {
                saved_reg_r5->unk2328 = 0x10;
                saved_reg_r5->unk2321 = 2U;
            }
            break;
        case 16:
            if (arg10 == 0) {

            } else {
                saved_reg_r5->unk2321 = 0U;
                temp_r0_5 = saved_reg_r5->unk2290 - 1;
                switch ((u32) temp_r0_5) {
                case 0:
                case 1:
                    if ((s32) saved_reg_r5->unk22D8 < (s32) saved_reg_r5->unk22DC) {
                        var_r1_5 = saved_reg_r5 + 0x2264;
                        var_r0_2 = (u16) saved_reg_r5->unk2264 + 2;
                    } else {
                        var_r1_5 = saved_reg_r5 + 0x2264;
                        var_r0_2 = (u16) saved_reg_r5->unk2264 + 1;
                    }
                    *var_r1_5 = var_r0_2;
                    if ((s32) saved_reg_r5->unk2264 > 0xFA) {
                        saved_reg_r5->unk2264 = 0xFA;
                    }
                    func_08008B6C(saved_reg_r5 + 0x1C, 0xBC);
                    saved_reg_r5->unk2322 = 0x3CU;
                    saved_reg_r5->unk225C = 3;
                    saved_reg_r5->unk2328 = 0x11;
                    break;
                case 2:
                case 3:
                case 4:
                case 6:
                    if ((s32) saved_reg_r5->unk22D8 < (s32) (saved_reg_r5->unk22DC + 0x10)) {
                        if ((s32) (s16) saved_reg_r5->unk2266 > 0) {
                            var_r1_6 = saved_reg_r5->unk2266 - 1;
                        } else {
                            var_r1_6 = 0;
                        }
                        saved_reg_r5->unk2266 = var_r1_6;
                    }
                    func_08008B6C(saved_reg_r5 + 0x1C, 0xB7);
                    saved_reg_r5->unk2322 = 0x3CU;
                    saved_reg_r5->unk225C = 2;
                    saved_reg_r5->unk2328 = 0x13;
                    break;
                case 5:
                    saved_reg_r5->unk232C = 0;
                    saved_reg_r5->unk2328 = 0x1A;
                    break;
                case 7:
                    func_08008B6C(saved_reg_r5 + 0x1C, 0xBC);
                    saved_reg_r5->unk232C = 0;
                    saved_reg_r5->unk2328 = 0x14;
                    break;
                case 8:
                    func_08008B6C(saved_reg_r5 + 0x1C, 0xB7);
                    saved_reg_r5->unk232C = 0;
                    saved_reg_r5->unk2328 = 0x15;
                    break;
                }
            }
            break;
        case 17:
            temp_r0_6 = saved_reg_r5->unk2322 - 1;
            saved_reg_r5->unk2322 = temp_r0_6;
            if ((s32) (temp_r0_6 << 0x10) >= 0) {

            } else {
                saved_reg_r5->unk225C = 0;
                saved_reg_r5->unk2322 = 0x80U;
                if ((s32) (s16) saved_reg_r5->unk22C4 > (s32) saved_reg_r5->unk22C6) {
                    saved_reg_r5->unk22C6 = (s16) saved_reg_r5->unk22C4;
                }
                if (saved_reg_r5->unk2324 == 0) {
                    saved_reg_r5->unk22CD = 1;
                } else {
                    if (saved_reg_r5->unk2325 == 0) {
                        saved_reg_r5->unk22CD = 2;
                        var_r0_3 = saved_reg_r5 + 0x22C8;
                    } else {
                        saved_reg_r5->unk22CD = 4;
                        var_r0_3 = saved_reg_r5 + 0x22CA;
                    }
                    *var_r0_3 = saved_reg_r5->unk22C4;
                }
                saved_reg_r5->unk22CE = 0;
                saved_reg_r5->unk2328 = 0x12;
            }
            break;
        case 18:
            temp_r0_7 = saved_reg_r5->unk2322 - 1;
            saved_reg_r5->unk2322 = temp_r0_7;
            if ((s32) (temp_r0_7 << 0x10) >= 0) {

            } else {
                saved_reg_r5->unk22CC = 7;
                saved_reg_r5->unk22CD = 0;
                saved_reg_r5->unk232C = 0;
block_96:
                var_r1_7 = saved_reg_r5 + 0x2328;
block_97:
                *var_r1_7 = 0x16;
            }
            break;
        case 19:
            temp_r0_8 = saved_reg_r5->unk2322 - 1;
            saved_reg_r5->unk2322 = temp_r0_8;
            if ((s32) (temp_r0_8 << 0x10) >= 0) {

            } else {
                saved_reg_r5->unk225C = 0;
                saved_reg_r5->unk232C = 0;
                var_r1_7 = saved_reg_r5 + 0x2328;
                goto block_97;
            }
            break;
        case 20:
            if (saved_reg_r5->unk232C != 2) {

            } else {
                saved_reg_r5->unk464 = 0;
                saved_reg_r5->unk232C = 0;
                var_r1_7 = saved_reg_r5 + 0x2328;
                goto block_97;
            }
            break;
        case 21:
            if (saved_reg_r5->unk232C != 2) {

            } else {
                saved_reg_r5->unk232C = 0;
                goto block_96;
            }
            break;
        case 22:
            saved_reg_r5->unk2326 = (u8) (saved_reg_r5->unk2326 + 1);
            temp_r2_2 = saved_reg_r5->unk2325 + 1;
            saved_reg_r5->unk2325 = temp_r2_2;
            if (saved_reg_r5->unk2324 == 0) {
                saved_reg_r5->unk2328 = 0x17;
            } else if (temp_r2_2 == 1) {
                saved_reg_r5->unk2328 = 0x18;
            } else {
                saved_reg_r5->unk2328 = 0x19;
            }
            break;
        case 23:
            if (saved_reg_r5->unk232C != 2) {

            } else {
                arg12 = 0;
                if (saved_reg_r5->unk232E == 0) {
                    arg12 = 1;
                }
                var_r1_3 = saved_reg_r5 + 0x2328;
                goto block_114;
            }
            break;
        case 24:
            if (saved_reg_r5->unk232C != 2) {

            } else {
                arg12 = 1;
                var_r1_3 = saved_reg_r5 + 0x2328;
                goto block_114;
            }
            break;
        case 25:
        case 26:
            if (saved_reg_r5->unk232C != 2) {

            } else {
                arg12 = 0;
                var_r1_3 = saved_reg_r5 + 0x2328;
                goto block_114;
            }
            break;
        case 27:
            func_08009378(arg5 + 0xC, 0x889, 1, 1);
            temp_r0_9 = func_08008940(saved_reg_r5);
            temp_r0_9->unk8->unk10(temp_r0_9, arg5);
            var_r1_4 = saved_reg_r5 + 0x2328;
            goto block_116;
        case 28:
            temp_r1_5 = arg5->unk0;
            temp_r1_6 = (u32) ((0 - temp_r1_5) | temp_r1_5) >> 0x1F;
            if (temp_r1_6 != 0) {

            } else if (arg12 != 0) {
                saved_reg_r5->unk2328 = (s16) temp_r1_6;
            } else {
                temp_r3 = saved_reg_r5->unk8;
                temp_r3->unk1C9C = (s32) ((temp_r3->unk1C9C & 0xFFE01FFF) | ((u8) saved_reg_r5->unk2264 << 0xD));
                temp_r3_2 = saved_reg_r5->unk8;
                temp_r0_10 = saved_reg_r5->unk2326;
                var_r2 = 7;
                if ((u32) temp_r0_10 <= 6U) {
                    var_r2 = temp_r0_10;
                }
                temp_r3_2->unk1C9D = (u8) ((-0x1D & temp_r3_2->unk1C9D) | ((var_r2 & 7) * 4));
                temp_r3_3 = saved_reg_r5->unk8;
                temp_r3_3->unk1C9C = (s16) ((0xFFFFFC00 & (u16) temp_r3_3->unk1C9C) | (saved_reg_r5->unk22C6 & 0x3FF));
                if (saved_reg_r5->unk2324 == 1) {
                    argA.unk0 = (u8) arg12;
                    argA.unk2 = (u16) arg4.unk38;
                    var_sb = 0xA;
                    if ((s32) saved_reg_r5->unk22C8 < (s32) (s16) saved_reg_r5->unk22CA) {
                        saved_reg_r5->unk22C8 = (s16) saved_reg_r5->unk22CA;
                    }
                    var_r4 = 0;
loop_128:
                    if (var_r4 <= 9) {
                        func_080522D8(saved_reg_r5->unk8 + 0x2C4C, &argA, var_r4);
                        if ((s32) (s16) argA.unk2 <= (s32) saved_reg_r5->unk22C8) {
                            var_sb = var_r4;
                        } else {
                            var_r4 += 1;
                            goto loop_128;
                        }
                    }
                    if (var_sb <= 9) {
                        if (var_sb <= 8) {
                            var_r6 = 9;
                            if (var_sb < 9) {
                                do {
                                    temp_r4 = var_r6 - 1;
                                    func_080522D8(saved_reg_r5->unk8 + 0x2C4C, &argA, temp_r4);
                                    func_080522E8(saved_reg_r5->unk8 + 0x2C4C, &argA, var_r6);
                                    var_r6 = temp_r4;
                                } while (var_r6 > var_sb);
                            }
                        }
                        argA.unk0 = 0U;
                        argA.unk2 = (u16) saved_reg_r5->unk22C8;
                        func_080522E8(saved_reg_r5->unk8 + 0x2C4C, &argA, var_sb);
                        if (var_sb == 0) {
                            SetFestivalWinner__6Animal(saved_reg_r5->unk8 + 0x1C70);
                        }
                    }
                }
                arg11 = 1;
            }
            break;
        }
        arg10 = (s32) func_08053960(saved_reg_r5);
        temp_r0_11 = func_08008918(saved_reg_r5);
        temp_r1_7 = saved_reg_r5->unk2330;
        arg4.unk0 = temp_r1_7;
        temp_r0_11->unk1C = temp_r1_7;
        temp_r0_12 = saved_reg_r5->unk1D59;
        if ((u32) temp_r0_12 <= 0x13U) {
            saved_reg_r5->unk1D59 = (u8) (temp_r0_12 + 1);
        } else {
            saved_reg_r5->unk1D59 = 0U;
            saved_reg_r5->unk1D58 = (u8) ((saved_reg_r5->unk1D58 + 1) & 3);
            temp_r6 = func_08008910(saved_reg_r5);
            func_08008F0C(&arg6, (saved_reg_r5->unk1D58 * 0x600) + saved_reg_r5 + 0x558, 0x06000000, 0x600);
            temp_r1_8 = temp_r6->unk4;
            if (temp_r1_8 != temp_r6->unkC) {
                if (temp_r1_8 != 0) {
                    temp_r1_8->unk0 = (s32) arg13->unk0;
                    temp_r1_8->unk4 = (s32) arg13->unk4;
                    temp_r1_8->unk8 = (s32) arg13->unk8;
                    temp_r1_8->unkC = (s32) arg13->unkC;
                }
                temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
            } else {
                arg15 = temp_r1_8;
                argC = 1;
                temp_r4_2 = (s32) (temp_r1_8 - temp_r6->unk0) >> 4;
                argB = temp_r4_2;
                var_r0_4 = &argB;
                if ((u32) temp_r4_2 < 1U) {
                    var_r0_4 = &argC;
                }
                temp_r0_13 = temp_r4_2 + *var_r0_4;
                if (temp_r0_13 != 0) {
                    temp_r4_3 = temp_r0_13 * 0x10;
                    var_r0_5 = malloc(temp_r4_3);
                    var_sb_2 = temp_r4_3;
                    if (var_r0_5 == 0) {
                        var_r0_5 = func_080D3BC0(var_sb_2);
                    }
                } else {
                    var_r0_5 = 0;
                    var_sb_2 = 0;
                }
                var_r2_2 = temp_r6->unk0;
                var_ip = var_r0_5;
                if (var_r2_2 != arg15) {
                    do {
                        if (var_ip != 0) {
                            var_ip->unk0 = (s32) var_r2_2->unk0;
                            var_ip->unk4 = (s32) var_r2_2->unk4;
                            var_ip->unk8 = (s32) var_r2_2->unk8;
                            var_ip->unkC = (s32) var_r2_2->unkC;
                        }
                        var_r2_2 += 0x10;
                        var_ip += 0x10;
                    } while (var_r2_2 != arg15);
                }
                if (argC == 1) {
                    if (var_ip != 0) {
                        var_ip->unk0 = (s32) arg13->unk0;
                        var_ip->unk4 = (s32) arg13->unk4;
                        var_ip->unk8 = (s32) arg13->unk8;
                        var_ip->unkC = (s32) arg13->unkC;
                    }
                    var_r4_2 = var_ip + 0x10;
                } else {
                    var_ip_2 = argC;
                    var_r2_3 = var_ip;
                    if (argC != 0) {
                        do {
                            if (var_r2_3 != 0) {
                                var_r2_3->unk0 = (s32) arg13->unk0;
                                var_r2_3->unk4 = (s32) arg13->unk4;
                                var_r2_3->unk8 = (s32) arg13->unk8;
                                var_r2_3->unkC = (s32) arg13->unkC;
                            }
                            var_ip_2 -= 1;
                            var_r2_3 += 0x10;
                        } while (var_ip_2 != 0);
                    }
                    var_r4_2 = var_r2_3;
                }
                temp_r2_3 = temp_r6->unk4;
                temp_r0_14 = temp_r6->unk0;
                var_r1_8 = temp_r0_14;
                if (temp_r0_14 != temp_r2_3) {
                    do {
                        var_r1_8 += 0x10;
                    } while (var_r1_8 != temp_r2_3);
                }
                if (temp_r0_14 != 0) {
                    free();
                }
                temp_r6->unk0 = var_r0_5;
                temp_r6->unk4 = var_r4_2;
                temp_r6->unkC = (void *) (var_sb_2 + var_r0_5);
            }
        }
        func_08053634(saved_reg_r5);
        func_080558C4(saved_reg_r5);
    }
    if (arg11 == 0) {
        sub_08052A1E();
    }
    arg6 = 0;
    argD = arg13;
    arg14->unk4 = 0;
    arg13->unk0 = 0;
    *argF = 0;
    if (arg6 != 0) {
        (*arg6)->unk8(arg6, 3);
    }
    if (arg5 != 0) {
        arg5->unk8->unkC(arg5, 3);
    }
    return argF;
}
