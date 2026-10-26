# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075E7C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075E7C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075E7C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075E7C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075E7C/opencode/func.c" 2
s32 free();
s32 func_08008444(void *);
s32 func_08008724(void *);
void *func_08008910(void *);
s16 *func_08008918(void *);
s32 func_08008E64(s32 *, s32, s32);
s32 func_08008EB8(s32, s32, s32);
s32 func_08008F0C(s32 *, s32, s32, u16);
s32 func_0804E4AC(s32, s32 *, s32, s32);
s32 func_0804E9F4(s32, s32, s32, s32);
s32 func_08051320(s32, s32, s32, s32);
s32 func_0805E6CC(void *, s32 *);
s32 func_0805E824(void *, void *, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern s32 *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 *gUnk_080F9F78;
extern u16 gUnk_080FC082;
extern s32 gUnk_08527094;
extern s32 vtable_unk_080E7B78;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk11;
    struct GenObj *unk14;
    struct GenObj *unk18;
    struct GenObj *unk1C;
    u8 _pad20[28];
    s32 unk3C;
    s32 unk3E;
    u8 _pad42[18];
    s32 unk54;
    u8 _pad58[52];
    s32 unk8C;
    u8 _pad90[52];
    s32 unkC4;
    u8 _padC8[32];
    s32 unkE8;
    u8 _padEC[16];
    s32 unkFC;
    u8 _pad100[24];
    s32 unk118;
    s32 unk11C;
} GenObj;
void *func_08075E7C(GenObj *arg0, u8 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s16 spC;
s32 sp14;
s32 sp74;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 *sp90;
    s32 *sp94;
    s32 *sp98;
    GenObj *sp9C;
    void *spA0;
    s32 *temp_r4;
    s16 *temp_r0_11;
    s16 *temp_r0_12;
    s16 *temp_r0_13;
    s16 *temp_r0_14;
    s16 *temp_r0_15;
    s16 *temp_r0_16;
    s16 *temp_r0_17;
    s16 *temp_r0_18;
    s32 *var_r2;
    s32 temp_r0_20;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r5;
    s32 var_r6;
    s32 var_r8;
    s32 var_sl;
    u16 *var_r4;
    u16 var_r3;
    void **temp_r1_2;
    GenObj *temp_r0;
    GenObj *temp_r0_10;
    GenObj *temp_r0_19;
    void *temp_r0_21;
    void *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    GenObj *temp_r1_3;
    void *temp_r2;
    void *temp_r2_2;
    void *var_r0;
    void *var_r1;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r3_2;
    void *var_r5_2;

    func_08008444(arg0);
    arg0->unk4 = &vtable_unk_080E7B78;
    arg0->unk8 = 0;
    temp_r1 = (GenObj *)((u8 *)arg0 + 0xC);
    func_0805E6CC(temp_r1, &gUnk_08527094);
    arg0->unk3C = 0xE8;
    arg0->unk3E = 0x18;
    func_0805E824((GenObj *)((u8 *)arg0 + 0x40), temp_r1, 0, 0x100);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x54);
    arg0->unk54 = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 0x1C);
    temp_r0->unk1C = 0;
    temp_r0_3 = temp_r0_2 + 4;
    temp_r0_2->unk4 = 0xE8;
    temp_r0_3->unk2 = 0x98;
    func_0805E824(temp_r0_3 + 4, temp_r1, 1, 0x100);
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x8C);
    arg0->unk8C = 0;
    temp_r0_4->unk2 = 0;
    temp_r0_4->unk4 = 0;
    temp_r0_4->unk6 = 0;
    temp_r0_4->unk8 = 0;
    temp_r0_4->unkC = 0;
    temp_r0_4->unk10 = 0;
    temp_r0_4->unk11 = 0;
    temp_r0_4->unk14 = 0;
    temp_r0_4->unk18 = 0;
    temp_r0_5 = (GenObj *)((u8 *)temp_r0_4 + 0x1C);
    temp_r0_4->unk1C = 0;
    temp_r0_6 = temp_r0_5 + 4;
    temp_r0_5->unk4 = 0xE8;
    temp_r0_6->unk2 = 8;
    func_0805E824(temp_r0_6 + 4, temp_r1, 2, 0x100);
    temp_r0_7 = (GenObj *)((u8 *)arg0 + 0xC4);
    arg0->unkC4 = 0;
    temp_r0_7->unk2 = 0;
    temp_r0_7->unk4 = 0;
    temp_r0_7->unk6 = 0;
    temp_r0_7->unk8 = 0;
    temp_r0_7->unkC = 0;
    temp_r0_7->unk10 = 0;
    temp_r0_7->unk11 = 0;
    temp_r0_7->unk14 = 0;
    temp_r0_7->unk18 = 0;
    temp_r0_8 = (GenObj *)((u8 *)temp_r0_7 + 0x1C);
    temp_r0_7->unk1C = 0;
    temp_r0_9 = temp_r0_8 + 4;
    temp_r0_8->unk4 = 0;
    temp_r0_9->unk2 = 8;
    func_0805E824(temp_r0_9 + 4, temp_r1, 3, 0x100);
    temp_r0_10 = (GenObj *)((u8 *)arg0 + 0xFC);
    arg0->unkFC = 0;
    temp_r0_10->unk2 = 0;
    temp_r0_10->unk4 = 0;
    temp_r0_10->unk6 = 0;
    temp_r0_10->unk8 = 0;
    temp_r0_10->unkC = 0;
    temp_r0_10->unk10 = 0;
    temp_r0_10->unk11 = 0;
    temp_r0_10->unk14 = 0;
    temp_r0_10->unk18 = 0;
    arg0->unk118 = 0;
    arg0->unk11C = arg1;
    func_08008724(arg0);
    temp_r0_11 = func_08008918(arg0);
    spC = 0x1E41;
    temp_r0_11->unkA = 0x1E41;
    temp_r0_12 = func_08008918(arg0);
    spC = 0x1D40;
    temp_r0_12->unkC = 0x1D40;
    temp_r0_13 = func_08008918(arg0);
    spC = 0x3F42;
    temp_r0_13->unkE = 0x3F42;
    temp_r0_14 = func_08008918(arg0);
    spC = 0x1C48;
    temp_r0_14->unk8 = 0x1C48;
    func_08008EB8(-1, 0x0600E000, 0x2000);
    func_08008EB8(0, 0x06007FE0, 0x20);
    temp_r0_15 = func_08008918(arg0);
    spC = 0x1F40;
    *temp_r0_15 = 0x1F40;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600F800, 0x800);
    temp_r0_16 = func_08008918(arg0);
    spC = 0;
    temp_r0_16->unk1E = 0;
    sp0 = 3;
    sp4 = 0;
    sp8 = 0;
    func_08051320(0x0600E800, 0, 0x1D, 0x1E);
    temp_r0_17 = func_08008918(arg0);
    spC = 0x1E8;
    temp_r0_17->unk1A = 0x1E8;
    func_08008EB8(0, 0x06008000, 0x20);
    func_08008EB8(0, 0x0600E000, 0x800);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(0x0600E008, 1, 0x16, 2);
    temp_r0_18 = func_08008918(arg0);
    spC = 0xFFFC;
    temp_r0_18->unk12 = 0xFFFC;
    temp_r4 = gUnk_080F9F78;
    func_08008E64(temp_r4, 0x05000000, 0x20);
    func_08008E64(temp_r4, 0x05000200, 0x20);
    var_r6 = 0;
    sp90 = &sp0 + 0x54;
    sp94 = &sp0 + 0x64;
    sp98 = &sp0 + 0x74;
    var_r5 = 0x06002400;
    var_r4 = &gUnk_080FC082;
    do {
        sp84 = 1;
        sp84.unk2 = 2;
        sp0 = (s32) *var_r4;
        func_0804E4AC(sp84, &sp14, 0, 0);
        func_08008E64(&sp14, var_r5, 0x40);
        var_r5 += 0x40;
        var_r4 += 2;
        var_r6 += 1;
    } while (var_r6 <= 9);
    temp_r0_19 = (GenObj *)((u8 *)arg0 + 0xE8);
    temp_r1_2 = arg0->unkE8;
    (*temp_r1_2)->unk10(sp90, temp_r1_2, *(temp_r0_19->unk4 + (temp_r0_19->unkC * 4)));
    temp_r2 = func_08008910(arg0);
    var_r3 = 0;
    if (sp64 != 0) {
        var_r3 = sp94->unk4;
    }
    sp9C = temp_r2;
    func_08008F0C(&sp74, sp64, 0x05000200, var_r3);
    temp_r1_3 = sp9C->unk4;
    if (temp_r1_3 != sp9C->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp98->unk0;
            temp_r1_3->unk4 = (s32) sp98->unk4;
            temp_r1_3->unk8 = (s32) sp98->unk8;
            temp_r1_3->unkC = (s32) sp98->unkC;
        }
        sp9C->unk4 = (void *) (sp9C->unk4 + 0x10);
    } else {
        sp8C = 1;
        temp_r4_2 = (s32) (temp_r1_3 - sp9C->unk0) >> 4;
        sp88 = temp_r4_2;
        var_r2 = &sp88;
        if ((u32) temp_r4_2 < (u32) sp8C) {
            var_r2 = &sp8C;
        }
        temp_r0_20 = temp_r4_2 + *var_r2;
        if (temp_r0_20 != 0) {
            temp_r4_3 = temp_r0_20 * 0x10;
            var_r0 = malloc(temp_r4_3);
            var_sl = temp_r4_3;
            if (var_r0 == 0) {
                var_r0 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0 = 0;
            var_sl = 0;
        }
        spA0 = var_r0;
        var_r2_2 = sp9C->unk0;
        var_r3_2 = var_r0;
        if (var_r2_2 != temp_r1_3) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_2->unk0;
                    var_r3_2->unk4 = (s32) var_r2_2->unk4;
                    var_r3_2->unk8 = (s32) var_r2_2->unk8;
                    var_r3_2->unkC = (s32) var_r2_2->unkC;
                }
                var_r2_2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_2 != temp_r1_3);
        }
        if (sp8C == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp98->unk0;
                var_r3_2->unk4 = (s32) sp98->unk4;
                var_r3_2->unk8 = (s32) sp98->unk8;
                var_r3_2->unkC = (s32) sp98->unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_2 + 0x10);
        } else {
            var_r8 = sp8C;
            var_r2_3 = var_r3_2;
            if (sp8C != 0) {
                do {
                    if (var_r2_3 != 0) {
                        var_r2_3->unk0 = (s32) sp98->unk0;
                        var_r2_3->unk4 = (s32) sp98->unk4;
                        var_r2_3->unk8 = (s32) sp98->unk8;
                        var_r2_3->unkC = (s32) sp98->unkC;
                    }
                    var_r8 -= 1;
                    var_r2_3 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5_2 = var_r2_3;
        }
        temp_r2_2 = sp9C->unk4;
        temp_r0_21 = sp9C->unk0;
        var_r1 = temp_r0_21;
        if (temp_r0_21 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_21 != 0) {
            free();
        }
        sp9C->unk0 = spA0;
        sp9C->unk4 = var_r5_2;
        sp9C->unkC = (void *) (spA0 + var_sl);
    }
    return arg0;
}
