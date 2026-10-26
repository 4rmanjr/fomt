#include "common.h"
s32 free();                                           /* extern */
u16 func_080074C0(void *, s32);                     /* extern */
u16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(void **, void *, s32, u16);         /* extern */
s32 func_0805C63C(void *, void *, u16, s32 *);          /* extern */
s32 func_0805E790(void **, void *, s32);              /* extern */
s32 func_0805E860(void *, s16);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(s32, void *, u16, s32 *);             /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(void **, void **, s32);                    /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    struct GenObj *unk14;
    s32 unk18;
    u8 _pad1C[8];
    s32 unk24;
    u8 _pad28[4];
    s32 unk2C;
    struct GenObj *unk30;
    u8 _pad34[416];
    s32 unk1D4;
    u8 _pad1D8[96];
    s32 unk238;
    u8 _pad23C[52];
    s32 unk270;
    u8 _pad274[52];
    s32 unk2A8;
    u8 _pad2AC[52];
    s32 unk2E0;
    u8 _pad2E4[52];
    s32 unk318;
    u8 _pad31C[24];
    s32 unk334;
    u8 _pad338[24];
    s32 unk350;
    u8 _pad354[564];
    s32 unk588;
    u8 _pad58C[16];
    s32 unk59C;
    u8 _pad5A0[3660];
    s32 unk13EC;
    u8 _pad13F0[24];
    s32 unk1408;
    u8 _pad140C[2];
    s32 unk140E;
    u8 _pad1412[18];
    s32 unk1424;
    s32 unk1427;
    u8 _pad142B[115];
    s32 unk149E;
} GenObj;
void func_0805BC34(GenObj *arg0) {
    void *sp0;
s32 sp4;
    void *sp10;
    void *sp18;
    GenObj *sp20;
    GenObj *sp28;
    GenObj *sp30;
    GenObj *sp38;
GenObj sp40;
    s32 sp60;
    s32 sp64;
    GenObj *sp68;
    GenObj *sp6C;
    u16 *sp70;
    s32 sp74;
    GenObj *sp78;
    s32 *sp7C;
    s32 sp80;
    void **sp84;
    s32 sp88;
    s32 sp8C;
    s32 *sp90;
    GenObj *sp98;
    s32 sp9C;
    s16 *spA0;
    s16 *temp_r0_37;
    s16 temp_r0_7;
    s16 var_r2_3;
    s16 var_sl;
    s32 *var_r0;
    s32 temp_r0_12;
    s32 temp_r0_18;
    s32 temp_r0_24;
    s32 temp_r0_31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6_3;
    s32 var_ip_2;
    s32 var_r2_4;
    s32 var_sl_2;
    s32 var_sl_3;
    s32 var_sl_4;
    u16 temp_r2_2;
    u16 var_r2;
    u16 var_r2_10;
    u16 var_r2_11;
    u16 var_r2_12;
    u16 var_r2_2;
    u16 var_r2_5;
    u16 var_r2_6;
    u16 var_r2_9;
    u16 var_r3;
    u16 var_r8;
    void **temp_r1_10;
    void **temp_r1_14;
    void **temp_r1_17;
    void **temp_r1_2;
    void **temp_r1_4;
    void **temp_r1_7;
    void **temp_r2;
    GenObj *temp_r0;
    void *temp_r0_10;
    GenObj *temp_r0_11;
    GenObj *temp_r0_13;
    GenObj *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    GenObj *temp_r0_17;
    GenObj *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_23;
    void *temp_r0_25;
    GenObj *temp_r0_26;
    GenObj *temp_r0_27;
    void *temp_r0_28;
    GenObj *temp_r0_29;
    GenObj *temp_r0_2;
    GenObj *temp_r0_30;
    GenObj *temp_r0_32;
    GenObj *temp_r0_33;
    void *temp_r0_34;
    GenObj *temp_r0_35;
    GenObj *temp_r0_36;
    GenObj *temp_r0_38;
    GenObj *temp_r0_39;
    GenObj *temp_r0_3;
    GenObj *temp_r0_40;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    GenObj *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_11;
    void *temp_r1_12;
    GenObj *temp_r1_13;
    void *temp_r1_15;
    void *temp_r1_16;
    void *temp_r1_18;
    void *temp_r1_19;
    void *temp_r1_20;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_3;
    GenObj *temp_r6;
    GenObj *temp_r6_2;
    GenObj *var_ip;
    void *var_r0_2;
    void *var_r1;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    void *var_r4;
    GenObj *var_r7;

    sp68 = 0;
    sp4 = (u16) sp68;
    sp4.unk2 = (u16) sp68;
    sp4.unk4 = (u16) sp68;
    sp4.unk6 = (u16) sp68;
    sp4.unk8 = (u16) sp68;
    sp10 = sp68;
    sp4.unk10 = 0;
    sp4.unk11 = 0;
    sp18 = sp68;
    sp4.unk18 = 0;
    sp20 = sp68;
    sp20.unk4 = (s16) sp68;
    sp28 = sp68;
    sp28.unk4 = (s16) sp68;
    sp30 = sp68;
    sp30.unk4 = (s16) sp68;
    sp38 = sp68;
    sp38.unk4 = (s16) sp68;
    temp_r2 = &(GenObj *)((u8 *)sp28 + 0x18);
    sp84 = temp_r2;
    if (1 & arg0->unk1427) {
        func_0805E790(temp_r2, (GenObj *)((u8 *)arg0 + 0xE0), 0);
        temp_r0 = sp84 + 0xC;
        sp20.unk0 = sp84->unk0;
        sp20.unk4 = (s32) sp84->unk4;
        sp20.unk8 = (s32) sp84->unk8;
        temp_r1 = &(GenObj *)((u8 *)sp20 + 0xC);
        sp20.unkC = (s32) sp84->unkC;
        temp_r1->unk4 = (s32) temp_r0->unk4;
        temp_r1->unk8 = (s32) temp_r0->unk8;
        temp_r1->unkC = (s32) temp_r0->unkC;
        ((GenObj *)((u8 *)temp_r1 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
        sp4 = 0x40U;
        sp4.unk2 = 0x40U;
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x5F8);
        sp4.unk4 = func_080074C0(temp_r0_2, temp_r0_2->unk4);
        temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x5F0);
        sp4.unk6 = func_08007D4C(temp_r0_3, temp_r0_3->unk4);
        sp4.unk8 = 2U;
        sp4.unk18 = 1;
        temp_r3 = func_08008920(arg0);
        var_r2 = 0;
        if (sp20 != 0) {
            var_r2 = sp0.unk24;
        }
        func_0805E99C(temp_r3, sp20, var_r2, &sp4);
    }
    sp90 = (GenObj *)((u8 *)arg0 + 0x58C);
    if ((u32) arg0->unk13EC > 0x5C0U) {
        var_sl = 0;
        sp98 = (GenObj *)((u8 *)arg0 + 0x1D0);
        var_r8 = 0x30;
        do {
            func_0805E860(sp98, var_sl);
            temp_r1_2 = sp98->unk0;
            (*temp_r1_2)->unk10(&sp40, temp_r1_2, *(arg0->unk1D4 + (sp98->unkC * 4)));
            memcpy(sp84, sp84, 0x20);
            temp_r0_4 = sp84 + 0xC;
            sp20.unk0 = sp84->unk0;
            sp20.unk4 = (s32) sp84->unk4;
            sp20.unk8 = (s32) sp84->unk8;
            temp_r1_3 = &(GenObj *)((u8 *)sp20 + 0xC);
            sp20.unkC = (s32) sp84->unkC;
            temp_r1_3->unk4 = (s32) temp_r0_4->unk4;
            temp_r1_3->unk8 = (s32) temp_r0_4->unk8;
            temp_r1_3->unkC = (s32) temp_r0_4->unkC;
            ((GenObj *)((u8 *)temp_r1_3 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_4 + 0xC))->unk4;
            sp4 = (u16) (0x6D8 - arg0->unk13EC);
            sp4.unk2 = var_r8;
            temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x5C8);
            sp4.unk4 = func_080074C0(temp_r0_5, temp_r0_5->unk4);
            temp_r0_6 = (GenObj *)((u8 *)arg0 + 0x5C0);
            sp4.unk6 = (u16) (func_08007D4C(temp_r0_6, temp_r0_6->unk4) + (var_sl * 4));
            sp4.unk8 = 2U;
            sp4.unk18 = 1;
            temp_r3_2 = func_08008920(arg0);
            var_r2_2 = 0;
            if (sp20 != 0) {
                var_r2_2 = sp0.unk24;
            }
            func_0805E99C(temp_r3_2, sp20, var_r2_2, &sp4);
            var_r8 += 0x18;
            var_sl += 1;
        } while ((s32) var_sl <= 3);
    }
    if (1 & arg0->unk1427) {

    } else {
        arg0->unk238 = func_0805E8F0((GenObj *)((u8 *)arg0 + 0x208));
        arg0->unk270 = func_0805E8F0((GenObj *)((u8 *)arg0 + 0x240));
        arg0->unk2A8 = func_0805E8F0((GenObj *)((u8 *)arg0 + 0x278));
        arg0->unk2E0 = func_0805E8F0((GenObj *)((u8 *)arg0 + 0x2B0));
        arg0->unk318 = func_0805E8F0((GenObj *)((u8 *)arg0 + 0x2E8));
        if (arg0->unk140E != 0) {
            temp_r0_7 = arg0->unk149E;
            var_r2_3 = 0;
            if ((s32) temp_r0_7 <= 0xAB) {
                var_r2_3 = 2;
                if ((s32) temp_r0_7 > 0x55) {
                    var_r2_3 = 1;
                }
            }
            if (arg0->unk1408 != var_r2_3) {
                arg0->unk1408 = var_r2_3;
                func_0805E860((GenObj *)((u8 *)arg0 + 0x320), arg0->unk1408);
            } else {
                arg0->unk350 = func_0805E8F0((GenObj *)((u8 *)arg0 + 0x320));
            }
        }
        if (arg0->unk1424 == 0x18) {
            func_0805E8F0((GenObj *)((u8 *)arg0 + 0x390));
            func_0805E8F0((GenObj *)((u8 *)arg0 + 0x3C8));
            func_0805E8F0((GenObj *)((u8 *)arg0 + 0x400));
            func_0805E8F0((GenObj *)((u8 *)arg0 + 0x438));
        }
        var_sl_2 = 0;
        do {
            if ((u32) (arg0 + (0x2C * var_sl_2))->unk144E > 1U) {
                switch (var_sl_2) {                 /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    func_0805E8F0((GenObj *)((u8 *)arg0 + 0x470));
                    break;
                case 1:                             /* switch 1 */
                    func_0805E8F0((GenObj *)((u8 *)arg0 + 0x4A8));
                    break;
                case 2:                             /* switch 1 */
                    func_0805E8F0((GenObj *)((u8 *)arg0 + 0x4E0));
                    break;
                case 3:                             /* switch 1 */
                    func_0805E8F0((GenObj *)((u8 *)arg0 + 0x518));
                    break;
                }
            }
            var_sl_2 += 1;
        } while (var_sl_2 <= 3);
    }
    var_sl_3 = 3;
    sp78 = (GenObj *)((u8 *)arg0 + 0x320);
    sp7C = (GenObj *)((u8 *)arg0 + 0x324);
