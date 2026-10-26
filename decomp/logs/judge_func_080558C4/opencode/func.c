#include "common.h"
/* Warning: missing "bx $lr" in last block of func_080558C4 (0). */
s32 free();                                           /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *, s32);                   /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */
s32 func_0805E99C(s32, s32, u16, s32 *);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 sub_08056442();                                   /* extern */

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
    u8 _pad1C[8];
    s32 unk24;
    u8 _pad28[4];
    s32 unk2C;
    u8 _pad30[4];
    s32 unk34;
    u8 _pad38[8740];
    s32 unk225C;
    s32 unk2260;
    u8 _pad2264[189];
    s32 unk2321;
} GenObj;
void func_080558C4(GenObj *arg0) {
GenObj sp0;
s32 sp4;
    s32 sp10;
    s32 sp18;
    GenObj *sp20;
    GenObj *sp28;
    GenObj *sp30;
    GenObj *sp38;
GenObj sp40;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    u32 sp88;
    u32 sp8C;
    u32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
    s32 *spE8;
    s32 *spEC;
    s32 *spF0;
    s32 *spF4;
    void *sp110;
    void *sp114;
    void *sp118;
    GenObj *sp120;
    void *sp124;
    s16 temp_r2;
    s16 temp_r2_11;
    s16 temp_r2_13;
    s16 temp_r2_15;
    s16 temp_r2_3;
    s16 temp_r2_5;
    s16 temp_r2_7;
    s16 temp_r2_9;
    s32 *var_r0;
    s32 *var_r0_13;
    s32 *var_r0_15;
    s32 *var_r0_3;
    s32 *var_r1_5;
    s32 *var_r2_6;
    s32 temp_r0_12;
    s32 temp_r0_15;
    s32 temp_r0_19;
    s32 temp_r0_22;
    s32 temp_r0_26;
    s32 temp_r0_29;
    s32 temp_r0_3;
    s32 temp_r0_6;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4_10;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_9;
    s32 var_r0_8;
    s32 var_r3_21;
    s32 var_r3_24;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r3_9;
    s32 var_sl;
    s32 var_sl_2;
    s32 var_sl_3;
    s32 var_sl_4;
    s32 var_sl_5;
    s32 var_sl_6;
    s32 var_sl_7;
    s32 var_sl_8;
    u16 var_r2_19;
    u16 var_r2_5;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_13;
    u16 var_r3_16;
    u16 var_r3_19;
    u16 var_r3_22;
    u16 var_r3_4;
    u16 var_r3_7;
    u32 *var_r0_11;
    u32 *var_r0_6;
    u32 *var_r0_9;
    u32 var_r3_12;
    u32 var_r3_15;
    u32 var_r3_18;
    void *temp_r0;
    void *temp_r0_10;
    GenObj *temp_r0_11;
    void *temp_r0_13;
    GenObj *temp_r0_14;
    void *temp_r0_16;
    void *temp_r0_17;
    GenObj *temp_r0_18;
    void *temp_r0_20;
    GenObj *temp_r0_21;
    void *temp_r0_23;
    void *temp_r0_24;
    GenObj *temp_r0_25;
    void *temp_r0_27;
    GenObj *temp_r0_28;
    GenObj *temp_r0_2;
    void *temp_r0_30;
    GenObj *temp_r0_31;
    GenObj *temp_r0_32;
    void *temp_r0_4;
    GenObj *temp_r0_5;
    void *temp_r0_7;
    GenObj *temp_r0_8;
    GenObj *temp_r0_9;
    void *temp_r1;
    GenObj *temp_r1_10;
    GenObj *temp_r1_11;
    GenObj *temp_r1_12;
    void *temp_r1_13;
    GenObj *temp_r1_14;
    GenObj *temp_r1_15;
    GenObj *temp_r1_16;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    void *temp_r1_5;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    GenObj *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_10;
    void *temp_r2_12;
    void *temp_r2_14;
    void *temp_r2_16;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_8;
    GenObj *temp_r4;
    GenObj *temp_r4_11;
    GenObj *temp_r4_14;
    GenObj *temp_r4_17;
    GenObj *temp_r4_22;
    GenObj *temp_r4_4;
    GenObj *temp_r4_8;
    GenObj *temp_r5;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    GenObj *var_r2;
    GenObj *var_r2_10;
    GenObj *var_r2_11;
    GenObj *var_r2_12;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_15;
    GenObj *var_r2_16;
    GenObj *var_r2_17;
    GenObj *var_r2_18;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3_11;
    GenObj *var_r3_14;
    GenObj *var_r3_17;
    GenObj *var_r3_20;
    GenObj *var_r3_23;
    GenObj *var_r3_2;
    GenObj *var_r3_5;
    GenObj *var_r3_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;

    sp4 = 0;
    sp4.unk2 = 0;
    sp4.unk4 = 0;
    sp4.unk6 = 0;
    sp4.unk8 = 0;
    sp10 = 0;
    sp4.unk10 = 0;
    sp4.unk11 = 0;
    sp18 = 0;
    sp4.unk18 = 0;
    sp20 = 0;
    sp20.unk4 = 0;
    sp28 = 0;
    sp28.unk4 = 0;
    sp30 = 0;
    sp30.unk4 = 0;
    sp38 = 0;
    sp38.unk4 = 0;
    if ((3 & arg0->unk2321) != 3) {

    } else {
        func_0805E790(&sp40, (GenObj *)((u8 *)arg0 + 0xE0), 0);
        temp_r0 = &(GenObj *)((u8 *)sp40 + 0xC);
        sp20.unk0 = sp40;
        sp20.unk4 = (s32) sp40.unk4;
        sp20.unk8 = (s32) sp40.unk8;
        temp_r1 = &(GenObj *)((u8 *)sp20 + 0xC);
        sp20.unkC = (s32) sp40.unkC;
        temp_r1->unk4 = (s32) temp_r0->unk4;
        temp_r1->unk8 = (s32) temp_r0->unk8;
        temp_r1_2 = (GenObj *)((u8 *)temp_r1 + 0xC);
        temp_r1->unkC = (s32) temp_r0->unkC;
        temp_r1_2->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
        temp_r4 = func_08008910(arg0, (GenObj *)((u8 *)temp_r1_2 + 8));
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x498);
        temp_r2 = func_08007D4C(temp_r0_2, temp_r0_2->unk4);
        var_r3 = 0;
        if (sp28 != 0) {
            var_r3 = sp0.unk2C;
        }
        sp120 = temp_r4;
        func_08008F0C(&sp40, sp28, (temp_r2 << 5) + 0x06010000, var_r3);
        temp_r1_3 = temp_r4->unk4;
        if (temp_r1_3 != temp_r4->unkC) {
            if (temp_r1_3 != 0) {
                temp_r1_3->unk0 = (s32) sp40;
                temp_r1_3->unk4 = (s32) sp40.unk4;
                temp_r1_3->unk8 = (s32) sp40.unk8;
                temp_r1_3->unkC = (s32) sp40.unkC;
            }
            sp120->unk4 = (void *) (sp120->unk4 + 0x10);
        } else {
            sp64 = 1;
            temp_r4_2 = (s32) (temp_r1_3 - sp120->unk0) >> 4;
            sp60 = temp_r4_2;
            var_r0 = &sp60;
            if ((u32) temp_r4_2 < 1U) {
                var_r0 = &sp64;
            }
            temp_r0_3 = temp_r4_2 + *var_r0;
            if (temp_r0_3 != 0) {
                temp_r4_3 = temp_r0_3 * 0x10;
                var_r0_2 = malloc(temp_r4_3);
                var_sl = temp_r4_3;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sl);
                }
            } else {
                var_r0_2 = 0;
                var_sl = 0;
            }
            sp124 = var_r0_2;
            var_r2 = sp120->unk0;
            var_r3_2 = var_r0_2;
            if (var_r2 != temp_r1_3) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2 != temp_r1_3);
            }
            if (sp64 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp40;
                    var_r3_2->unk4 = (s32) sp40.unk4;
                    var_r3_2->unk8 = (s32) sp40.unk8;
                    var_r3_2->unkC = (s32) sp40.unkC;
                }
                var_r5 = (GenObj *)((u8 *)var_r3_2 + 0x10);
            } else {
                var_r3_3 = sp64;
                var_r2_2 = var_r3_2;
                if (var_r3_3 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp40;
                            var_r2_2->unk4 = (s32) sp40.unk4;
                            var_r2_2->unk8 = (s32) sp40.unk8;
                            var_r2_2->unkC = (s32) sp40.unkC;
                        }
                        var_r3_3 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_3 != 0);
                }
                var_r5 = var_r2_2;
            }
            temp_r2_2 = sp120->unk4;
            temp_r0_4 = sp120->unk0;
            var_r1 = temp_r0_4;
            if (temp_r0_4 != temp_r2_2) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_2);
            }
            if (temp_r0_4 != 0) {
                free();
            }
            sp120->unk0 = sp124;
            sp120->unk4 = var_r5;
            sp120->unkC = (void *) (sp124 + var_sl);
        }
        temp_r4_4 = func_08008910(arg0);
        temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x4A0);
        temp_r2_3 = func_080074C0(temp_r0_5, temp_r0_5->unk4);
        var_r3_4 = 0;
        if (sp30 != 0) {
            var_r3_4 = sp0.unk34;
        }
        sp120 = temp_r4_4;
        func_08008F0C(&sp40, sp30, (temp_r2_3 << 5) + 0x05000200, var_r3_4);
        spE8 = &sp40;
        temp_r1_4 = temp_r4_4->unk4;
        if (temp_r1_4 != temp_r4_4->unkC) {
            if (temp_r1_4 != 0) {
                temp_r1_4->unk0 = (s32) sp40;
                temp_r1_4->unk4 = (s32) sp40.unk4;
                temp_r1_4->unk8 = (s32) sp40.unk8;
                temp_r1_4->unkC = (s32) sp40.unkC;
            }
            sp120->unk4 = (void *) (sp120->unk4 + 0x10);
        } else {
            sp6C = 1;
            temp_r4_5 = (s32) (temp_r1_4 - sp120->unk0) >> 4;
            sp68 = temp_r4_5;
            var_r0_3 = &sp68;
            if ((u32) temp_r4_5 < 1U) {
                var_r0_3 = &sp6C;
            }
            temp_r0_6 = temp_r4_5 + *var_r0_3;
            if (temp_r0_6 != 0) {
                temp_r4_6 = temp_r0_6 * 0x10;
                var_r0_4 = malloc(temp_r4_6);
                var_sl_2 = temp_r4_6;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sl_2);
                }
            } else {
                var_r0_4 = 0;
                var_sl_2 = 0;
            }
            sp124 = var_r0_4;
            var_r2_3 = sp120->unk0;
            var_r3_5 = var_r0_4;
            if (var_r2_3 != temp_r1_4) {
                do {
                    if (var_r3_5 != 0) {
                        var_r3_5->unk0 = (s32) var_r2_3->unk0;
                        var_r3_5->unk4 = (s32) var_r2_3->unk4;
                        var_r3_5->unk8 = (s32) var_r2_3->unk8;
                        var_r3_5->unkC = (s32) var_r2_3->unkC;
                    }
                    var_r2_3 += 0x10;
                    var_r3_5 += 0x10;
                } while (var_r2_3 != temp_r1_4);
            }
            if (sp6C == 1) {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) spE8->unk0;
                    var_r3_5->unk4 = (s32) spE8->unk4;
                    var_r3_5->unk8 = (s32) spE8->unk8;
                    var_r3_5->unkC = (s32) spE8->unkC;
                }
                var_r5_2 = (GenObj *)((u8 *)var_r3_5 + 0x10);
            } else {
                var_r3_6 = sp6C;
                var_r2_4 = var_r3_5;
                if (var_r3_6 != 0) {
                    do {
                        if (var_r2_4 != 0) {
                            var_r2_4->unk0 = (s32) spE8->unk0;
                            var_r2_4->unk4 = (s32) spE8->unk4;
                            var_r2_4->unk8 = (s32) spE8->unk8;
                            var_r2_4->unkC = (s32) spE8->unkC;
                        }
                        var_r3_6 -= 1;
                        var_r2_4 += 0x10;
                    } while (var_r3_6 != 0);
                }
                var_r5_2 = var_r2_4;
            }
            temp_r2_4 = sp120->unk4;
            temp_r0_7 = sp120->unk0;
            var_r1_2 = temp_r0_7;
            if (temp_r0_7 != temp_r2_4) {
                do {
                    var_r1_2 += 0x10;
                } while (var_r1_2 != temp_r2_4);
            }
            if (temp_r0_7 != 0) {
                free();
            }
            sp120->unk0 = sp124;
            sp120->unk4 = var_r5_2;
            sp120->unkC = (void *) (sp124 + var_sl_2);
        }
        sp4 = 0x40;
        sp4.unk2 = 0x40;
        temp_r0_8 = (GenObj *)((u8 *)arg0 + 0x4A0);
        sp4.unk4 = func_080074C0(temp_r0_8, temp_r0_8->unk4);
        temp_r0_9 = (GenObj *)((u8 *)arg0 + 0x498);
        sp4.unk6 = func_08007D4C(temp_r0_9, temp_r0_9->unk4);
        sp4.unk8 = 2;
        sp4.unk18 = 1;
        temp_r3 = func_08008920(arg0);
        var_r2_5 = 0;
        if (sp20 != 0) {
            var_r2_5 = sp0.unk24;
        }
        func_0805E99C(temp_r3, sp20, var_r2_5, &sp4);
    }
    temp_r4_7 = arg0->unk225C;
    sp114 = (GenObj *)((u8 *)arg0 + 0x2AC);
    sp118 = (GenObj *)((u8 *)arg0 + 0x2E4);
    sp110 = (GenObj *)((u8 *)arg0 + 0x23C);
    if (temp_r4_7 == 0) {
        sub_08056442();
    }
    switch (temp_r4_7) {                            /* irregular */
    case 2:
        func_0805E790(&sp40, (GenObj *)((u8 *)arg0 + 0x110), 0);
        temp_r0_10 = &(GenObj *)((u8 *)sp40 + 0xC);
        sp20.unk0 = sp40;
        sp20.unk4 = (s32) sp40.unk4;
        sp20.unk8 = (s32) sp40.unk8;
        temp_r1_5 = &(GenObj *)((u8 *)sp20 + 0xC);
        sp20.unkC = (s32) sp40.unkC;
        temp_r1_5->unk4 = (s32) temp_r0_10->unk4;
        temp_r1_5->unk8 = (s32) temp_r0_10->unk8;
        temp_r1_6 = (GenObj *)((u8 *)temp_r1_5 + 0xC);
        temp_r1_5->unkC = (s32) temp_r0_10->unkC;
        temp_r1_6->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_10 + 0xC))->unk4;
        if (arg0->unk2260 == 2) {

        } else {
            temp_r4_8 = func_08008910(arg0, (GenObj *)((u8 *)temp_r1_6 + 8));
            temp_r0_11 = (GenObj *)((u8 *)arg0 + 0x498);
            temp_r2_5 = func_08007D4C(temp_r0_11, temp_r0_11->unk4);
            var_r3_7 = 0;
            if (sp28 != 0) {
                var_r3_7 = sp0.unk2C;
            }
            sp120 = temp_r4_8;
            func_08008F0C(&sp40, sp28, (temp_r2_5 << 5) + 0x06010000, var_r3_7);
            temp_r1_7 = temp_r4_8->unk4;
            if (temp_r1_7 != temp_r4_8->unkC) {
                if (temp_r1_7 != 0) {
                    temp_r1_7->unk0 = (s32) sp40;
                    temp_r1_7->unk4 = (s32) sp40.unk4;
                    temp_r1_7->unk8 = (s32) sp40.unk8;
                    temp_r1_7->unkC = (s32) sp40.unkC;
                }
                sp120->unk4 = (void *) (sp120->unk4 + 0x10);
            } else {
                sp84 = 1;
                temp_r4_9 = (s32) (temp_r1_7 - sp120->unk0) >> 4;
                sp80 = temp_r4_9;
                var_r2_6 = &sp80;
                if ((u32) temp_r4_9 < (u32) sp84) {
                    var_r2_6 = &sp84;
                }
                temp_r0_12 = temp_r4_9 + *var_r2_6;
                if (temp_r0_12 != 0) {
                    temp_r4_10 = temp_r0_12 * 0x10;
                    var_r0_5 = malloc(temp_r4_10);
                    var_sl_3 = temp_r4_10;
                    if (var_r0_5 == 0) {
                        var_r0_5 = func_080D3BC0(var_sl_3);
                    }
                } else {
                    var_r0_5 = 0;
                    var_sl_3 = 0;
                }
                sp124 = var_r0_5;
                var_r2_7 = sp120->unk0;
                var_r3_8 = var_r0_5;
                sp114 = (GenObj *)((u8 *)arg0 + 0x2AC);
                sp118 = (GenObj *)((u8 *)arg0 + 0x2E4);
                sp110 = (GenObj *)((u8 *)arg0 + 0x23C);
                if (var_r2_7 != temp_r1_7) {
                    do {
                        if (var_r3_8 != 0) {
                            var_r3_8->unk0 = (s32) var_r2_7->unk0;
                            var_r3_8->unk4 = (s32) var_r2_7->unk4;
                            var_r3_8->unk8 = (s32) var_r2_7->unk8;
                            var_r3_8->unkC = (s32) var_r2_7->unkC;
                        }
                        var_r2_7 += 0x10;
                        var_r3_8 += 0x10;
                    } while (var_r2_7 != temp_r1_7);
                }
                if (sp84 == 1) {
                    if (var_r3_8 != 0) {
                        var_r3_8->unk0 = (s32) sp40;
                        var_r3_8->unk4 = (s32) sp40.unk4;
                        var_r3_8->unk8 = (s32) sp40.unk8;
                        var_r3_8->unkC = (s32) sp40.unkC;
                    }
                    var_r5_3 = (GenObj *)((u8 *)var_r3_8 + 0x10);
                } else {
                    var_r3_9 = sp84;
                    var_r2_8 = var_r3_8;
                    if (var_r3_9 != 0) {
                        do {
                            if (var_r2_8 != 0) {
                                var_r2_8->unk0 = (s32) sp40;
                                var_r2_8->unk4 = (s32) sp40.unk4;
                                var_r2_8->unk8 = (s32) sp40.unk8;
                                var_r2_8->unkC = (s32) sp40.unkC;
                            }
                            var_r3_9 -= 1;
                            var_r2_8 += 0x10;
                        } while (var_r3_9 != 0);
                    }
                    var_r5_3 = var_r2_8;
                }
                temp_r2_6 = sp120->unk4;
                temp_r0_13 = sp120->unk0;
                var_r1_3 = temp_r0_13;
                if (temp_r0_13 != temp_r2_6) {
                    do {
                        var_r1_3 += 0x10;
                    } while (var_r1_3 != temp_r2_6);
                }
                if (temp_r0_13 != 0) {
                    free();
                }
                sp120->unk0 = sp124;
                sp120->unk4 = var_r5_3;
                sp120->unkC = (void *) (sp124 + var_sl_3);
            }
            temp_r4_11 = func_08008910(arg0);
            temp_r0_14 = (GenObj *)((u8 *)arg0 + 0x4A0);
            temp_r2_7 = func_080074C0(temp_r0_14, temp_r0_14->unk4);
            var_r3_10 = 0;
            if (sp30 != 0) {
                var_r3_10 = sp0.unk34;
            }
            sp120 = temp_r4_11;
            func_08008F0C(&sp40, sp30, (temp_r2_7 << 5) + 0x05000200, var_r3_10);
            spF0 = &sp40;
            temp_r1_8 = temp_r4_11->unk4;
            if (temp_r1_8 != temp_r4_11->unkC) {
                if (temp_r1_8 != 0) {
                    temp_r1_8->unk0 = (s32) sp40;
                    temp_r1_8->unk4 = (s32) sp40.unk4;
                    temp_r1_8->unk8 = (s32) sp40.unk8;
                    temp_r1_8->unkC = (s32) sp40.unkC;
                }
                sp120->unk4 = (void *) (sp120->unk4 + 0x10);
            } else {
                sp8C = 1;
                temp_r4_12 = (s32) (temp_r1_8 - sp120->unk0) >> 4;
                var_r0_6 = &sp88;
                *var_r0_6 = (u32) temp_r4_12;
                if ((u32) temp_r4_12 < (u32) sp8C) {
                    var_r0_6 = &sp8C;
                }
                temp_r0_15 = temp_r4_12 + *var_r0_6;
                if (temp_r0_15 != 0) {
                    temp_r4_13 = temp_r0_15 * 0x10;
                    var_r0_7 = malloc(temp_r4_13);
                    var_sl_4 = temp_r4_13;
                    if (var_r0_7 == 0) {
                        var_r0_7 = func_080D3BC0(var_sl_4);
                    }
                } else {
                    var_r0_7 = 0;
                    var_sl_4 = 0;
                }
                sp124 = var_r0_7;
                var_r2_9 = sp120->unk0;
                var_r3_11 = var_r0_7;
                if (var_r2_9 != temp_r1_8) {
                    do {
                        if (var_r3_11 != 0) {
                            var_r3_11->unk0 = (s32) var_r2_9->unk0;
                            var_r3_11->unk4 = (s32) var_r2_9->unk4;
                            var_r3_11->unk8 = (s32) var_r2_9->unk8;
                            var_r3_11->unkC = (s32) var_r2_9->unkC;
                        }
                        var_r2_9 += 0x10;
                        var_r3_11 += 0x10;
                    } while (var_r2_9 != temp_r1_8);
                }
                if (sp8C == 1) {
                    if (var_r3_11 != 0) {
                        var_r3_11->unk0 = (s32) spF0->unk0;
                        var_r3_11->unk4 = (s32) spF0->unk4;
                        var_r3_11->unk8 = (s32) spF0->unk8;
                        var_r3_11->unkC = (s32) spF0->unkC;
                    }
                    var_r5_4 = (GenObj *)((u8 *)var_r3_11 + 0x10);
                } else {
                    var_r3_12 = sp8C;
                    var_r2_10 = var_r3_11;
                    if (var_r3_12 != 0) {
                        do {
                            if (var_r2_10 != 0) {
                                var_r2_10->unk0 = (s32) spF0->unk0;
                                var_r2_10->unk4 = (s32) spF0->unk4;
                                var_r2_10->unk8 = (s32) spF0->unk8;
                                var_r2_10->unkC = (s32) spF0->unkC;
                            }
                            var_r3_12 -= 1;
                            var_r2_10 += 0x10;
                        } while (var_r3_12 != 0);
                    }
                    var_r5_4 = var_r2_10;
                }
                temp_r2_8 = sp120->unk4;
                temp_r0_16 = sp120->unk0;
                var_r1_4 = temp_r0_16;
                if (temp_r0_16 != temp_r2_8) {
                    do {
                        var_r1_4 += 0x10;
                    } while (var_r1_4 != temp_r2_8);
                }
                if (temp_r0_16 != 0) {
                    free();
                }
                sp120->unk0 = sp124;
                sp120->unk4 = var_r5_4;
                sp120->unkC = (void *) (sp124 + var_sl_4);
            }
            var_r1_5 = (GenObj *)((u8 *)arg0 + 0x2260);
            var_r0_8 = 2;
block_264:
            *var_r1_5 = var_r0_8;
        }
        break;
    case 3:
        func_0805E790(&sp40, (GenObj *)((u8 *)arg0 + 0x170), 0);
        temp_r0_17 = &(GenObj *)((u8 *)sp40 + 0xC);
        sp20.unk0 = sp40;
        sp20.unk4 = (s32) sp40.unk4;
        sp20.unk8 = (s32) sp40.unk8;
        temp_r1_9 = &(GenObj *)((u8 *)sp20 + 0xC);
        sp20.unkC = (s32) sp40.unkC;
        temp_r1_9->unk4 = (s32) temp_r0_17->unk4;
        temp_r1_9->unk8 = (s32) temp_r0_17->unk8;
        temp_r1_10 = (GenObj *)((u8 *)temp_r1_9 + 0xC);
        temp_r1_9->unkC = (s32) temp_r0_17->unkC;
        temp_r1_10->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_17 + 0xC))->unk4;
        if (arg0->unk2260 == 3) {

        } else {
            temp_r4_14 = func_08008910(arg0, (GenObj *)((u8 *)temp_r1_10 + 8));
            temp_r0_18 = (GenObj *)((u8 *)arg0 + 0x498);
            temp_r2_9 = func_08007D4C(temp_r0_18, temp_r0_18->unk4);
            var_r3_13 = 0;
            if (sp28 != 0) {
                var_r3_13 = sp0.unk2C;
            }
            sp120 = temp_r4_14;
            func_08008F0C(&sp40, sp28, (temp_r2_9 << 5) + 0x06010000, var_r3_13);
            temp_r1_11 = temp_r4_14->unk4;
            if (temp_r1_11 != temp_r4_14->unkC) {
                if (temp_r1_11 != 0) {
                    temp_r1_11->unk0 = (s32) sp40;
                    temp_r1_11->unk4 = (s32) sp40.unk4;
                    temp_r1_11->unk8 = (s32) sp40.unk8;
                    temp_r1_11->unkC = (s32) sp40.unkC;
                }
                sp120->unk4 = (void *) (sp120->unk4 + 0x10);
            } else {
                sp94 = 1;
                temp_r4_15 = (s32) (temp_r1_11 - sp120->unk0) >> 4;
                var_r0_9 = &sp90;
                *var_r0_9 = (u32) temp_r4_15;
                if ((u32) temp_r4_15 < (u32) sp94) {
                    var_r0_9 = &sp94;
                }
                temp_r0_19 = temp_r4_15 + *var_r0_9;
                if (temp_r0_19 != 0) {
                    temp_r4_16 = temp_r0_19 * 0x10;
                    var_r0_10 = malloc(temp_r4_16);
                    var_sl_5 = temp_r4_16;
                    if (var_r0_10 == 0) {
                        var_r0_10 = func_080D3BC0(var_sl_5);
                    }
                } else {
                    var_r0_10 = 0;
                    var_sl_5 = 0;
                }
                sp124 = var_r0_10;
                var_r2_11 = sp120->unk0;
                var_r3_14 = var_r0_10;
                sp114 = (GenObj *)((u8 *)arg0 + 0x2AC);
                sp118 = (GenObj *)((u8 *)arg0 + 0x2E4);
                sp110 = (GenObj *)((u8 *)arg0 + 0x23C);
                if (var_r2_11 != temp_r1_11) {
                    do {
                        if (var_r3_14 != 0) {
                            var_r3_14->unk0 = (s32) var_r2_11->unk0;
                            var_r3_14->unk4 = (s32) var_r2_11->unk4;
                            var_r3_14->unk8 = (s32) var_r2_11->unk8;
                            var_r3_14->unkC = (s32) var_r2_11->unkC;
                        }
                        var_r2_11 += 0x10;
                        var_r3_14 += 0x10;
                    } while (var_r2_11 != temp_r1_11);
                }
                if (sp94 == 1) {
                    if (var_r3_14 != 0) {
                        var_r3_14->unk0 = (s32) sp40;
                        var_r3_14->unk4 = (s32) sp40.unk4;
                        var_r3_14->unk8 = (s32) sp40.unk8;
                        var_r3_14->unkC = (s32) sp40.unkC;
                    }
                    var_r5_5 = (GenObj *)((u8 *)var_r3_14 + 0x10);
                } else {
                    var_r3_15 = sp94;
                    var_r2_12 = var_r3_14;
                    if (var_r3_15 != 0) {
                        do {
                            if (var_r2_12 != 0) {
                                var_r2_12->unk0 = (s32) sp40;
                                var_r2_12->unk4 = (s32) sp40.unk4;
                                var_r2_12->unk8 = (s32) sp40.unk8;
                                var_r2_12->unkC = (s32) sp40.unkC;
                            }
                            var_r3_15 -= 1;
                            var_r2_12 += 0x10;
                        } while (var_r3_15 != 0);
                    }
                    var_r5_5 = var_r2_12;
                }
                temp_r2_10 = sp120->unk4;
                temp_r0_20 = sp120->unk0;
                var_r1_6 = temp_r0_20;
                if (temp_r0_20 != temp_r2_10) {
                    do {
                        var_r1_6 += 0x10;
                    } while (var_r1_6 != temp_r2_10);
                }
                if (temp_r0_20 != 0) {
                    free();
                }
                sp120->unk0 = sp124;
                sp120->unk4 = var_r5_5;
                sp120->unkC = (void *) (sp124 + var_sl_5);
            }
            temp_r4_17 = func_08008910(arg0);
            temp_r0_21 = (GenObj *)((u8 *)arg0 + 0x4A0);
            temp_r2_11 = func_080074C0(temp_r0_21, temp_r0_21->unk4);
            var_r3_16 = 0;
            if (sp30 != 0) {
                var_r3_16 = sp0.unk34;
            }
            sp120 = temp_r4_17;
            func_08008F0C(&sp40, sp30, (temp_r2_11 << 5) + 0x05000200, var_r3_16);
            spF4 = &sp40;
            temp_r1_12 = temp_r4_17->unk4;
            if (temp_r1_12 != temp_r4_17->unkC) {
                if (temp_r1_12 != 0) {
                    temp_r1_12->unk0 = (s32) sp40;
                    temp_r1_12->unk4 = (s32) sp40.unk4;
                    temp_r1_12->unk8 = (s32) sp40.unk8;
                    temp_r1_12->unkC = (s32) sp40.unkC;
                }
                sp120->unk4 = (void *) (sp120->unk4 + 0x10);
            } else {
                sp9C = 1;
                temp_r4_18 = (s32) (temp_r1_12 - sp120->unk0) >> 4;
                var_r0_11 = &sp98;
                *var_r0_11 = (u32) temp_r4_18;
                if ((u32) temp_r4_18 < (u32) sp9C) {
                    var_r0_11 = &sp9C;
                }
                temp_r0_22 = temp_r4_18 + *var_r0_11;
                if (temp_r0_22 != 0) {
                    temp_r4_19 = temp_r0_22 * 0x10;
                    var_r0_12 = malloc(temp_r4_19);
                    var_sl_6 = temp_r4_19;
                    if (var_r0_12 == 0) {
                        var_r0_12 = func_080D3BC0(var_sl_6);
                    }
                } else {
                    var_r0_12 = 0;
                    var_sl_6 = 0;
                }
                sp124 = var_r0_12;
                var_r2_13 = sp120->unk0;
                var_r3_17 = var_r0_12;
                if (var_r2_13 != temp_r1_12) {
                    do {
                        if (var_r3_17 != 0) {
                            var_r3_17->unk0 = (s32) var_r2_13->unk0;
                            var_r3_17->unk4 = (s32) var_r2_13->unk4;
                            var_r3_17->unk8 = (s32) var_r2_13->unk8;
                            var_r3_17->unkC = (s32) var_r2_13->unkC;
                        }
                        var_r2_13 += 0x10;
                        var_r3_17 += 0x10;
                    } while (var_r2_13 != temp_r1_12);
                }
                if (sp9C == 1) {
                    if (var_r3_17 != 0) {
                        var_r3_17->unk0 = (s32) spF4->unk0;
                        var_r3_17->unk4 = (s32) spF4->unk4;
                        var_r3_17->unk8 = (s32) spF4->unk8;
                        var_r3_17->unkC = (s32) spF4->unkC;
                    }
                    var_r5_6 = (GenObj *)((u8 *)var_r3_17 + 0x10);
                } else {
                    var_r3_18 = sp9C;
                    var_r2_14 = var_r3_17;
                    if (var_r3_18 != 0) {
                        do {
                            if (var_r2_14 != 0) {
                                var_r2_14->unk0 = (s32) spF4->unk0;
                                var_r2_14->unk4 = (s32) spF4->unk4;
                                var_r2_14->unk8 = (s32) spF4->unk8;
                                var_r2_14->unkC = (s32) spF4->unkC;
                            }
                            var_r3_18 -= 1;
                            var_r2_14 += 0x10;
                        } while (var_r3_18 != 0);
                    }
                    var_r5_6 = var_r2_14;
                }
                temp_r2_12 = sp120->unk4;
                temp_r0_23 = sp120->unk0;
                var_r1_7 = temp_r0_23;
                if (temp_r0_23 != temp_r2_12) {
                    do {
                        var_r1_7 += 0x10;
                    } while (var_r1_7 != temp_r2_12);
                }
                if (temp_r0_23 != 0) {
                    free();
                }
                sp120->unk0 = sp124;
                sp120->unk4 = var_r5_6;
                sp120->unkC = (void *) (sp124 + var_sl_6);
            }
            var_r1_5 = (GenObj *)((u8 *)arg0 + 0x00002260);
            var_r0_8 = 3;
            goto block_264;
        }
        break;
    case 1:
        func_0805E790(&sp40, (GenObj *)((u8 *)arg0 + 0xB0), 0);
        temp_r0_24 = &(GenObj *)((u8 *)sp40 + 0xC);
        sp20.unk0 = sp40;
        sp20.unk4 = (s32) sp40.unk4;
        sp20.unk8 = (s32) sp40.unk8;
        temp_r1_13 = &(GenObj *)((u8 *)sp20 + 0xC);
        sp20.unkC = (s32) sp40.unkC;
        temp_r1_13->unk4 = (s32) temp_r0_24->unk4;
        temp_r1_13->unk8 = (s32) temp_r0_24->unk8;
        temp_r1_14 = (GenObj *)((u8 *)temp_r1_13 + 0xC);
        temp_r1_13->unkC = (s32) temp_r0_24->unkC;
        temp_r1_14->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_24 + 0xC))->unk4;
        if (arg0->unk2260 == 1) {

        } else {
            temp_r5 = func_08008910(arg0, (GenObj *)((u8 *)temp_r1_14 + 8));
            temp_r0_25 = (GenObj *)((u8 *)arg0 + 0x498);
            temp_r2_13 = func_08007D4C(temp_r0_25, temp_r0_25->unk4);
            var_r3_19 = 0;
            if (sp28 != 0) {
                var_r3_19 = sp0.unk2C;
            }
            sp120 = temp_r5;
            func_08008F0C(&sp40, sp28, (temp_r2_13 << 5) + 0x06010000, var_r3_19);
            temp_r1_15 = temp_r5->unk4;
            if (temp_r1_15 != temp_r5->unkC) {
                if (temp_r1_15 != 0) {
                    temp_r1_15->unk0 = (s32) sp40;
                    temp_r1_15->unk4 = (s32) sp40.unk4;
                    temp_r1_15->unk8 = (s32) sp40.unk8;
                    temp_r1_15->unkC = (s32) sp40.unkC;
                }
                sp120->unk4 = (void *) (sp120->unk4 + 0x10);
            } else {
                sp74 = temp_r4_7;
                temp_r4_20 = (s32) (temp_r1_15 - sp120->unk0) >> 4;
                sp70 = temp_r4_20;
                var_r0_13 = &sp70;
                if ((u32) temp_r4_20 < 1U) {
                    var_r0_13 = &sp74;
                }
                temp_r0_26 = temp_r4_20 + *var_r0_13;
                if (temp_r0_26 != 0) {
                    temp_r4_21 = temp_r0_26 * 0x10;
                    var_r0_14 = malloc(temp_r4_21);
                    var_sl_7 = temp_r4_21;
                    if (var_r0_14 == 0) {
                        var_r0_14 = func_080D3BC0(var_sl_7);
                    }
                } else {
                    var_r0_14 = 0;
                    var_sl_7 = 0;
                }
                sp124 = var_r0_14;
                var_r2_15 = sp120->unk0;
                var_r3_20 = var_r0_14;
                sp114 = (GenObj *)((u8 *)arg0 + 0x2AC);
                sp118 = (GenObj *)((u8 *)arg0 + 0x2E4);
                sp110 = (GenObj *)((u8 *)arg0 + 0x23C);
                if (var_r2_15 != temp_r1_15) {
                    do {
                        if (var_r3_20 != 0) {
                            var_r3_20->unk0 = (s32) var_r2_15->unk0;
                            var_r3_20->unk4 = (s32) var_r2_15->unk4;
                            var_r3_20->unk8 = (s32) var_r2_15->unk8;
                            var_r3_20->unkC = (s32) var_r2_15->unkC;
                        }
                        var_r2_15 += 0x10;
                        var_r3_20 += 0x10;
                    } while (var_r2_15 != temp_r1_15);
                }
                if (sp74 == 1) {
                    if (var_r3_20 != 0) {
                        var_r3_20->unk0 = (s32) sp40;
                        var_r3_20->unk4 = (s32) sp40.unk4;
                        var_r3_20->unk8 = (s32) sp40.unk8;
                        var_r3_20->unkC = (s32) sp40.unkC;
                    }
                    var_r5_7 = (GenObj *)((u8 *)var_r3_20 + 0x10);
                } else {
                    var_r3_21 = sp74;
                    var_r2_16 = var_r3_20;
                    if (var_r3_21 != 0) {
                        do {
                            if (var_r2_16 != 0) {
                                var_r2_16->unk0 = (s32) sp40;
                                var_r2_16->unk4 = (s32) sp40.unk4;
                                var_r2_16->unk8 = (s32) sp40.unk8;
                                var_r2_16->unkC = (s32) sp40.unkC;
                            }
                            var_r3_21 -= 1;
                            var_r2_16 += 0x10;
                        } while (var_r3_21 != 0);
                    }
                    var_r5_7 = var_r2_16;
                }
                temp_r2_14 = sp120->unk4;
                temp_r0_27 = sp120->unk0;
                var_r1_8 = temp_r0_27;
                if (temp_r0_27 != temp_r2_14) {
                    do {
                        var_r1_8 += 0x10;
                    } while (var_r1_8 != temp_r2_14);
                }
                if (temp_r0_27 != 0) {
                    free();
                }
                sp120->unk0 = sp124;
                sp120->unk4 = var_r5_7;
                sp120->unkC = (void *) (sp124 + var_sl_7);
            }
            temp_r4_22 = func_08008910(arg0);
            temp_r0_28 = (GenObj *)((u8 *)arg0 + 0x4A0);
            temp_r2_15 = func_080074C0(temp_r0_28, temp_r0_28->unk4);
            var_r3_22 = 0;
            if (sp30 != 0) {
                var_r3_22 = sp0.unk34;
            }
            sp120 = temp_r4_22;
            func_08008F0C(&sp40, sp30, (temp_r2_15 << 5) + 0x05000200, var_r3_22);
            spEC = &sp40;
            temp_r1_16 = temp_r4_22->unk4;
            if (temp_r1_16 != temp_r4_22->unkC) {
                if (temp_r1_16 != 0) {
                    temp_r1_16->unk0 = (s32) sp40;
                    temp_r1_16->unk4 = (s32) sp40.unk4;
                    temp_r1_16->unk8 = (s32) sp40.unk8;
                    temp_r1_16->unkC = (s32) sp40.unkC;
                }
                sp120->unk4 = (void *) (sp120->unk4 + 0x10);
            } else {
                sp7C = 1;
                temp_r4_23 = (s32) (temp_r1_16 - sp120->unk0) >> 4;
                sp78 = temp_r4_23;
                var_r0_15 = &sp78;
                if ((u32) temp_r4_23 < 1U) {
                    var_r0_15 = &sp7C;
                }
                temp_r0_29 = temp_r4_23 + *var_r0_15;
                if (temp_r0_29 != 0) {
                    temp_r4_24 = temp_r0_29 * 0x10;
                    var_r0_16 = malloc(temp_r4_24);
                    var_sl_8 = temp_r4_24;
                    if (var_r0_16 == 0) {
                        var_r0_16 = func_080D3BC0(var_sl_8);
                    }
                } else {
                    var_r0_16 = 0;
                    var_sl_8 = 0;
                }
                sp124 = var_r0_16;
                var_r2_17 = sp120->unk0;
                var_r3_23 = var_r0_16;
                if (var_r2_17 != temp_r1_16) {
                    do {
                        if (var_r3_23 != 0) {
                            var_r3_23->unk0 = (s32) var_r2_17->unk0;
                            var_r3_23->unk4 = (s32) var_r2_17->unk4;
                            var_r3_23->unk8 = (s32) var_r2_17->unk8;
                            var_r3_23->unkC = (s32) var_r2_17->unkC;
                        }
                        var_r2_17 += 0x10;
                        var_r3_23 += 0x10;
                    } while (var_r2_17 != temp_r1_16);
                }
                if (sp7C == 1) {
                    if (var_r3_23 != 0) {
                        var_r3_23->unk0 = (s32) spEC->unk0;
                        var_r3_23->unk4 = (s32) spEC->unk4;
                        var_r3_23->unk8 = (s32) spEC->unk8;
                        var_r3_23->unkC = (s32) spEC->unkC;
                    }
                    var_r5_8 = (GenObj *)((u8 *)var_r3_23 + 0x10);
                } else {
                    var_r3_24 = sp7C;
                    var_r2_18 = var_r3_23;
                    if (var_r3_24 != 0) {
                        do {
                            if (var_r2_18 != 0) {
                                var_r2_18->unk0 = (s32) spEC->unk0;
                                var_r2_18->unk4 = (s32) spEC->unk4;
                                var_r2_18->unk8 = (s32) spEC->unk8;
                                var_r2_18->unkC = (s32) spEC->unkC;
                            }
                            var_r3_24 -= 1;
                            var_r2_18 += 0x10;
                        } while (var_r3_24 != 0);
                    }
                    var_r5_8 = var_r2_18;
                }
                temp_r2_16 = sp120->unk4;
                temp_r0_30 = sp120->unk0;
                var_r1_9 = temp_r0_30;
                if (temp_r0_30 != temp_r2_16) {
                    do {
                        var_r1_9 += 0x10;
                    } while (var_r1_9 != temp_r2_16);
                }
                if (temp_r0_30 != 0) {
                    free();
                }
                sp120->unk0 = sp124;
                sp120->unk4 = var_r5_8;
                sp120->unkC = (void *) (sp124 + var_sl_8);
            }
            var_r1_5 = (GenObj *)((u8 *)arg0 + 0x2260);
            var_r0_8 = 1;
            goto block_264;
        }
        break;
    }
    sp4 = 0x40;
    sp4.unk2 = 0x40;
    temp_r0_31 = (GenObj *)((u8 *)arg0 + 0x4A0);
    sp4.unk4 = func_080074C0(temp_r0_31, temp_r0_31->unk4);
    temp_r0_32 = (GenObj *)((u8 *)arg0 + 0x498);
    sp4.unk6 = func_08007D4C(temp_r0_32, temp_r0_32->unk4);
    sp4.unk8 = 2;
    sp4.unk18 = 1;
    temp_r3_2 = func_08008920(arg0);
    var_r2_19 = 0;
    if (sp20 != 0) {
        var_r2_19 = sp0.unk24;
    }
    func_0805E99C(temp_r3_2, sp20, var_r2_19, &sp4);
}

