# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005CDC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005CDC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005CDC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005CDC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005CDC/opencode/func.c" 2
s32 free();
s32 func_080064E8(void *);
s32 func_080088DC(void *);
void *func_08008910(void *);
s16 *func_08008918(void *);
s32 func_08008920(void *);
? *func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08008E64(s32, s32, s32);
s32 func_08008EB8(s32, s32, s32);
s32 func_08008F0C(s32 *, void *, s32, s32);
s32 func_0804E7A0(s32, void *, s32);
s32 func_0804E8F0(s32, void *, s32, s32);
s32 func_08050D3C(s32, s32, s32, s16 *);
s32 func_08051320(s32, s32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern ? gUnk_080E8BF4;
extern s32 gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 gUnk_080F9F78;

void func_08005CDC(void *arg0) {
    ? *sp0;
    s32 sp4;
    void *sp8;
s32 spC;
s32 sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    void *sp40;
    ? **sp44;
    ? **sp48;
    void *sp4C;
    void *sp50;
    ? *temp_r1_2;
    ? *temp_r4_5;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r5;
    s16 *var_r0;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 *var_r1_5;
    s16 *var_r1_6;
    s16 *var_r2;
    s16 *var_r2_2;
    s16 *var_r2_3;
    s16 *var_r2_4;
    s16 *var_r2_5;
    s16 var_r3_2;
    s32 *var_r0_2;
    s32 *var_r0_4;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6_3;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r3_10;
    s32 var_r3_8;
    s32 var_r8;
    s32 var_sb;
    u32 var_r1;
    u32 var_r1_4;
    u32 var_r3;
    u32 var_r3_3;
    u32 var_r3_4;
    u32 var_r3_5;
    u32 var_r3_6;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_3;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r7;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3_7;
    void *var_r3_9;
    void *var_r5;
    void *var_r5_2;

    func_08008E64(gUnk_080F9F70, 0x06004B00, gUnk_080F9F74);
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    temp_r0 = func_08008918(arg0);
    spC.unk0 = 0x1740;
    *temp_r0 = 0x1740;
    temp_r0_2 = func_08008918(arg0);
    spC.unk0 = 0x1841;
    temp_r0_2->unkA = 0x1841;
    temp_r0_3 = func_08008918(arg0);
    spC.unk0 = 0x1F02;
    temp_r0_3->unkC = 0x1F02;
    sp0 = (s32 *)0x14;
    sp4 = 0x258;
    sp8 = 0;
    func_08051320(0x0600F800, 0, 0, 0x1E);
    func_08008EB8(-1, 0x0600C000, 0x800);
    var_r1 = 0;
    sp44 = &sp0 + 0x10;
    sp48 = &sp0 + 0x30;
    temp_r7 = arg0 + 0xC;
    sp40 = arg0 + 0x43B0;
    do {
        var_r3 = 0;
        var_r0 = (var_r1 << 6) + 0x0600C000;
loop_2:
        *var_r0 = 0x1A2;
        var_r0 += 2;
        var_r3 += 1;
        if (var_r3 <= 0x1DU) {
            goto loop_2;
        }
        var_r1 += 1;
    } while (var_r1 <= 0x13U);
    var_r3_2 = 0xA;
    var_r2 = (s16 *)0x0600C094;
    var_r1_2 = (s16 *)0x0600C054;
    do {
        *var_r1_2 = var_r3_2;
        *var_r2 = var_r3_2 + 0x1E;
        var_r2 += 2;
        var_r1_2 += 2;
        var_r3_2 += 1;
    } while ((u32) var_r3_2 <= 0xFU);
    var_r3_3 = 3;
    var_r2_2 = (s16 *)0x0600C486;
    var_r1_3 = (s16 *)0x0600C446;
    do {
        *var_r1_3 = var_r3_3 + 0x1A4;
        *var_r2_2 = var_r3_3 + 0x1C2;
        var_r2_2 += 2;
        var_r1_3 += 2;
        var_r3_3 += 1;
    } while (var_r3_3 <= 0x1AU);
    var_r1_4 = 4;
    do {
        var_r3_4 = 0;
        var_r2_3 = (var_r1_4 << 6) + 0x0600C000;
loop_10:
        *var_r2_3 = ((var_r1_4 - 2) * 0x1E) + var_r3_4;
        var_r2_3 += 2;
        var_r3_4 += 1;
        if (var_r3_4 <= 0x1DU) {
            goto loop_10;
        }
        var_r1_4 += 1;
    } while (var_r1_4 <= 0xFU);
    var_r3_5 = 0x12;
    var_r2_4 = (s16 *)0x0600C0A4;
    var_r1_5 = (s16 *)0x0600C064;
    do {
        *var_r1_5 = var_r3_5 + 0x1E0;
        *var_r2_4 = var_r3_5 + 0x1FE;
        var_r2_4 += 2;
        var_r1_5 += 2;
        var_r3_5 += 1;
    } while (var_r3_5 <= 0x1DU);
    if (arg0->unk45FC != 0) {
        var_r3_6 = 1;
        var_r2_5 = (s16 *)0x0600C082;
        var_r1_6 = (s16 *)0x0600C042;
        do {
            *var_r1_6 = var_r3_6 + 0x21B;
            *var_r2_5 = var_r3_6 + 0x224;
            var_r2_5 += 2;
            var_r1_6 += 2;
            var_r3_6 += 1;
        } while (var_r3_6 <= 9U);
    }
    func_08008EB8(0, 0x06FFC000, 0x20);
    sp20.unk0 = 0x1E;
    sp20.unk2 = 2;
    func_0804E7A0(sp20, temp_r7, 0);
    sp24.unk0 = 0x1E;
    sp24.unk2 = 2;
    sp0 = &gUnk_080E8BF4;
    func_0804E8F0(sp24, temp_r7, 0x58, 0);
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&sp10, temp_r7, 0x06000000, 0x780);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32 *) sp44->unk0;
            temp_r1->unk4 = (s32) sp44->unk4;
            temp_r1->unk8 = (s32) sp44->unk8;
            temp_r1->unkC = (s32) sp44->unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
    } else {
        sp4C = temp_r1;
        sp2C = 1;
        temp_r4 = (s32) (temp_r1 - temp_r6->unk0) >> 4;
        sp28 = temp_r4;
        var_r0_2 = &sp28;
        if ((u32) temp_r4 < 1U) {
            var_r0_2 = &sp2C;
        }
        temp_r0_4 = temp_r4 + *var_r0_2;
        if (temp_r0_4 != 0) {
            temp_r4_2 = temp_r0_4 * 0x10;
            var_r0_3 = malloc(temp_r4_2);
            var_sb = temp_r4_2;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_3 = 0;
            var_sb = 0;
        }
        sp50 = var_r0_3;
        var_r2_6 = temp_r6->unk0;
        var_r3_7 = var_r0_3;
        if (var_r2_6 != sp4C) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_6->unk0;
                    var_r3_7->unk4 = (s32) var_r2_6->unk4;
                    var_r3_7->unk8 = (s32) var_r2_6->unk8;
                    var_r3_7->unkC = (s32) var_r2_6->unkC;
                }
                var_r2_6 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_6 != sp4C);
        }
        if (sp2C == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32 *) sp44->unk0;
                var_r3_7->unk4 = (s32) sp44->unk4;
                var_r3_7->unk8 = (s32) sp44->unk8;
                var_r3_7->unkC = (s32) sp44->unkC;
            }
            var_r5 = var_r3_7 + 0x10;
        } else {
            var_r3_8 = sp2C;
            var_r2_7 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_7 != 0) {
                        var_r2_7->unk0 = (s32 *) sp44->unk0;
                        var_r2_7->unk4 = (s32) sp44->unk4;
                        var_r2_7->unk8 = (s32) sp44->unk8;
                        var_r2_7->unkC = (s32) sp44->unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_7 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r5 = var_r2_7;
        }
        temp_r2 = temp_r6->unk4;
        temp_r0_5 = temp_r6->unk0;
        var_r1_7 = temp_r0_5;
        if (temp_r0_5 != temp_r2) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2);
        }
        if (temp_r0_5 != 0) {
            free();
        }
        temp_r6->unk0 = sp50;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp50 + var_sb);
    }
    arg0->unk4600 = 0;
    arg0->unk4637 = 1;
    func_080064E8(arg0);
    sp30 = 9;
    sp48->unk2 = 2;
    func_0804E7A0(sp30, sp40, 0);
    temp_r1_2 = arg0->unk45FC;
    if (temp_r1_2 != 0) {
        sp34.unk0 = 9;
        sp34.unk2 = 2;
        sp0 = temp_r1_2;
        func_0804E8F0(sp34, sp40, 0, 0);
    }
    temp_r6_2 = func_08008910(arg0);
    func_08008F0C(&spC, sp40, 0x06004380, 0x240);
    temp_r1_3 = temp_r6_2->unk4;
    if (temp_r1_3 != temp_r6_2->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) spC.unk0;
            temp_r1_3->unk4 = (s32) spC.unk4;
            temp_r1_3->unk8 = (s32) spC.unk8;
            temp_r1_3->unkC = (s32) spC.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        sp4C = temp_r1_3;
        sp3C = 1;
        temp_r4_3 = (s32) (temp_r1_3 - temp_r6_2->unk0) >> 4;
        sp38 = temp_r4_3;
        var_r0_4 = &sp38;
        if ((u32) temp_r4_3 < 1U) {
            var_r0_4 = &sp3C;
        }
        temp_r0_6 = temp_r4_3 + *var_r0_4;
        if (temp_r0_6 != 0) {
            temp_r4_4 = temp_r0_6 * 0x10;
            var_r0_5 = malloc(temp_r4_4);
            var_r8 = temp_r4_4;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_5 = 0;
            var_r8 = 0;
        }
        sp50 = var_r0_5;
        var_r2_8 = temp_r6_2->unk0;
        var_r3_9 = var_r0_5;
