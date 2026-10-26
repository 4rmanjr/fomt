# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038A70/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038A70/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038A70/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038A70/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038A70/opencode/func.c" 2
s32 func_030004DC(s32, s32, s32, s32, s32, ? *, u32, s32, u32 *);
s32 func_080A480C(u32 *, s32, void *);
s32 func_080A4944(u32 *, void *, s32);
extern ? gUnk_080F165E;

void func_08038A70(void *arg0, void *arg1) {
s32 sp14;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    void *sp5C;
    s32 sp60;
    s32 sp64;
    u32 *sp68;
    s32 sp6C;
    s32 sp70;
    u32 sp74;
    s32 sp78;
    u32 sp7C;
    u32 *sp80;
    ? *sp84;
    u32 *sp88;
    ? *temp_r6;
    ? *temp_r6_2;
    s32 temp_r0_4;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_7;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    u32 *temp_r0;
    u32 *temp_r0_2;
    u32 *temp_r0_3;
    u32 *var_r5;
    u32 *var_r5_2;
    u32 *var_r6;
    u32 temp_r1_5;
    u32 temp_r2;
    u8 var_r0_2;
    void **temp_r1;
    void **temp_r1_6;

    sp5C = arg0;
    sp60 = (s32) arg1->unkC;
    sp64 = (s32) arg1->unkE;
    sp34 = arg1->unk0;
    sp38 = arg1->unk8;
    temp_r0 = sp5C->unk14;
    if (temp_r0 == 0) {

    } else {
        sp68 = temp_r0;
        sp6C = sp34;
        sp70 = sp38;
        sp74 = 0;
        if ((u32) *sp68 > 0U) {
            var_r5 = sp68 + 0x40;
            sp88 = sp68 + 0x14;
            var_r6 = sp68 + 4;
            do {
                sp3C = sp6C;
                sp40 = sp70;
                if (var_r5->unk11 != 0) {
                    temp_sb = var_r5->unk6 - sp60;
                    temp_r4 = var_r5->unk8 - sp64;
                    temp_r1 = var_r6->unk28;
                    (*temp_r1)->unk10(&sp14, temp_r1, *(var_r6->unk2C + (var_r6->unk34 * 4)));
                    temp_r1_2 = var_r6->unk8;
                    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
                        var_r0 = func_030004DC(sp3C.unk4, temp_sb, temp_r4, 0xFF, 0x7FFF, &sp14, var_r6->unk0, (s32) var_r6->unkC, sp88);
                    } else {
                        var_r0 = 0;
                    }
                    if ((var_r0 != 0) && (var_r5->unk0 != 0)) {
                        func_080A480C(var_r6, sp3C.unk0, &sp14 + 8);
                        if (var_r5->unk1 != 0) {
                            func_080A4944(var_r6, &sp14 + 0x10, 1);
                        } else if (var_r5->unk2 == 0) {
                            func_080A4944(var_r6, &sp14 + 0x10, 1);
                            var_r5->unk2 = 1U;
                        }
                        var_r5->unk0 = 0U;
                    }
                    var_r0_2 = 0;
                } else {
                    var_r0_2 = 1;
                }
                var_r5->unk11 = var_r0_2;
                var_r5 += 0x50;
                sp88 += 0x50;
                var_r6 += 0x50;
                temp_r2 = sp74 + 1;
                sp74 = temp_r2;
            } while (temp_r2 < (u32) *sp68);
        }
    }
    temp_r0_2 = sp5C->unk8;
    if (temp_r0_2 != 0) {
        sp44 = sp34;
        sp48 = sp38;
        temp_r6 = temp_r0_2 + 0x28;
        temp_r1_3 = (temp_r0_2 + 4)->unk4;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
            var_r0_3 = func_030004DC(sp44.unk4, 0x12C - sp60, 0x64 - sp64, 0xFF, 0x8000, temp_r6, temp_r0_2->unk0, (s32) temp_r0_2->unkC, temp_r0_2 + 0x10);
        } else {
            var_r0_3 = 0;
        }
        if ((var_r0_3 != 0) && (temp_r0_2->unk48 != 0)) {
            func_080A480C(temp_r0_2, sp44.unk0, temp_r6 + 8);
            func_080A4944(temp_r0_2, temp_r6 + 0x10, 1);
            temp_r0_2->unk48 = 0U;
        }
    }
    temp_r0_3 = sp5C->unkC;
    if (temp_r0_3 != 0) {
        sp4C = sp34;
        sp50 = sp38;
        temp_r6_2 = temp_r0_3 + 0x28;
        temp_r1_4 = (temp_r0_3 + 4)->unk4;
        if ((s32) ((0 - temp_r1_4) | temp_r1_4) < 0) {
            var_r0_4 = func_030004DC(sp4C.unk4, (temp_r0_3->unk51 * 8) - (sp60 - 0xF0), ((s32) temp_r0_3->unk4C >> 0x10) - sp64, 0xFF, 0x8000, temp_r6_2, temp_r0_3->unk0, (s32) temp_r0_3->unkC, temp_r0_3 + 0x10);
        } else {
            var_r0_4 = 0;
        }
        if ((var_r0_4 != 0) && (temp_r0_3->unk48 != 0)) {
            func_080A480C(temp_r0_3, sp4C.unk0, temp_r6_2 + 8);
            func_080A4944(temp_r0_3, temp_r6_2 + 0x10, 0);
            temp_r0_3->unk48 = 0U;
        }
    }
    temp_r0_4 = sp5C->unk10;
    if (temp_r0_4 == 0) {
        return;
    }
    sp78 = temp_r0_4;
    sp54 = sp34;
    sp58 = sp38;
    sp7C = 0;
    sp80 = temp_r0_4 + 0x14;
    sp84 = &gUnk_080F165E;
    var_r5_2 = sp78 + 4;
    do {
        if (*(sp78 + 0x144 + sp7C) == 0) {
            temp_sb_2 = sp84->unk0 - sp60;
            temp_r4_2 = sp84->unk2 - sp64;
            temp_r1_6 = var_r5_2->unk28;
            (*temp_r1_6)->unk10(&sp14, temp_r1_6, *(var_r5_2->unk2C + (var_r5_2->unk34 * 4)));
            temp_r1_7 = var_r5_2->unk8;
            if ((s32) ((0 - temp_r1_7) | temp_r1_7) < 0) {
                var_r0_5 = func_030004DC(sp54.unk4, temp_sb_2, temp_r4_2, 0xFF, 0x8000, &sp14, var_r5_2->unk0, (s32) var_r5_2->unkC, sp80);
            } else {
                var_r0_5 = 0;
            }
            if ((var_r0_5 != 0) && (var_r5_2->unk3C != 0)) {
                func_080A480C(var_r5_2, sp54.unk0, &sp14 + 8);
                if (var_r5_2->unk3D != 0) {
                    func_080A4944(var_r5_2, &sp14 + 0x10, 1);
                } else if (var_r5_2->unk3E == 0) {
                    func_080A4944(var_r5_2, &sp14 + 0x10, 1);
                    var_r5_2->unk3E = 1U;
                }
                var_r5_2->unk3C = 0U;
            }
        }
        sp80 += 0x40;
        sp84 += 4;
        var_r5_2 += 0x40;
        temp_r1_5 = sp7C + 1;
        sp7C = temp_r1_5;
    } while (temp_r1_5 <= 4U);
}
