# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DFC4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DFC4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DFC4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DFC4/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DFC4/opencode/func.c" 2
s32 free();
u16 func_080074C0(void *, s32);
s16 func_08007D4C(void *, s32);
void *func_08008910(void *);
u8 *func_08008920(void *);
s32 func_08008F0C(s32 *, s32, s32, u16);
s32 func_0805E8F0(void *);
s32 func_0805E99C(u8 *, s32, u16, s32 *);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 memcpy(s32 *, s32 *, s32);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
    u8 _pad1C[4];
    s32 unk20;
    u8 _pad24[4];
    s32 unk28;
    u8 _pad2C[84];
    s32 unk80;
    s32 unk84;
    u8 _pad88[12];
    s32 unk94;
    u8 _pad98[28];
    s32 unkB4;
    s32 unkB8;
    u8 _padBC[12];
    s32 unkC8;
    u8 _padCC[28];
    s32 unkE8;
    s32 unkEC;
    u8 _padF0[12];
    s32 unkFC;
    u8 _pad100[76];
    s32 unk14C;
    u8 _pad150[382];
    s32 unk2CE;
    u8 _pad2D2[2050];
    s32 unkAD4;
    s32 unkAD6;
    s32 unkADA;
} GenObj;
void func_0805DFC4(GenObj *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    GenObj *sp1C;
    GenObj *sp24;
    GenObj *sp2C;
    GenObj *sp34;
GenObj sp3C;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    void *sp74;
    GenObj *sp78;
    void *sp7C;
    s16 temp_r2;
    s16 temp_r2_3;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_10;
    s32 temp_r0_16;
    s32 temp_r0_18;
    s32 temp_r4_10;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_9;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_sb;
    s32 var_sb_2;
    u16 temp_r0_20;
    u16 temp_r0_21;
    u16 var_r2;
    u16 var_r2_4;
    u16 var_r2_7;
    u16 var_r3;
    u16 var_r3_3;
    u8 *temp_r0_23;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 temp_r2_5;
    void **temp_r1;
    void **temp_r1_3;
    void **temp_r1_7;
    void *temp_r0;
    void *temp_r0_11;
    void *temp_r0_12;
    GenObj *temp_r0_13;
    void *temp_r0_14;
    GenObj *temp_r0_15;
    void *temp_r0_17;
    GenObj *temp_r0_19;
    GenObj *temp_r0_22;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    void *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r0_8;
    GenObj *temp_r0_9;
    GenObj *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_5;
    GenObj *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_2;
    void *temp_r2_4;
    GenObj *temp_r4;
    void *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r4_7;
    GenObj *temp_r4_8;
    GenObj *temp_r5;
    GenObj *temp_r5_2;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r3_2;
    GenObj *var_r3_4;
    void *var_r4;
    void *var_r4_2;

    sp0 = 0;
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
    if ((s32) arg0->unkADA > 0) {
        temp_r4 = (GenObj *)((u8 *)arg0 + 0xE8);
        func_0805E8F0(temp_r4);
        temp_r1 = arg0->unkE8;
        (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unkEC + (temp_r4->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r4_2 = &(GenObj *)((u8 *)sp3C + 0xC);
        sp1C.unk0 = sp3C;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r0 = &(GenObj *)((u8 *)sp1C + 0xC);
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r0->unk4 = (s32) temp_r4_2->unk4;
        temp_r0->unk8 = (s32) temp_r4_2->unk8;
        temp_r0->unkC = (s32) temp_r4_2->unkC;
        ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4_2 + 0xC))->unk4;
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0xFC);
        temp_r0_3 = (GenObj *)((u8 *)temp_r0_2 + 0xC);
        sp0 = (s32) arg0->unkFC;
        sp0.unk4 = (s32) temp_r0_2->unk4;
        sp0.unk8 = (s32) temp_r0_2->unk8;
        temp_r1_2 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp0.unkC = (s32) temp_r0_2->unkC;
        temp_r1_2->unk4 = (s32) temp_r0_3->unk4;
        temp_r1_2->unk8 = (s32) temp_r0_3->unk8;
        temp_r1_2->unkC = (s32) temp_r0_3->unkC;
        sp0 = 0xC;
        sp0.unk2 = (s16) ((arg0->unkAD4 * 0x10) - ((arg0->unkAD6 * 0x10) - 0x28));
        temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x13C);
        sp0.unk6 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
        temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x144);
        sp0.unk4 = func_080074C0(temp_r0_5, temp_r0_5->unk4);
        sp0.unk8 = 2;
        sp0.unk18 = 1;
        temp_r3 = func_08008920(arg0);
        var_r2 = 0;
        if (sp1C != 0) {
            var_r2 = sp0.unk20;
        }
        func_0805E99C(temp_r3, sp1C, var_r2, &sp0);
    }
    sp74 = &(GenObj *)((u8 *)sp0 + 0x6C);
    if (arg0->unk14C == 0) {

    } else {
        temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x80);
        func_0805E8F0(temp_r4_3);
        temp_r1_3 = arg0->unk80;
        (*temp_r1_3)->unk10(&sp3C, temp_r1_3, *(arg0->unk84 + (temp_r4_3->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0_6 = &(GenObj *)((u8 *)sp3C + 0xC);
        sp1C.unk0 = sp3C;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_4 = &(GenObj *)((u8 *)sp1C + 0xC);
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_4->unk4 = (s32) temp_r0_6->unk4;
        temp_r1_4->unk8 = (s32) temp_r0_6->unk8;
        temp_r1_4->unkC = (s32) temp_r0_6->unkC;
        ((GenObj *)((u8 *)temp_r1_4 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_6 + 0xC))->unk4;
        temp_r0_7 = (GenObj *)((u8 *)arg0 + 0x94);
        temp_r0_8 = (GenObj *)((u8 *)temp_r0_7 + 0xC);
        sp0 = (s32) arg0->unk94;
        sp0.unk4 = (s32) temp_r0_7->unk4;
        sp0.unk8 = (s32) temp_r0_7->unk8;
        temp_r1_5 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp0.unkC = (s32) temp_r0_7->unkC;
        temp_r1_5->unk4 = (s32) temp_r0_8->unk4;
        temp_r1_5->unk8 = (s32) temp_r0_8->unk8;
        temp_r1_5->unkC = (s32) temp_r0_8->unkC;
        sp0 = 0xE8;
        sp0.unk2 = 0x1A;
        temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x12C);
        sp0.unk6 = (s16) (func_08007D4C(temp_r4_4, temp_r4_4->unk4) + 4);
        temp_r0_9 = (GenObj *)((u8 *)arg0 + 0x134);
        sp0.unk4 = func_080074C0(temp_r0_9, temp_r0_9->unk4);
        sp0.unk8 = 2;
        sp0.unk18 = 1;
        temp_r5 = func_08008910(arg0);
        temp_r2 = func_08007D4C(temp_r4_4, temp_r4_4->unk4);
        var_r3 = 0;
        if (sp24 != 0) {
            var_r3 = sp0.unk28;
        }
        sp78 = temp_r5;
        func_08008F0C(&sp3C, sp24, (temp_r2 << 5) + 0x06010080, var_r3);
        temp_r1_6 = temp_r5->unk4;
        if (temp_r1_6 != temp_r5->unkC) {
            if (temp_r1_6 != 0) {
                temp_r1_6->unk0 = (s32) sp3C;
                temp_r1_6->unk4 = (s32) sp3C.unk4;
                temp_r1_6->unk8 = (s32) sp3C.unk8;
                temp_r1_6->unkC = (s32) sp3C.unkC;
            }
            sp78->unk4 = (void *) (sp78->unk4 + 0x10);
        } else {
            sp7C = temp_r1_6;
            sp60 = 1;
            temp_r4_5 = (s32) (temp_r1_6 - sp78->unk0) >> 4;
            sp5C = temp_r4_5;
            var_r0 = &sp5C;
            if ((u32) temp_r4_5 < 1U) {
                var_r0 = &sp60;
            }
            temp_r0_10 = temp_r4_5 + *var_r0;
            if (temp_r0_10 != 0) {
                temp_r4_6 = temp_r0_10 * 0x10;
                var_r0_2 = malloc(temp_r4_6);
                var_sb = temp_r4_6;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_2 = 0;
                var_sb = 0;
            }
            var_r2_2 = sp78->unk0;
            var_r3_2 = var_r0_2;
            sp74 = &(GenObj *)((u8 *)sp0 + 0x6C);
            if (var_r2_2 != sp7C) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2_2->unk0;
                        var_r3_2->unk4 = (s32) var_r2_2->unk4;
                        var_r3_2->unk8 = (s32) var_r2_2->unk8;
                        var_r3_2->unkC = (s32) var_r2_2->unkC;
                    }
                    var_r2_2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2_2 != sp7C);
            }
            if (sp60 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp3C;
                    var_r3_2->unk4 = (s32) sp3C.unk4;
                    var_r3_2->unk8 = (s32) sp3C.unk8;
                    var_r3_2->unkC = (s32) sp3C.unkC;
                }
                var_r4 = (GenObj *)((u8 *)var_r3_2 + 0x10);
            } else {
                var_ip = sp60;
                var_r2_3 = var_r3_2;
                if (sp60 != 0) {
                    do {
                        if (var_r2_3 != 0) {
                            var_r2_3->unk0 = (s32) sp3C;
                            var_r2_3->unk4 = (s32) sp3C.unk4;
                            var_r2_3->unk8 = (s32) sp3C.unk8;
                            var_r2_3->unkC = (s32) sp3C.unkC;
                        }
                        var_ip -= 1;
                        var_r2_3 += 0x10;
                    } while (var_ip != 0);
                }
                var_r4 = var_r2_3;
            }
            temp_r2_2 = sp78->unk4;
            temp_r0_11 = sp78->unk0;
            var_r1 = temp_r0_11;
            if (temp_r0_11 != temp_r2_2) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_2);
            }
            if (temp_r0_11 != 0) {
                free();
            }
            sp78->unk0 = var_r0_2;
            sp78->unk4 = var_r4;
            sp78->unkC = (void *) (var_sb + var_r0_2);
        }
        temp_r3_2 = func_08008920(arg0);
        var_r2_4 = 0;
        if (sp1C != 0) {
            var_r2_4 = sp0.unk20;
        }
        func_0805E99C(temp_r3_2, sp1C, var_r2_4, &sp0);
    }
    if ((u32) arg0->unk14C > 0x1FU) {

    } else {
        temp_r4_7 = (GenObj *)((u8 *)arg0 + 0xB4);
        func_0805E8F0(temp_r4_7);
        temp_r1_7 = arg0->unkB4;
        (*temp_r1_7)->unk10(&sp3C, temp_r1_7, *(arg0->unkB8 + (temp_r4_7->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0_12 = &(GenObj *)((u8 *)sp3C + 0xC);
        sp1C.unk0 = sp3C;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_8 = &(GenObj *)((u8 *)sp1C + 0xC);
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_8->unk4 = (s32) temp_r0_12->unk4;
        temp_r1_8->unk8 = (s32) temp_r0_12->unk8;
        temp_r1_8->unkC = (s32) temp_r0_12->unkC;
        ((GenObj *)((u8 *)temp_r1_8 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_12 + 0xC))->unk4;
        temp_r0_13 = (GenObj *)((u8 *)arg0 + 0xC8);
        temp_r0_14 = (GenObj *)((u8 *)temp_r0_13 + 0xC);
        sp0 = (s32) arg0->unkC8;
        sp0.unk4 = (s32) temp_r0_13->unk4;
        sp0.unk8 = (s32) temp_r0_13->unk8;
        temp_r1_9 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp0.unkC = (s32) temp_r0_13->unkC;
        temp_r1_9->unk4 = (s32) temp_r0_14->unk4;
        temp_r1_9->unk8 = (s32) temp_r0_14->unk8;
        temp_r1_9->unkC = (s32) temp_r0_14->unkC;
        sp0 = 0xE8;
        sp0.unk2 = 0x98;
        temp_r4_8 = (GenObj *)((u8 *)arg0 + 0x12C);
        sp0.unk6 = (s16) (func_08007D4C(temp_r4_8, temp_r4_8->unk4) + 8);
        temp_r0_15 = (GenObj *)((u8 *)arg0 + 0x134);
        sp0.unk4 = func_080074C0(temp_r0_15, temp_r0_15->unk4);
        sp0.unk8 = 2;
        sp0.unk18 = 1;
        temp_r5_2 = func_08008910(arg0);
        temp_r2_3 = func_08007D4C(temp_r4_8, temp_r4_8->unk4);
        var_r3_3 = 0;
        if (sp24 != 0) {
            var_r3_3 = sp0.unk28;
        }
        sp78 = temp_r5_2;
        func_08008F0C(&sp3C, sp24, (temp_r2_3 << 5) + 0x06010100, var_r3_3);
        temp_r1_10 = temp_r5_2->unk4;
        if (temp_r1_10 != temp_r5_2->unkC) {
            if (temp_r1_10 != 0) {
                temp_r1_10->unk0 = (s32) sp3C;
                temp_r1_10->unk4 = (s32) sp3C.unk4;
                temp_r1_10->unk8 = (s32) sp3C.unk8;
                temp_r1_10->unkC = (s32) sp3C.unkC;
            }
            sp78->unk4 = (void *) (sp78->unk4 + 0x10);
        } else {
            sp7C = temp_r1_10;
            sp68 = 1;
            temp_r4_9 = (s32) (temp_r1_10 - sp78->unk0) >> 4;
            sp64 = temp_r4_9;
            var_r0_3 = &sp64;
            if ((u32) temp_r4_9 < 1U) {
                var_r0_3 = &sp68;
            }
            temp_r0_16 = temp_r4_9 + *var_r0_3;
            if (temp_r0_16 != 0) {
                temp_r4_10 = temp_r0_16 * 0x10;
                var_r0_4 = malloc(temp_r4_10);
                var_sb_2 = temp_r4_10;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_4 = 0;
                var_sb_2 = 0;
            }
            var_r2_5 = sp78->unk0;
            var_r3_4 = var_r0_4;
            if (var_r2_5 != sp7C) {
                do {
                    if (var_r3_4 != 0) {
                        var_r3_4->unk0 = (s32) var_r2_5->unk0;
                        var_r3_4->unk4 = (s32) var_r2_5->unk4;
                        var_r3_4->unk8 = (s32) var_r2_5->unk8;
                        var_r3_4->unkC = (s32) var_r2_5->unkC;
                    }
                    var_r2_5 += 0x10;
                    var_r3_4 += 0x10;
                } while (var_r2_5 != sp7C);
            }
            if (sp68 == 1) {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) sp3C;
                    var_r3_4->unk4 = (s32) sp3C.unk4;
                    var_r3_4->unk8 = (s32) sp3C.unk8;
                    var_r3_4->unkC = (s32) sp3C.unkC;
                }
                var_r4_2 = (GenObj *)((u8 *)var_r3_4 + 0x10);
            } else {
                var_ip_2 = sp68;
                var_r2_6 = var_r3_4;
                if (sp68 != 0) {
                    do {
                        if (var_r2_6 != 0) {
                            var_r2_6->unk0 = (s32) sp3C;
                            var_r2_6->unk4 = (s32) sp3C.unk4;
                            var_r2_6->unk8 = (s32) sp3C.unk8;
                            var_r2_6->unkC = (s32) sp3C.unkC;
                        }
                        var_ip_2 -= 1;
                        var_r2_6 += 0x10;
                    } while (var_ip_2 != 0);
                }
                var_r4_2 = var_r2_6;
            }
            temp_r2_4 = sp78->unk4;
            temp_r0_17 = sp78->unk0;
            var_r1_2 = temp_r0_17;
            if (temp_r0_17 != temp_r2_4) {
                do {
                    var_r1_2 += 0x10;
                } while (var_r1_2 != temp_r2_4);
            }
            if (temp_r0_17 != 0) {
                free();
            }
            sp78->unk0 = var_r0_4;
            sp78->unk4 = var_r4_2;
            sp78->unkC = (void *) (var_sb_2 + var_r0_4);
        }
        temp_r3_3 = func_08008920(arg0);
        var_r2_7 = 0;
        if (sp1C != 0) {
            var_r2_7 = sp0.unk20;
        }
        func_0805E99C(temp_r3_3, sp1C, var_r2_7, &sp0);
    }
    temp_r0_18 = ((((sp6C & 0xFFFFFCFF & 0xFFFFF3FF) | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF) | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
    sp6C = temp_r0_18;
    temp_r0_19 = (GenObj *)((u8 *)arg0 + 0x124);
    sp74->unk4 = (s32) (u16) ((sp74->unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_19, temp_r0_19->unk4) & 0xF) << 0xC));
    sp6C = temp_r0_18 | 0x1000;
    temp_r0_20 = arg0->unk2CE - 1;
    arg0->unk2CE = temp_r0_20;
    if ((s32) (temp_r0_20 << 0x10) >= 0) {
        do {
            sp74->unk4 = (s32) ((sp74->unk4 & 0xFFFFF3FF) | ((*((GenObj *)((u8 *)arg0 + 0x154) + ((s16) arg0->unk2CE * 8)) & 3) << 0xA));
            sp6C = (((sp6C & 0xFE00FFFF) | ((*((GenObj *)((u8 *)arg0 + 0x14E) + ((s16) arg0->unk2CE * 8)) & 0x1FF) << 0x10)) & 0xFFFFFF00) | *((GenObj *)((u8 *)arg0 + 0x150) + ((s16) arg0->unk2CE * 8));
            temp_r0_22 = (GenObj *)((u8 *)arg0 + 0x11C);
            sp74->unk4 = (s32) ((sp74->unk4 & 0xFFFFFC00) | ((u32) ((func_08007D4C(temp_r0_22, temp_r0_22->unk4) + (*((GenObj *)((u8 *)arg0 + 0x152) + ((s16) arg0->unk2CE * 8)) * 2)) << 0x16) >> 0x16));
            temp_r0_23 = func_08008920(arg0);
            temp_r2_5 = *temp_r0_23;
            if ((u32) temp_r2_5 <= 0x7FU) {
                temp_r1_11 = temp_r0_23 + ((temp_r2_5 * 8) + 4);
                temp_r1_11->unk0 = sp6C;
                temp_r1_11->unk4 = (u16) sp74->unk4;
                *temp_r0_23 = temp_r2_5 + 1;
            }
            temp_r0_21 = arg0->unk2CE - 1;
            arg0->unk2CE = temp_r0_21;
        } while ((s32) (temp_r0_21 << 0x10) >= 0);
    }
}