loop_61:
        if (var_r2_8 != sp4C) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) var_r2_8->unk0;
                var_r3_9->unk4 = (s32) var_r2_8->unk4;
                var_r3_9->unk8 = (s32) var_r2_8->unk8;
                var_r3_9->unkC = (s32) var_r2_8->unkC;
            }
            var_r2_8 += 0x10;
            var_r3_9 += 0x10;
            goto loop_61;
        }
        if (sp3C == 1) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) spC.unk0;
                var_r3_9->unk4 = (s32) spC.unk4;
                var_r3_9->unk8 = (s32) spC.unk8;
                var_r3_9->unkC = (s32) spC.unkC;
            }
            var_r5_2 = var_r3_9 + 0x10;
        } else {
            var_r3_10 = sp3C;
            var_r2_9 = var_r3_9;
            if (var_r3_10 != 0) {
                do {
                    if (var_r2_9 != 0) {
                        var_r2_9->unk0 = (s32) spC.unk0;
                        var_r2_9->unk4 = (s32) spC.unk4;
                        var_r2_9->unk8 = (s32) spC.unk8;
                        var_r2_9->unkC = (s32) spC.unkC;
                    }
                    var_r3_10 -= 1;
                    var_r2_9 += 0x10;
                } while (var_r3_10 != 0);
            }
            var_r5_2 = var_r2_9;
        }
        temp_r2_2 = temp_r6_2->unk4;
        temp_r0_7 = temp_r6_2->unk0;
        var_r1_8 = temp_r0_7;
        if (temp_r0_7 != temp_r2_2) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_2);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        temp_r6_2->unk0 = sp50;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (sp50 + var_r8);
    }
    temp_sb = arg0->unk45F8;
    temp_r8 = func_080088DC(arg0);
    temp_r6_3 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4_5 = func_08008940(arg0);
    temp_r0_8 = func_0800894C(arg0);
    sp0 = temp_r4_5;
    sp4 = temp_r0_8;
    sp8 = arg0 + 0x45F0;
    func_08050D3C(temp_sb, temp_r8, temp_r6_3, temp_r5);
}
