# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BAC9C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BAC9C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BAC9C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BAC9C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BAC9C/opencode/func.c" 2
s32 __builtin_delete();
void *__builtin_new(s32);
s32 free();
s16 func_080074C0(void *, s32);
void *func_08008910(void *, s32);
s32 func_08008920(void *);
s32 func_08008F0C(s32 *, s32, s32, u16);
void *func_0805E824(void *, s32, s32, s32);
s32 func_0805E860(void *, u16);
s32 func_0805E99C(s32, s32, u16, void *);
u16 func_080BB890(void *, s32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 memcpy(s32 *, ? *, s32);
extern ? gUnk_08107CFC;

void func_080BAC9C(void *arg0, s32 arg1) {
s32 sp0;
s32 sp40;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    u32 sp80;
    u32 sp84;
    u32 sp88;
    u32 sp8C;
    s32 sp90;
    s32 sp94;
    ? *sp98;
    ? *sp9C;
    void *spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    s32 spB4;
    ? *spB8;
    s32 spBC;
    s32 spC0;
    void *spC4;
    s32 spC8;
    void *spCC;
    void *spD0;
    s32 *spD4;
    s32 *spD8;
    s32 spDC;
    void *spE0;
    s32 spE4;
    void *spE8;
    void *spEC;
    s16 temp_r2_11;
    s16 temp_r2_4;
    s16 temp_r2_8;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_15;
    s32 temp_r0_17;
    s32 temp_r0_20;
    s32 temp_r0_21;
    s32 temp_r0_24;
    s32 temp_r0_29;
    s32 temp_r0_32;
    s32 temp_r0_34;
    s32 temp_r1_12;
    s32 temp_r2;
    s32 temp_r3_2;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_2;
    s32 temp_r4_5;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_4;
    s32 temp_r7;
    s32 var_r3_12;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r3_9;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_sl_3;
    u16 var_r2_10;
    u16 var_r2_15;
    u16 var_r2_5;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_13;
    u16 var_r3_16;
    u16 var_r3_4;
    u16 var_r3_7;
    u32 *var_r0_11;
    u32 *var_r0_9;
    u32 var_r3_15;
    u32 var_r3_18;
    void **temp_r1;
    void **temp_r1_11;
    void **temp_r1_7;
    void **var_r8;
    void **var_sl_2;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_14;
    void *temp_r0_16;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_22;
    void *temp_r0_23;
    void *temp_r0_25;
    void *temp_r0_26;
    void *temp_r0_27;
    void *temp_r0_28;
    void *temp_r0_2;
    void *temp_r0_30;
    void *temp_r0_31;
    void *temp_r0_33;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_10;
    void *temp_r1_13;
    void *temp_r1_14;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_10;
    void *temp_r2_12;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_9;
    void *temp_r3;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_18;
    void *temp_r4_19;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_6;
    void *temp_r5_9;
    void *temp_r6_3;
    void *temp_r6_5;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r2;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_14;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3_11;
    void *var_r3_14;
    void *var_r3_17;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r3_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_sl;

    sp90 = arg1;
    memcpy(&sp0, &gUnk_08107CFC, 0x40);
    sp94 = 0;
    spA0 = &sp0 + 4;
    spB8 = &sp0 + 0x40;
    spE4 = sp90;
    var_sl = arg0;
    var_r8 = arg0 + 0x7B4;
    do {
        temp_r0 = func_0805E824(__builtin_new(0x14), arg0->unk77C, 0, 0x100);
        temp_r6 = sp94 * 4;
        if (temp_r0 != *var_r8) {
            __builtin_delete();
        }
        *var_r8 = temp_r0;
        temp_r0_2 = __builtin_new(0x1C);
        temp_r0_2->unk0 = 0;
        temp_r0_2->unk2 = 0;
        temp_r0_2->unk4 = 0;
        temp_r0_2->unk6 = 0;
        temp_r0_2->unk8 = 0;
        temp_r0_2->unkC = 0;
        temp_r0_2->unk10 = 0;
        temp_r0_2->unk11 = 0;
        temp_r0_2->unk14 = 0;
        temp_r0_2->unk18 = 0;
        temp_r5 = temp_r6 + arg0;
        if (temp_r0_2 != temp_r5->unk7C8) {
            __builtin_delete();
        }
        temp_r5->unk7C8 = temp_r0_2;
        temp_r4 = var_sl->unk7B4;
        func_0805E860(temp_r4, func_080BB890(arg0, 0, sp94, 0));
        (temp_r6 + arg0)->unk7C8->unk6 = (u16) spE4;
        temp_r5_2 = (temp_r6 + arg0)->unk7C8;
        temp_r4_2 = sp94 * 8;
        temp_r0_3 = temp_r4_2 + arg0 + 0x73C;
        temp_r5_2->unk4 = func_080074C0(temp_r0_3, temp_r0_3->unk4);
        (temp_r6 + arg0)->unk7C8->unk8 = 1;
        (temp_r6 + arg0)->unk7C8->unk18 = 1;
        *(temp_r6 + arg0)->unk7C8 = (s16) *(&sp0 + temp_r4_2);
        (temp_r6 + arg0)->unk7C8->unk2 = (s16) *(spA0 + temp_r4_2);
        spE4 += 0xF;
        var_sl += 4;
        var_r8 += 4;
        temp_r2 = sp94 + 1;
        sp94 = temp_r2;
    } while (temp_r2 <= 4);
    sp94 = 0;
    spBC = sp90 + 0x69;
    spB0 = sp90 << 5;
    spD4 = spA0 + 0x28;
    spD8 = &sp0 + 0x28;
    spDC = sp90 + 0x4B;
    spE0 = arg0;
    var_sl_2 = arg0 + 0x87C;
loop_7:
    temp_r0_4 = func_0805E824(__builtin_new(0x14), arg0->unk77C, 0, 0x100);
    temp_r6_2 = sp94 * 4;
    if (temp_r0_4 != *var_sl_2) {
        __builtin_delete();
    }
    *var_sl_2 = temp_r0_4;
    temp_r0_5 = __builtin_new(0x1C);
    temp_r0_5->unk0 = 0;
    temp_r0_5->unk2 = 0;
    temp_r0_5->unk4 = 0;
    temp_r0_5->unk6 = 0;
    temp_r0_5->unk8 = 0;
    temp_r0_5->unkC = 0;
    temp_r0_5->unk10 = 0;
    temp_r0_5->unk11 = 0;
    temp_r0_5->unk14 = 0;
    temp_r0_5->unk18 = 0;
    temp_r5_3 = temp_r6_2 + arg0;
    if (temp_r0_5 != temp_r5_3->unk884) {
        __builtin_delete();
    }
    temp_r5_3->unk884 = temp_r0_5;
    temp_r4_3 = spE0->unk87C;
    func_0805E860(temp_r4_3, func_080BB890(arg0, 1, sp94, *(arg0 + 0xB40 + temp_r6_2)));
    (temp_r6_2 + arg0)->unk884->unk6 = (u16) spDC;
    temp_r4_4 = (temp_r6_2 + arg0)->unk884;
    temp_r0_6 = (sp94 * 8) + arg0 + 0x764;
    temp_r4_4->unk4 = func_080074C0(temp_r0_6, temp_r0_6->unk4);
    (temp_r6_2 + arg0)->unk884->unk8 = 1;
    (temp_r6_2 + arg0)->unk884->unk18 = 1;
    *(temp_r6_2 + arg0)->unk884 = (s16) *spD8;
    (temp_r6_2 + arg0)->unk884->unk2 = (s16) *spD4;
    spD4 += 8;
    spD8 += 8;
    spDC += 0xF;
    spE0 += 4;
    var_sl_2 += 4;
    temp_r4_5 = sp94 + 1;
    sp94 = temp_r4_5;
    if (temp_r4_5 <= 1) {
        goto loop_7;
    }
    temp_r0_7 = func_0805E824(__builtin_new(0x14), arg0->unk77C, 0, 0x100);
    if (temp_r0_7 != arg0->unk8CC) {
        __builtin_delete();
    }
    arg0->unk8CC = temp_r0_7;
    temp_r0_8 = __builtin_new(0x1C);
    temp_r0_8->unk0 = 0;
    temp_r0_8->unk2 = 0;
    temp_r0_8->unk4 = 0;
    temp_r0_8->unk6 = 0;
    temp_r0_8->unk8 = 0;
    temp_r0_8->unkC = 0;
    temp_r0_8->unk10 = 0;
    temp_r0_8->unk11 = 0;
    temp_r0_8->unk14 = 0;
    temp_r0_8->unk18 = 0;
    if (temp_r0_8 != arg0->unk8D0) {
        __builtin_delete();
    }
    arg0->unk8D0 = temp_r0_8;
    temp_r4_6 = arg0->unk8CC;
    func_0805E860(temp_r4_6, func_080BB890(arg0, 2, 0, arg0->unkB50));
    arg0->unk8D0->unk6 = (u16) spBC;
    temp_r4_7 = arg0->unk8D0;
    temp_r0_9 = arg0 + 0x774;
    temp_r4_7->unk4 = func_080074C0(temp_r0_9, temp_r0_9->unk4);
    arg0->unk8D0->unk8 = 1;
    arg0->unk8D0->unk18 = 1;
    arg0->unk8D0->unk0 = (s16) sp38;
    arg0->unk8D0->unk2 = (s16) sp3C;
    sp94 = 0;
    sp98 = spB8;
    spC0 = 0;
    spC4 = arg0 + 0x73C;
    spC8 = (sp90 << 5) + 0x06010000;
    spCC = arg0 + 0x7B4;
    spD0 = arg0 + 0x7DC;
loop_18:
    temp_r0_10 = spCC->unk0;
    temp_r1 = temp_r0_10->unk0;
    (*temp_r1)->unk10(&sp40, temp_r1, *(temp_r0_10->unk4 + (temp_r0_10->unkC * 4)));
    memcpy(sp98, sp98, 0x20);
    temp_r0_11 = sp98 + 0xC;
    spD0->unk0 = (s32) sp98->unk0;
    spD0->unk4 = (s32) sp98->unk4;
    spD0->unk8 = (s32) sp98->unk8;
    temp_r1_2 = spD0 + 0xC;
    spD0->unkC = (s32) sp98->unkC;
    temp_r1_2->unk4 = (s32) temp_r0_11->unk4;
    temp_r1_2->unk8 = (s32) temp_r0_11->unk8;
    temp_r1_3 = temp_r1_2 + 0xC;
    temp_r1_2->unkC = (s32) temp_r0_11->unkC;
    temp_r1_3->unk4 = (s32) (temp_r0_11 + 0xC)->unk4;
    temp_r2_2 = func_08008910(arg0, temp_r1_3 + 8);
    temp_r0_12 = spD0->unk8;
    var_r3 = 0;
    if (temp_r0_12 != 0) {
        var_r3 = (u16) spD0->unkC;
    }
    func_08008F0C(sp98, temp_r0_12, spC8, var_r3);
    temp_r1_4 = temp_r2_2->unk4;
    if (temp_r1_4 != temp_r2_2->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp98->unk0;
            temp_r1_4->unk4 = (s32) sp98->unk4;
            temp_r1_4->unk8 = (s32) sp98->unk8;
            temp_r1_4->unkC = (s32) sp98->unkC;
        }
        temp_r2_2->unk4 = (void *) (temp_r2_2->unk4 + 0x10);
    } else {
        spE8 = temp_r1_4;
        sp64 = 1;
        temp_r4_8 = (s32) (temp_r1_4 - temp_r2_2->unk0) >> 4;
        sp60 = temp_r4_8;
        var_r0 = &sp60;
        if ((u32) temp_r4_8 < 1U) {
            var_r0 = &sp64;
        }
        temp_r0_13 = temp_r4_8 + *var_r0;
        if (temp_r0_13 != 0) {
            temp_r4_9 = temp_r0_13 * 0x10;
            var_r0_2 = malloc(temp_r4_9);
            var_r8_2 = temp_r4_9;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_2 = 0;
            var_r8_2 = 0;
        }
        spEC = var_r0_2;
        var_r2 = temp_r2_2->unk0;
        var_r3_2 = var_r0_2;
        if (var_r2 != spE8) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != spE8);
        }
        if (sp64 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp98->unk0;
                var_r3_2->unk4 = (s32) sp98->unk4;
                var_r3_2->unk8 = (s32) sp98->unk8;
                var_r3_2->unkC = (s32) sp98->unkC;
            }
            var_r5 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = sp64;
            var_r2_2 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp98->unk0;
                        var_r2_2->unk4 = (s32) sp98->unk4;
                        var_r2_2->unk8 = (s32) sp98->unk8;
                        var_r2_2->unkC = (s32) sp98->unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2_3 = temp_r2_2->unk4;
        temp_r0_14 = temp_r2_2->unk0;
        var_r1 = temp_r0_14;
        if (temp_r0_14 != temp_r2_3) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_3);
        }
        if (temp_r0_14 != 0) {
            free();
        }
        temp_r2_2->unk0 = spEC;
        temp_r2_2->unk4 = var_r5;
        temp_r2_2->unkC = (void *) (spEC + var_r8_2);
    }
    temp_r6_3 = func_08008910(arg0);
    temp_r5_4 = (spC0 + arg0)->unk7EC;
    temp_r2_4 = func_080074C0(spC4, spC4->unk4);
    temp_r1_5 = spC0 + arg0;
    var_r3_4 = 0;
    if (temp_r1_5->unk7EC != 0) {
        var_r3_4 = (temp_r1_5 + 0x7EC)->unk4;
    }
    func_08008F0C(&sp40, temp_r5_4, (temp_r2_4 << 5) + 0x05000200, var_r3_4);
    temp_r1_6 = temp_r6_3->unk4;
    if (temp_r1_6 != temp_r6_3->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) spB8->unk0;
            temp_r1_6->unk4 = (s32) spB8->unk4;
            temp_r1_6->unk8 = (s32) spB8->unk8;
            temp_r1_6->unkC = (s32) spB8->unkC;
        }
        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
    } else {
        spE8 = temp_r1_6;
        sp6C = 1;
        temp_r4_10 = (s32) (temp_r1_6 - temp_r6_3->unk0) >> 4;
        sp68 = temp_r4_10;
        var_r0_3 = &sp68;
        if ((u32) temp_r4_10 < 1U) {
            var_r0_3 = &sp6C;
        }
        temp_r0_15 = temp_r4_10 + *var_r0_3;
        if (temp_r0_15 != 0) {
            temp_r4_11 = temp_r0_15 * 0x10;
            var_r0_4 = malloc(temp_r4_11);
            var_r8_3 = temp_r4_11;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_4 = 0;
            var_r8_3 = 0;
        }
        spEC = var_r0_4;
        var_r2_3 = temp_r6_3->unk0;
        var_r3_5 = var_r0_4;
loop_64:
        if (var_r2_3 != spE8) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) var_r2_3->unk0;
                var_r3_5->unk4 = (s32) var_r2_3->unk4;
                var_r3_5->unk8 = (s32) var_r2_3->unk8;
                var_r3_5->unkC = (s32) var_r2_3->unkC;
            }
            var_r2_3 += 0x10;
            var_r3_5 += 0x10;
            goto loop_64;
        }
        if (sp6C == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) spB8->unk0;
                var_r3_5->unk4 = (s32) spB8->unk4;
                var_r3_5->unk8 = (s32) spB8->unk8;
                var_r3_5->unkC = (s32) spB8->unkC;
            }
            var_r5_2 = var_r3_5 + 0x10;
        } else {
            var_r3_6 = sp6C;
            var_r2_4 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) spB8->unk0;
                        var_r2_4->unk4 = (s32) spB8->unk4;
                        var_r2_4->unk8 = (s32) spB8->unk8;
                        var_r2_4->unkC = (s32) spB8->unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_5 = temp_r6_3->unk4;
        temp_r0_16 = temp_r6_3->unk0;
        var_r1_2 = temp_r0_16;
        if (temp_r0_16 != temp_r2_5) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_5);
        }
        if (temp_r0_16 != 0) {
            free();
        }
        temp_r6_3->unk0 = spEC;
        temp_r6_3->unk4 = var_r5_2;
        temp_r6_3->unkC = (void *) (spEC + var_r8_3);
    }
    temp_r5_5 = func_08008920(arg0);
    temp_r3 = spC0 + arg0;
    var_r2_5 = 0;
    if (temp_r3->unk7DC != 0) {
        var_r2_5 = (temp_r3 + 0x7DC)->unk4;
    }
    func_0805E99C(temp_r5_5, (spC0 + arg0)->unk7DC, var_r2_5, spCC->unk14);
    spC0 += 0x20;
    spC4 += 8;
    spC8 += 0x1E0;
    spCC += 4;
    spD0 += 0x20;
    temp_r0_17 = sp94 + 1;
    sp94 = temp_r0_17;
    if (temp_r0_17 <= 4) {
        goto loop_18;
    }
    sp94 = 0;
    sp9C = spB8;
