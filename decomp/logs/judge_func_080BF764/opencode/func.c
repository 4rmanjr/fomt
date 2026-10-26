#include "common.h"
s32 __builtin_delete();                               /* extern */
void *__builtin_new(s32);                           /* extern */
s32 free();                                           /* extern */
s32 func_0800770C(s32 *);                             /* extern */
s32 func_08007714(s32 *, s32);                        /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
s32 func_0800835C(s32 *);                             /* extern */
s32 func_08008364(s32 *, s32);                        /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088D4(void *);                          /* extern */
s32 func_080088DC(void *);                          /* extern */
void *func_08008910(void *);                        /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
s32 *func_08008940(void *);                         /* extern */
s32 *func_0800894C(void *);                         /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008C38(void *, s32, s32);                  /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_08008F0C(s32 *, void *, s32, u16);           /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32 *, void *, s32, s32);           /* extern */
s32 func_0804EA94(s32 *, s32, s32, s32);              /* extern */
s32 func_0804EC84(s32 *, s32 *, s32);                 /* extern */
s32 func_08050CC0(void *, s32, s32, s32);           /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
u8 func_08050D34(s32);                              /* extern */
u32 func_08050D3C(s32, s32, s32, s16 *);            /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D8C(s32, ? *);                          /* extern */
s32 func_08050DD8(s32);                               /* extern */
void *func_0805E824(void *, s32, s32, s32);         /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_080BDF40(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
s32 strlen(s32 *);                                  /* extern */
extern ? gUnk_08107F84;

void func_080BF764(void *arg0) {
    s32 *sp0;                                       /* compiler-managed */
    s32 *sp4;
    s32 *sp8;                                       /* compiler-managed */
    s32 spC;
    s32 sp10;
    s32 sp1C;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp3C;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 *sp70;
    s32 *sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp88;
    u32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
s32 spA0;
s32 spA4;
s32 spA8;
    u32 spAC;
    u32 spB0;
    s16 spB4;
s32 spBC;
    u32 spC0;
    u32 spC4;
    s32 spC8;
    s32 *spCC;
    void *spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    s32 spE0;
    s32 **spE4;
    s32 **spE8;
    s32 *spEC;                                      /* compiler-managed */
    s32 spF0;
    s32 spF4;
    s32 **spF8;
    s32 **spFC;
    s32 sp100;
    void *sp104;
    void *sp108;
    s16 *temp_r0_2;
    s16 *temp_r5_11;
    s16 *temp_r5_2;
    s16 temp_r2;
    s16 temp_r2_4;
    s16 temp_r2_9;
    s32 **temp_r4_23;
    s32 **var_r0_14;
    s32 *temp_r0_31;
    s32 *temp_r0_37;
    s32 *temp_r0_6;
    s32 *temp_r4;
    s32 *temp_r4_22;
    s32 *temp_r5_12;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 *var_r1_8;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_13;
    s32 temp_r0_17;
    s32 temp_r0_19;
    s32 temp_r0_26;
    s32 temp_r0_29;
    s32 temp_r0_33;
    s32 temp_r0_35;
    s32 temp_r0_39;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r2_12;
    s32 temp_r2_13;
    s32 temp_r2_15;
    s32 temp_r2_16;
    s32 temp_r2_6;
    s32 temp_r2_7;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r5_13;
    s32 temp_r5_15;
    s32 temp_r5_8;
    s32 temp_r6;
    s32 temp_r6_4;
    s32 temp_r6_6;
    s32 temp_r6_7;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 var_r0_15;
    s32 var_r0_9;
    s32 var_r1_5;
    s32 var_r3_11;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r3_9;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    u16 var_r3;
    u16 var_r3_12;
    u16 var_r3_15;
    u16 var_r3_4;
    u16 var_r3_7;
    u32 *var_r0_10;
    u32 *var_r0_12;
    u32 *var_r0_16;
    u32 *var_r0_18;
    u32 temp_r0_32;
    u32 var_r3_14;
    u32 var_r3_17;
    u32 var_r3_19;
    u32 var_r3_21;
    u8 temp_r7_4;
    void **temp_r1;
    void **temp_r1_4;
    void **temp_r1_7;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_18;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_23;
    void *temp_r0_24;
    void *temp_r0_25;
    void *temp_r0_27;
    void *temp_r0_28;
    void *temp_r0_30;
    void *temp_r0_34;
    void *temp_r0_36;
    void *temp_r0_38;
    void *temp_r0_40;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_14;
    void *temp_r2_17;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_5;
    void *temp_r2_8;
    void *temp_r4_14;
    void *temp_r4_15;
    void *temp_r4_16;
    void *temp_r4_19;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;
    void *temp_r5_10;
    void *temp_r5_14;
    void *temp_r5_16;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r5_9;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_5;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *var_r0_11;
    void *var_r0_13;
    void *var_r0_17;
    void *var_r0_19;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_10;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_9;
    void *var_r2;
    void *var_r2_10;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_14;
    void *var_r2_15;
    void *var_r2_16;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3_10;
    void *var_r3_13;
    void *var_r3_16;
    void *var_r3_18;
    void *var_r3_20;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r3_8;
    void *var_r4;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r6;
    void *var_r6_2;
    void *var_r6_3;

    temp_r0 = arg0->unk5FE - arg0->unk5FF;
    arg0->unk604 = temp_r0;
    if (temp_r0 < 0) {
        arg0->unk604 = 0;
    }
    sp28 = (s32) arg0->unk5FE;
    sp2C = (s32) arg0->unk5FF;
    sp30 = arg0->unk604;
    memcpy(&sp1C, &sp28, 0xC);
    memcpy(&sp10, &sp1C, 0xC);
    spCC = 0;
    temp_r0_2 = func_08008918(arg0);
    sp28.unk0 = 0x1740;
    *temp_r0_2 = 0x1740;
    temp_r0_3 = arg0->unk418;
    if ((spCC != temp_r0_3) && (temp_r0_3 != 0)) {
        func_08050D0C(temp_r0_3, 3);
    }
    arg0->unk418 = 0;
    temp_r5 = __builtin_new(4);
    func_0800835C(&sp28);
    func_0800770C(&sp2C);
    sp0 = 0;
    sp4 = &sp28;
    sp8 = &sp2C;
    temp_r0_4 = func_08050CC0(temp_r5, 0, 0x18, 0);
    temp_r0_5 = arg0->unk418;
    if ((temp_r0_4 != temp_r0_5) && (temp_r0_5 != 0)) {
        func_08050D0C(temp_r0_5, 3);
    }
    arg0->unk418 = temp_r0_4;
    func_08007714(&sp2C, 2);
    func_08008364(&sp28, 2);
    temp_sb = arg0->unk418;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5_2 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0_6 = func_0800894C(arg0);
    sp0 = temp_r4;
    sp4 = temp_r0_6;
    sp8 = arg0 + 0x57C;
    func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5_2);
    temp_r0_7 = func_0805E824(__builtin_new(0x14), arg0->unk424, 0, 0x100);
    if (temp_r0_7 != arg0->unk488) {
        __builtin_delete();
    }
    arg0->unk488 = temp_r0_7;
    func_0805E860(temp_r0_7, 0x1C9);
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
    if (temp_r0_8 != arg0->unk48C) {
        __builtin_delete();
    }
    arg0->unk48C = temp_r0_8;
    temp_r0_8->unk0 = 0x60;
    temp_r0_8->unk2 = 0x75;
    temp_r6_2 = arg0 + 0x5C0;
    temp_r0_8->unk6 = func_08007D4C(temp_r6_2, temp_r6_2->unk4);
    arg0->unk48C->unk4 = 4;
    arg0->unk48C->unk18 = 1;
    temp_r5_3 = arg0 + 0x490;
    temp_r0_9 = arg0->unk488;
    temp_r1 = temp_r0_9->unk0;
    (*temp_r1)->unk10(&sp34, temp_r1, *(temp_r0_9->unk4 + (temp_r0_9->unkC * 4)));
    memcpy(&sp34, &sp34, 0x20);
    temp_r4_2 = &sp34 + 0xC;
    arg0->unk490 = (s32) sp34.unk0;
    temp_r5_3->unk4 = (s32) sp34.unk4;
    temp_r5_3->unk8 = (s32) sp34.unk8;
    temp_r5_4 = temp_r5_3 + 0xC;
    temp_r5_3->unkC = (s32) sp34.unkC;
    temp_r5_4->unk4 = (s32) temp_r4_2->unk4;
    temp_r5_4->unk8 = (s32) temp_r4_2->unk8;
    temp_r5_4->unkC = (s32) temp_r4_2->unkC;
    (temp_r5_4 + 0xC)->unk4 = (s32) (temp_r4_2 + 0xC)->unk4;
    temp_r5_5 = func_08008910(arg0);
    temp_r7 = arg0->unk498;
    temp_r2 = func_08007D4C(temp_r6_2, temp_r6_2->unk4);
    var_r3 = 0;
    if (arg0->unk498 != 0) {
        var_r3 = (arg0 + 0x498)->unk4;
    }
    func_08008F0C(&sp28, temp_r7, (temp_r2 << 5) + 0x06010000, var_r3);
    temp_r1_2 = temp_r5_5->unk4;
    if (temp_r1_2 != temp_r5_5->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp28.unk0;
            temp_r1_2->unk4 = (s32) sp28.unk4;
            temp_r1_2->unk8 = (s32) sp28.unk8;
            temp_r1_2->unkC = (s32) sp28.unkC;
        }
        temp_r5_5->unk4 = (void *) (temp_r5_5->unk4 + 0x10);
        spF8 = &sp0 + 0x6C;
        spE8 = &sp0 + 0x30;
    } else {
        sp104 = temp_r1_2;
        sp58 = 1;
        temp_r4_3 = (s32) (temp_r1_2 - temp_r5_5->unk0) >> 4;
        sp54 = temp_r4_3;
        var_r0 = &sp54;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp58;
        }
        temp_r0_10 = temp_r4_3 + *var_r0;
        if (temp_r0_10 != 0) {
            temp_r4_4 = temp_r0_10 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_r8 = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        sp108 = var_r0_2;
        var_r2 = temp_r5_5->unk0;
        var_r3_2 = var_r0_2;
        spF8 = &sp0 + 0x6C;
        spE8 = &sp0 + 0x30;
        if (var_r2 != sp104) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != sp104);
        }
        if (sp58 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp28.unk0;
                var_r3_2->unk4 = (s32) sp28.unk4;
                var_r3_2->unk8 = (s32) sp28.unk8;
                var_r3_2->unkC = (s32) sp28.unkC;
            }
            var_r5 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = sp58;
            var_r2_2 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp28.unk0;
                        var_r2_2->unk4 = (s32) sp28.unk4;
                        var_r2_2->unk8 = (s32) sp28.unk8;
                        var_r2_2->unkC = (s32) sp28.unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2_2 = temp_r5_5->unk4;
        temp_r0_11 = temp_r5_5->unk0;
        var_r1 = temp_r0_11;
        if (temp_r0_11 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_11 != 0) {
            free();
        }
        temp_r5_5->unk0 = sp108;
        temp_r5_5->unk4 = var_r5;
        temp_r5_5->unkC = (void *) (sp108 + var_r8);
    }
    temp_r4_5 = func_08008910(arg0);
    temp_r0_12 = arg0->unk4A0;
    var_r3_4 = 0;
    if (temp_r0_12 != 0) {
        var_r3_4 = (arg0 + 0x4A0)->unk4;
    }
    func_08008F0C(&sp28, temp_r0_12, 0x05000280, var_r3_4);
    temp_r1_3 = temp_r4_5->unk4;
    if (temp_r1_3 != temp_r4_5->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp28.unk0;
            temp_r1_3->unk4 = (s32) sp28.unk4;
            temp_r1_3->unk8 = (s32) sp28.unk8;
            temp_r1_3->unkC = (s32) sp28.unkC;
        }
        temp_r4_5->unk4 = (void *) (temp_r4_5->unk4 + 0x10);
    } else {
        sp104 = temp_r1_3;
        sp60 = 1;
        temp_r4_6 = (s32) (temp_r1_3 - temp_r4_5->unk0) >> 4;
        sp5C = temp_r4_6;
        var_r0_3 = &sp5C;
        if ((u32) temp_r4_6 < 1U) {
            var_r0_3 = &sp60;
        }
        temp_r0_13 = temp_r4_6 + *var_r0_3;
        if (temp_r0_13 != 0) {
            temp_r4_7 = temp_r0_13 * 0x10;
            var_r0_4 = malloc(temp_r4_7);
            var_r8_2 = temp_r4_7;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_4 = 0;
            var_r8_2 = 0;
        }
        sp108 = var_r0_4;
        var_r2_3 = temp_r4_5->unk0;
        var_r3_5 = var_r0_4;
        if (var_r2_3 != sp104) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_3->unk0;
                    var_r3_5->unk4 = (s32) var_r2_3->unk4;
                    var_r3_5->unk8 = (s32) var_r2_3->unk8;
                    var_r3_5->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_3 != sp104);
        }
        if (sp60 == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp28.unk0;
                var_r3_5->unk4 = (s32) sp28.unk4;
                var_r3_5->unk8 = (s32) sp28.unk8;
                var_r3_5->unkC = (s32) sp28.unkC;
            }
            var_r5_2 = var_r3_5 + 0x10;
        } else {
            var_r3_6 = sp60;
            var_r2_4 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp28.unk0;
                        var_r2_4->unk4 = (s32) sp28.unk4;
                        var_r2_4->unk8 = (s32) sp28.unk8;
                        var_r2_4->unkC = (s32) sp28.unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_3 = temp_r4_5->unk4;
        temp_r0_14 = temp_r4_5->unk0;
        var_r1_2 = temp_r0_14;
        if (temp_r0_14 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_14 != 0) {
            free();
        }
        temp_r4_5->unk0 = sp108;
        temp_r4_5->unk4 = var_r5_2;
        temp_r4_5->unkC = (void *) (sp108 + var_r8_2);
    }
    arg0->unk52C->unk0 = 0x58;
    arg0->unk52C->unk2 = 0x7D;
    temp_r5_6 = arg0->unk52C;
    temp_r6_3 = arg0 + 0x5D8;
    temp_r5_6->unk6 = func_08007D4C(temp_r6_3, temp_r6_3->unk4);
    arg0->unk52C->unk18 = 1;
    temp_r4_8 = arg0 + 0x530;
    temp_r0_15 = arg0->unk528;
    temp_r1_4 = temp_r0_15->unk0;
    (*temp_r1_4)->unk10(&sp28, temp_r1_4, *(temp_r0_15->unk4 + (temp_r0_15->unkC * 4)));
    memcpy(&sp28, &sp28, 0x20);
    temp_r0_16 = &sp28 + 0xC;
    arg0->unk530 = (s32) sp28.unk0;
    temp_r4_8->unk4 = (s32) sp28.unk4;
    temp_r4_8->unk8 = (s32) sp28.unk8;
    temp_r4_9 = temp_r4_8 + 0xC;
    temp_r4_8->unkC = (s32) sp28.unkC;
    temp_r4_9->unk4 = (s32) temp_r0_16->unk4;
    temp_r4_9->unk8 = (s32) temp_r0_16->unk8;
    temp_r4_9->unkC = (s32) temp_r0_16->unkC;
    (temp_r4_9 + 0xC)->unk4 = (s32) (temp_r0_16 + 0xC)->unk4;
    temp_r5_7 = func_08008910(arg0);
    temp_r7_2 = arg0->unk538;
    temp_r2_4 = func_08007D4C(temp_r6_3, temp_r6_3->unk4);
    var_r3_7 = 0;
    if (arg0->unk538 != 0) {
        var_r3_7 = (arg0 + 0x538)->unk4;
    }
    func_08008F0C(&sp28, temp_r7_2, (temp_r2_4 << 5) + 0x06010000, var_r3_7);
    temp_r1_5 = temp_r5_7->unk4;
    if (temp_r1_5 != temp_r5_7->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) sp28.unk0;
            temp_r1_5->unk4 = (s32) sp28.unk4;
            temp_r1_5->unk8 = (s32) sp28.unk8;
            temp_r1_5->unkC = (s32) sp28.unkC;
        }
        temp_r5_7->unk4 = (void *) (temp_r5_7->unk4 + 0x10);
    } else {
        sp104 = temp_r1_5;
        sp68 = 1;
        temp_r4_10 = (s32) (temp_r1_5 - temp_r5_7->unk0) >> 4;
        sp64 = temp_r4_10;
        var_r0_5 = &sp64;
        if ((u32) temp_r4_10 < 1U) {
            var_r0_5 = &sp68;
        }
        temp_r0_17 = temp_r4_10 + *var_r0_5;
        if (temp_r0_17 != 0) {
            temp_r4_11 = temp_r0_17 * 0x10;
            var_r0_6 = malloc(temp_r4_11);
            var_r8_3 = temp_r4_11;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_6 = 0;
            var_r8_3 = 0;
        }
        sp108 = var_r0_6;
        var_r2_5 = temp_r5_7->unk0;
        var_r3_8 = var_r0_6;
loop_88:
        if (var_r2_5 != sp104) {
            if (var_r3_8 != 0) {
                var_r3_8->unk0 = (s32) var_r2_5->unk0;
                var_r3_8->unk4 = (s32) var_r2_5->unk4;
                var_r3_8->unk8 = (s32) var_r2_5->unk8;
                var_r3_8->unkC = (s32) var_r2_5->unkC;
            }
            var_r2_5 += 0x10;
            var_r3_8 += 0x10;
            goto loop_88;
        }
        if (sp68 == 1) {
            if (var_r3_8 != 0) {
                var_r3_8->unk0 = (s32) sp28.unk0;
                var_r3_8->unk4 = (s32) sp28.unk4;
                var_r3_8->unk8 = (s32) sp28.unk8;
                var_r3_8->unkC = (s32) sp28.unkC;
            }
            var_r5_3 = var_r3_8 + 0x10;
        } else {
            var_r3_9 = sp68;
            var_r2_6 = var_r3_8;
            if (var_r3_9 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) sp28.unk0;
                        var_r2_6->unk4 = (s32) sp28.unk4;
                        var_r2_6->unk8 = (s32) sp28.unk8;
                        var_r2_6->unkC = (s32) sp28.unkC;
                    }
                    var_r3_9 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_9 != 0);
            }
            var_r5_3 = var_r2_6;
        }
        temp_r2_5 = temp_r5_7->unk4;
        temp_r0_18 = temp_r5_7->unk0;
        var_r1_3 = temp_r0_18;
        if (temp_r0_18 != temp_r2_5) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_5);
        }
        if (temp_r0_18 != 0) {
            free();
        }
        temp_r5_7->unk0 = sp108;
        temp_r5_7->unk4 = var_r5_3;
        temp_r5_7->unkC = (void *) (sp108 + var_r8_3);
    }
    spC8 = 0;
    spD0 = arg0 + 0x5C8;
