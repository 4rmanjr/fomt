# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AD14/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AD14/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AD14/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AD14/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AD14/kilo-1531/func.c" 2
s32 free();
void *func_08008910(void *);
void *func_08008918(void *);
s32 func_08008F0C(s32 *, void *, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);

void func_0805AD14(void *arg0) {
s32 sp0;
s32 sp4;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    void *sp3C;
    s32 sp40;
    ? *sp44;
    s32 sp48;
    ? *sp4C;
    s32 sp50;
    s32 sp54;
    ? *sp58;
    s32 sp5C;
    void *sp60;
    s32 sp64;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 temp_r0_10;
    s32 temp_r0_12;
    s32 temp_r0_15;
    s32 temp_r0_16;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_ip_3;
    s32 var_ip_4;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    u16 temp_r0_14;
    u16 temp_r0_4;
    u16 temp_r0_8;
    u16 temp_r0_9;
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r1_3;
    u16 temp_r1_4;
    u16 temp_r1_6;
    u16 temp_r1_9;
    void *temp_r0;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_17;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_7;
    void *temp_r1_10;
    void *temp_r1_5;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;
    void *var_r3_4;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;
    void *var_r4_4;

    temp_r0 = func_08008918();
    temp_r1 = arg0->unk13EA;
    sp0.unk0 = temp_r1;
    temp_r0->unk14 = temp_r1;
    temp_r0_2 = func_08008918(arg0);
    temp_r1_2 = arg0->unk13EC;
    sp0.unk0 = temp_r1_2;
    temp_r0_2->unk18 = temp_r1_2;
    temp_r0_3 = func_08008918(arg0);
    temp_r1_3 = arg0->unk13EE;
    sp0.unk0 = temp_r1_3;
    temp_r0_3->unk1C = temp_r1_3;
    temp_r1_4 = 0xFFF0 & arg0->unk13EE;
    if (arg0->unk13F4 == temp_r1_4) {

    } else {
        arg0->unk13F4 = temp_r1_4;
        temp_r0_4 = arg0->unk13FA - 1;
        arg0->unk13FA = temp_r0_4;
        if ((s32) (temp_r0_4 << 0x10) < 0) {
            arg0->unk13FA = 2U;
        }
        temp_r0_5 = (arg0->unk13F4 - 0x10) & 0x1F0;
        var_r7 = 0;
        sp38 = (temp_r0_5 >> 8) << 0xB;
        sp3C = &sp0 + 4;
        sp34 = ((temp_r0_5 >> 3) & 0x1F) * 2;
loop_5:
        temp_r5 = func_08008910(arg0);
        func_08008F0C(&sp4, (((var_r7 * 3) + (s16) arg0->unk13FA) * 4) + arg0 + 0xBEA, sp34 + (sp38 + (var_r7 << 6)) + 0x0600C800, 4);
        temp_r1_5 = temp_r5->unk4;
        if (temp_r1_5 != temp_r5->unkC) {
            if (temp_r1_5 != 0) {
                temp_r1_5->unk0 = (s32) sp3C->unk0;
                temp_r1_5->unk4 = (s32) sp3C->unk4;
                temp_r1_5->unk8 = (s32) sp3C->unk8;
                temp_r1_5->unkC = (s32) sp3C->unkC;
            }
            temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
            sp64 = var_r7 + 1;
        } else {
            sp60 = temp_r1_5;
            sp18 = 1;
            temp_r4 = (s32) (temp_r1_5 - temp_r5->unk0) >> 4;
            sp14 = temp_r4;
            var_r0 = &sp14;
            if ((u32) temp_r4 < 1U) {
                var_r0 = &sp18;
            }
            temp_r0_6 = temp_r4 + *var_r0;
            if (temp_r0_6 != 0) {
                temp_r4_2 = temp_r0_6 * 0x10;
                var_r0_2 = malloc(temp_r4_2);
                var_sb = temp_r4_2;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_2 = 0;
                var_sb = 0;
            }
            var_r2 = temp_r5->unk0;
            var_r3 = var_r0_2;
            sp64 = var_r7 + 1;
            if (var_r2 != sp60) {
                do {
                    if (var_r3 != 0) {
                        var_r3->unk0 = (s32) var_r2->unk0;
                        var_r3->unk4 = (s32) var_r2->unk4;
                        var_r3->unk8 = (s32) var_r2->unk8;
                        var_r3->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3 += 0x10;
                } while (var_r2 != sp60);
            }
            if (sp18 == 1) {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) sp3C->unk0;
                    var_r3->unk4 = (s32) sp3C->unk4;
                    var_r3->unk8 = (s32) sp3C->unk8;
                    var_r3->unkC = (s32) sp3C->unkC;
                }
                var_r4 = var_r3 + 0x10;
            } else {
                var_ip = sp18;
                var_r2_2 = var_r3;
                if (sp18 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp3C->unk0;
                            var_r2_2->unk4 = (s32) sp3C->unk4;
                            var_r2_2->unk8 = (s32) sp3C->unk8;
                            var_r2_2->unkC = (s32) sp3C->unkC;
                        }
                        var_ip -= 1;
                        var_r2_2 += 0x10;
                    } while (var_ip != 0);
                }
                var_r4 = var_r2_2;
            }
            temp_r2 = temp_r5->unk4;
            temp_r0_7 = temp_r5->unk0;
            var_r1 = temp_r0_7;
            if (temp_r0_7 != temp_r2) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2);
            }
            if (temp_r0_7 != 0) {
                free();
            }
            temp_r5->unk0 = var_r0_2;
            temp_r5->unk4 = var_r4;
            temp_r5->unkC = (void *) (var_sb + var_r0_2);
        }
        var_r7 = sp64;
        if (var_r7 <= 0x13) {
            goto loop_5;
        }
    }
    temp_r1_6 = 0xFFF0 & arg0->unk13EC;
    if (arg0->unk13F2 == temp_r1_6) {

    } else {
        arg0->unk13F2 = temp_r1_6;
        temp_r0_8 = arg0->unk13F8 - 1;
        arg0->unk13F8 = temp_r0_8;
        if ((s32) (temp_r0_8 << 0x10) < 0) {
            arg0->unk13F8 = 2U;
        }
        temp_r0_9 = arg0->unk13F2;
        temp_r3 = (temp_r0_9 - 0x10) & 0x1F0;
        temp_r2_2 = temp_r3 >> 3;
        if ((u32) (u16) (temp_r0_9 - 0x90) > 0x2FU) {
            var_r7_2 = 3;
            sp5C = temp_r3 >> 8;
            sp48 = (temp_r2_2 & 0x1F) * 2;
            sp4C = &sp0;
loop_74:
            temp_r5_2 = func_08008910(arg0);
            func_08008F0C(&sp0, (((var_r7_2 * 3) + (s16) arg0->unk13F8) * 4) + arg0 + 0xCEA, sp48 + ((sp5C << 0xB) + (var_r7_2 << 6)) + 0x0600D800, 4);
            temp_r1_7 = temp_r5_2->unk4;
            if (temp_r1_7 != temp_r5_2->unkC) {
                if (temp_r1_7 != 0) {
                    temp_r1_7->unk0 = (s32) sp0.unk0;
                    temp_r1_7->unk4 = (s32) sp0.unk4;
                    temp_r1_7->unk8 = (s32) sp0.unk8;
                    temp_r1_7->unkC = (s32) sp0.unkC;
                }
                temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
                sp64 = var_r7_2 + 1;
            } else {
                sp60 = temp_r1_7;
                sp28 = 1;
                temp_r4_3 = (s32) (temp_r1_7 - temp_r5_2->unk0) >> 4;
                sp24 = temp_r4_3;
                var_r0_3 = &sp24;
                if ((u32) temp_r4_3 < 1U) {
                    var_r0_3 = &sp28;
                }
                temp_r0_10 = temp_r4_3 + *var_r0_3;
                if (temp_r0_10 != 0) {
                    temp_r4_4 = temp_r0_10 * 0x10;
                    var_r0_4 = malloc(temp_r4_4);
                    var_sb_2 = temp_r4_4;
                    if (var_r0_4 == 0) {
                        var_r0_4 = func_080D3BC0(var_sb_2);
                    }
                } else {
                    var_r0_4 = 0;
                    var_sb_2 = 0;
                }
                var_r2_3 = temp_r5_2->unk0;
                var_r3_2 = var_r0_4;
                sp64 = var_r7_2 + 1;
                if (var_r2_3 != sp60) {
                    do {
                        if (var_r3_2 != 0) {
                            var_r3_2->unk0 = (s32) var_r2_3->unk0;
                            var_r3_2->unk4 = (s32) var_r2_3->unk4;
                            var_r3_2->unk8 = (s32) var_r2_3->unk8;
                            var_r3_2->unkC = (s32) var_r2_3->unkC;
                        }
                        var_r2_3 += 0x10;
                        var_r3_2 += 0x10;
                    } while (var_r2_3 != sp60);
                }
                if (sp28 == 1) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) sp4C->unk0;
                        var_r3_2->unk4 = (s32) sp4C->unk4;
                        var_r3_2->unk8 = (s32) sp4C->unk8;
                        var_r3_2->unkC = (s32) sp4C->unkC;
                    }
                    var_r4_2 = var_r3_2 + 0x10;
                } else {
                    var_ip_2 = sp28;
                    var_r2_4 = var_r3_2;
                    if (sp28 != 0) {
                        do {
                            if (var_r2_4 != 0) {
                                var_r2_4->unk0 = (s32) sp4C->unk0;
                                var_r2_4->unk4 = (s32) sp4C->unk4;
                                var_r2_4->unk8 = (s32) sp4C->unk8;
                                var_r2_4->unkC = (s32) sp4C->unkC;
                            }
                            var_ip_2 -= 1;
                            var_r2_4 += 0x10;
                        } while (var_ip_2 != 0);
                    }
                    var_r4_2 = var_r2_4;
                }
                temp_r2_3 = temp_r5_2->unk4;
                temp_r0_11 = temp_r5_2->unk0;
                var_r1_2 = temp_r0_11;
                if (temp_r0_11 != temp_r2_3) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2_3);
                }
                if (temp_r0_11 != 0) {
                    free();
                }
                temp_r5_2->unk0 = var_r0_4;
                temp_r5_2->unk4 = var_r4_2;
                temp_r5_2->unkC = (void *) (var_sb_2 + var_r0_4);
            }
            var_r7_2 = sp64;
            if (var_r7_2 <= 0x11) {
                goto loop_74;
            }
        } else {
            var_r7_3 = 3;
            sp5C = temp_r3 >> 8;
            sp40 = (temp_r2_2 & 0x1F) * 2;
            sp44 = &sp0;
loop_42:
            temp_r5_3 = func_08008910(arg0);
            func_08008F0C(&sp0, (((var_r7_3 * 3) + (s16) arg0->unk13F8) * 4) + arg0 + 0xEEA, sp40 + ((sp5C << 0xB) + (var_r7_3 << 6)) + 0x0600D800, 4);
            temp_r1_8 = temp_r5_3->unk4;
            if (temp_r1_8 != temp_r5_3->unkC) {
                if (temp_r1_8 != 0) {
                    temp_r1_8->unk0 = (s32) sp0.unk0;
                    temp_r1_8->unk4 = (s32) sp0.unk4;
                    temp_r1_8->unk8 = (s32) sp0.unk8;
                    temp_r1_8->unkC = (s32) sp0.unkC;
                }
                temp_r5_3->unk4 = (void *) (temp_r5_3->unk4 + 0x10);
                sp64 = var_r7_3 + 1;
            } else {
                sp60 = temp_r1_8;
                sp20 = 1;
                temp_r4_5 = (s32) (temp_r1_8 - temp_r5_3->unk0) >> 4;
                sp1C = temp_r4_5;
                var_r0_5 = &sp1C;
                if ((u32) temp_r4_5 < 1U) {
                    var_r0_5 = &sp20;
                }
                temp_r0_12 = temp_r4_5 + *var_r0_5;
                if (temp_r0_12 != 0) {
                    temp_r4_6 = temp_r0_12 * 0x10;
                    var_r0_6 = malloc(temp_r4_6);
                    var_sb_3 = temp_r4_6;
                    if (var_r0_6 == 0) {
                        var_r0_6 = func_080D3BC0(var_sb_3);
                    }
                } else {
                    var_r0_6 = 0;
                    var_sb_3 = 0;
                }
                var_r2_5 = temp_r5_3->unk0;
                var_r3_3 = var_r0_6;
                sp64 = var_r7_3 + 1;
                if (var_r2_5 != sp60) {
                    do {
                        if (var_r3_3 != 0) {
                            var_r3_3->unk0 = (s32) var_r2_5->unk0;
                            var_r3_3->unk4 = (s32) var_r2_5->unk4;
                            var_r3_3->unk8 = (s32) var_r2_5->unk8;
                            var_r3_3->unkC = (s32) var_r2_5->unkC;
                        }
                        var_r2_5 += 0x10;
                        var_r3_3 += 0x10;
                    } while (var_r2_5 != sp60);
                }
                if (sp20 == 1) {
                    if (var_r3_3 != 0) {
                        var_r3_3->unk0 = (s32) sp44->unk0;
                        var_r3_3->unk4 = (s32) sp44->unk4;
                        var_r3_3->unk8 = (s32) sp44->unk8;
                        var_r3_3->unkC = (s32) sp44->unkC;
                    }
                    var_r4_3 = var_r3_3 + 0x10;
                } else {
                    var_ip_3 = sp20;
                    var_r2_6 = var_r3_3;
                    if (sp20 != 0) {
                        do {
                            if (var_r2_6 != 0) {
                                var_r2_6->unk0 = (s32) sp44->unk0;
                                var_r2_6->unk4 = (s32) sp44->unk4;
                                var_r2_6->unk8 = (s32) sp44->unk8;
                                var_r2_6->unkC = (s32) sp44->unkC;
                            }
                            var_ip_3 -= 1;
                            var_r2_6 += 0x10;
                        } while (var_ip_3 != 0);
                    }
                    var_r4_3 = var_r2_6;
                }
                temp_r2_4 = temp_r5_3->unk4;
                temp_r0_13 = temp_r5_3->unk0;
                var_r1_3 = temp_r0_13;
                if (temp_r0_13 != temp_r2_4) {
                    do {
                        var_r1_3 += 0x10;
                    } while (var_r1_3 != temp_r2_4);
                }
                if (temp_r0_13 != 0) {
                    free();
                }
                temp_r5_3->unk0 = var_r0_6;
                temp_r5_3->unk4 = var_r4_3;
                temp_r5_3->unkC = (void *) (var_sb_3 + var_r0_6);
            }
            var_r7_3 = sp64;
            if (var_r7_3 <= 0x11) {
                goto loop_42;
            }
        }
    }
    temp_r1_9 = 0xFFF0 & arg0->unk13EA;
    if (arg0->unk13F0 == temp_r1_9) {
        return;
    }
    arg0->unk13F0 = temp_r1_9;
    temp_r0_14 = arg0->unk13F6 - 1;
    arg0->unk13F6 = temp_r0_14;
    if ((s32) (temp_r0_14 << 0x10) < 0) {
        arg0->unk13F6 = 2U;
    }
    temp_r0_15 = (arg0->unk13F0 - 0x10) & 0x1F0;
    var_r7_4 = 0x11;
    sp54 = (temp_r0_15 >> 8) << 0xB;
    sp58 = &sp0;
    sp50 = ((temp_r0_15 >> 3) & 0x1F) * 2;