loop_84:
    temp_r3_2 = sp94 << 5;
    temp_r5_6 = temp_r3_2 + arg0;
    temp_r4_12 = temp_r5_6 + 0x88C;
    temp_r6_4 = sp94 * 4;
    temp_r0_18 = (temp_r6_4 + arg0)->unk87C;
    temp_r1_7 = temp_r0_18->unk0;
    (*temp_r1_7)->unk10(&sp40, temp_r1_7, *(temp_r0_18->unk4 + (temp_r0_18->unkC * 4)));
    memcpy(sp9C, sp9C, 0x20);
    temp_r0_19 = sp9C + 0xC;
    temp_r5_6->unk88C = (s32) sp9C->unk0;
    temp_r4_12->unk4 = (s32) sp9C->unk4;
    temp_r4_12->unk8 = (s32) sp9C->unk8;
    temp_r4_13 = temp_r4_12 + 0xC;
    temp_r4_12->unkC = (s32) sp9C->unkC;
    temp_r4_13->unk4 = (s32) temp_r0_19->unk4;
    temp_r4_13->unk8 = (s32) temp_r0_19->unk8;
    temp_r4_13->unkC = (s32) temp_r0_19->unkC;
    (temp_r4_13 + 0xC)->unk4 = (s32) (temp_r0_19 + 0xC)->unk4;
    temp_r2_6 = func_08008910(arg0);
    temp_r0_20 = temp_r5_6->unk894;
    var_r3_7 = 0;
    spA8 = temp_r6_4;
    spB4 = temp_r3_2;
    if (temp_r0_20 != 0) {
        var_r3_7 = (temp_r5_6 + 0x894)->unk4;
    }
    func_08008F0C(sp9C, temp_r0_20, (((sp94 * 0xF) + sp90) << 5) + 0x06010960, var_r3_7);
    temp_r1_8 = temp_r2_6->unk4;
    if (temp_r1_8 != temp_r2_6->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32) sp9C->unk0;
            temp_r1_8->unk4 = (s32) sp9C->unk4;
            temp_r1_8->unk8 = (s32) sp9C->unk8;
            temp_r1_8->unkC = (s32) sp9C->unkC;
        }
        temp_r2_6->unk4 = (void *) (temp_r2_6->unk4 + 0x10);
        spAC = sp94 * 8;
        spA4 = sp94 + 1;
    } else {
        spE8 = temp_r1_8;
        sp74 = 1;
        temp_r4_14 = (s32) (temp_r1_8 - temp_r2_6->unk0) >> 4;
        sp70 = temp_r4_14;
        var_r0_5 = &sp70;
        if ((u32) temp_r4_14 < 1U) {
            var_r0_5 = &sp74;
        }
        temp_r0_21 = temp_r4_14 + *var_r0_5;
        if (temp_r0_21 != 0) {
            temp_r4_15 = temp_r0_21 * 0x10;
            var_r0_6 = malloc(temp_r4_15);
            var_r8_4 = temp_r4_15;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_6 = 0;
            var_r8_4 = 0;
        }
        spEC = var_r0_6;
        var_r2_6 = temp_r2_6->unk0;
        var_r3_8 = var_r0_6;
        spAC = sp94 * 8;
        spA4 = sp94 + 1;
        if (var_r2_6 != spE8) {
            do {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) var_r2_6->unk0;
                    var_r3_8->unk4 = (s32) var_r2_6->unk4;
                    var_r3_8->unk8 = (s32) var_r2_6->unk8;
                    var_r3_8->unkC = (s32) var_r2_6->unkC;
                }
                var_r2_6 += 0x10;
                var_r3_8 += 0x10;
            } while (var_r2_6 != spE8);
        }
        if (sp74 == 1) {
            if (var_r3_8 != 0) {
                var_r3_8->unk0 = (s32) sp9C->unk0;
                var_r3_8->unk4 = (s32) sp9C->unk4;
                var_r3_8->unk8 = (s32) sp9C->unk8;
                var_r3_8->unkC = (s32) sp9C->unkC;
            }
            var_r5_3 = var_r3_8 + 0x10;
        } else {
            var_r3_9 = sp74;
            var_r2_7 = var_r3_8;
            if (var_r3_9 != 0) {
                do {
                    if (var_r2_7 != 0) {
                        var_r2_7->unk0 = (s32) sp9C->unk0;
                        var_r2_7->unk4 = (s32) sp9C->unk4;
                        var_r2_7->unk8 = (s32) sp9C->unk8;
                        var_r2_7->unkC = (s32) sp9C->unkC;
                    }
                    var_r3_9 -= 1;
                    var_r2_7 += 0x10;
                } while (var_r3_9 != 0);
            }
            var_r5_3 = var_r2_7;
        }
        temp_r2_7 = temp_r2_6->unk4;
        temp_r0_22 = temp_r2_6->unk0;
        var_r1_3 = temp_r0_22;
        if (temp_r0_22 != temp_r2_7) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_7);
        }
        if (temp_r0_22 != 0) {
            free();
        }
        temp_r2_6->unk0 = spEC;
        temp_r2_6->unk4 = var_r5_3;
        temp_r2_6->unkC = (void *) (spEC + var_r8_4);
    }
    temp_r6_5 = func_08008910(arg0);
    temp_r5_7 = (spB4 + arg0)->unk89C;
    temp_r0_23 = spAC + arg0 + 0x764;
    temp_r2_8 = func_080074C0(temp_r0_23, temp_r0_23->unk4);
    temp_r1_9 = spB4 + arg0;
    var_r3_10 = 0;
    if (temp_r1_9->unk89C != 0) {
        var_r3_10 = (temp_r1_9 + 0x89C)->unk4;
    }
    func_08008F0C(&sp40, temp_r5_7, (temp_r2_8 << 5) + 0x05000200, var_r3_10);
    temp_r1_10 = temp_r6_5->unk4;
    if (temp_r1_10 != temp_r6_5->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) spB8->unk0;
            temp_r1_10->unk4 = (s32) spB8->unk4;
            temp_r1_10->unk8 = (s32) spB8->unk8;
            temp_r1_10->unkC = (s32) spB8->unkC;
        }
        temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
    } else {
        spE8 = temp_r1_10;
        sp7C = 1;
        temp_r4_16 = (s32) (temp_r1_10 - temp_r6_5->unk0) >> 4;
        sp78 = temp_r4_16;
        var_r0_7 = &sp78;
        if ((u32) temp_r4_16 < 1U) {
            var_r0_7 = &sp7C;
        }
        temp_r0_24 = temp_r4_16 + *var_r0_7;
        if (temp_r0_24 != 0) {
            temp_r4_17 = temp_r0_24 * 0x10;
            var_r0_8 = malloc(temp_r4_17);
            var_r8_5 = temp_r4_17;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_8 = 0;
            var_r8_5 = 0;
        }
        spEC = var_r0_8;
        var_r2_8 = temp_r6_5->unk0;
        var_r3_11 = var_r0_8;
        if (var_r2_8 != spE8) {
            do {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (s32) var_r2_8->unk0;
                    var_r3_11->unk4 = (s32) var_r2_8->unk4;
                    var_r3_11->unk8 = (s32) var_r2_8->unk8;
                    var_r3_11->unkC = (s32) var_r2_8->unkC;
                }
                var_r2_8 += 0x10;
                var_r3_11 += 0x10;
            } while (var_r2_8 != spE8);
        }
        if (sp7C == 1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) spB8->unk0;
                var_r3_11->unk4 = (s32) spB8->unk4;
                var_r3_11->unk8 = (s32) spB8->unk8;
                var_r3_11->unkC = (s32) spB8->unkC;
            }
            var_r5_4 = var_r3_11 + 0x10;
        } else {
            var_r3_12 = sp7C;
            var_r2_9 = var_r3_11;
            if (var_r3_12 != 0) {
                do {
                    if (var_r2_9 != 0) {
                        var_r2_9->unk0 = (s32) spB8->unk0;
                        var_r2_9->unk4 = (s32) spB8->unk4;
                        var_r2_9->unk8 = (s32) spB8->unk8;
                        var_r2_9->unkC = (s32) spB8->unkC;
                    }
                    var_r3_12 -= 1;
                    var_r2_9 += 0x10;
                } while (var_r3_12 != 0);
            }
            var_r5_4 = var_r2_9;
        }
        temp_r2_9 = temp_r6_5->unk4;
        temp_r0_25 = temp_r6_5->unk0;
        var_r1_4 = temp_r0_25;
        if (temp_r0_25 != temp_r2_9) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_9);
        }
        if (temp_r0_25 != 0) {
            free();
        }
        temp_r6_5->unk0 = spEC;
        temp_r6_5->unk4 = var_r5_4;
        temp_r6_5->unkC = (void *) (spEC + var_r8_5);
    }
    temp_r5_8 = func_08008920(arg0);
    temp_r3_3 = spB4 + arg0;
    var_r2_10 = 0;
    if (temp_r3_3->unk88C != 0) {
        var_r2_10 = (temp_r3_3 + 0x88C)->unk4;
    }
    func_0805E99C(temp_r5_8, (spB4 + arg0)->unk88C, var_r2_10, (spA8 + arg0)->unk884);
    sp94 = spA4;
    if (spA4 <= 1) {
        goto loop_84;
    }
    temp_r4_18 = arg0 + 0x8D4;
    temp_r0_26 = arg0->unk8CC;
    temp_r1_11 = temp_r0_26->unk0;
    (*temp_r1_11)->unk10(&sp40, temp_r1_11, *(temp_r0_26->unk4 + (temp_r0_26->unkC * 4)));
    memcpy(spB8, spB8, 0x20);
    temp_r0_27 = spB8 + 0xC;
    arg0->unk8D4 = (s32) spB8->unk0;
    temp_r4_18->unk4 = (s32) spB8->unk4;
    temp_r4_18->unk8 = (s32) spB8->unk8;
    temp_r4_19 = temp_r4_18 + 0xC;
    temp_r4_18->unkC = (s32) spB8->unkC;
    temp_r4_19->unk4 = (s32) temp_r0_27->unk4;
    temp_r4_19->unk8 = (s32) temp_r0_27->unk8;
    temp_r4_19->unkC = (s32) temp_r0_27->unkC;
    (temp_r4_19 + 0xC)->unk4 = (s32) (temp_r0_27 + 0xC)->unk4;
    temp_r0_28 = func_08008910(arg0);
    temp_r1_12 = arg0->unk8DC;
    var_r3_13 = 0;
    if (temp_r1_12 != 0) {
        var_r3_13 = (arg0 + 0x8DC)->unk4;
    }
    func_08008F0C(spB8, temp_r1_12, spB0 + 0x06010D20, var_r3_13);
    temp_r1_13 = temp_r0_28->unk4;
    if (temp_r1_13 != temp_r0_28->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32) spB8->unk0;
            temp_r1_13->unk4 = (s32) spB8->unk4;
            temp_r1_13->unk8 = (s32) spB8->unk8;
            temp_r1_13->unkC = (s32) spB8->unkC;
        }
        temp_r0_28->unk4 = (void *) (temp_r0_28->unk4 + 0x10);
    } else {
        spE8 = temp_r1_13;
        sp84 = 1;
        temp_r4_20 = (s32) (spE8 - temp_r0_28->unk0) >> 4;
        var_r0_9 = &sp80;
        *var_r0_9 = (u32) temp_r4_20;
        if ((u32) temp_r4_20 < (u32) sp84) {
            var_r0_9 = &sp84;
        }
        temp_r0_29 = temp_r4_20 + *var_r0_9;
        if (temp_r0_29 != 0) {
            temp_r4_21 = temp_r0_29 * 0x10;
            var_r0_10 = malloc(temp_r4_21);
            var_r8_6 = temp_r4_21;
            if (var_r0_10 == 0) {
                var_r0_10 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_10 = 0;
            var_r8_6 = 0;
        }
        spEC = var_r0_10;
        var_r2_11 = temp_r0_28->unk0;
        var_r3_14 = var_r0_10;
        if (var_r2_11 != spE8) {
            do {
                if (var_r3_14 != 0) {
                    var_r3_14->unk0 = (s32) var_r2_11->unk0;
                    var_r3_14->unk4 = (s32) var_r2_11->unk4;
                    var_r3_14->unk8 = (s32) var_r2_11->unk8;
                    var_r3_14->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_14 += 0x10;
            } while (var_r2_11 != spE8);
        }
        if (sp84 == 1) {
            if (var_r3_14 != 0) {
                var_r3_14->unk0 = (s32) spB8->unk0;
                var_r3_14->unk4 = (s32) spB8->unk4;
                var_r3_14->unk8 = (s32) spB8->unk8;
                var_r3_14->unkC = (s32) spB8->unkC;
            }
            var_r5_5 = var_r3_14 + 0x10;
        } else {
            var_r3_15 = sp84;
            var_r2_12 = var_r3_14;
            if (var_r3_15 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) spB8->unk0;
                        var_r2_12->unk4 = (s32) spB8->unk4;
                        var_r2_12->unk8 = (s32) spB8->unk8;
                        var_r2_12->unkC = (s32) spB8->unkC;
                    }
                    var_r3_15 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_15 != 0);
            }
            var_r5_5 = var_r2_12;
        }
        temp_r2_10 = temp_r0_28->unk4;
        temp_r0_30 = temp_r0_28->unk0;
        var_r1_5 = temp_r0_30;
        if (temp_r0_30 != temp_r2_10) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_10);
        }
        if (temp_r0_30 != 0) {
            free();
        }
        temp_r0_28->unk0 = spEC;
        temp_r0_28->unk4 = var_r5_5;
        temp_r0_28->unkC = (void *) (spEC + var_r8_6);
    }
    temp_r5_9 = func_08008910(arg0);
    temp_r7 = arg0->unk8E4;
    temp_r0_31 = arg0 + 0x774;
    temp_r2_11 = func_080074C0(temp_r0_31, temp_r0_31->unk4);
    var_r3_16 = 0;
    if (arg0->unk8E4 != 0) {
        var_r3_16 = (arg0 + 0x8E4)->unk4;
    }
    func_08008F0C(&sp40, temp_r7, (temp_r2_11 << 5) + 0x05000200, var_r3_16);
    temp_r1_14 = temp_r5_9->unk4;
    if (temp_r1_14 != temp_r5_9->unkC) {
        if (temp_r1_14 != 0) {
            temp_r1_14->unk0 = (s32) spB8->unk0;
            temp_r1_14->unk4 = (s32) spB8->unk4;
            temp_r1_14->unk8 = (s32) spB8->unk8;
            temp_r1_14->unkC = (s32) spB8->unkC;
        }
        temp_r5_9->unk4 = (void *) (temp_r5_9->unk4 + 0x10);
    } else {
        spE8 = temp_r1_14;
        sp8C = 1;
        temp_r4_22 = (s32) (spE8 - temp_r5_9->unk0) >> 4;
        var_r0_11 = &sp88;
        *var_r0_11 = (u32) temp_r4_22;
        if ((u32) temp_r4_22 < (u32) sp8C) {
            var_r0_11 = &sp8C;
        }
        temp_r0_32 = temp_r4_22 + *var_r0_11;
        if (temp_r0_32 != 0) {
            temp_r4_23 = temp_r0_32 * 0x10;
            var_r0_12 = malloc(temp_r4_23);
            var_sl_3 = temp_r4_23;
            if (var_r0_12 == 0) {
                var_r0_12 = func_080D3BC0(var_sl_3);
            }
        } else {
            var_r0_12 = 0;
            var_sl_3 = 0;
        }
        spEC = var_r0_12;
        var_r2_13 = temp_r5_9->unk0;
        var_r3_17 = var_r0_12;
        if (var_r2_13 != spE8) {
            do {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (s32) var_r2_13->unk0;
                    var_r3_17->unk4 = (s32) var_r2_13->unk4;
                    var_r3_17->unk8 = (s32) var_r2_13->unk8;
                    var_r3_17->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_17 += 0x10;
            } while (var_r2_13 != spE8);
        }
        if (sp8C == 1) {
            if (var_r3_17 != 0) {
                var_r3_17->unk0 = (s32) spB8->unk0;
                var_r3_17->unk4 = (s32) spB8->unk4;
                var_r3_17->unk8 = (s32) spB8->unk8;
                var_r3_17->unkC = (s32) spB8->unkC;
            }
            var_r5_6 = var_r3_17 + 0x10;
        } else {
            var_r3_18 = sp8C;
            var_r2_14 = var_r3_17;
            if (var_r3_18 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) spB8->unk0;
                        var_r2_14->unk4 = (s32) spB8->unk4;
                        var_r2_14->unk8 = (s32) spB8->unk8;
                        var_r2_14->unkC = (s32) spB8->unkC;
                    }
                    var_r3_18 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_18 != 0);
            }
            var_r5_6 = var_r2_14;
        }
        temp_r2_12 = temp_r5_9->unk4;
        temp_r0_33 = temp_r5_9->unk0;
        var_r1_6 = temp_r0_33;
        if (temp_r0_33 != temp_r2_12) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_12);
        }
        if (temp_r0_33 != 0) {
            free();
        }
        temp_r5_9->unk0 = spEC;
        temp_r5_9->unk4 = var_r5_6;
        temp_r5_9->unkC = (void *) (spEC + var_sl_3);
    }
    temp_r4_24 = func_08008920(arg0);
    temp_r0_34 = arg0->unk8D4;
    var_r2_15 = 0;
    if (temp_r0_34 != 0) {
        var_r2_15 = (arg0 + 0x8D4)->unk4;
    }
    func_0805E99C(temp_r4_24, temp_r0_34, var_r2_15, arg0->unk8D0);
}