loop_104:
    temp_r5_8 = spC8 * 8;
    func_08008EB8(0, temp_r5_8 + 0x448 + arg0, 8);
    func_0804EC84(0, &sp28, 0);
    temp_r6_4 = spC8 * 0x104;
    sp6C = 4;
    spF8->unk2 = 2;
    func_0804E7A0(sp6C, temp_r6_4 + arg0 + 0x110, 0);
    spF4 = temp_r5_8;
    if (spC8 != 1) {
        temp_r2_6 = 0x20 - (strlen(&sp28) * 8);
        sp70.unk0 = 4;
        sp70.unk2 = 2;
        sp0 = &sp28;
        sp4 = 0;
        sp8 = (s32 *)5;
        func_0804E958(sp70, temp_r6_4 + arg0 + 0x110, temp_r2_6, 0);
    } else {
        temp_r2_7 = 0x20 - (strlen(&sp28) * 8);
        sp74.unk0 = 4;
        sp74.unk2 = 2;
        sp0 = &sp28;
        sp4 = 0;
        sp8 = (s32 *)7;
        func_0804E958(sp74, arg0 + 0x214, temp_r2_7, 0);
    }
    temp_r5_9 = func_08008910(arg0);
    func_08008F0C(&sp30, (spC8 * 0x104) + arg0 + 0x110, ((spF4 + func_08007D4C(spD0, spD0->unk4)) << 5) + 0x06010000, 0x100U);
    temp_r1_6 = temp_r5_9->unk4;
    if (temp_r1_6 != temp_r5_9->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32 *) spE8->unk0;
            temp_r1_6->unk4 = (s32) spE8->unk4;
            temp_r1_6->unk8 = (s32) spE8->unk8;
            temp_r1_6->unkC = (s32) spE8->unkC;
        }
        temp_r5_9->unk4 = (void *) (temp_r5_9->unk4 + 0x10);
        spF0 = spC8 + 1;
    } else {
        sp104 = temp_r1_6;
        sp7C = 1;
        temp_r4_12 = (s32) (temp_r1_6 - temp_r5_9->unk0) >> 4;
        sp78 = temp_r4_12;
        var_r0_7 = &sp78;
        if ((u32) temp_r4_12 < 1U) {
            var_r0_7 = &sp7C;
        }
        temp_r0_19 = temp_r4_12 + *var_r0_7;
        if (temp_r0_19 != 0) {
            temp_r4_13 = temp_r0_19 * 0x10;
            var_r0_8 = malloc(temp_r4_13);
            var_r8_4 = temp_r4_13;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_8 = 0;
            var_r8_4 = 0;
        }
        sp108 = var_r0_8;
        var_r2_7 = temp_r5_9->unk0;
        var_r3_10 = var_r0_8;
        spF0 = spC8 + 1;
loop_121:
        if (var_r2_7 != sp104) {
            if (var_r3_10 != 0) {
                var_r3_10->unk0 = (s32 *) var_r2_7->unk0;
                var_r3_10->unk4 = (s32) var_r2_7->unk4;
                var_r3_10->unk8 = (s32) var_r2_7->unk8;
                var_r3_10->unkC = (s32) var_r2_7->unkC;
            }
            var_r2_7 += 0x10;
            var_r3_10 += 0x10;
            goto loop_121;
        }
        if (sp7C == 1) {
            if (var_r3_10 != 0) {
                var_r3_10->unk0 = (s32 *) spE8->unk0;
                var_r3_10->unk4 = (s32) spE8->unk4;
                var_r3_10->unk8 = (s32) spE8->unk8;
                var_r3_10->unkC = (s32) spE8->unkC;
            }
            var_r6 = var_r3_10 + 0x10;
        } else {
            var_r3_11 = sp7C;
            var_r2_8 = var_r3_10;
            if (var_r3_11 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32 *) spE8->unk0;
                        var_r2_8->unk4 = (s32) spE8->unk4;
                        var_r2_8->unk8 = (s32) spE8->unk8;
                        var_r2_8->unkC = (s32) spE8->unkC;
                    }
                    var_r3_11 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r3_11 != 0);
            }
            var_r6 = var_r2_8;
        }
        temp_r2_8 = temp_r5_9->unk4;
        temp_r0_20 = temp_r5_9->unk0;
        var_r1_4 = temp_r0_20;
        if (temp_r0_20 != temp_r2_8) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_8);
        }
        if (temp_r0_20 != 0) {
            free();
        }
        temp_r5_9->unk0 = sp108;
        temp_r5_9->unk4 = var_r6;
        temp_r5_9->unkC = (void *) (sp108 + var_r8_4);
    }
    if (spC8 != 2) {
        var_r4 = spF4 + arg0 + 0x448;
        temp_r3 = func_08007D4C(spD0, spD0->unk4) + spF4;
        sp0 = (s32 *)2;
        sp4 = 0;
        sp8 = (s32 *)2;
        spC = 1;
        func_0804EA94(&sp80, 0x68, (spC8 * 0x10) + 0x6D, temp_r3);
        var_r0_9 = sp80;
        var_r1_5 = sp84;
    } else {
        var_r4 = arg0 + 0x458;
        temp_r3_2 = func_08007D4C(spD0, spD0->unk4) + 0x10;
        sp0 = spC8;
        sp4 = 0;
        sp8 = spC8;
        spC = 1;
        func_0804EA94(&sp88, 0xB8, 0x8D, temp_r3_2);
        var_r0_9 = sp88;
        var_r1_5 = sp8C;
    }
    var_r4->unk0 = var_r0_9;
    var_r4->unk4 = var_r1_5;
    spC8 = spF0;
    if (spF0 <= 2) {
        goto loop_104;
    }
    if ((s32) arg0->unk604 < (s32) arg0->unk600) {
        temp_r0_21 = func_0805E824(__builtin_new(0x14), arg0->unk438, 0, 0x100);
        if (temp_r0_21 != arg0->unk550) {
            __builtin_delete();
        }
        arg0->unk550 = temp_r0_21;
    } else {
        temp_r0_22 = func_0805E824(__builtin_new(0x14), arg0->unk434, 0, 0x100);
        if (temp_r0_22 != arg0->unk550) {
            __builtin_delete();
        }
        arg0->unk550 = temp_r0_22;
        arg0->unk610 = 1U;
    }
    temp_r0_23 = __builtin_new(0x1C);
    temp_r0_23->unk0 = 0;
    temp_r0_23->unk2 = 0;
    temp_r0_23->unk4 = 0;
    temp_r0_23->unk6 = 0;
    temp_r0_23->unk8 = 0;
    temp_r0_23->unkC = 0;
    temp_r0_23->unk10 = 0;
    temp_r0_23->unk11 = 0;
    temp_r0_23->unk14 = 0;
    temp_r0_23->unk18 = 0;
    if (temp_r0_23 != arg0->unk554) {
        __builtin_delete();
    }
    arg0->unk554 = temp_r0_23;
    func_0805E860(arg0->unk550, 0);
    arg0->unk554->unk0 = 0x40;
    arg0->unk554->unk2 = 0x40;
    temp_r4_14 = arg0->unk554;
    temp_r5_10 = arg0 + 0x5E0;
    temp_r4_14->unk6 = func_08007D4C(temp_r5_10, temp_r5_10->unk4);
    arg0->unk554->unk4 = 7;
    arg0->unk554->unk18 = 1;
    temp_r4_15 = arg0 + 0x558;
    temp_r0_24 = arg0->unk550;
    temp_r1_7 = temp_r0_24->unk0;
    (*temp_r1_7)->unk10(&sp30, temp_r1_7, *(temp_r0_24->unk4 + (temp_r0_24->unkC * 4)));
    memcpy((s32 *) spE8, (s32 *) spE8, 0x20);
    temp_r0_25 = spE8 + 0xC;
    arg0->unk558 = (s32 *) spE8->unk0;
    temp_r4_15->unk4 = (s32) spE8->unk4;
    temp_r4_15->unk8 = (s32) spE8->unk8;
    temp_r4_16 = temp_r4_15 + 0xC;
    temp_r4_15->unkC = (s32) spE8->unkC;
    temp_r4_16->unk4 = (s32) temp_r0_25->unk4;
    temp_r4_16->unk8 = (s32) temp_r0_25->unk8;
    temp_r4_16->unkC = (s32) temp_r0_25->unkC;
    (temp_r4_16 + 0xC)->unk4 = (s32) (temp_r0_25 + 0xC)->unk4;
    temp_r6_5 = func_08008910(arg0);
    temp_r7_3 = arg0->unk560;
    temp_r2_9 = func_08007D4C(temp_r5_10, temp_r5_10->unk4);
    var_r3_12 = 0;
    if (arg0->unk560 != 0) {
        var_r3_12 = (arg0 + 0x560)->unk4;
    }
    func_08008F0C((s32 *) spE8, temp_r7_3, (temp_r2_9 << 5) + 0x06010000, var_r3_12);
    temp_r1_8 = temp_r6_5->unk4;
    if (temp_r1_8 != temp_r6_5->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32 *) spE8->unk0;
            temp_r1_8->unk4 = (s32) spE8->unk4;
            temp_r1_8->unk8 = (s32) spE8->unk8;
            temp_r1_8->unkC = (s32) spE8->unkC;
        }
        temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
    } else {
        sp104 = temp_r1_8;
        sp94 = 1;
        temp_r4_17 = (s32) (sp104 - temp_r6_5->unk0) >> 4;
        var_r0_10 = &sp90;
        *var_r0_10 = (u32) temp_r4_17;
        if ((u32) temp_r4_17 < (u32) sp94) {
            var_r0_10 = &sp94;
        }
        temp_r0_26 = temp_r4_17 + *var_r0_10;
        if (temp_r0_26 != 0) {
            temp_r4_18 = temp_r0_26 * 0x10;
            var_r0_11 = malloc(temp_r4_18);
            var_r8_5 = temp_r4_18;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_11 = 0;
            var_r8_5 = 0;
        }
        sp108 = var_r0_11;
        var_r2_9 = temp_r6_5->unk0;
        var_r3_13 = var_r0_11;
loop_166:
        if (var_r2_9 != sp104) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32 *) var_r2_9->unk0;
                var_r3_13->unk4 = (s32) var_r2_9->unk4;
                var_r3_13->unk8 = (s32) var_r2_9->unk8;
                var_r3_13->unkC = (s32) var_r2_9->unkC;
            }
            var_r2_9 += 0x10;
            var_r3_13 += 0x10;
            goto loop_166;
        }
        if (sp94 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32 *) spE8->unk0;
                var_r3_13->unk4 = (s32) spE8->unk4;
                var_r3_13->unk8 = (s32) spE8->unk8;
                var_r3_13->unkC = (s32) spE8->unkC;
            }
            var_r5_4 = var_r3_13 + 0x10;
        } else {
            var_r3_14 = sp94;
            var_r2_10 = var_r3_13;
            if (var_r3_14 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32 *) spE8->unk0;
                        var_r2_10->unk4 = (s32) spE8->unk4;
                        var_r2_10->unk8 = (s32) spE8->unk8;
                        var_r2_10->unkC = (s32) spE8->unkC;
                    }
                    var_r3_14 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r3_14 != 0);
            }
            var_r5_4 = var_r2_10;
        }
        temp_r2_10 = temp_r6_5->unk4;
        temp_r0_27 = temp_r6_5->unk0;
        var_r1_6 = temp_r0_27;
        if (temp_r0_27 != temp_r2_10) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_10);
        }
        if (temp_r0_27 != 0) {
            free();
        }
        temp_r6_5->unk0 = sp108;
        temp_r6_5->unk4 = var_r5_4;
        temp_r6_5->unkC = (void *) (sp108 + var_r8_5);
    }
    temp_r4_19 = func_08008910(arg0);
    temp_r0_28 = arg0->unk568;
    var_r3_15 = 0;
    if (temp_r0_28 != 0) {
        var_r3_15 = (arg0 + 0x568)->unk4;
    }
    func_08008F0C(&sp30, temp_r0_28, 0x050002E0, var_r3_15);
    temp_r1_9 = temp_r4_19->unk4;
    if (temp_r1_9 != temp_r4_19->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32 *) spE8->unk0;
            temp_r1_9->unk4 = (s32) spE8->unk4;
            temp_r1_9->unk8 = (s32) spE8->unk8;
            temp_r1_9->unkC = (s32) spE8->unkC;
        }
        temp_r4_19->unk4 = (void *) (temp_r4_19->unk4 + 0x10);
    } else {
        sp104 = temp_r1_9;
        sp9C = 1;
        temp_r4_20 = (s32) (sp104 - temp_r4_19->unk0) >> 4;
        var_r0_12 = &sp98;
        *var_r0_12 = (u32) temp_r4_20;
        if ((u32) temp_r4_20 < (u32) sp9C) {
            var_r0_12 = &sp9C;
        }
        temp_r0_29 = temp_r4_20 + *var_r0_12;
        if (temp_r0_29 != 0) {
            temp_r4_21 = temp_r0_29 * 0x10;
            var_r0_13 = malloc(temp_r4_21);
            var_r8_6 = temp_r4_21;
            if (var_r0_13 == 0) {
                var_r0_13 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_13 = 0;
            var_r8_6 = 0;
        }
        sp108 = var_r0_13;
        var_r2_11 = temp_r4_19->unk0;
        var_r3_16 = var_r0_13;
        if (var_r2_11 != sp104) {
            do {
                if (var_r3_16 != 0) {
                    var_r3_16->unk0 = (s32) var_r2_11->unk0;
                    var_r3_16->unk4 = (s32) var_r2_11->unk4;
                    var_r3_16->unk8 = (s32) var_r2_11->unk8;
                    var_r3_16->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_16 += 0x10;
            } while (var_r2_11 != sp104);
        }
        if (sp9C == 1) {
            if (var_r3_16 != 0) {
                var_r3_16->unk0 = (s32 *) spE8->unk0;
                var_r3_16->unk4 = (s32) spE8->unk4;
                var_r3_16->unk8 = (s32) spE8->unk8;
                var_r3_16->unkC = (s32) spE8->unkC;
            }
            var_r5_5 = var_r3_16 + 0x10;
        } else {
            var_r3_17 = sp9C;
            var_r2_12 = var_r3_16;
            if (var_r3_17 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32 *) spE8->unk0;
                        var_r2_12->unk4 = (s32) spE8->unk4;
                        var_r2_12->unk8 = (s32) spE8->unk8;
                        var_r2_12->unkC = (s32) spE8->unkC;
                    }
                    var_r3_17 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_17 != 0);
            }
            var_r5_5 = var_r2_12;
        }
        temp_r2_11 = temp_r4_19->unk4;
        temp_r0_30 = temp_r4_19->unk0;
        var_r1_7 = temp_r0_30;
        if (temp_r0_30 != temp_r2_11) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_11);
        }
        if (temp_r0_30 != 0) {
            free();
        }
        temp_r4_19->unk0 = sp108;
        temp_r4_19->unk4 = var_r5_5;
        temp_r4_19->unkC = (void *) (sp108 + var_r8_6);
    }
    func_08008C38(arg0 + 0x578, 0xCD, 0xFFFF);
    func_080BDF40(arg0);
    spD4 = 0;
    spD8 = 0;
    var_r0_14 = spE8 + 8;
    do {
        *var_r0_14 = 0;
        var_r0_14 -= 4;
    } while ((s32) var_r0_14 >= (s32) spE8);
    spDC = 0;
