# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806FBA4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806FBA4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806FBA4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806FBA4/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806FBA4/opencode/func.c" 2
s32 free(void *);
s32 func_0805E824(s32 *, s32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern s32 gUnk_080FBD94;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    u8 _pad14[12];
    s32 unk20;
} GenObj;
void func_0806FBA4(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    u16 *sp4C;
    s32 sp50;
    GenObj *sp54;
    s32 sp58;
    s32 *sp5C;
    s32 *sp60;
    s32 *sp64;
    s32 *sp68;
    s32 *sp6C;
    s32 *sp70;
    s32 *sp74;
    s32 sp78;
    s32 sp7C;
    GenObj *sp80;
    GenObj *sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    GenObj *sp94;
    GenObj *sp98;
    void *sp9C;
    s32 *temp_r2_2;
    s32 *temp_r2_5;
    s32 *temp_r2_8;
    s32 *var_r0;
    s32 *var_r0_4;
    s32 *var_r0_7;
    s32 *var_r6;
    s32 *var_r6_2;
    s32 *var_r6_3;
    s32 temp_r0_12;
    s32 temp_r0_2;
    s32 temp_r0_7;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 var_r1;
    s32 var_r1_3;
    s32 var_r1_5;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r3_6;
    u16 *temp_r2;
    u16 var_sl;
    u16 var_sl_2;
    u16 var_sl_3;
    void *temp_r0;
    GenObj *temp_r0_10;
    GenObj *temp_r0_11;
    void *temp_r0_13;
    GenObj *temp_r0_14;
    GenObj *temp_r0_15;
    GenObj *temp_r0_16;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    void *temp_r0_8;
    GenObj *temp_r0_9;
    void *temp_r1;
    void *temp_r1_10;
    GenObj *temp_r1_11;
    GenObj *temp_r1_12;
    GenObj *temp_r1_13;
    void *temp_r1_14;
    void *temp_r1_15;
    GenObj *temp_r1_16;
    void *temp_r1_17;
    GenObj *temp_r1_18;
    GenObj *temp_r1_19;
    GenObj *temp_r1_20;
    void *temp_r1_21;
    GenObj *temp_r1_2;
    void *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    GenObj *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_8;
    GenObj *temp_r1_9;
    void *temp_r2_10;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_9;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r0_9;
    void *var_r1_2;
    void *var_r1_4;
    void *var_r1_6;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r3;
    GenObj *var_r3_3;
    GenObj *var_r3_5;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;

    sp48 = arg0;
    temp_r2 = (arg1 * 4) + &gUnk_080FBD94;
    sp4C = temp_r2;
    sp50 = (s32) temp_r2->unk2;
    temp_r0 = sp48 + ((arg1 * 0x30) + 0xE0);
    sp54 = temp_r0;
    var_r1 = 0;
    temp_r2_2 = temp_r0->unk0;
    temp_r0_2 = temp_r0->unk4;
    if (temp_r2_2 == temp_r0_2) {
        var_r1 = 1;
    }
    sp80 = (GenObj *)((u8 *)sp54 + 0x10);
    sp84 = (GenObj *)((u8 *)sp54 + 0x20);
    if (var_r1 != 0) {

    } else {
        var_sl = *sp4C;
        var_r6 = temp_r2_2;
        sp58 = temp_r0_2;
        sp90 = sp48 + 0xA0;
        sp74 = &(GenObj *)((u8 *)sp0 + 8);
        temp_r1 = sp48 + 0xD0;
        sp94 = temp_r1;
        sp7C = sp50 + 0xC;
        sp98 = temp_r1;
        sp60 = &sp0;
        sp5C = &(GenObj *)((u8 *)sp0 + 0x1C);
loop_5:
        func_0805E824(sp5C, sp90, *var_r6, 0x100);
        sp0 = (s32) var_sl;
        sp4 = sp50;
        sp74->unk0 = sp5C->unk0;
        sp74->unk4 = (s32) sp5C->unk4;
        sp74->unk8 = (s32) sp5C->unk8;
        sp74->unkC = (s32) sp5C->unkC;
        ((GenObj *)((u8 *)sp74 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)sp5C + 0xC))->unk4;
        temp_r1_2 = sp98->unk4;
        if (temp_r1_2 != sp98->unkC) {
            if (temp_r1_2 != 0) {
                temp_r1_3 = &(GenObj *)((u8 *)sp0 + 0xC);
                temp_r1_2->unk0 = (s32) sp0;
                temp_r1_2->unk4 = (s32) sp0.unk4;
                temp_r1_2->unk8 = (s32) sp0.unk8;
                temp_r0_3 = (GenObj *)((u8 *)temp_r1_2 + 0xC);
                temp_r1_2->unkC = (s32) sp0.unkC;
                temp_r0_3->unk4 = (s32) temp_r1_3->unk4;
                temp_r0_3->unk8 = (s32) temp_r1_3->unk8;
                temp_r0_3->unkC = (s32) temp_r1_3->unkC;
            }
            sp98->unk4 = (void *) (sp98->unk4 + 0x1C);
            var_sl += 4;
            var_r6 += 4;
        } else {
            temp_r5 = sp94->unk4;
            sp34 = 1;
            temp_r2_3 = sp94->unk0;
            temp_r4 = (s32) ((temp_r5 - temp_r2_3) * 0xB6DB6DB7) >> 2;
            sp30 = temp_r4;
            var_r0 = &sp30;
            var_r1_2 = temp_r2_3;
            if ((u32) temp_r4 < 1U) {
                var_r0 = &sp34;
            }
            temp_r4_2 = temp_r4 + *var_r0;
            if (temp_r4_2 != 0) {
                temp_r5_2 = temp_r4_2 * 0x1C;
                var_r0_2 = malloc(temp_r5_2);
                sp88 = temp_r4_2 * 8;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(temp_r5_2);
                }
                var_r1_2 = sp98->unk0;
            } else {
                var_r0_2 = 0;
                sp88 = 0;
            }
            sp9C = var_r0_2;
            var_r2 = var_r1_2;
            var_r3 = var_r0_2;
            var_sl += 4;
            var_r6 += 4;
            if (var_r2 != temp_r5) {
                do {
                    if (var_r3 != 0) {
                        temp_r1_4 = (GenObj *)((u8 *)var_r2 + 0xC);
                        var_r3->unk0 = (s32) var_r2->unk0;
                        var_r3->unk4 = (s32) var_r2->unk4;
                        var_r3->unk8 = (s32) var_r2->unk8;
                        temp_r0_4 = (GenObj *)((u8 *)var_r3 + 0xC);
                        var_r3->unkC = (s32) var_r2->unkC;
                        temp_r0_4->unk4 = (s32) temp_r1_4->unk4;
                        temp_r0_4->unk8 = (s32) temp_r1_4->unk8;
                        temp_r0_4->unkC = (s32) temp_r1_4->unkC;
                    }
                    var_r2 += 0x1C;
                    var_r3 += 0x1C;
                } while (var_r2 != temp_r5);
            }
            if (sp34 == 1) {
                if (var_r3 != 0) {
                    temp_r1_5 = (GenObj *)((u8 *)sp60 + 0xC);
                    var_r3->unk0 = (s32) sp60->unk0;
                    var_r3->unk4 = (s32) sp60->unk4;
                    var_r3->unk8 = (s32) sp60->unk8;
                    temp_r0_5 = (GenObj *)((u8 *)var_r3 + 0xC);
                    var_r3->unkC = (s32) sp60->unkC;
                    temp_r0_5->unk4 = (s32) temp_r1_5->unk4;
                    temp_r0_5->unk8 = (s32) temp_r1_5->unk8;
                    temp_r0_5->unkC = (s32) temp_r1_5->unkC;
                }
                var_r4 = (GenObj *)((u8 *)var_r3 + 0x1C);
            } else {
                var_r3_2 = sp34;
                var_r2_2 = var_r3;
                if (var_r3_2 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            temp_r1_6 = (GenObj *)((u8 *)sp60 + 0xC);
                            var_r2_2->unk0 = (s32) sp60->unk0;
                            var_r2_2->unk4 = (s32) sp60->unk4;
                            var_r2_2->unk8 = (s32) sp60->unk8;
                            temp_r0_6 = (GenObj *)((u8 *)var_r2_2 + 0xC);
                            var_r2_2->unkC = (s32) sp60->unkC;
                            temp_r0_6->unk4 = (s32) temp_r1_6->unk4;
                            temp_r0_6->unk8 = (s32) temp_r1_6->unk8;
                            temp_r0_6->unkC = (s32) temp_r1_6->unkC;
                        }
                        var_r3_2 -= 1;
                        var_r2_2 += 0x1C;
                    } while (var_r3_2 != 0);
                }
                var_r4 = var_r2_2;
            }
            temp_r2_4 = sp98->unk4;
            temp_r1_7 = sp98->unk0;
            var_r0_3 = temp_r1_7;
            if (temp_r1_7 != temp_r2_4) {
                do {
                    var_r0_3 += 0x1C;
                } while (var_r0_3 != temp_r2_4);
            }
            if (temp_r1_7 != 0) {
                free(temp_r1_7);
            }
            sp98->unk0 = sp9C;
            sp98->unk4 = var_r4;
            sp98->unkC = (void *) (((sp88 - temp_r4_2) * 4) + sp9C);
        }
        if (var_r6 != sp58) {
            goto loop_5;
        }
        sp50 = sp7C;
    }
    var_r1_3 = 0;
    temp_r2_5 = sp54->unk10;
    temp_r0_7 = sp80->unk4;
    if (temp_r2_5 == temp_r0_7) {
        var_r1_3 = 1;
    }
    if (var_r1_3 != 0) {

    } else {
        var_sl_2 = *sp4C;
        var_r6_2 = temp_r2_5;
        sp58 = temp_r0_7;
        sp90 = sp48 + 0xA0;
        sp74 = &(GenObj *)((u8 *)sp0 + 8);
        temp_r1_8 = sp48 + 0xD0;
        sp94 = temp_r1_8;
        sp7C = sp50 + 0xC;
        sp98 = temp_r1_8;
        sp68 = &sp0;
        sp64 = &(GenObj *)((u8 *)sp0 + 0x1C);
loop_42:
        func_0805E824(sp64, sp90, *var_r6_2, 0x100);
        sp0 = (s32) var_sl_2;
        sp4 = sp50;
        sp74->unk0 = sp64->unk0;
        sp74->unk4 = (s32) sp64->unk4;
        sp74->unk8 = (s32) sp64->unk8;
        sp74->unkC = (s32) sp64->unkC;
        ((GenObj *)((u8 *)sp74 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)sp64 + 0xC))->unk4;
        temp_r1_9 = sp98->unk4;
        if (temp_r1_9 != sp98->unkC) {
            if (temp_r1_9 != 0) {
                temp_r1_10 = &(GenObj *)((u8 *)sp0 + 0xC);
                temp_r1_9->unk0 = (s32) sp0;
                temp_r1_9->unk4 = (s32) sp0.unk4;
                temp_r1_9->unk8 = (s32) sp0.unk8;
                temp_r0_8 = (GenObj *)((u8 *)temp_r1_9 + 0xC);
                temp_r1_9->unkC = (s32) sp0.unkC;
                temp_r0_8->unk4 = (s32) temp_r1_10->unk4;
                temp_r0_8->unk8 = (s32) temp_r1_10->unk8;
                temp_r0_8->unkC = (s32) temp_r1_10->unkC;
            }
            sp98->unk4 = (void *) (sp98->unk4 + 0x1C);
            var_r6_2 += 4;
            var_sl_2 += 4;
        } else {
            temp_r5_3 = sp94->unk4;
            sp3C = 1;
            temp_r2_6 = sp94->unk0;
            temp_r4_3 = (s32) ((temp_r5_3 - temp_r2_6) * 0xB6DB6DB7) >> 2;
            sp38 = temp_r4_3;
            var_r0_4 = &sp38;
            var_r1_4 = temp_r2_6;
            if ((u32) temp_r4_3 < 1U) {
                var_r0_4 = &sp3C;
            }
            temp_r4_4 = temp_r4_3 + *var_r0_4;
            if (temp_r4_4 != 0) {
                temp_r5_4 = temp_r4_4 * 0x1C;
                var_r0_5 = malloc(temp_r5_4);
                sp78 = temp_r4_4 * 8;
                if (var_r0_5 == 0) {
                    var_r0_5 = func_080D3BC0(temp_r5_4);
                }
                var_r1_4 = sp98->unk0;
            } else {
                var_r0_5 = 0;
                sp78 = 0;
            }
            sp9C = var_r0_5;
            var_r2_3 = var_r1_4;
            var_r3_3 = var_r0_5;
            var_r6_2 += 4;
            var_sl_2 += 4;
            if (var_r2_3 != temp_r5_3) {
                do {
                    if (var_r3_3 != 0) {
                        temp_r1_11 = (GenObj *)((u8 *)var_r2_3 + 0xC);
                        var_r3_3->unk0 = (s32) var_r2_3->unk0;
                        var_r3_3->unk4 = (s32) var_r2_3->unk4;
                        var_r3_3->unk8 = (s32) var_r2_3->unk8;
                        temp_r0_9 = (GenObj *)((u8 *)var_r3_3 + 0xC);
                        var_r3_3->unkC = (s32) var_r2_3->unkC;
                        temp_r0_9->unk4 = (s32) temp_r1_11->unk4;
                        temp_r0_9->unk8 = (s32) temp_r1_11->unk8;
                        temp_r0_9->unkC = (s32) temp_r1_11->unkC;
                    }
                    var_r2_3 += 0x1C;
                    var_r3_3 += 0x1C;
                } while (var_r2_3 != temp_r5_3);
            }
            if (sp3C == 1) {
                if (var_r3_3 != 0) {
                    temp_r1_12 = (GenObj *)((u8 *)sp68 + 0xC);
                    var_r3_3->unk0 = (s32) sp68->unk0;
                    var_r3_3->unk4 = (s32) sp68->unk4;
                    var_r3_3->unk8 = (s32) sp68->unk8;
                    temp_r0_10 = (GenObj *)((u8 *)var_r3_3 + 0xC);
                    var_r3_3->unkC = (s32) sp68->unkC;
                    temp_r0_10->unk4 = (s32) temp_r1_12->unk4;
                    temp_r0_10->unk8 = (s32) temp_r1_12->unk8;
                    temp_r0_10->unkC = (s32) temp_r1_12->unkC;
                }
                var_r4_2 = (GenObj *)((u8 *)var_r3_3 + 0x1C);
            } else {
                var_r3_4 = sp3C;
                var_r2_4 = var_r3_3;
                if (var_r3_4 != 0) {
                    do {
                        if (var_r2_4 != 0) {
                            temp_r1_13 = (GenObj *)((u8 *)sp68 + 0xC);
                            var_r2_4->unk0 = (s32) sp68->unk0;
                            var_r2_4->unk4 = (s32) sp68->unk4;
                            var_r2_4->unk8 = (s32) sp68->unk8;
                            temp_r0_11 = (GenObj *)((u8 *)var_r2_4 + 0xC);
                            var_r2_4->unkC = (s32) sp68->unkC;
                            temp_r0_11->unk4 = (s32) temp_r1_13->unk4;
                            temp_r0_11->unk8 = (s32) temp_r1_13->unk8;
                            temp_r0_11->unkC = (s32) temp_r1_13->unkC;
                        }
                        var_r3_4 -= 1;
                        var_r2_4 += 0x1C;
                    } while (var_r3_4 != 0);
                }
                var_r4_2 = var_r2_4;
            }
            temp_r2_7 = sp98->unk4;
            temp_r1_14 = sp98->unk0;
            var_r0_6 = temp_r1_14;
            if (temp_r1_14 != temp_r2_7) {
                do {
                    var_r0_6 += 0x1C;
                } while (var_r0_6 != temp_r2_7);
            }
            if (temp_r1_14 != 0) {
                free(temp_r1_14);
            }
            sp98->unk0 = sp9C;
            sp98->unk4 = var_r4_2;
            sp98->unkC = (void *) (((sp78 - temp_r4_4) * 4) + sp9C);
        }
        if (var_r6_2 != sp58) {
            goto loop_42;
        }
        sp50 = sp7C;
    }
    var_r1_5 = 0;
    temp_r2_8 = sp54->unk20;
    temp_r0_12 = sp84->unk4;
    if (temp_r2_8 == temp_r0_12) {
        var_r1_5 = 1;
    }
    if (var_r1_5 != 0) {
        return;
    }
    var_sl_3 = *sp4C;
    var_r6_3 = temp_r2_8;
    sp58 = temp_r0_12;
    sp90 = sp48 + 0xA0;
    sp74 = &(GenObj *)((u8 *)sp0 + 8);
    temp_r1_15 = sp48 + 0xD0;
    sp94 = temp_r1_15;
    sp98 = temp_r1_15;
    sp70 = &sp0;
    sp6C = &(GenObj *)((u8 *)sp0 + 0x1C);