loop_109:
    temp_r5_4 = func_08008910(arg0);
    func_08008F0C(&sp0, (((var_r7_4 * 3) + (s16) arg0->unk13F6) * 4) + arg0 + 0xDEA, sp50 + (sp54 + (var_r7_4 << 6)) + 0x0600E800, 4);
    temp_r1_10 = temp_r5_4->unk4;
    if (temp_r1_10 != temp_r5_4->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) sp0.unk0;
            temp_r1_10->unk4 = (s32) sp0.unk4;
            temp_r1_10->unk8 = (s32) sp0.unk8;
            temp_r1_10->unkC = (s32) sp0.unkC;
        }
        temp_r5_4->unk4 = (void *) (temp_r5_4->unk4 + 0x10);
        sp64 = var_r7_4 + 1;
    } else {
        sp60 = temp_r1_10;
        sp30 = 1;
        temp_r4_7 = (s32) (temp_r1_10 - temp_r5_4->unk0) >> 4;
        sp2C = temp_r4_7;
        var_r0_7 = &sp2C;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_7 = &sp30;
        }
        temp_r0_16 = temp_r4_7 + *var_r0_7;
        if (temp_r0_16 != 0) {
            temp_r4_8 = temp_r0_16 * 0x10;
            var_r0_8 = malloc(temp_r4_8);
            var_sb_4 = temp_r4_8;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_sb_4);
            }
        } else {
            var_r0_8 = 0;
            var_sb_4 = 0;
        }
        var_r2_7 = temp_r5_4->unk0;
        var_r3_4 = var_r0_8;
        sp64 = var_r7_4 + 1;
        if (var_r2_7 != sp60) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_7->unk0;
                    var_r3_4->unk4 = (s32) var_r2_7->unk4;
                    var_r3_4->unk8 = (s32) var_r2_7->unk8;
                    var_r3_4->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_7 != sp60);
        }
        if (sp30 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) sp58->unk0;
                var_r3_4->unk4 = (s32) sp58->unk4;
                var_r3_4->unk8 = (s32) sp58->unk8;
                var_r3_4->unkC = (s32) sp58->unkC;
            }
            var_r4_4 = var_r3_4 + 0x10;
        } else {
            var_ip_4 = sp30;
            var_r2_8 = var_r3_4;
            if (sp30 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) sp58->unk0;
                        var_r2_8->unk4 = (s32) sp58->unk4;
                        var_r2_8->unk8 = (s32) sp58->unk8;
                        var_r2_8->unkC = (s32) sp58->unkC;
                    }
                    var_ip_4 -= 1;
                    var_r2_8 += 0x10;
                } while (var_ip_4 != 0);
            }
            var_r4_4 = var_r2_8;
        }
        temp_r2_5 = temp_r5_4->unk4;
        temp_r0_17 = temp_r5_4->unk0;
        var_r1_4 = temp_r0_17;
        if (temp_r0_17 != temp_r2_5) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_5);
        }
        if (temp_r0_17 != 0) {
            free();
        }
        temp_r5_4->unk0 = var_r0_8;
        temp_r5_4->unk4 = var_r4_4;
        temp_r5_4->unkC = (void *) (var_sb_4 + var_r0_8);
    }
    var_r7_4 = sp64;
    if (var_r7_4 <= 0x13) {
        goto loop_109;
    }
}
