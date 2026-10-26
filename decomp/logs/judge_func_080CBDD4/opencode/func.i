# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CBDD4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CBDD4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CBDD4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CBDD4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CBDD4/opencode/func.c" 2
s32 free(void *);
s32 func_08008F0C(s32 *, s32, s32, s32);
u32 func_080CAD14(void *);
s32 func_080CADA0(void *);
s32 func_080CAE60(void *, s32, s32, s32);
s32 func_080CAEEC(void *, u32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern s32 gUnk_0811785C;

void func_080CBDD4(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 *sp30;
    void *sp34;
    void *sp38;
    s32 *var_r0;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r8;
    s32 var_r8_2;
    u32 temp_r1_5;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4;
    void *temp_r4_6;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3;
    void *var_r3_3;
    void *var_r4;
    void *var_r4_2;

    temp_r4 = arg0 + 0x280;
    func_080CADA0(temp_r4);
    temp_r5 = arg0->unk278;
    func_08008F0C(&spC, temp_r4->unk4, 0x06000600, 0x80);
    temp_r1 = temp_r5->unk4;
    if (temp_r1 != temp_r5->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) spC.unk0;
            temp_r1->unk4 = (s32) spC.unk4;
            temp_r1->unk8 = (s32) spC.unk8;
            temp_r1->unkC = (s32) spC.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        sp30 = &sp0 + 0x2C;
    } else {
        sp34 = temp_r1;
        sp20 = 1;
        temp_r4_2 = (s32) (sp34 - temp_r5->unk0) >> 4;
        sp1C = temp_r4_2;
        var_r0 = &sp1C;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp20;
        }
        temp_r0 = temp_r4_2 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_3 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_r8 = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        sp38 = var_r0_2;
        var_r2 = temp_r5->unk0;
        var_r3 = var_r0_2;
        sp30 = &sp0 + 0x2C;
        if (var_r2 != sp34) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp34);
        }
        if (sp20 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) spC.unk0;
                var_r3->unk4 = (s32) spC.unk4;
                var_r3->unk8 = (s32) spC.unk8;
                var_r3->unkC = (s32) spC.unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp20;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) spC.unk0;
                        var_r2_2->unk4 = (s32) spC.unk4;
                        var_r2_2->unk8 = (s32) spC.unk8;
                        var_r2_2->unkC = (s32) spC.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2 = temp_r5->unk4;
        temp_r1_2 = temp_r5->unk0;
        var_r0_3 = temp_r1_2;
        if (temp_r1_2 != temp_r2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        temp_r5->unk0 = sp38;
        temp_r5->unk4 = var_r4;
        temp_r5->unkC = (void *) (sp38 + var_r8);
    }
    temp_r5_2 = arg0->unk278;
    func_08008F0C(&spC, (arg0 + 0x280)->unk8, 0x05000040, 0x20);
    temp_r1_3 = temp_r5_2->unk4;
    if (temp_r1_3 != temp_r5_2->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) spC.unk0;
            temp_r1_3->unk4 = (s32) spC.unk4;
            temp_r1_3->unk8 = (s32) spC.unk8;
            temp_r1_3->unkC = (s32) spC.unkC;
        }
        temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
    } else {
        sp34 = temp_r1_3;
        sp28 = 1;
        temp_r4_4 = (s32) (sp34 - temp_r5_2->unk0) >> 4;
        sp24 = temp_r4_4;
        var_r0_4 = &sp24;
        if ((u32) temp_r4_4 < 1U) {
            var_r0_4 = &sp28;
        }
        temp_r0_2 = temp_r4_4 + *var_r0_4;
        if (temp_r0_2 != 0) {
            temp_r4_5 = temp_r0_2 * 0x10;
            var_r0_5 = malloc(temp_r4_5);
            var_r8_2 = temp_r4_5;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_5 = 0;
            var_r8_2 = 0;
        }
        sp38 = var_r0_5;
        var_r2_3 = temp_r5_2->unk0;
        var_r3_3 = var_r0_5;
        if (var_r2_3 != sp34) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != sp34);
        }
        if (sp28 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) spC.unk0;
                var_r3_3->unk4 = (s32) spC.unk4;
                var_r3_3->unk8 = (s32) spC.unk8;
                var_r3_3->unkC = (s32) spC.unkC;
            }
            var_r4_2 = var_r3_3 + 0x10;
        } else {
            var_r3_4 = sp28;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) spC.unk0;
                        var_r2_4->unk4 = (s32) spC.unk4;
                        var_r2_4->unk8 = (s32) spC.unk8;
                        var_r2_4->unkC = (s32) spC.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r4_2 = var_r2_4;
        }
        temp_r2_2 = temp_r5_2->unk4;
        temp_r1_4 = temp_r5_2->unk0;
        var_r0_6 = temp_r1_4;
        if (temp_r1_4 != temp_r2_2) {
            do {
                var_r0_6 += 0x10;
            } while (var_r0_6 != temp_r2_2);
        }
        if (temp_r1_4 != 0) {
            free(temp_r1_4);
        }
        temp_r5_2->unk0 = sp38;
        temp_r5_2->unk4 = var_r4_2;
        temp_r5_2->unkC = (void *) (sp38 + var_r8_2);
    }
    sp2C = gUnk_0811785C;
    sp0 = 2;
    sp4 = 2;
    sp8 = 0x20;
    func_080CAE60(arg0, (sp30->unk1 << 6) + ((sp2C * 2) + 0x0600F000), 0x30, 2);
    sp0 = 1;
    sp4 = 0;
    sp8 = 0x20;
    func_080CAE60(arg0, (sp30->unk1 << 6) + ((sp2C * 2) + 0x0600F080), 0x54, 2);
    temp_r4_6 = arg0 + 0x280;
    if (func_080CAD14(temp_r4_6) > 1U) {
        temp_r1_5 = func_080CAD14(temp_r4_6);
        sp0 = 0;
        sp4 = 0x20;
        func_080CAEEC(arg0, temp_r1_5, (sp30->unk1 << 6) + ((sp30->unk0 * 2) + 0x0600F082), 0x20);
    }
}