loop_35:
    sp8C = var_sl_3 * 2;
    if (arg0->unk1424 != 0x18) {

    } else {
        var_r7 = 0;
        switch (var_sl_3) {                         /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            sp68 = (GenObj *)((u8 *)arg0 + 0x390);
            var_r2_4 = 0x470;
block_48:
            var_r7 = arg0 + var_r2_4;
            break;
        case 1:                                     /* switch 2 */
            sp68 = (GenObj *)((u8 *)arg0 + 0x3C8);
            var_r7 = (GenObj *)((u8 *)arg0 + 0x4A8);
            break;
        case 2:                                     /* switch 2 */
            sp68 = (GenObj *)((u8 *)arg0 + 0x400);
            var_r7 = (GenObj *)((u8 *)arg0 + 0x4E0);
            break;
        case 3:                                     /* switch 2 */
            sp68 = (GenObj *)((u8 *)arg0 + 0x438);
            var_r2_4 = 0x518;
            goto block_48;
        }
        temp_r1_4 = sp68->unk0;
        (*temp_r1_4)->unk10(&sp40, temp_r1_4, *(sp68->unk4 + (sp68->unkC * 4)));
        memcpy(sp84, sp84, 0x20);
        temp_r0_8 = sp84 + 0xC;
        sp20.unk0 = sp84->unk0;
        sp20.unk4 = (s32) sp84->unk4;
        sp20.unk8 = (s32) sp84->unk8;
        temp_r1_5 = &(GenObj *)((u8 *)sp20 + 0xC);
        sp20.unkC = (s32) sp84->unkC;
        temp_r1_5->unk4 = (s32) temp_r0_8->unk4;
        temp_r1_5->unk8 = (s32) temp_r0_8->unk8;
        temp_r1_5->unkC = (s32) temp_r0_8->unkC;
        ((GenObj *)((u8 *)temp_r1_5 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_8 + 0xC))->unk4;
        temp_r0_9 = (GenObj *)((u8 *)sp68 + 0x14);
        temp_r0_10 = temp_r0_9 + 0xC;
        sp4 = (s32) sp68->unk14;
        sp4.unk4 = (s32) temp_r0_9->unk4;
        sp4.unk8 = (s32) temp_r0_9->unk8;
        temp_r1_6 = &(GenObj *)((u8 *)sp4 + 0xC);
        sp4.unkC = (s32) temp_r0_9->unkC;
        temp_r1_6->unk4 = (s32) temp_r0_10->unk4;
        temp_r1_6->unk8 = (s32) temp_r0_10->unk8;
        temp_r1_6->unkC = (s32) temp_r0_10->unkC;
        temp_r3_3 = 0x2C * var_sl_3;
        temp_r0_11 = (GenObj *)((u8 *)arg0 + 0x1440) + temp_r3_3;
        sp6C = temp_r0_11;
        sp70 = (GenObj *)((u8 *)arg0 + 0x13EC);
        sp4 = (u16) (temp_r0_11->unk2 - arg0->unk13EC);
        temp_r0_12 = (var_sl_3 * 0x18) + 0x3C;
        sp74 = temp_r0_12;
        sp4.unk2 = (u16) temp_r0_12;
        sp4.unk8 = 2U;
        temp_r6 = (GenObj *)((u8 *)arg0 + 0x638);
        sp4.unk4 = func_080074C0(temp_r6, temp_r6->unk4);
        temp_r0_13 = (GenObj *)((u8 *)arg0 + 0x628);
        sp4.unk6 = (u16) (*((GenObj *)((u8 *)arg0 + 0xBDA) + (*(sp68->unk4 + (sp68->unkC * 4)) * 2)) + func_08007D4C(temp_r0_13, temp_r0_13->unk4));
        sp4.unk18 = 1;
        temp_r3_4 = func_08008920(arg0);
        var_r2_5 = 0;
        sp8C = var_sl_3 * 2;
        if (sp20 != 0) {
            var_r2_5 = sp0.unk24;
        }
        func_0805E99C(temp_r3_4, sp20, var_r2_5, &sp4);
        if ((u32) (arg0 + temp_r3_3)->unk144E > 1U) {
            temp_r1_7 = var_r7->unk0;
            (*temp_r1_7)->unk10(sp84, temp_r1_7, *(var_r7->unk4 + (var_r7->unkC * 4)));
            memcpy(sp84, sp84, 0x20);
            temp_r0_14 = sp84 + 0xC;
            sp20.unk0 = sp84->unk0;
            sp20.unk4 = (s32) sp84->unk4;
            sp20.unk8 = (s32) sp84->unk8;
            temp_r1_8 = &(GenObj *)((u8 *)sp20 + 0xC);
            sp20.unkC = (s32) sp84->unkC;
            temp_r1_8->unk4 = (s32) temp_r0_14->unk4;
            temp_r1_8->unk8 = (s32) temp_r0_14->unk8;
            temp_r1_8->unkC = (s32) temp_r0_14->unkC;
            ((GenObj *)((u8 *)temp_r1_8 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_14 + 0xC))->unk4;
            temp_r0_15 = (GenObj *)((u8 *)var_r7 + 0x14);
            temp_r0_16 = temp_r0_15 + 0xC;
            sp4 = (s32) var_r7->unk14;
            sp4.unk4 = (s32) temp_r0_15->unk4;
            sp4.unk8 = (s32) temp_r0_15->unk8;
            temp_r1_9 = &(GenObj *)((u8 *)sp4 + 0xC);
            sp4.unkC = (s32) temp_r0_15->unkC;
            temp_r1_9->unk4 = (s32) temp_r0_16->unk4;
            temp_r1_9->unk8 = (s32) temp_r0_16->unk8;
            temp_r1_9->unkC = (s32) temp_r0_16->unkC;
            sp4 = (u16) ((sp6C->unk2 - *sp70) + 0x10);
            sp4.unk2 = (u16) sp74;
            sp4.unk8 = 2U;
            sp4.unk4 = func_080074C0(temp_r6, temp_r6->unk4);
            temp_r0_17 = (GenObj *)((u8 *)arg0 + 0x630);
            sp4.unk6 = (u16) (*((GenObj *)((u8 *)arg0 + 0xBE2) + (*(var_r7->unk4 + (var_r7->unkC * 4)) * 2)) + func_08007D4C(temp_r0_17, temp_r0_17->unk4));
            sp4.unk18 = 1;
            temp_r0_18 = func_08008920(arg0);
            var_r2_6 = 0;
            if (sp20 != 0) {
                var_r2_6 = sp0.unk24;
            }
            func_0805E99C(temp_r0_18, sp20, var_r2_6, &sp4);
        }
    }
    switch (var_sl_3) {                             /* switch 3; irregular */
    case 0:                                         /* switch 3 */
        sp68 = (GenObj *)((u8 *)arg0 + 0x208);
        break;
    case 1:                                         /* switch 3 */
        sp68 = (GenObj *)((u8 *)arg0 + 0x240);
        break;
    case 2:                                         /* switch 3 */
        sp68 = (GenObj *)((u8 *)arg0 + 0x2E8);
        if (arg0->unk140E == 0) {
            sp68 = (GenObj *)((u8 *)arg0 + 0x278);
        }
        break;
    case 3:                                         /* switch 3 */
        sp68 = (GenObj *)((u8 *)arg0 + 0x2B0);
        break;
    }
    temp_r1_10 = sp68->unk0;
    (*temp_r1_10)->unk10(&sp40, temp_r1_10, *(sp68->unk4 + (sp68->unkC * 4)));
    memcpy(sp84, sp84, 0x20);
    temp_r0_19 = sp84 + 0xC;
    sp20.unk0 = sp84->unk0;
    sp20.unk4 = (s32) sp84->unk4;
    sp20.unk8 = (s32) sp84->unk8;
    temp_r1_11 = &(GenObj *)((u8 *)sp20 + 0xC);
    sp20.unkC = (s32) sp84->unkC;
    temp_r1_11->unk4 = (s32) temp_r0_19->unk4;
    temp_r1_11->unk8 = (s32) temp_r0_19->unk8;
    temp_r1_11->unkC = (s32) temp_r0_19->unkC;
    ((GenObj *)((u8 *)temp_r1_11 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_19 + 0xC))->unk4;
    temp_r0_20 = (GenObj *)((u8 *)sp68 + 0x14);
    temp_r0_21 = temp_r0_20 + 0xC;
    sp4 = (s32) sp68->unk14;
    sp4.unk4 = (s32) temp_r0_20->unk4;
    sp4.unk8 = (s32) temp_r0_20->unk8;
    temp_r1_12 = &(GenObj *)((u8 *)sp4 + 0xC);
    sp4.unkC = (s32) temp_r0_20->unkC;
    temp_r1_12->unk4 = (s32) temp_r0_21->unk4;
    temp_r1_12->unk8 = (s32) temp_r0_21->unk8;
    temp_r1_12->unkC = (s32) temp_r0_21->unkC;
    sp4 = (u16) (((GenObj *)((u8 *)arg0 + 0x1440) + (0x2C * var_sl_3))->unk2 - arg0->unk13EC);
    temp_r4 = (sp8C + var_sl_3) * 8;
    sp4.unk2 = (u16) (temp_r4 + 0x3C);
    sp4.unk8 = 2U;
    temp_r0_22 = temp_r4 + (GenObj *)((u8 *)arg0 + 0x658);
    sp4.unk6 = func_08007D4C(temp_r0_22, temp_r0_22->unk4);
    sp4.unk18 = 1;
    sp88 = var_sl_3 - 1;
    if ((s32) (sp68->unk30 << 0x1E) >= 0) {

    } else {
        temp_r6_2 = func_08008910(arg0);
        temp_r0_23 = temp_r4 + (GenObj *)((u8 *)arg0 + 0x658);
        temp_r2_2 = func_08007D4C(temp_r0_23, temp_r0_23->unk4);
        var_r3 = 0;
        if (sp28 != 0) {
            var_r3 = sp0.unk2C;
        }
        func_08008F0C(sp84, sp28, (temp_r2_2 << 5) + 0x06010000, var_r3);
        temp_r1_13 = temp_r6_2->unk4;
        if (temp_r1_13 != temp_r6_2->unkC) {
            if (temp_r1_13 != 0) {
                temp_r1_13->unk0 = (void *) sp84->unk0;
                temp_r1_13->unk4 = (s32) sp84->unk4;
                temp_r1_13->unk8 = (s32) sp84->unk8;
                temp_r1_13->unkC = (s32) sp84->unkC;
            }
            temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
        } else {
            sp98 = temp_r1_13;
            sp64 = 1;
            temp_r4_2 = (s32) (temp_r1_13 - temp_r6_2->unk0) >> 4;
            sp60 = temp_r4_2;
            var_r0 = &sp60;
            if ((u32) temp_r4_2 < 1U) {
                var_r0 = &sp64;
            }
            temp_r0_24 = temp_r4_2 + *var_r0;
            if (temp_r0_24 != 0) {
                temp_r4_3 = temp_r0_24 * 0x10;
                var_r0_2 = malloc(temp_r4_3);
                sp80 = temp_r4_3;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(temp_r4_3);
                }
            } else {
                var_r0_2 = 0;
                sp80 = 0;
            }
            var_r2_7 = temp_r6_2->unk0;
            var_ip = var_r0_2;
            sp88 = var_sl_3 - 1;
            if (var_r2_7 != sp98) {
                do {
                    if (var_ip != 0) {
                        var_ip->unk0 = (s32) var_r2_7->unk0;
                        var_ip->unk4 = (s32) var_r2_7->unk4;
                        var_ip->unk8 = (s32) var_r2_7->unk8;
                        var_ip->unkC = (s32) var_r2_7->unkC;
                    }
                    var_r2_7 += 0x10;
                    var_ip += 0x10;
                } while (var_r2_7 != sp98);
            }
            if (sp64 == 1) {
                if (var_ip != 0) {
                    var_ip->unk0 = (s32) sp40;
                    var_ip->unk4 = (s32) sp40.unk4;
                    var_ip->unk8 = (s32) sp40.unk8;
                    var_ip->unkC = (s32) sp40.unkC;
                }
                var_r4 = (GenObj *)((u8 *)var_ip + 0x10);
            } else {
                var_ip_2 = sp64;
                var_r2_8 = var_ip;
                if (sp64 != 0) {
                    do {
                        if (var_r2_8 != 0) {
                            var_r2_8->unk0 = (s32) sp40;
                            var_r2_8->unk4 = (s32) sp40.unk4;
                            var_r2_8->unk8 = (s32) sp40.unk8;
                            var_r2_8->unkC = (s32) sp40.unkC;
                        }
                        var_ip_2 -= 1;
                        var_r2_8 += 0x10;
                    } while (var_ip_2 != 0);
                }
                var_r4 = var_r2_8;
            }
            temp_r2_3 = temp_r6_2->unk4;
            temp_r0_25 = temp_r6_2->unk0;
            var_r1 = temp_r0_25;
            if (temp_r0_25 != temp_r2_3) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_3);
            }
            if (temp_r0_25 != 0) {
                free();
            }
            temp_r6_2->unk0 = var_r0_2;
            temp_r6_2->unk4 = var_r4;
            temp_r6_2->unkC = (void *) (sp80 + var_r0_2);
        }
    }
    var_r2_9 = 0;
    if (sp20 != 0) {
        var_r2_9 = sp0.unk24;
    }
    sp0 = arg0 + (((sp8C + var_sl_3) * 8) + 0x658);
    func_0805C63C(arg0, sp20, var_r2_9, &sp4);
    if ((arg0->unk140E != 0) && (var_sl_3 == 2)) {
        temp_r1_14 = sp78->unk0;
        (*temp_r1_14)->unk10(&sp40, temp_r1_14, *(*sp7C + (sp78->unkC * 4)));
        memcpy(sp84, sp84, 0x20);
        temp_r0_26 = sp84 + 0xC;
        sp20.unk0 = sp84->unk0;
        sp20.unk4 = (s32) sp84->unk4;
        sp20.unk8 = (s32) sp84->unk8;
        temp_r1_15 = &(GenObj *)((u8 *)sp20 + 0xC);
        sp20.unkC = (s32) sp84->unkC;
        temp_r1_15->unk4 = (s32) temp_r0_26->unk4;
        temp_r1_15->unk8 = (s32) temp_r0_26->unk8;
        temp_r1_15->unkC = (s32) temp_r0_26->unkC;
        ((GenObj *)((u8 *)temp_r1_15 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_26 + 0xC))->unk4;
        temp_r0_27 = (GenObj *)((u8 *)arg0 + 0x334);
        temp_r0_28 = (GenObj *)((u8 *)temp_r0_27 + 0xC);
        sp4 = (s32) arg0->unk334;
        sp4.unk4 = (s32) temp_r0_27->unk4;
        sp4.unk8 = (s32) temp_r0_27->unk8;
        temp_r1_16 = &(GenObj *)((u8 *)sp4 + 0xC);
        sp4.unkC = (s32) temp_r0_27->unkC;
        temp_r1_16->unk4 = (s32) temp_r0_28->unk4;
        temp_r1_16->unk8 = (s32) temp_r0_28->unk8;
        temp_r1_16->unkC = (s32) temp_r0_28->unkC;
        sp4 = (u16) ((((GenObj *)((u8 *)arg0 + 0x1498))->unk2 - arg0->unk13EC) - 0x27);
        sp4.unk2 = 0x4CU;
        temp_r0_29 = (GenObj *)((u8 *)arg0 + 0x5E8);
        sp4.unk4 = func_080074C0(temp_r0_29, temp_r0_29->unk4);
        sp4.unk8 = (u16) var_sl_3;
        sp4.unk18 = 1;
        temp_r0_30 = (GenObj *)((u8 *)arg0 + 0x5E0);
        sp4.unk6 = (u16) (func_08007D4C(temp_r0_30, temp_r0_30->unk4) + (*(*sp7C + (sp78->unkC * 4)) * 4));
        temp_r0_31 = func_08008920(arg0);
        var_r2_10 = 0;
        if (sp20 != 0) {
            var_r2_10 = sp0.unk24;
        }
        func_0805E99C(temp_r0_31, sp20, var_r2_10, &sp4);
    }
    temp_r1_17 = arg0->unk588;
    (*temp_r1_17)->unk10(&sp40, temp_r1_17, *(*sp90 + (((GenObj *)((u8 *)arg0 + 0x588))->unkC * 4)));
    memcpy(sp84, sp84, 0x20);
    temp_r0_32 = sp84 + 0xC;
    sp20.unk0 = sp84->unk0;
    sp20.unk4 = (s32) sp84->unk4;
    sp20.unk8 = (s32) sp84->unk8;
    temp_r1_18 = &(GenObj *)((u8 *)sp20 + 0xC);
    sp20.unkC = (s32) sp84->unkC;
    temp_r1_18->unk4 = (s32) temp_r0_32->unk4;
    temp_r1_18->unk8 = (s32) temp_r0_32->unk8;
    temp_r1_18->unkC = (s32) temp_r0_32->unkC;
    ((GenObj *)((u8 *)temp_r1_18 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_32 + 0xC))->unk4;
    temp_r0_33 = (GenObj *)((u8 *)arg0 + 0x59C);
    temp_r0_34 = (GenObj *)((u8 *)temp_r0_33 + 0xC);
    sp4 = (s32) arg0->unk59C;
    sp4.unk4 = (s32) temp_r0_33->unk4;
    sp4.unk8 = (s32) temp_r0_33->unk8;
    temp_r1_19 = &(GenObj *)((u8 *)sp4 + 0xC);
    sp4.unkC = (s32) temp_r0_33->unkC;
    temp_r1_19->unk4 = (s32) temp_r0_34->unk4;
    temp_r1_19->unk8 = (s32) temp_r0_34->unk8;
    temp_r1_19->unkC = (s32) temp_r0_34->unkC;
    sp4 = (u16) (((GenObj *)((u8 *)arg0 + 0x1440) + (0x2C * var_sl_3))->unk2 - arg0->unk13EC);
    sp4.unk2 = (u16) (((sp8C + var_sl_3) * 8) + 0x3C);
    sp4.unk8 = 2U;
    temp_r0_35 = (GenObj *)((u8 *)arg0 + 0x5D8);
    sp4.unk4 = func_080074C0(temp_r0_35, temp_r0_35->unk4);
    temp_r0_36 = (GenObj *)((u8 *)arg0 + 0x650);
    sp4.unk6 = func_08007D4C(temp_r0_36, temp_r0_36->unk4);
    sp4.unk18 = 1;
    temp_r3_5 = func_08008920(arg0);
    var_r2_11 = 0;
    if (sp20 != 0) {
        var_r2_11 = sp0.unk24;
    }
    func_0805E99C(temp_r3_5, sp20, var_r2_11, &sp4);
    var_sl_3 = sp88;
    if (sp88 >= 0) {
        goto loop_35;
    }
    var_sl_4 = 0;
    do {
        temp_r6_3 = var_sl_4 * 4;
        sp9C = temp_r6_3;
        temp_r0_37 = (GenObj *)((u8 *)arg0 + 0x6B8) + temp_r6_3;
        spA0 = temp_r0_37;
        if (*temp_r0_37 != -1) {
            temp_r4_4 = var_sl_4 & 1;
            func_0805E790(sp84, (GenObj *)((u8 *)arg0 + 0x50), temp_r4_4);
            temp_r0_38 = sp84 + 0xC;
            sp20.unk0 = sp84->unk0;
            sp20.unk4 = (s32) sp84->unk4;
            sp20.unk8 = (s32) sp84->unk8;
            temp_r1_20 = &(GenObj *)((u8 *)sp20 + 0xC);
            sp20.unkC = (s32) sp84->unkC;
            temp_r1_20->unk4 = (s32) temp_r0_38->unk4;
            temp_r1_20->unk8 = (s32) temp_r0_38->unk8;
            temp_r1_20->unkC = (s32) temp_r0_38->unkC;
            ((GenObj *)((u8 *)temp_r1_20 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_38 + 0xC))->unk4;
            sp4 = (u16) ((u16) *spA0 - arg0->unk13EC);
            sp4.unk2 = (u16) *((u8 *)(GenObj *)((u8 *)arg0 + 0x6BA) + sp9C);
            temp_r0_39 = (GenObj *)((u8 *)arg0 + 0x5D8);
            sp4.unk4 = func_080074C0(temp_r0_39, temp_r0_39->unk4);
            temp_r0_40 = (GenObj *)((u8 *)arg0 + 0x5D0);
            sp4.unk6 = (u16) (func_08007D4C(temp_r0_40, temp_r0_40->unk4) + (temp_r4_4 * 8));
            sp4.unk8 = 2U;
            sp4.unk18 = 1;
            temp_r3_6 = func_08008920(arg0);
            var_r2_12 = 0;
            if (sp20 != 0) {
                var_r2_12 = sp0.unk24;
            }
            func_0805E99C(temp_r3_6, sp20, var_r2_12, &sp4);
        }
        var_sl_4 += 1;
    } while (var_sl_4 <= 0x1F);
}