loop_79:
    func_0805E824(sp6C, sp90, *var_r6_3, 0x100);
    sp0 = (s32) var_sl_3;
    sp4 = sp50;
    sp74->unk0 = sp6C->unk0;
    sp74->unk4 = (s32) sp6C->unk4;
    sp74->unk8 = (s32) sp6C->unk8;
    sp74->unkC = (s32) sp6C->unkC;
    ((GenObj *)((u8 *)sp74 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)sp6C + 0xC))->unk4;
    temp_r1_16 = sp98->unk4;
    if (temp_r1_16 != sp98->unkC) {
        if (temp_r1_16 != 0) {
            temp_r1_17 = &(GenObj *)((u8 *)sp0 + 0xC);
            temp_r1_16->unk0 = (s32) sp0;
            temp_r1_16->unk4 = (s32) sp0.unk4;
            temp_r1_16->unk8 = (s32) sp0.unk8;
            temp_r0_13 = (GenObj *)((u8 *)temp_r1_16 + 0xC);
            temp_r1_16->unkC = (s32) sp0.unkC;
            temp_r0_13->unk4 = (s32) temp_r1_17->unk4;
            temp_r0_13->unk8 = (s32) temp_r1_17->unk8;
            temp_r0_13->unkC = (s32) temp_r1_17->unkC;
        }
        sp98->unk4 = (void *) (sp98->unk4 + 0x1C);
        var_r6_3 += 4;
        var_sl_3 += 4;
    } else {
        temp_r5_5 = sp94->unk4;
        sp44 = 1;
        temp_r2_9 = sp94->unk0;
        temp_r4_5 = (s32) ((temp_r5_5 - temp_r2_9) * 0xB6DB6DB7) >> 2;
        sp40 = temp_r4_5;
        var_r0_7 = &sp40;
        var_r1_6 = temp_r2_9;
        if ((u32) temp_r4_5 < 1U) {
            var_r0_7 = &sp44;
        }
        temp_r4_6 = temp_r4_5 + *var_r0_7;
        if (temp_r4_6 != 0) {
            temp_r5_6 = temp_r4_6 * 0x1C;
            var_r0_8 = malloc(temp_r5_6);
            sp8C = temp_r4_6 * 8;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(temp_r5_6);
            }
            var_r1_6 = sp98->unk0;
        } else {
            var_r0_8 = 0;
            sp8C = 0;
        }
        sp9C = var_r0_8;
        var_r2_5 = var_r1_6;
        var_r3_5 = var_r0_8;
        var_r6_3 += 4;
        var_sl_3 += 4;
        if (var_r2_5 != temp_r5_5) {
            do {
                if (var_r3_5 != 0) {
                    temp_r1_18 = (GenObj *)((u8 *)var_r2_5 + 0xC);
                    var_r3_5->unk0 = (s32) var_r2_5->unk0;
                    var_r3_5->unk4 = (s32) var_r2_5->unk4;
                    var_r3_5->unk8 = (s32) var_r2_5->unk8;
                    temp_r0_14 = (GenObj *)((u8 *)var_r3_5 + 0xC);
                    var_r3_5->unkC = (s32) var_r2_5->unkC;
                    temp_r0_14->unk4 = (s32) temp_r1_18->unk4;
                    temp_r0_14->unk8 = (s32) temp_r1_18->unk8;
                    temp_r0_14->unkC = (s32) temp_r1_18->unkC;
                }
                var_r2_5 += 0x1C;
                var_r3_5 += 0x1C;
            } while (var_r2_5 != temp_r5_5);
        }
        if (sp44 == 1) {
            if (var_r3_5 != 0) {
                temp_r1_19 = (GenObj *)((u8 *)sp70 + 0xC);
                var_r3_5->unk0 = (s32) sp70->unk0;
                var_r3_5->unk4 = (s32) sp70->unk4;
                var_r3_5->unk8 = (s32) sp70->unk8;
                temp_r0_15 = (GenObj *)((u8 *)var_r3_5 + 0xC);
                var_r3_5->unkC = (s32) sp70->unkC;
                temp_r0_15->unk4 = (s32) temp_r1_19->unk4;
                temp_r0_15->unk8 = (s32) temp_r1_19->unk8;
                temp_r0_15->unkC = (s32) temp_r1_19->unkC;
            }
            var_r4_3 = (GenObj *)((u8 *)var_r3_5 + 0x1C);
        } else {
            var_r3_6 = sp44;
            var_r2_6 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        temp_r1_20 = (GenObj *)((u8 *)sp70 + 0xC);
                        var_r2_6->unk0 = (s32) sp70->unk0;
                        var_r2_6->unk4 = (s32) sp70->unk4;
                        var_r2_6->unk8 = (s32) sp70->unk8;
                        temp_r0_16 = (GenObj *)((u8 *)var_r2_6 + 0xC);
                        var_r2_6->unkC = (s32) sp70->unkC;
                        temp_r0_16->unk4 = (s32) temp_r1_20->unk4;
                        temp_r0_16->unk8 = (s32) temp_r1_20->unk8;
                        temp_r0_16->unkC = (s32) temp_r1_20->unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_6 += 0x1C;
                } while (var_r3_6 != 0);
            }
            var_r4_3 = var_r2_6;
        }
        temp_r2_10 = sp98->unk4;
        temp_r1_21 = sp98->unk0;
        var_r0_9 = temp_r1_21;
        if (temp_r1_21 != temp_r2_10) {
            do {
                var_r0_9 += 0x1C;
            } while (var_r0_9 != temp_r2_10);
        }
        if (temp_r1_21 != 0) {
            free(temp_r1_21);
        }
        sp98->unk0 = sp9C;
        sp98->unk4 = var_r4_3;
        sp98->unkC = (void *) (((sp8C - temp_r4_6) * 4) + sp9C);
    }
    if (var_r6_3 != sp58) {
        goto loop_79;
    }
}