loop_320:
    if (arg0->unk5A0 == 4) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        var_r1_8 = arg0 + 0x5A8;
        if (arg0->unk5A8 == 0) {
            temp_r3_3 = spD4 + 1;
            spD4 = temp_r3_3;
            if (temp_r3_3 != 0x78) {

            } else {
                spD4 = 0;
                var_r0_15 = 1;
                goto block_318;
            }
        } else {
            spE0 = func_080088D4(arg0);
            temp_r7_4 = func_08050D34(arg0->unk418);
            temp_sb_2 = arg0->unk418;
            temp_r8_2 = func_080088DC(arg0);
            temp_r6_6 = func_08008920(arg0);
            temp_r5_11 = func_08008918(arg0);
            temp_r4_22 = func_08008940(arg0);
            temp_r0_31 = func_0800894C(arg0);
            sp0 = temp_r4_22;
            sp4 = temp_r0_31;
            sp8 = arg0 + 0x57C;
            temp_r0_32 = func_08050D3C(temp_sb_2, temp_r8_2, temp_r6_6, temp_r5_11);
            switch (temp_r0_32) {                   /* switch 1 */
            case 1:                                 /* switch 1 */
            case 2:                                 /* switch 1 */
            case 4:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
            case 6:                                 /* switch 1 */
                break;
            case 0:                                 /* switch 1 */
                func_08050D5C(arg0->unk418);
                break;
            case 3:                                 /* switch 1 */
                if (temp_r7_4 == 1) {
                    func_08050D8C(arg0->unk418, &gUnk_08107F84);
                    func_08050DD8(arg0->unk418);
                    arg0->unk60B = temp_r7_4;
                }
                break;
            }
            temp_r0_33 = arg0->unk5A8;
            switch (temp_r0_33) {                   /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                temp_r3_4 = spD8 + 1;
                spD8 = temp_r3_4;
                if (temp_r3_4 == 0x3C) {
                    arg0->unk60C = 1;
                    if (arg0->unk610 == 0) {
                        func_08008B6C(arg0 + 0x580, 0xB7);
                    } else {
                        func_08008B6C(arg0 + 0x580, 0xB6);
                    }
                }
                if (spD8 == 0xF0) {
                    spD8 = 0;
                    var_r1_8 = arg0 + 0x5A8;
                    var_r0_15 = 3;
block_318:
                    *var_r1_8 = var_r0_15;
                }
                break;
            case 3:                                 /* switch 2 */
                temp_r6_7 = spD8 + 1;
                spD8 = temp_r6_7;
                if ((9 & spE0) || (temp_r6_7 == 0x258)) {
                    var_r1_8 = arg0 + 0x5A0;
                    var_r0_15 = 5;
                    goto block_318;
                }
                break;
            case 1:                                 /* switch 2 */
                if (arg0->unk60B == 0) {

                } else {
                    temp_r5_12 = spCC + 1;
                    spCC = temp_r5_12;
                    sp100 = spDC * 4;
                    if (temp_r5_12 != (s32 *)0x14) {

                    } else {
                        spCC = 0;
                        temp_r4_23 = &spE8[spDC];
                        *temp_r4_23 += 1;
                        func_08008B6C(arg0 + 0x580, 0x6A);
                        func_0804EC84(*temp_r4_23, &sp28, 0);
                        temp_r5_13 = spDC * 0x104;
                        spA0.unk0 = 4;
                        spA0.unk2 = 2;
                        func_0804E7A0((s32) spA0.unk0, temp_r5_13 + arg0 + 0x110, 0);
                        if (spDC != 1) {
                            temp_r2_12 = 0x20 - (strlen(&sp28) * 8);
                            spA4.unk0 = 4;
                            spA4.unk2 = 2;
                            sp0 = &sp28;
                            sp4 = spCC;
                            sp8 = (s32 *)5;
                            func_0804E958((s32 *) spA4.unk0, temp_r5_13 + arg0 + 0x110, temp_r2_12, 0);
                        } else {
                            temp_r2_13 = 0x20 - (strlen(&sp28) * 8);
                            spA8.unk0 = 4;
                            spA8.unk2 = 2;
                            sp0 = &sp28;
                            sp4 = spCC;
                            sp8 = (s32 *)7;
                            func_0804E958((s32 *) spA8.unk0, arg0 + 0x214, temp_r2_13, 0);
                        }
                        temp_r5_14 = func_08008910(arg0);
                        temp_r0_34 = arg0 + 0x5C8;
                        func_08008F0C(&sp3C, (spDC * 0x104) + arg0 + 0x110, (((spDC * 8) + func_08007D4C(temp_r0_34, temp_r0_34->unk4)) << 5) + 0x06010000, 0x100U);
                        temp_r1_10 = temp_r5_14->unk4;
                        spEC = &sp3C;
                        if (temp_r1_10 != temp_r5_14->unkC) {
                            if (temp_r1_10 != 0) {
                                temp_r1_10->unk0 = (s32) sp3C.unk0;
                                temp_r1_10->unk4 = (s32) sp3C.unk4;
                                temp_r1_10->unk8 = (s32) sp3C.unk8;
                                temp_r1_10->unkC = (s32) sp3C.unkC;
                            }
                            temp_r5_14->unk4 = (void *) (temp_r5_14->unk4 + 0x10);
                        } else {
                            sp104 = temp_r1_10;
                            spB0 = 1;
                            temp_r4_24 = (s32) (sp104 - temp_r5_14->unk0) >> 4;
                            var_r0_16 = &spAC;
                            *var_r0_16 = (u32) temp_r4_24;
                            if ((u32) temp_r4_24 < (u32) spB0) {
                                var_r0_16 = &spB0;
                            }
                            temp_r0_35 = temp_r4_24 + *var_r0_16;
                            if (temp_r0_35 != 0) {
                                temp_r4_25 = temp_r0_35 * 0x10;
                                var_r0_17 = malloc(temp_r4_25);
                                var_r8_7 = temp_r4_25;
                                if (var_r0_17 == 0) {
                                    var_r0_17 = func_080D3BC0(var_r8_7);
                                }
                            } else {
                                var_r0_17 = 0;
                                var_r8_7 = 0;
                            }
                            sp108 = var_r0_17;
                            var_r2_13 = temp_r5_14->unk0;
                            var_r3_18 = var_r0_17;
                            if (var_r2_13 != sp104) {
                                do {
                                    if (var_r3_18 != 0) {
                                        var_r3_18->unk0 = (s32) var_r2_13->unk0;
                                        var_r3_18->unk4 = (s32) var_r2_13->unk4;
                                        var_r3_18->unk8 = (s32) var_r2_13->unk8;
                                        var_r3_18->unkC = (s32) var_r2_13->unkC;
                                    }
                                    var_r2_13 += 0x10;
                                    var_r3_18 += 0x10;
                                } while (var_r2_13 != sp104);
                            }
                            if (spB0 == 1) {
                                if (var_r3_18 != 0) {
                                    var_r3_18->unk0 = (s32) sp3C.unk0;
                                    var_r3_18->unk4 = (s32) sp3C.unk4;
                                    var_r3_18->unk8 = (s32) sp3C.unk8;
                                    var_r3_18->unkC = (s32) sp3C.unkC;
                                }
                                var_r6_2 = var_r3_18 + 0x10;
                            } else {
                                var_r3_19 = spB0;
                                var_r2_14 = var_r3_18;
                                if (var_r3_19 != 0) {
                                    do {
                                        if (var_r2_14 != 0) {
                                            var_r2_14->unk0 = (s32) sp3C.unk0;
                                            var_r2_14->unk4 = (s32) sp3C.unk4;
                                            var_r2_14->unk8 = (s32) sp3C.unk8;
                                            var_r2_14->unkC = (s32) sp3C.unkC;
                                        }
                                        var_r3_19 -= 1;
                                        var_r2_14 += 0x10;
                                    } while (var_r3_19 != 0);
                                }
                                var_r6_2 = var_r2_14;
                            }
                            temp_r2_14 = temp_r5_14->unk4;
                            temp_r0_36 = temp_r5_14->unk0;
                            var_r1_9 = temp_r0_36;
                            if (temp_r0_36 != temp_r2_14) {
                                do {
                                    var_r1_9 += 0x10;
                                } while (var_r1_9 != temp_r2_14);
                            }
                            if (temp_r0_36 != 0) {
                                free();
                            }
                            temp_r5_14->unk0 = sp108;
                            temp_r5_14->unk4 = var_r6_2;
                            temp_r5_14->unkC = (void *) (sp108 + var_r8_7);
                        }
                    }
                    if (*(spE8 + sp100) == (sp100 + sp)->unk10) {
                        spDC += 1;
                    }
                    if (!(9 & spE0)) {

                    } else {
                        spC8 = 0;
                        spEC = &sp0 + 0x3C;
                        spFC = &sp0 + 0xB4;
                        spE4 = &sp0 + 0xB8;
loop_271:
                        temp_r0_37 = ((spC8 * 4) + sp)->unk10;
                        spE8[spC8] = temp_r0_37;
                        func_0804EC84(temp_r0_37, &sp28, 0);
                        temp_r5_15 = spC8 * 0x104;
                        spB4 = 4;
                        spFC->unk2 = 2;
                        func_0804E7A0((s32) spB4, temp_r5_15 + arg0 + 0x110, 0);
                        if (spC8 != 1) {
                            temp_r2_15 = 0x20 - (strlen(&sp28) * 8);
                            spE4->unk0 = 4;
                            spE4->unk2 = 2;
                            sp0 = &sp28;
                            sp4 = 0;
                            sp8 = (s32 *)5;
                            func_0804E958(spE4->unk0, temp_r5_15 + arg0 + 0x110, temp_r2_15, 0);
                        } else {
                            temp_r2_16 = 0x20 - (strlen(&sp28) * 8);
                            spBC.unk0 = 4;
                            spBC.unk2 = 2;
                            sp0 = &sp28;
                            sp4 = 0;
                            sp8 = (s32 *)7;
                            func_0804E958((s32 *) spBC.unk0, arg0 + 0x214, temp_r2_16, 0);
                        }
                        temp_r5_16 = func_08008910(arg0);
                        temp_r0_38 = arg0 + 0x5C8;
                        func_08008F0C(&sp3C, (spC8 * 0x104) + arg0 + 0x110, (((spC8 * 8) + func_08007D4C(temp_r0_38, temp_r0_38->unk4)) << 5) + 0x06010000, 0x100U);
                        temp_r1_11 = temp_r5_16->unk4;
                        if (temp_r1_11 != temp_r5_16->unkC) {
                            if (temp_r1_11 != 0) {
                                temp_r1_11->unk0 = (s32 *) spEC->unk0;
                                temp_r1_11->unk4 = (s32) spEC->unk4;
                                temp_r1_11->unk8 = (s32) spEC->unk8;
                                temp_r1_11->unkC = (s32) spEC->unkC;
                            }
                            temp_r5_16->unk4 = (void *) (temp_r5_16->unk4 + 0x10);
                            spF0 = spC8 + 1;
                        } else {
                            sp104 = temp_r1_11;
                            spC4 = 1;
                            temp_r4_26 = (s32) (sp104 - temp_r5_16->unk0) >> 4;
                            var_r0_18 = &spC0;
                            *var_r0_18 = (u32) temp_r4_26;
                            if ((u32) temp_r4_26 < (u32) spC4) {
                                var_r0_18 = &spC4;
                            }
                            temp_r0_39 = temp_r4_26 + *var_r0_18;
                            if (temp_r0_39 != 0) {
                                temp_r4_27 = temp_r0_39 * 0x10;
                                var_r0_19 = malloc(temp_r4_27);
                                var_r8_8 = temp_r4_27;
                                if (var_r0_19 == 0) {
                                    var_r0_19 = func_080D3BC0(var_r8_8);
                                }
                            } else {
                                var_r0_19 = 0;
                                var_r8_8 = 0;
                            }
                            sp108 = var_r0_19;
                            var_r2_15 = temp_r5_16->unk0;
                            var_r3_20 = var_r0_19;
                            spF0 = spC8 + 1;
loop_288:
                            if (var_r2_15 != sp104) {
                                if (var_r3_20 != 0) {
                                    var_r3_20->unk0 = (s32 *) var_r2_15->unk0;
                                    var_r3_20->unk4 = (s32) var_r2_15->unk4;
                                    var_r3_20->unk8 = (s32) var_r2_15->unk8;
                                    var_r3_20->unkC = (s32) var_r2_15->unkC;
                                }
                                var_r2_15 += 0x10;
                                var_r3_20 += 0x10;
                                goto loop_288;
                            }
                            if (spC4 == 1) {
                                if (var_r3_20 != 0) {
                                    var_r3_20->unk0 = (s32 *) spEC->unk0;
                                    var_r3_20->unk4 = (s32) spEC->unk4;
                                    var_r3_20->unk8 = (s32) spEC->unk8;
                                    var_r3_20->unkC = (s32) spEC->unkC;
                                }
                                var_r6_3 = var_r3_20 + 0x10;
                            } else {
                                var_r3_21 = spC4;
                                var_r2_16 = var_r3_20;
                                if (var_r3_21 != 0) {
                                    do {
                                        if (var_r2_16 != 0) {
                                            var_r2_16->unk0 = (s32 *) spEC->unk0;
                                            var_r2_16->unk4 = (s32) spEC->unk4;
                                            var_r2_16->unk8 = (s32) spEC->unk8;
                                            var_r2_16->unkC = (s32) spEC->unkC;
                                        }
                                        var_r3_21 -= 1;
                                        var_r2_16 += 0x10;
                                    } while (var_r3_21 != 0);
                                }
                                var_r6_3 = var_r2_16;
                            }
                            temp_r2_17 = temp_r5_16->unk4;
                            temp_r0_40 = temp_r5_16->unk0;
                            var_r1_10 = temp_r0_40;
                            if (temp_r0_40 != temp_r2_17) {
                                do {
                                    var_r1_10 += 0x10;
                                } while (var_r1_10 != temp_r2_17);
                            }
                            if (temp_r0_40 != 0) {
                                free();
                            }
                            temp_r5_16->unk0 = sp108;
                            temp_r5_16->unk4 = var_r6_3;
                            temp_r5_16->unkC = (void *) (sp108 + var_r8_8);
                        }
                        spC8 = spF0;
                        if (spF0 <= 2) {
                            goto loop_271;
                        }
                    }
                    if ((sp30 == sp10) && (spE8->unk4 == sp14) && (spE8->unk8 == sp18)) {
                        var_r1_8 = arg0 + 0x5A8;
                        var_r0_15 = 2;
                        goto block_318;
                    }
                }
                break;
            }
        }
        func_080BDF40(arg0);
        goto loop_320;
    }
}

