# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099ACC/Prodesk_344259/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099ACC/Prodesk_344259/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099ACC/Prodesk_344259/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099ACC/Prodesk_344259/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08099ACC/Prodesk_344259/func.c" 2
s32 IsEmpty__C12RucksackItem(void *);
s32 free();
u16 func_080074C0(void *, s32);
s16 func_08007D4C(void *, void *);
void *func_08008910(void *);
u8 *func_08008920(void *);
s32 func_08008F0C(s32 *, s32, s32, u16);
s32 func_0805E8F0(void *);
s32 func_0805E99C(u8 *, s32, u16, ? *);
s32 func_0809A3E0(void *);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 memcpy(s32 *, ? *, s32);
extern ? gUnk_08117838;

void func_08099ACC(void *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
    s32 sp2C;
    s32 sp34;
s32 sp3C;
    s32 sp5C;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 *sp80;
    s32 *sp84;
    s32 *sp88;
    void *sp8C;
    void *sp90;
    void *sp94;
    s16 temp_r2_4;
    s16 temp_r2_6;
    s16 temp_r2_8;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_16;
    s32 temp_r0_22;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    u16 var_r1;
    u16 var_r2_10;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r2_7;
    u16 var_r3;
    u16 var_r3_3;
    u16 var_r3_5;
    u8 *temp_r0_3;
    u8 *temp_r0_4;
    u8 *temp_r0_5;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 temp_r2_3;
    void **temp_r1_10;
    void **temp_r1_14;
    void **temp_r1_4;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_23;
    void *temp_r0_2;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_13;
    void *temp_r1_15;
    void *temp_r1_16;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_5;
    void *temp_r2_7;
    void *temp_r2_9;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_2;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3_2;
    void *var_r3_4;
    void *var_r3_6;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;

    sp0.unk0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0U;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    sp1C = 0;
    sp1C.unk4 = 0;
    sp24 = 0;
    sp24.unk4 = 0;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    func_0809A3E0(arg0);
    sp7C = 0;
    if (arg0->unk369 == 0) {
        sp7C = 0x18;
    }
    temp_r0 = ((((sp5C & 0xFFFFFCFF & 0xFFFFF3FF) | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF) | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
    sp5C = temp_r0;
    temp_r0_2 = arg0 + 0x308;
    sp5C.unk4 = (s32) (((u16) ((sp5C.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_2, temp_r0_2->unk4) & 0xF) << 0xC)) & 0xFFFFF3FF) | 0x400);
    sp5C = temp_r0 & 0xFFFFFF00;
    if (sp7C != 0) {
        var_r4 = 0;
        sp80 = arg0 + 0x274;
        sp84 = arg0 + 0x1CC;
        sp88 = arg0 + 0x204;
        sp8C = arg0 + 0x300;
        var_r6 = 0xB8;
        do {
            sp5C = (sp5C & 0xFE00FFFF) | ((0x1FF & var_r6) << 0x10);
            sp5C.unk4 = (s32) ((sp5C.unk4 & 0xFFFFFC00) | ((u32) ((func_08007D4C(sp8C, sp8C->unk4) + (var_r4 * 2) + sp7C) << 0x16) >> 0x16));
            temp_r0_3 = func_08008920(arg0);
            temp_r2 = *temp_r0_3;
            if ((u32) temp_r2 <= 0x7FU) {
                temp_r1 = temp_r0_3 + ((temp_r2 * 8) + 4);
                temp_r1->unk0 = sp5C;
                temp_r1->unk4 = (u16) sp5C.unk4;
                *temp_r0_3 = temp_r2 + 1;
            }
            var_r6 += 8;
            var_r4 += 1;
        } while (var_r4 <= 3);
    } else {
        var_r5 = 0;
        sp80 = arg0 + 0x274;
        sp84 = arg0 + 0x1CC;
        sp88 = arg0 + 0x204;
        var_r8 = 0x88;
        sp90 = arg0 + 0x300;
        do {
            sp5C.unk2 = (u16) ((sp5C.unk2 & 0xFFFFFE00) | (var_r8 & 0x1FF));
            sp5C.unk4 = (s16) (((u16) sp5C.unk4 & 0xFFFFFC00) | ((func_08007D4C(sp90, sp90->unk4) + (var_r5 * 2) + sp7C) & 0x3FF));
            temp_r0_4 = func_08008920(arg0);
            temp_r2_2 = *temp_r0_4;
            if ((u32) temp_r2_2 <= 0x7FU) {
                temp_r1_2 = temp_r0_4 + ((temp_r2_2 * 8) + 4);
                temp_r1_2->unk0 = sp5C;
                temp_r1_2->unk4 = (u16) sp5C.unk4;
                *temp_r0_4 = temp_r2_2 + 1;
            }
            var_r8 += 8;
            var_r5 += 1;
        } while (var_r5 <= 0xB);
    }
    if (arg0->unk369 != 0) {
        sp5C.unk3 = (u8) (0x3F & sp5C.unk3);
        sp5C.unk0 = 0x18;
        sp5C.unk1 = (u8) (0x3F & sp5C.unk1);
        var_r5_2 = 0;
        var_r8_2 = 0xD0;
        sp90 = arg0 + 0x310;
        do {
            sp5C.unk2 = (u16) ((sp5C.unk2 & 0xFFFFFE00) | (var_r8_2 & 0x1FF));
            sp5C.unk4 = (s16) (((u16) sp5C.unk4 & 0xFFFFFC00) | ((*(arg0 + 0x369 + var_r5_2) + func_08007D4C(sp90, sp90->unk4)) & 0x3FF));
            temp_r0_5 = func_08008920(arg0);
            temp_r2_3 = *temp_r0_5;
            if ((u32) temp_r2_3 <= 0x7FU) {
                temp_r1_3 = temp_r0_5 + ((temp_r2_3 * 8) + 4);
                temp_r1_3->unk0 = sp5C;
                temp_r1_3->unk4 = (u16) sp5C.unk4;
                *temp_r0_5 = temp_r2_3 + 1;
            }
            var_r8_2 += 8;
            var_r5_2 += 1;
        } while (var_r5_2 <= 2);
    }
    temp_r4 = arg0 + 0x270;
    arg0->unk2A0 = func_0805E8F0(temp_r4);
    temp_r1_4 = arg0->unk270;
    (*temp_r1_4)->unk10(&sp3C, temp_r1_4, *(*sp80 + (temp_r4->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_6 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_5 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_5->unk4 = (s32) temp_r0_6->unk4;
    temp_r1_5->unk8 = (s32) temp_r0_6->unk8;
    temp_r1_5->unkC = (s32) temp_r0_6->unkC;
    (temp_r1_5 + 0xC)->unk4 = (s32) (temp_r0_6 + 0xC)->unk4;
    temp_r0_7 = arg0 + 0x284;
    temp_r0_8 = temp_r0_7 + 0xC;
    sp0.unk0 = (s32) arg0->unk284;
    sp0.unk4 = (s32) temp_r0_7->unk4;
    sp0.unk8 = (s32) temp_r0_7->unk8;
    temp_r1_6 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_7->unkC;
    temp_r1_6->unk4 = (s32) temp_r0_8->unk4;
    temp_r1_6->unk8 = (s32) temp_r0_8->unk8;
    temp_r1_6->unkC = (s32) temp_r0_8->unkC;
    temp_r4_2 = arg0 + 0x318;
    sp0.unk6 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
    temp_r0_9 = arg0 + 0x320;
    sp0.unk4 = func_080074C0(temp_r0_9, temp_r0_9->unk4);
    sp0.unk8 = 2;
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk2A0 << 0x1E) >= 0) {

    } else {
        var_r1 = 0;
        if (sp24 != 0) {
            var_r1 = sp0.unk28;
        }
        if (var_r1 == 0) {

        } else {
            temp_r5 = func_08008910(arg0);
            temp_r2_4 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
            var_r3 = 0;
            if (sp24 != 0) {
                var_r3 = sp0.unk28;
            }
            sp90 = temp_r5;
            func_08008F0C(&sp3C, sp24, (temp_r2_4 << 5) + 0x06010000, var_r3);
            temp_r1_7 = temp_r5->unk4;
            if (temp_r1_7 != temp_r5->unkC) {
                if (temp_r1_7 != 0) {
                    temp_r1_7->unk0 = (s32) sp3C.unk0;
                    temp_r1_7->unk4 = (s32) sp3C.unk4;
                    temp_r1_7->unk8 = (s32) sp3C.unk8;
                    temp_r1_7->unkC = (s32) sp3C.unkC;
                }
                sp90->unk4 = (void *) (sp90->unk4 + 0x10);
            } else {
                sp68 = 1;
                temp_r4_3 = (s32) (temp_r1_7 - sp90->unk0) >> 4;
                sp64 = temp_r4_3;
                var_r0 = &sp64;
                if ((u32) temp_r4_3 < 1U) {
                    var_r0 = &sp68;
                }
                temp_r0_10 = temp_r4_3 + *var_r0;
                if (temp_r0_10 != 0) {
                    temp_r4_4 = temp_r0_10 * 0x10;
                    var_r0_2 = malloc(temp_r4_4);
                    var_sb = temp_r4_4;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_sb);
                    }
                } else {
                    var_r0_2 = 0;
                    var_sb = 0;
                }
                sp94 = var_r0_2;
                var_r2 = sp90->unk0;
                var_r3_2 = var_r0_2;
                if (var_r2 != temp_r1_7) {
                    do {
                        if (var_r3_2 != 0) {
                            var_r3_2->unk0 = (s32) var_r2->unk0;
                            var_r3_2->unk4 = (s32) var_r2->unk4;
                            var_r3_2->unk8 = (s32) var_r2->unk8;
                            var_r3_2->unkC = (s32) var_r2->unkC;
                        }
                        var_r2 += 0x10;
                        var_r3_2 += 0x10;
                    } while (var_r2 != temp_r1_7);
                }
                if (sp68 == 1) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) sp3C.unk0;
                        var_r3_2->unk4 = (s32) sp3C.unk4;
                        var_r3_2->unk8 = (s32) sp3C.unk8;
                        var_r3_2->unkC = (s32) sp3C.unkC;
                    }
                    var_r5_3 = var_r3_2 + 0x10;
                } else {
                    var_r8_3 = sp68;
                    var_r2_2 = var_r3_2;
                    if (sp68 != 0) {
                        do {
                            if (var_r2_2 != 0) {
                                var_r2_2->unk0 = (s32) sp3C.unk0;
                                var_r2_2->unk4 = (s32) sp3C.unk4;
                                var_r2_2->unk8 = (s32) sp3C.unk8;
                                var_r2_2->unkC = (s32) sp3C.unkC;
                            }
                            var_r8_3 -= 1;
                            var_r2_2 += 0x10;
                        } while (var_r8_3 != 0);
                    }
                    var_r5_3 = var_r2_2;
                }
                temp_r2_5 = sp90->unk4;
                temp_r0_11 = sp90->unk0;
                var_r1_2 = temp_r0_11;
                if (temp_r0_11 != temp_r2_5) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2_5);
                }
                if (temp_r0_11 != 0) {
                    free();
                }
                sp90->unk0 = sp94;
                sp90->unk4 = var_r5_3;
                sp90->unkC = (void *) (sp94 + var_sb);
            }
        }
    }
    var_r6_2 = 0;
    do {
        temp_r4_5 = var_r6_2 + 1;
        if ((IsEmpty__C12RucksackItem(arg0 + ((var_r6_2 * 4) + 0x2BB0)) << 0x18) == 0) {
            temp_r1_8 = (temp_r4_5 * 4) + &gUnk_08117838;
            sp0.unk0 = (s16) (temp_r1_8->unk0 + 8);
            sp0.unk2 = (s16) temp_r1_8->unk1;
            temp_r3 = func_08008920(arg0);
            var_r2_3 = 0;
            if (sp1C != 0) {
                var_r2_3 = sp0.unk20;
            }
            func_0805E99C(temp_r3, sp1C, var_r2_3, &sp0);
        }
        if (((s32) *(arg0 + 0x2BA7 + arg0->unk2B90) >> var_r6_2) & 1) {
            temp_r1_9 = (temp_r4_5 * 4) + &gUnk_08117838;
            sp0.unk0 = (s16) (temp_r1_9->unk0 + 0x80);
            sp0.unk2 = (s16) temp_r1_9->unk1;
            temp_r3_2 = func_08008920(arg0);
            var_r2_4 = 0;
            if (sp1C != 0) {
                var_r2_4 = sp0.unk20;
            }
            func_0805E99C(temp_r3_2, sp1C, var_r2_4, &sp0);
        }
        var_r6_2 = temp_r4_5;
    } while (var_r6_2 <= 7);
    temp_r4_6 = arg0 + 0x1C8;
    arg0->unk1F8 = func_0805E8F0(temp_r4_6);
    temp_r1_10 = arg0->unk1C8;
    (*temp_r1_10)->unk10(&sp3C, temp_r1_10, *(*sp84 + (temp_r4_6->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0_12 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_11 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_11->unk4 = (s32) temp_r0_12->unk4;
    temp_r1_11->unk8 = (s32) temp_r0_12->unk8;
    temp_r1_11->unkC = (s32) temp_r0_12->unkC;
    (temp_r1_11 + 0xC)->unk4 = (s32) (temp_r0_12 + 0xC)->unk4;
    temp_r0_13 = arg0 + 0x1DC;
    temp_r0_14 = temp_r0_13 + 0xC;
    sp0.unk0 = (s32) arg0->unk1DC;
    sp0.unk4 = (s32) temp_r0_13->unk4;
    sp0.unk8 = (s32) temp_r0_13->unk8;
    temp_r1_12 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_13->unkC;
    temp_r1_12->unk4 = (s32) temp_r0_14->unk4;
    temp_r1_12->unk8 = (s32) temp_r0_14->unk8;
    temp_r1_12->unkC = (s32) temp_r0_14->unkC;
    sp0.unk0 = 0xE8;
    sp0.unk2 = 0x28;
    temp_r4_7 = arg0 + 0x2E0;
    sp0.unk6 = func_08007D4C(temp_r4_7, temp_r4_7->unk4);
    temp_r0_15 = arg0 + 0x2E8;
    sp0.unk4 = func_080074C0(temp_r0_15, temp_r0_15->unk4);
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk1F8 << 0x1E) >= 0) {

    } else {
        temp_r5_2 = func_08008910(arg0);
        temp_r2_6 = func_08007D4C(temp_r4_7, temp_r4_7->unk4);
        var_r3_3 = 0;
        if (sp24 != 0) {
            var_r3_3 = sp0.unk28;
        }
        sp90 = temp_r5_2;
        func_08008F0C(&sp3C, sp24, (temp_r2_6 << 5) + 0x06010000, var_r3_3);
        temp_r1_13 = temp_r5_2->unk4;
        if (temp_r1_13 != temp_r5_2->unkC) {
            if (temp_r1_13 != 0) {
                temp_r1_13->unk0 = (s32) sp3C.unk0;
                temp_r1_13->unk4 = (s32) sp3C.unk4;
                temp_r1_13->unk8 = (s32) sp3C.unk8;
                temp_r1_13->unkC = (s32) sp3C.unkC;
            }
            sp90->unk4 = (void *) (sp90->unk4 + 0x10);
        } else {
            sp70 = 1;
            temp_r4_8 = (s32) (temp_r1_13 - sp90->unk0) >> 4;
            sp6C = temp_r4_8;
            var_r0_3 = &sp6C;
            if ((u32) temp_r4_8 < 1U) {
                var_r0_3 = &sp70;
            }
            temp_r0_16 = temp_r4_8 + *var_r0_3;
            if (temp_r0_16 != 0) {
                temp_r4_9 = temp_r0_16 * 0x10;
                var_r0_4 = malloc(temp_r4_9);
                var_sb_2 = temp_r4_9;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_4 = 0;
                var_sb_2 = 0;
            }
            sp94 = var_r0_4;
            var_r2_5 = sp90->unk0;
            var_r3_4 = var_r0_4;
            if (var_r2_5 != temp_r1_13) {
                do {
                    if (var_r3_4 != 0) {
                        var_r3_4->unk0 = (s32) var_r2_5->unk0;
                        var_r3_4->unk4 = (s32) var_r2_5->unk4;
                        var_r3_4->unk8 = (s32) var_r2_5->unk8;
                        var_r3_4->unkC = (s32) var_r2_5->unkC;
                    }
                    var_r2_5 += 0x10;
                    var_r3_4 += 0x10;
                } while (var_r2_5 != temp_r1_13);
            }
            if (sp70 == 1) {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) sp3C.unk0;
                    var_r3_4->unk4 = (s32) sp3C.unk4;
                    var_r3_4->unk8 = (s32) sp3C.unk8;
                    var_r3_4->unkC = (s32) sp3C.unkC;
                }
                var_r5_4 = var_r3_4 + 0x10;
            } else {
                var_r8_4 = sp70;
                var_r2_6 = var_r3_4;
                if (sp70 != 0) {
                    do {
                        if (var_r2_6 != 0) {
                            var_r2_6->unk0 = (s32) sp3C.unk0;
                            var_r2_6->unk4 = (s32) sp3C.unk4;
                            var_r2_6->unk8 = (s32) sp3C.unk8;
                            var_r2_6->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_4 -= 1;
                        var_r2_6 += 0x10;
                    } while (var_r8_4 != 0);
                }
                var_r5_4 = var_r2_6;
            }
            temp_r2_7 = sp90->unk4;
            temp_r0_17 = sp90->unk0;
            var_r1_3 = temp_r0_17;
            if (temp_r0_17 != temp_r2_7) {
                do {
                    var_r1_3 += 0x10;
                } while (var_r1_3 != temp_r2_7);
            }
            if (temp_r0_17 != 0) {
                free();
            }
            sp90->unk0 = sp94;
            sp90->unk4 = var_r5_4;
            sp90->unkC = (void *) (sp94 + var_sb_2);
        }
    }
    temp_r3_3 = func_08008920(arg0);
    var_r2_7 = 0;
    if (sp1C != 0) {
        var_r2_7 = sp0.unk20;
    }
    func_0805E99C(temp_r3_3, sp1C, var_r2_7, &sp0);
    arg0->unk230 = func_0805E8F0(arg0 + 0x200);
    temp_r1_14 = arg0->unk200;
    (*temp_r1_14)->unk10(&sp3C, temp_r1_14, *(*sp88 + (arg0->unk20C * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r4_10 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r0_18 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r0_18->unk4 = (s32) temp_r4_10->unk4;
    temp_r0_18->unk8 = (s32) temp_r4_10->unk8;
    temp_r0_18->unkC = (s32) temp_r4_10->unkC;
    (temp_r0_18 + 0xC)->unk4 = (s32) (temp_r4_10 + 0xC)->unk4;
    temp_r0_19 = arg0 + 0x214;
    temp_r0_20 = temp_r0_19 + 0xC;
    sp0.unk0 = (s32) arg0->unk214;
    sp0.unk4 = (s32) temp_r0_19->unk4;
    sp0.unk8 = (s32) temp_r0_19->unk8;
    temp_r1_15 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_19->unkC;
    temp_r1_15->unk4 = (s32) temp_r0_20->unk4;
    temp_r1_15->unk8 = (s32) temp_r0_20->unk8;
    temp_r1_15->unkC = (s32) temp_r0_20->unkC;
    sp0.unk0 = 0xE8;
    sp0.unk2 = 0x50;
    temp_r4_11 = arg0 + 0x2E0;
    sp0.unk6 = (s16) (func_08007D4C(temp_r4_11, temp_r4_11->unk4) + 2);
    temp_r0_21 = arg0 + 0x2E8;
    sp0.unk4 = func_080074C0(temp_r0_21, temp_r0_21->unk4);
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk230 << 0x1E) >= 0) {

    } else {
        temp_r5_3 = func_08008910(arg0);
        temp_r2_8 = func_08007D4C(temp_r4_11, temp_r4_11->unk4);
        var_r3_5 = 0;
        if (sp24 != 0) {
            var_r3_5 = sp0.unk28;
        }
        sp90 = temp_r5_3;
        func_08008F0C(&sp3C, sp24, (temp_r2_8 << 5) + 0x06010040, var_r3_5);
        temp_r1_16 = temp_r5_3->unk4;
        if (temp_r1_16 != temp_r5_3->unkC) {
            if (temp_r1_16 != 0) {
                temp_r1_16->unk0 = (s32) sp3C.unk0;
                temp_r1_16->unk4 = (s32) sp3C.unk4;
                temp_r1_16->unk8 = (s32) sp3C.unk8;
                temp_r1_16->unkC = (s32) sp3C.unkC;
            }
            sp90->unk4 = (void *) (sp90->unk4 + 0x10);
        } else {
            sp78 = 1;
            temp_r4_12 = (s32) (temp_r1_16 - sp90->unk0) >> 4;
            sp74 = temp_r4_12;
            var_r0_5 = &sp74;
            if ((u32) temp_r4_12 < 1U) {
                var_r0_5 = &sp78;
            }
            temp_r0_22 = temp_r4_12 + *var_r0_5;
            if (temp_r0_22 != 0) {
                temp_r4_13 = temp_r0_22 * 0x10;
                var_r0_6 = malloc(temp_r4_13);
                var_sb_3 = temp_r4_13;
                if (var_r0_6 == 0) {
                    var_r0_6 = func_080D3BC0(var_sb_3);
                }
            } else {
                var_r0_6 = 0;
                var_sb_3 = 0;
            }
            sp94 = var_r0_6;
            var_r2_8 = sp90->unk0;
            var_r3_6 = var_r0_6;
            if (var_r2_8 != temp_r1_16) {
                do {
                    if (var_r3_6 != 0) {
                        var_r3_6->unk0 = (s32) var_r2_8->unk0;
                        var_r3_6->unk4 = (s32) var_r2_8->unk4;
                        var_r3_6->unk8 = (s32) var_r2_8->unk8;
                        var_r3_6->unkC = (s32) var_r2_8->unkC;
                    }
                    var_r2_8 += 0x10;
                    var_r3_6 += 0x10;
                } while (var_r2_8 != temp_r1_16);
            }
            if (sp78 == 1) {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) sp3C.unk0;
                    var_r3_6->unk4 = (s32) sp3C.unk4;
                    var_r3_6->unk8 = (s32) sp3C.unk8;
                    var_r3_6->unkC = (s32) sp3C.unkC;
                }
                var_r5_5 = var_r3_6 + 0x10;
            } else {
                var_r8_5 = sp78;
                var_r2_9 = var_r3_6;
                if (sp78 != 0) {
                    do {
                        if (var_r2_9 != 0) {
                            var_r2_9->unk0 = (s32) sp3C.unk0;
                            var_r2_9->unk4 = (s32) sp3C.unk4;
                            var_r2_9->unk8 = (s32) sp3C.unk8;
                            var_r2_9->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_5 -= 1;
                        var_r2_9 += 0x10;
                    } while (var_r8_5 != 0);
                }
                var_r5_5 = var_r2_9;
            }
            temp_r2_9 = sp90->unk4;
            temp_r0_23 = sp90->unk0;
            var_r1_4 = temp_r0_23;
            if (temp_r0_23 != temp_r2_9) {
                do {
                    var_r1_4 += 0x10;
                } while (var_r1_4 != temp_r2_9);
            }
            if (temp_r0_23 != 0) {
                free();
            }
            sp90->unk0 = sp94;
            sp90->unk4 = var_r5_5;
            sp90->unkC = (void *) (sp94 + var_sb_3);
        }
    }
    temp_r3_4 = func_08008920(arg0);
    var_r2_10 = 0;
    if (sp1C != 0) {
        var_r2_10 = sp0.unk20;
    }
    func_0805E99C(temp_r3_4, sp1C, var_r2_10, &sp0);
}
