#include "common.h"
s32 __builtin_delete();                               /* extern */
? *__builtin_new(s32);                              /* extern */
s32 free();                                           /* extern */
s32 func_08007874(s32 *);                               /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007B54(s32 *, s32);                        /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s32 func_08007D4C(s32 *);                             /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088D4(void *);                          /* extern */
void *func_08008910(void *, s32);                   /* extern */
u8 *func_08008920(void *);                          /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008EB8(s32, ? *, s32);                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0800934C(s32 *, s32, s32, s32);              /* extern */
s32 func_08009378(void *, s32, s32);                  /* extern */
void *func_0805E824(s32 *, void **, s32, s32);        /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(u8 *, s32, u16, ? *);               /* extern */
s32 func_080B7164(void *, s32);                       /* extern */
s32 func_080B757C(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
u32 strlen(void *);                                 /* extern */

void func_080B5824(void *arg0) {
s32 sp0;
s32 sp30;
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
    s32 sp5C;
s32 sp60;
s32 spA0;
s32 spB0;
    u32 spD0;
    u32 spD4;
    u32 spD8;
    u32 spDC;
    u32 spE0;
    u32 spE4;
    u32 spE8;
    u32 spEC;
    u32 spF0;
    u32 spF4;
    u32 spF8;
    u32 spFC;
    u32 sp100;
    u32 sp104;
    u32 sp108;
    u32 sp10C;
    u32 sp110;
    u32 sp114;
    u32 sp118;
    u32 sp11C;
    u32 sp120;
    u32 sp124;
    u32 sp128;
    u32 sp12C;
    u32 sp130;
    u32 sp134;
    void *sp138;
    s32 sp13C;
    s32 sp140;
    s32 sp144;
    s32 sp148;
    s32 sp14C;
    s32 sp150;
    s32 sp154;
    s32 sp158;
    s32 **sp15C;
    void **sp160;
    ? *sp164;
    s32 sp168;
    ? *sp16C;
    s32 sp170;
    s32 sp174;
    s32 sp178;
    s32 sp17C;
    ? *sp180;
    void *sp184;
    void *sp188;
    void *sp18C;
    s32 sp190;
    ? **sp194;
    s32 sp198;
    void *sp19C;
    void *sp1A0;
    ? **var_r6_2;
    ? *temp_r0_12;
    ? *temp_r0_25;
    ? *temp_r0_2;
    ? *temp_r0_36;
    ? *temp_r0_47;
    ? *temp_r0_49;
    ? *var_r4;
    ? *var_r4_2;
    ? *var_r4_3;
    s32 *temp_r2_12;
    s32 temp_r0_16;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_21;
    s32 temp_r0_22;
    s32 temp_r0_29;
    s32 temp_r0_31;
    s32 temp_r0_32;
    s32 temp_r0_40;
    s32 temp_r0_43;
    s32 temp_r0_54;
    s32 temp_r0_55;
    s32 temp_r0_56;
    s32 temp_r0_59;
    s32 temp_r0_60;
    s32 temp_r0_63;
    s32 temp_r0_69;
    s32 temp_r0_6;
    s32 temp_r0_72;
    s32 temp_r0_73;
    s32 temp_r0_76;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r1_17;
    s32 temp_r1_24;
    s32 temp_r1_27;
    s32 temp_r1_28;
    s32 temp_r1_29;
    s32 temp_r1_2;
    s32 temp_r1_30;
    s32 temp_r1_31;
    s32 temp_r1_39;
    s32 temp_r1_8;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_3;
    s32 temp_r4_41;
    s32 temp_r4_42;
    s32 temp_r4_4;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r5_3;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    s32 var_r8_10;
    s32 var_r8_11;
    s32 var_r8_12;
    s32 var_r8_13;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_r8_9;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    s32 var_sb_7;
    s8 var_r0;
    u16 var_r2_19;
    u16 var_r2_20;
    u16 var_r2_21;
    u16 var_r2_22;
    u16 var_r2_23;
    u16 var_r2_28;
    u16 var_r2_33;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_13;
    u16 var_r3_16;
    u16 var_r3_19;
    u16 var_r3_22;
    u16 var_r3_25;
    u16 var_r3_28;
    u16 var_r3_31;
    u16 var_r3_34;
    u16 var_r3_37;
    u16 var_r3_4;
    u16 var_r3_7;
    u32 *var_r0_10;
    u32 *var_r0_12;
    u32 *var_r0_15;
    u32 *var_r0_17;
    u32 *var_r0_19;
    u32 *var_r0_21;
    u32 *var_r0_23;
    u32 *var_r0_25;
    u32 *var_r0_2;
    u32 *var_r0_4;
    u32 *var_r0_6;
    u32 *var_r0_8;
    u32 *var_r1_7;
    u32 temp_r0_33;
    u32 temp_r0_41;
    u32 temp_r0_44;
    u32 temp_r0_61;
    u32 temp_r0_64;
    u32 temp_r0_70;
    u32 temp_r0_74;
    u32 temp_r1_10;
    u32 temp_r1_12;
    u32 temp_r1_15;
    u32 temp_r1_19;
    u32 temp_r1_4;
    u32 temp_r1_6;
    u32 var_r3_12;
    u32 var_r3_15;
    u32 var_r3_18;
    u32 var_r3_21;
    u32 var_r3_24;
    u32 var_r3_27;
    u32 var_r3_30;
    u32 var_r3_33;
    u32 var_r3_36;
    u32 var_r3_39;
    u32 var_r3_3;
    u32 var_r3_6;
    u32 var_r3_9;
    u8 *temp_r0_52;
    u8 *temp_r3;
    u8 *temp_r4_29;
    u8 *temp_r4_30;
    u8 *temp_r4_31;
    u8 *temp_r4_43;
    u8 *temp_r5_2;
    u8 *temp_r6;
    u8 temp_r2_13;
    void **temp_r1;
    void **temp_r1_13;
    void **temp_r1_16;
    void **temp_r1_21;
    void **temp_r1_32;
    void **temp_r1_35;
    void **temp_r1_7;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_17;
    void *temp_r0_20;
    void *temp_r0_23;
    void *temp_r0_24;
    void *temp_r0_26;
    void *temp_r0_27;
    void *temp_r0_28;
    void *temp_r0_30;
    void *temp_r0_34;
    void *temp_r0_35;
    void *temp_r0_37;
    void *temp_r0_38;
    void *temp_r0_39;
    void *temp_r0_3;
    void *temp_r0_42;
    void *temp_r0_45;
    void *temp_r0_46;
    void *temp_r0_48;
    void *temp_r0_4;
    void *temp_r0_50;
    void *temp_r0_51;
    void *temp_r0_53;
    void *temp_r0_57;
    void *temp_r0_58;
    void *temp_r0_5;
    void *temp_r0_62;
    void *temp_r0_65;
    void *temp_r0_66;
    void *temp_r0_67;
    void *temp_r0_68;
    void *temp_r0_71;
    void *temp_r0_75;
    void *temp_r0_7;
    void *temp_r1_11;
    void *temp_r1_14;
    void *temp_r1_18;
    void *temp_r1_20;
    void *temp_r1_22;
    void *temp_r1_23;
    void *temp_r1_25;
    void *temp_r1_26;
    void *temp_r1_33;
    void *temp_r1_34;
    void *temp_r1_36;
    void *temp_r1_37;
    void *temp_r1_38;
    void *temp_r1_3;
    void *temp_r1_40;
    void *temp_r1_41;
    void *temp_r1_5;
    void *temp_r1_9;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_14;
    void *temp_r2_15;
    void *temp_r2_16;
    void *temp_r2_17;
    void *temp_r2_18;
    void *temp_r2_19;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;
    void *temp_r4;
    void *temp_r4_12;
    void *temp_r4_17;
    void *temp_r4_18;
    void *temp_r4_21;
    void *temp_r4_2;
    void *temp_r4_32;
    void *temp_r4_33;
    void *temp_r4_40;
    void *temp_r4_5;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *var_r0_11;
    void *var_r0_13;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_18;
    void *var_r0_20;
    void *var_r0_22;
    void *var_r0_24;
    void *var_r0_26;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r0_9;
    void *var_r1;
    void *var_r1_10;
    void *var_r1_11;
    void *var_r1_12;
    void *var_r1_13;
    void *var_r1_14;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_8;
    void *var_r1_9;
    void *var_r2;
    void *var_r2_10;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_14;
    void *var_r2_15;
    void *var_r2_16;
    void *var_r2_17;
    void *var_r2_18;
    void *var_r2_24;
    void *var_r2_25;
    void *var_r2_26;
    void *var_r2_27;
    void *var_r2_29;
    void *var_r2_2;
    void *var_r2_30;
    void *var_r2_31;
    void *var_r2_32;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3_11;
    void *var_r3_14;
    void *var_r3_17;
    void *var_r3_20;
    void *var_r3_23;
    void *var_r3_26;
    void *var_r3_29;
    void *var_r3_2;
    void *var_r3_32;
    void *var_r3_35;
    void *var_r3_38;
    void *var_r3_5;
    void *var_r3_8;
    void *var_r4_4;
    void *var_r5_10;
    void *var_r5_11;
    void *var_r5_12;
    void *var_r5_13;
    void *var_r5_14;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;
    void *var_r5_9;

    sp138 = arg0;
    func_08007874(&sp30);
    sp30.unk4 = 0;
    func_08007874(&sp38);
    sp38.unk4 = 0;
    func_08007874();
    sp40.unk4 = 0;
    func_08007874(&sp48);
    sp48.unk4 = 0;
    func_08007874(&sp50);
    sp50.unk4 = 0;
    func_08007874(&sp58);
    sp58.unk4 = 0;
    func_08007C28(&sp30, sp34);
    sp34 = func_08007B54(&sp30, 6);
    sp13C = func_08007D4C(&sp30);
    func_08007C28(&sp38, sp3C);
    sp3C = func_08007B54(&sp38, 5);
    sp140 = func_08007D4C(&sp38);
    func_08007C28(&sp40, sp44);
    sp44 = func_08007B54(&sp40, 8);
    sp144 = func_08007D4C(&sp40);
    func_08007C28(&sp48, sp4C);
    sp4C = func_08007B54(&sp48, 3);
    sp148 = func_08007D4C(&sp48);
    func_08007C28(&sp50, sp54);
    sp54 = func_08007B54(&sp50, 7);
    sp14C = func_08007D4C(&sp50);
    func_08007C28(&sp58, sp5C);
    sp5C = func_08007B54(&sp58, 6);
    sp150 = func_08007D4C(&sp58);
    func_080B757C(sp138);
    func_080B7164(sp138, sp13C);
    sp180 = &sp0 + 0x60;
    sp184 = &sp0 + 0x80;
    sp188 = &sp0 + 0x88;
    sp164 = &sp0 + 0xA0;
    sp16C = &sp0 + 0xB0;
    var_r4 = &sp0;
    var_sb = 5;
    do {
        func_08008EB8(0, var_r4, 8);
        var_r4 += 8;
        var_sb -= 1;
    } while (var_sb >= 0);
    var_sb_2 = 0;
    sp17C = sp144 << 5;
    sp168 = sp144 + 0x6E;
    sp170 = sp144 + 0xDC;
    var_r4_2 = &sp0;
    var_r6 = 0x58;
    var_r5 = 0x38;
    do {
        var_r4_2->unk3 = (u8) ((0x3F & var_r4_2->unk3) | 0x80);
        var_r4_2->unk5 = (u8) (0xF & var_r4_2->unk5);
        var_r4_2->unk4 = (u16) ((var_r4_2->unk4 & 0xFFFFFC00) | (((var_sb_2 * 8) + sp13C) & 0x3FF));
        var_r4_2->unk1 = (u8) ((0x3F & var_r4_2->unk1) | 0x40 | 0x10);
        if (var_sb_2 <= 2) {
            var_r4_2->unk2 = (u16) ((var_r4_2->unk2 & 0xFFFFFE00) | ((var_r5 - ((strlen(sp138 + 0x9E) >> 1) * 8)) & 0x1FF));
            var_r0 = 0x30;
        } else {
            var_r4_2->unk2 = (u16) ((var_r4_2->unk2 & 0xFFFFFE00) | ((var_r6 - ((strlen(sp138 + 0xDE) >> 1) * 8)) & 0x1FF));
            var_r0 = 0x88;
        }
        var_r4_2->unk0 = var_r0;
        var_r4_2 += 8;
        var_r6 += 0x20;
        var_r5 += 0x20;
        var_sb_2 += 1;
    } while (var_sb_2 <= 5);
    temp_r0 = func_0805E824(__builtin_new(0x14), sp138->unk788, 0, 0x100);
    if (temp_r0 != sp138->unk96C) {
        __builtin_delete();
    }
    sp138->unk96C = temp_r0;
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
    if (temp_r0_2 != sp138->unk970) {
        __builtin_delete();
    }
    sp138->unk970 = temp_r0_2;
    func_0805E860(sp138->unk96C, sp138->unkB18);
    sp138->unk970->unk0 = 0x60;
    sp138->unk970->unk2 = 0xA;
    sp138->unk970->unk6 = (u16) sp140;
    sp138->unk970->unk4 = 1;
    sp138->unk970->unk18 = 1;
    temp_r4 = sp138 + 0x974;
    temp_r0_3 = sp138->unk96C;
    temp_r1 = temp_r0_3->unk0;
    (*temp_r1)->unk10(&sp60, temp_r1, *(temp_r0_3->unk4 + (temp_r0_3->unkC * 4)));
    memcpy(sp180, sp180, 0x20);
    temp_r0_4 = sp180 + 0xC;
    sp138->unk974 = (s32) sp180->unk0;
    temp_r4->unk4 = (s32) sp180->unk4;
    temp_r4->unk8 = (s32) sp180->unk8;
    temp_r4_2 = temp_r4 + 0xC;
    temp_r4->unkC = (s32) sp180->unkC;
    temp_r4_2->unk4 = (s32) temp_r0_4->unk4;
    temp_r4_2->unk8 = (s32) temp_r0_4->unk8;
    temp_r4_2->unkC = (s32) temp_r0_4->unkC;
    (temp_r4_2 + 0xC)->unk4 = (s32) (temp_r0_4 + 0xC)->unk4;
    temp_r0_5 = func_08008910(sp138);
    temp_r1_2 = sp138->unk97C;
    var_r3 = 0;
    if (temp_r1_2 != 0) {
        var_r3 = (sp138 + 0x97C)->unk4;
    }
    func_08008F0C(sp180, temp_r1_2, (sp140 << 5) + 0x06010000, var_r3);
    temp_r1_3 = temp_r0_5->unk4;
    if (temp_r1_3 != temp_r0_5->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp180->unk0;
            temp_r1_3->unk4 = (s32) sp180->unk4;
            temp_r1_3->unk8 = (s32) sp180->unk8;
            temp_r1_3->unkC = (s32) sp180->unkC;
        }
        temp_r0_5->unk4 = (void *) (temp_r0_5->unk4 + 0x10);
    } else {
        sp19C = temp_r1_3;
        spD4 = 1;
        temp_r4_3 = (s32) (sp19C - temp_r0_5->unk0) >> 4;
        var_r0_2 = &spD0;
        *var_r0_2 = (u32) temp_r4_3;
        if ((u32) temp_r4_3 < (u32) spD4) {
            var_r0_2 = &spD4;
        }
        temp_r0_6 = temp_r4_3 + *var_r0_2;
        if (temp_r0_6 != 0) {
            temp_r4_4 = temp_r0_6 * 0x10;
            var_r0_3 = malloc(temp_r4_4);
            var_r8 = temp_r4_4;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_3 = 0;
            var_r8 = 0;
        }
        sp1A0 = var_r0_3;
        var_r2 = temp_r0_5->unk0;
        var_r3_2 = var_r0_3;
        if (var_r2 != sp19C) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != sp19C);
        }
        temp_r1_4 = spD4;
        if (temp_r1_4 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp180->unk0;
                var_r3_2->unk4 = (s32) sp180->unk4;
                var_r3_2->unk8 = (s32) sp180->unk8;
                var_r3_2->unkC = (s32) sp180->unkC;
            }
            var_r5_2 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = temp_r1_4;
            var_r2_2 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp180->unk0;
                        var_r2_2->unk4 = (s32) sp180->unk4;
                        var_r2_2->unk8 = (s32) sp180->unk8;
                        var_r2_2->unkC = (s32) sp180->unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r5_2 = var_r2_2;
        }
        temp_r2 = temp_r0_5->unk4;
        temp_r0_7 = temp_r0_5->unk0;
        var_r1 = temp_r0_7;
        if (temp_r0_7 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        temp_r0_5->unk0 = sp1A0;
        temp_r0_5->unk4 = var_r5_2;
        temp_r0_5->unkC = (void *) (sp1A0 + var_r8);
    }
    temp_r4_5 = func_08008910(sp138);
    temp_r0_8 = sp138->unk984;
    var_r3_4 = 0;
    if (temp_r0_8 != 0) {
        var_r3_4 = (sp138 + 0x984)->unk4;
    }
    func_08008F0C(&sp60, temp_r0_8, 0x05000220, var_r3_4);
    temp_r1_5 = temp_r4_5->unk4;
    if (temp_r1_5 != temp_r4_5->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) sp180->unk0;
            temp_r1_5->unk4 = (s32) sp180->unk4;
            temp_r1_5->unk8 = (s32) sp180->unk8;
            temp_r1_5->unkC = (s32) sp180->unkC;
        }
        temp_r4_5->unk4 = (void *) (temp_r4_5->unk4 + 0x10);
    } else {
        sp19C = temp_r1_5;
        spDC = 1;
        temp_r4_6 = (s32) (sp19C - temp_r4_5->unk0) >> 4;
        var_r0_4 = &spD8;
        *var_r0_4 = (u32) temp_r4_6;
        if ((u32) temp_r4_6 < (u32) spDC) {
            var_r0_4 = &spDC;
        }
        temp_r0_9 = temp_r4_6 + *var_r0_4;
        if (temp_r0_9 != 0) {
            temp_r4_7 = temp_r0_9 * 0x10;
            var_r0_5 = malloc(temp_r4_7);
            var_r8_2 = temp_r4_7;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_5 = 0;
            var_r8_2 = 0;
        }
        sp1A0 = var_r0_5;
        var_r2_3 = temp_r4_5->unk0;
        var_r3_5 = var_r0_5;
        if (var_r2_3 != sp19C) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_3->unk0;
                    var_r3_5->unk4 = (s32) var_r2_3->unk4;
                    var_r3_5->unk8 = (s32) var_r2_3->unk8;
                    var_r3_5->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_3 != sp19C);
        }
        temp_r1_6 = spDC;
        if (temp_r1_6 == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp180->unk0;
                var_r3_5->unk4 = (s32) sp180->unk4;
                var_r3_5->unk8 = (s32) sp180->unk8;
                var_r3_5->unkC = (s32) sp180->unkC;
            }
            var_r5_3 = var_r3_5 + 0x10;
        } else {
            var_r3_6 = temp_r1_6;
            var_r2_4 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp180->unk0;
                        var_r2_4->unk4 = (s32) sp180->unk4;
                        var_r2_4->unk8 = (s32) sp180->unk8;
                        var_r2_4->unkC = (s32) sp180->unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5_3 = var_r2_4;
        }
        temp_r2_2 = temp_r4_5->unk4;
        temp_r0_10 = temp_r4_5->unk0;
        var_r1_2 = temp_r0_10;
        if (temp_r0_10 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_10 != 0) {
            free();
        }
        temp_r4_5->unk0 = sp1A0;
        temp_r4_5->unk4 = var_r5_3;
        temp_r4_5->unkC = (void *) (sp1A0 + var_r8_2);
    }
    temp_r0_11 = func_0805E824(__builtin_new(0x14), sp138->unk78C, 0, 0x100);
    if (temp_r0_11 != sp138->unk994) {
        __builtin_delete();
    }
    sp138->unk994 = temp_r0_11;
    temp_r0_12 = __builtin_new(0x1C);
    temp_r0_12->unk0 = 0;
    temp_r0_12->unk2 = 0;
    temp_r0_12->unk4 = 0;
    temp_r0_12->unk6 = 0;
    temp_r0_12->unk8 = 0;
    temp_r0_12->unkC = 0;
    temp_r0_12->unk10 = 0;
    temp_r0_12->unk11 = 0;
    temp_r0_12->unk14 = 0;
    temp_r0_12->unk18 = 0;
    if (temp_r0_12 != sp138->unk998) {
        __builtin_delete();
    }
    sp138->unk998 = temp_r0_12;
    func_0805E860(sp138->unk994, 0);
    sp138->unk998->unk0 = 0x10;
    sp138->unk998->unk2 = 0x4A;
    sp138->unk998->unk6 = (u16) sp144;
    sp138->unk998->unk4 = 2;
    sp138->unk998->unk18 = 1;
    temp_r4_8 = sp138 + 0x99C;
    temp_r0_13 = sp138->unk994;
    temp_r1_7 = temp_r0_13->unk0;
    (*temp_r1_7)->unk10(&sp60, temp_r1_7, *(temp_r0_13->unk4 + (temp_r0_13->unkC * 4)));
    memcpy(sp180, sp180, 0x20);
    temp_r0_14 = sp180 + 0xC;
    sp138->unk99C = (s32) sp180->unk0;
    temp_r4_8->unk4 = (s32) sp180->unk4;
    temp_r4_8->unk8 = (s32) sp180->unk8;
    temp_r4_9 = temp_r4_8 + 0xC;
    temp_r4_8->unkC = (s32) sp180->unkC;
    temp_r4_9->unk4 = (s32) temp_r0_14->unk4;
    temp_r4_9->unk8 = (s32) temp_r0_14->unk8;
    temp_r4_9->unkC = (s32) temp_r0_14->unkC;
    (temp_r4_9 + 0xC)->unk4 = (s32) (temp_r0_14 + 0xC)->unk4;
    temp_r0_15 = func_08008910(sp138);
    temp_r1_8 = sp138->unk9A4;
    var_r3_7 = 0;
    if (temp_r1_8 != 0) {
        var_r3_7 = (sp138 + 0x9A4)->unk4;
    }
    func_08008F0C(sp180, temp_r1_8, sp17C + 0x06010000, var_r3_7);
    temp_r1_9 = temp_r0_15->unk4;
    if (temp_r1_9 != temp_r0_15->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) sp180->unk0;
            temp_r1_9->unk4 = (s32) sp180->unk4;
            temp_r1_9->unk8 = (s32) sp180->unk8;
            temp_r1_9->unkC = (s32) sp180->unkC;
        }
        temp_r0_15->unk4 = (void *) (temp_r0_15->unk4 + 0x10);
    } else {
        sp19C = temp_r1_9;
        spE4 = 1;
        temp_r4_10 = (s32) (sp19C - temp_r0_15->unk0) >> 4;
        var_r0_6 = &spE0;
        *var_r0_6 = (u32) temp_r4_10;
        if ((u32) temp_r4_10 < (u32) spE4) {
            var_r0_6 = &spE4;
        }
        temp_r0_16 = temp_r4_10 + *var_r0_6;
        if (temp_r0_16 != 0) {
            temp_r4_11 = temp_r0_16 * 0x10;
            var_r0_7 = malloc(temp_r4_11);
            var_r8_3 = temp_r4_11;
            if (var_r0_7 == 0) {
                var_r0_7 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_7 = 0;
            var_r8_3 = 0;
        }
        sp1A0 = var_r0_7;
        var_r2_5 = temp_r0_15->unk0;
        var_r3_8 = var_r0_7;
        if (var_r2_5 != sp19C) {
            do {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) var_r2_5->unk0;
                    var_r3_8->unk4 = (s32) var_r2_5->unk4;
                    var_r3_8->unk8 = (s32) var_r2_5->unk8;
                    var_r3_8->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_8 += 0x10;
            } while (var_r2_5 != sp19C);
        }
        temp_r1_10 = spE4;
        if (temp_r1_10 == 1) {
            if (var_r3_8 != 0) {
                var_r3_8->unk0 = (s32) sp180->unk0;
                var_r3_8->unk4 = (s32) sp180->unk4;
                var_r3_8->unk8 = (s32) sp180->unk8;
                var_r3_8->unkC = (s32) sp180->unkC;
            }
            var_r5_4 = var_r3_8 + 0x10;
        } else {
            var_r3_9 = temp_r1_10;
            var_r2_6 = var_r3_8;
            if (var_r3_9 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) sp180->unk0;
                        var_r2_6->unk4 = (s32) sp180->unk4;
                        var_r2_6->unk8 = (s32) sp180->unk8;
                        var_r2_6->unkC = (s32) sp180->unkC;
                    }
                    var_r3_9 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_9 != 0);
            }
            var_r5_4 = var_r2_6;
        }
        temp_r2_3 = temp_r0_15->unk4;
        temp_r0_17 = temp_r0_15->unk0;
        var_r1_3 = temp_r0_17;
        if (temp_r0_17 != temp_r2_3) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0_17 != 0) {
            free();
        }
        temp_r0_15->unk0 = sp1A0;
        temp_r0_15->unk4 = var_r5_4;
        temp_r0_15->unkC = (void *) (sp1A0 + var_r8_3);
    }
    temp_r4_12 = func_08008910(sp138);
    temp_r0_18 = sp138->unk9AC;
    var_r3_10 = 0;
    if (temp_r0_18 != 0) {
        var_r3_10 = (sp138 + 0x9AC)->unk4;
    }
    func_08008F0C(&sp60, temp_r0_18, 0x05000240, var_r3_10);
    temp_r1_11 = temp_r4_12->unk4;
    if (temp_r1_11 != temp_r4_12->unkC) {
        if (temp_r1_11 != 0) {
            temp_r1_11->unk0 = (s32) sp180->unk0;
            temp_r1_11->unk4 = (s32) sp180->unk4;
            temp_r1_11->unk8 = (s32) sp180->unk8;
            temp_r1_11->unkC = (s32) sp180->unkC;
        }
        temp_r4_12->unk4 = (void *) (temp_r4_12->unk4 + 0x10);
    } else {
        sp19C = temp_r1_11;
        spEC = 1;
        temp_r4_13 = (s32) (sp19C - temp_r4_12->unk0) >> 4;
        var_r0_8 = &spE8;
        *var_r0_8 = (u32) temp_r4_13;
        if ((u32) temp_r4_13 < (u32) spEC) {
            var_r0_8 = &spEC;
        }
        temp_r0_19 = temp_r4_13 + *var_r0_8;
        if (temp_r0_19 != 0) {
            temp_r4_14 = temp_r0_19 * 0x10;
            var_r0_9 = malloc(temp_r4_14);
            var_r8_4 = temp_r4_14;
            if (var_r0_9 == 0) {
                var_r0_9 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_9 = 0;
            var_r8_4 = 0;
        }
        sp1A0 = var_r0_9;
        var_r2_7 = temp_r4_12->unk0;
        var_r3_11 = var_r0_9;
        if (var_r2_7 != sp19C) {
            do {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (s32) var_r2_7->unk0;
                    var_r3_11->unk4 = (s32) var_r2_7->unk4;
                    var_r3_11->unk8 = (s32) var_r2_7->unk8;
                    var_r3_11->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_11 += 0x10;
            } while (var_r2_7 != sp19C);
        }
        temp_r1_12 = spEC;
        if (temp_r1_12 == 1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) sp180->unk0;
                var_r3_11->unk4 = (s32) sp180->unk4;
                var_r3_11->unk8 = (s32) sp180->unk8;
                var_r3_11->unkC = (s32) sp180->unkC;
            }
            var_r5_5 = var_r3_11 + 0x10;
        } else {
            var_r3_12 = temp_r1_12;
            var_r2_8 = var_r3_11;
            if (var_r3_12 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) sp180->unk0;
                        var_r2_8->unk4 = (s32) sp180->unk4;
                        var_r2_8->unk8 = (s32) sp180->unk8;
                        var_r2_8->unkC = (s32) sp180->unkC;
                    }
                    var_r3_12 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r3_12 != 0);
            }
            var_r5_5 = var_r2_8;
        }
        temp_r2_4 = temp_r4_12->unk4;
        temp_r0_20 = temp_r4_12->unk0;
        var_r1_4 = temp_r0_20;
        if (temp_r0_20 != temp_r2_4) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_4);
        }
        if (temp_r0_20 != 0) {
            free();
        }
        temp_r4_12->unk0 = sp1A0;
        temp_r4_12->unk4 = var_r5_5;
        temp_r4_12->unkC = (void *) (sp1A0 + var_r8_4);
    }
    sp180->unk8 = 0;
    sp180->unkC = 0;
    sp180->unk10 = 0;
    sp180->unk11 = 0;
    sp180->unk14 = 0;
    sp180->unk0 = 0x90;
    sp180->unk2 = 0x26;
    sp180->unk6 = (u16) sp168;
    sp180->unk4 = 3;
    sp180->unk18 = 1;
    temp_r1_13 = sp138->unk790;
    (*temp_r1_13)->unk10(sp184, temp_r1_13, 0);
    temp_r2_5 = func_08008910(sp138);
    temp_r0_21 = sp188->unk0;
    var_r3_13 = 0;
    if (temp_r0_21 != 0) {
        var_r3_13 = sp188->unk4;
    }
    func_08008F0C(&spA0, temp_r0_21, sp17C + 0x06010DC0, var_r3_13);
    temp_r1_14 = temp_r2_5->unk4;
    if (temp_r1_14 != temp_r2_5->unkC) {
        if (temp_r1_14 != 0) {
            temp_r1_14->unk0 = (s32) sp164->unk0;
            temp_r1_14->unk4 = (s32) sp164->unk4;
            temp_r1_14->unk8 = (s32) sp164->unk8;
            temp_r1_14->unkC = (s32) sp164->unkC;
        }
        temp_r2_5->unk4 = (void *) (temp_r2_5->unk4 + 0x10);
    } else {
        sp19C = temp_r1_14;
        spF4 = 1;
        temp_r4_15 = (s32) (sp19C - temp_r2_5->unk0) >> 4;
        var_r0_10 = &spF0;
        *var_r0_10 = (u32) temp_r4_15;
        if ((u32) temp_r4_15 < (u32) spF4) {
            var_r0_10 = &spF4;
        }
        temp_r0_22 = temp_r4_15 + *var_r0_10;
        if (temp_r0_22 != 0) {
            temp_r4_16 = temp_r0_22 * 0x10;
            var_r0_11 = malloc(temp_r4_16);
            var_r8_5 = temp_r4_16;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_11 = 0;
            var_r8_5 = 0;
        }
        sp1A0 = var_r0_11;
        var_r2_9 = temp_r2_5->unk0;
        var_r3_14 = var_r0_11;
        if (var_r2_9 != sp19C) {
            do {
                if (var_r3_14 != 0) {
                    var_r3_14->unk0 = (s32) var_r2_9->unk0;
                    var_r3_14->unk4 = (s32) var_r2_9->unk4;
                    var_r3_14->unk8 = (s32) var_r2_9->unk8;
                    var_r3_14->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_14 += 0x10;
            } while (var_r2_9 != sp19C);
        }
        temp_r1_15 = spF4;
        if (temp_r1_15 == 1) {
            if (var_r3_14 != 0) {
                var_r3_14->unk0 = (s32) sp164->unk0;
                var_r3_14->unk4 = (s32) sp164->unk4;
                var_r3_14->unk8 = (s32) sp164->unk8;
                var_r3_14->unkC = (s32) sp164->unkC;
            }
            var_r5_6 = var_r3_14 + 0x10;
        } else {
            var_r3_15 = temp_r1_15;
            var_r2_10 = var_r3_14;
            if (var_r3_15 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32) sp164->unk0;
                        var_r2_10->unk4 = (s32) sp164->unk4;
                        var_r2_10->unk8 = (s32) sp164->unk8;
                        var_r2_10->unkC = (s32) sp164->unkC;
                    }
                    var_r3_15 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r3_15 != 0);
            }
            var_r5_6 = var_r2_10;
        }
        temp_r2_6 = temp_r2_5->unk4;
        temp_r0_23 = temp_r2_5->unk0;
        var_r1_5 = temp_r0_23;
        if (temp_r0_23 != temp_r2_6) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_6);
        }
        if (temp_r0_23 != 0) {
            free();
        }
        temp_r2_5->unk0 = sp1A0;
        temp_r2_5->unk4 = var_r5_6;
        temp_r2_5->unkC = (void *) (sp1A0 + var_r8_5);
    }
    temp_r0_24 = func_0805E824(__builtin_new(0x14), sp138->unk790, 0, 0x100);
    if (temp_r0_24 != sp138->unk9BC) {
        __builtin_delete();
    }
    sp138->unk9BC = temp_r0_24;
    temp_r0_25 = __builtin_new(0x1C);
    temp_r0_25->unk0 = 0;
    temp_r0_25->unk2 = 0;
    temp_r0_25->unk4 = 0;
    temp_r0_25->unk6 = 0;
    temp_r0_25->unk8 = 0;
    temp_r0_25->unkC = 0;
    temp_r0_25->unk10 = 0;
    temp_r0_25->unk11 = 0;
    temp_r0_25->unk14 = 0;
    temp_r0_25->unk18 = 0;
    if (temp_r0_25 != sp138->unk9C0) {
        __builtin_delete();
    }
    sp138->unk9C0 = temp_r0_25;
    func_0805E860(sp138->unk9BC, (s32) *(sp138 + 0xB3D + sp138->unkB18));
    sp138->unk9C0->unk0 = 0x90;
    sp138->unk9C0->unk2 = 0x26;
    sp138->unk9C0->unk6 = (u16) sp170;
    sp138->unk9C0->unk4 = 3;
    sp138->unk9C0->unk18 = 1;
    temp_r4_17 = sp138 + 0x9C4;
    temp_r0_26 = sp138->unk9BC;
    temp_r1_16 = temp_r0_26->unk0;
    (*temp_r1_16)->unk10(&spB0, temp_r1_16, *(temp_r0_26->unk4 + (temp_r0_26->unkC * 4)));
    memcpy(sp16C, sp16C, 0x20);
    temp_r0_27 = sp16C + 0xC;
    sp138->unk9C4 = (s32) sp16C->unk0;
    temp_r4_17->unk4 = (s32) sp16C->unk4;
    temp_r4_17->unk8 = (s32) sp16C->unk8;
    temp_r4_18 = temp_r4_17 + 0xC;
    temp_r4_17->unkC = (s32) sp16C->unkC;
    temp_r4_18->unk4 = (s32) temp_r0_27->unk4;
    temp_r4_18->unk8 = (s32) temp_r0_27->unk8;
    temp_r4_18->unkC = (s32) temp_r0_27->unkC;
    (temp_r4_18 + 0xC)->unk4 = (s32) (temp_r0_27 + 0xC)->unk4;
    temp_r0_28 = func_08008910(sp138);
    temp_r1_17 = sp138->unk9CC;
    var_r3_16 = 0;
    if (temp_r1_17 != 0) {
        var_r3_16 = (sp138 + 0x9CC)->unk4;
    }
    func_08008F0C(&spA0, temp_r1_17, sp17C + 0x06011B80, var_r3_16);
    temp_r1_18 = temp_r0_28->unk4;
    if (temp_r1_18 != temp_r0_28->unkC) {
        if (temp_r1_18 != 0) {
            temp_r1_18->unk0 = (s32) sp164->unk0;
            temp_r1_18->unk4 = (s32) sp164->unk4;
            temp_r1_18->unk8 = (s32) sp164->unk8;
            temp_r1_18->unkC = (s32) sp164->unkC;
        }
        temp_r0_28->unk4 = (void *) (temp_r0_28->unk4 + 0x10);
    } else {
        sp19C = temp_r1_18;
        spFC = 1;
        temp_r4_19 = (s32) (sp19C - temp_r0_28->unk0) >> 4;
        var_r0_12 = &spF8;
        *var_r0_12 = (u32) temp_r4_19;
        if ((u32) temp_r4_19 < (u32) spFC) {
            var_r0_12 = &spFC;
        }
        temp_r0_29 = temp_r4_19 + *var_r0_12;
        if (temp_r0_29 != 0) {
            temp_r4_20 = temp_r0_29 * 0x10;
            var_r0_13 = malloc(temp_r4_20);
            var_r8_6 = temp_r4_20;
            if (var_r0_13 == 0) {
                var_r0_13 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_13 = 0;
            var_r8_6 = 0;
        }
        sp1A0 = var_r0_13;
        var_r2_11 = temp_r0_28->unk0;
        var_r3_17 = var_r0_13;
        if (var_r2_11 != sp19C) {
            do {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (s32) var_r2_11->unk0;
                    var_r3_17->unk4 = (s32) var_r2_11->unk4;
                    var_r3_17->unk8 = (s32) var_r2_11->unk8;
                    var_r3_17->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_17 += 0x10;
            } while (var_r2_11 != sp19C);
        }
        temp_r1_19 = spFC;
        if (temp_r1_19 == 1) {
            if (var_r3_17 != 0) {
                var_r3_17->unk0 = (s32) sp164->unk0;
                var_r3_17->unk4 = (s32) sp164->unk4;
                var_r3_17->unk8 = (s32) sp164->unk8;
                var_r3_17->unkC = (s32) sp164->unkC;
            }
            var_r5_7 = var_r3_17 + 0x10;
        } else {
            var_r3_18 = temp_r1_19;
            var_r2_12 = var_r3_17;
            if (var_r3_18 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) sp164->unk0;
                        var_r2_12->unk4 = (s32) sp164->unk4;
                        var_r2_12->unk8 = (s32) sp164->unk8;
                        var_r2_12->unkC = (s32) sp164->unkC;
                    }
                    var_r3_18 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_18 != 0);
            }
            var_r5_7 = var_r2_12;
        }
        temp_r2_7 = temp_r0_28->unk4;
        temp_r0_30 = temp_r0_28->unk0;
        var_r1_6 = temp_r0_30;
        if (temp_r0_30 != temp_r2_7) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_7);
        }
        if (temp_r0_30 != 0) {
            free();
        }
        temp_r0_28->unk0 = sp1A0;
        temp_r0_28->unk4 = var_r5_7;
        temp_r0_28->unkC = (void *) (sp1A0 + var_r8_6);
    }
    temp_r4_21 = func_08008910(sp138);
    temp_r0_31 = sp138->unk9D4;
    var_r3_19 = 0;
    if (temp_r0_31 != 0) {
        var_r3_19 = (sp138 + 0x9D4)->unk4;
    }
    func_08008F0C(&spA0, temp_r0_31, 0x05000260, var_r3_19);
    temp_r1_20 = temp_r4_21->unk4;
    if (temp_r1_20 != temp_r4_21->unkC) {
        if (temp_r1_20 != 0) {
            temp_r1_20->unk0 = (s32) sp164->unk0;
            temp_r1_20->unk4 = (s32) sp164->unk4;
            temp_r1_20->unk8 = (s32) sp164->unk8;
            temp_r1_20->unkC = (s32) sp164->unkC;
        }
        temp_r4_21->unk4 = (void *) (temp_r4_21->unk4 + 0x10);
    } else {
        sp104 = 1;
        temp_r4_22 = (s32) (temp_r1_20 - temp_r4_21->unk0) >> 4;
        sp100 = (u32) temp_r4_22;
        var_r1_7 = &sp100;
        if ((u32) temp_r4_22 < (u32) sp104) {
            var_r1_7 = &sp104;
        }
        temp_r0_32 = temp_r4_22 + *var_r1_7;
        if (temp_r0_32 != 0) {
            temp_r4_23 = temp_r0_32 * 0x10;
            var_r0_14 = malloc(temp_r4_23);
            var_r8_7 = temp_r4_23;
            if (var_r0_14 == 0) {
                var_r0_14 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_14 = 0;
            var_r8_7 = 0;
        }
        sp1A0 = var_r0_14;
        var_r2_13 = temp_r4_21->unk0;
        var_r3_20 = var_r0_14;
        if (var_r2_13 != temp_r1_20) {
            do {
                if (var_r3_20 != 0) {
                    var_r3_20->unk0 = (s32) var_r2_13->unk0;
                    var_r3_20->unk4 = (s32) var_r2_13->unk4;
                    var_r3_20->unk8 = (s32) var_r2_13->unk8;
                    var_r3_20->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_20 += 0x10;
            } while (var_r2_13 != temp_r1_20);
        }
        temp_r0_33 = sp104;
        if (temp_r0_33 == 1) {
            if (var_r3_20 != 0) {
                var_r3_20->unk0 = (s32) sp164->unk0;
                var_r3_20->unk4 = (s32) sp164->unk4;
                var_r3_20->unk8 = (s32) sp164->unk8;
                var_r3_20->unkC = (s32) sp164->unkC;
            }
            var_r5_8 = var_r3_20 + 0x10;
        } else {
            var_r3_21 = temp_r0_33;
            var_r2_14 = var_r3_20;
            if (var_r3_21 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) sp164->unk0;
                        var_r2_14->unk4 = (s32) sp164->unk4;
                        var_r2_14->unk8 = (s32) sp164->unk8;
                        var_r2_14->unkC = (s32) sp164->unkC;
                    }
                    var_r3_21 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_21 != 0);
            }
            var_r5_8 = var_r2_14;
        }
        temp_r2_8 = temp_r4_21->unk4;
        temp_r0_34 = temp_r4_21->unk0;
        var_r1_8 = temp_r0_34;
        if (temp_r0_34 != temp_r2_8) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_8);
        }
        if (temp_r0_34 != 0) {
            free();
        }
        temp_r4_21->unk0 = sp1A0;
        temp_r4_21->unk4 = var_r5_8;
        temp_r4_21->unkC = (void *) (sp1A0 + var_r8_7);
    }
    temp_r0_35 = func_0805E824(__builtin_new(0x14), sp138->unk794, 0, 0x100);
    if (temp_r0_35 != sp138->unk9E4) {
        __builtin_delete();
    }
    sp138->unk9E4 = temp_r0_35;
    func_0805E860(temp_r0_35, 0);
    var_sb_3 = 0;
    sp18C = sp138 + 0x9F0;
    sp190 = 0;
    sp194 = sp138 + 0x9E8;
    sp198 = sp148;
loop_232:
    temp_r0_36 = __builtin_new(0x1C);
    temp_r0_36->unk0 = 0;
    temp_r0_36->unk2 = 0;
    temp_r0_36->unk4 = 0;
    temp_r0_36->unk6 = 0U;
    temp_r0_36->unk8 = 0;
    temp_r0_36->unkC = 0;
    temp_r0_36->unk10 = 0;
    temp_r0_36->unk11 = 0;
    temp_r0_36->unk14 = 0;
    temp_r0_36->unk18 = 0;
    if (temp_r0_36 != *sp194) {
        __builtin_delete();
    }
    *sp194 = temp_r0_36;
    temp_r0_36->unk0 = (s16) ((0x9E * var_sb_3) + 0x28);
    temp_r0_36->unk2 = 0xE;
    temp_r0_36->unk6 = (u16) sp198;
    temp_r0_36->unk4 = 4;
    temp_r0_36->unk18 = 1;
    if (var_sb_3 == 0) {
        sp138->unk9E8->unk10 = 1;
    }
    temp_r0_37 = sp138->unk9E4;
    temp_r1_21 = temp_r0_37->unk0;
    (*temp_r1_21)->unk10(&spA0, temp_r1_21, *(temp_r0_37->unk4 + (temp_r0_37->unkC * 4)));
    memcpy(sp164, sp164, 0x20);
    temp_r0_38 = sp164 + 0xC;
    sp18C->unk0 = (s32) sp164->unk0;
    sp18C->unk4 = (s32) sp164->unk4;
    sp18C->unk8 = (s32) sp164->unk8;
    temp_r1_22 = sp18C + 0xC;
    sp18C->unkC = (s32) sp164->unkC;
    temp_r1_22->unk4 = (s32) temp_r0_38->unk4;
    temp_r1_22->unk8 = (s32) temp_r0_38->unk8;
    temp_r1_23 = temp_r1_22 + 0xC;
    temp_r1_22->unkC = (s32) temp_r0_38->unkC;
    temp_r1_23->unk4 = (s32) (temp_r0_38 + 0xC)->unk4;
    temp_r0_39 = func_08008910(sp138, temp_r1_23 + 8);
    temp_r1_24 = sp18C->unk8;
    var_r3_22 = 0;
    if (temp_r1_24 != 0) {
        var_r3_22 = (u16) sp18C->unkC;
    }
    func_08008F0C(sp164, temp_r1_24, (sp198 << 5) + 0x06010000, var_r3_22);
    temp_r1_25 = temp_r0_39->unk4;
    if (temp_r1_25 != temp_r0_39->unkC) {
        if (temp_r1_25 != 0) {
            temp_r1_25->unk0 = (s32) sp164->unk0;
            temp_r1_25->unk4 = (s32) sp164->unk4;
            temp_r1_25->unk8 = (s32) sp164->unk8;
            temp_r1_25->unkC = (s32) sp164->unkC;
        }
        temp_r0_39->unk4 = (void *) (temp_r0_39->unk4 + 0x10);
    } else {
        sp19C = temp_r1_25;
        sp10C = 1;
        temp_r4_24 = (s32) (sp19C - temp_r0_39->unk0) >> 4;
        var_r0_15 = &sp108;
        *var_r0_15 = (u32) temp_r4_24;
        if ((u32) temp_r4_24 < (u32) sp10C) {
            var_r0_15 = &sp10C;
        }
        temp_r0_40 = temp_r4_24 + *var_r0_15;
        if (temp_r0_40 != 0) {
            temp_r4_25 = temp_r0_40 * 0x10;
            var_r0_16 = malloc(temp_r4_25);
            var_r8_8 = temp_r4_25;
            if (var_r0_16 == 0) {
                var_r0_16 = func_080D3BC0(var_r8_8);
            }
        } else {
            var_r0_16 = 0;
            var_r8_8 = 0;
        }
        sp1A0 = var_r0_16;
        var_r2_15 = temp_r0_39->unk0;
        var_r3_23 = var_r0_16;
        if (var_r2_15 != sp19C) {
            do {
                if (var_r3_23 != 0) {
                    var_r3_23->unk0 = (s32) var_r2_15->unk0;
                    var_r3_23->unk4 = (s32) var_r2_15->unk4;
                    var_r3_23->unk8 = (s32) var_r2_15->unk8;
                    var_r3_23->unkC = (s32) var_r2_15->unkC;
                }
                var_r2_15 += 0x10;
                var_r3_23 += 0x10;
            } while (var_r2_15 != sp19C);
        }
        temp_r0_41 = sp10C;
        if (temp_r0_41 == 1) {
            if (var_r3_23 != 0) {
                var_r3_23->unk0 = (s32) sp164->unk0;
                var_r3_23->unk4 = (s32) sp164->unk4;
                var_r3_23->unk8 = (s32) sp164->unk8;
                var_r3_23->unkC = (s32) sp164->unkC;
            }
            var_r5_9 = var_r3_23 + 0x10;
        } else {
            var_r3_24 = temp_r0_41;
            var_r2_16 = var_r3_23;
            if (var_r3_24 != 0) {
                do {
                    if (var_r2_16 != 0) {
                        var_r2_16->unk0 = (s32) sp164->unk0;
                        var_r2_16->unk4 = (s32) sp164->unk4;
                        var_r2_16->unk8 = (s32) sp164->unk8;
                        var_r2_16->unkC = (s32) sp164->unkC;
                    }
                    var_r3_24 -= 1;
                    var_r2_16 += 0x10;
                } while (var_r3_24 != 0);
            }
            var_r5_9 = var_r2_16;
        }
        temp_r2_9 = temp_r0_39->unk4;
        temp_r0_42 = temp_r0_39->unk0;
        var_r1_9 = temp_r0_42;
        if (temp_r0_42 != temp_r2_9) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_9);
        }
        if (temp_r0_42 != 0) {
            free();
        }
        temp_r0_39->unk0 = sp1A0;
        temp_r0_39->unk4 = var_r5_9;
        temp_r0_39->unkC = (void *) (sp1A0 + var_r8_8);
    }
    temp_r5 = func_08008910(sp138);
    temp_r2_10 = sp190 + sp138;
    var_r3_25 = 0;
    if (temp_r2_10->unkA00 != 0) {
        var_r3_25 = temp_r2_10->unkA04;
    }
    func_08008F0C(&spA0, (sp190 + sp138)->unkA00, 0x05000280, var_r3_25);
    temp_r1_26 = temp_r5->unk4;
    if (temp_r1_26 != temp_r5->unkC) {
        if (temp_r1_26 != 0) {
            temp_r1_26->unk0 = (s32) sp164->unk0;
            temp_r1_26->unk4 = (s32) sp164->unk4;
            temp_r1_26->unk8 = (s32) sp164->unk8;
            temp_r1_26->unkC = (s32) sp164->unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
    } else {
        sp19C = temp_r1_26;
        sp114 = 1;
        temp_r4_26 = (s32) (sp19C - temp_r5->unk0) >> 4;
        var_r0_17 = &sp110;
        *var_r0_17 = (u32) temp_r4_26;
        if ((u32) temp_r4_26 < (u32) sp114) {
            var_r0_17 = &sp114;
        }
        temp_r0_43 = temp_r4_26 + *var_r0_17;
        if (temp_r0_43 != 0) {
            temp_r4_27 = temp_r0_43 * 0x10;
            var_r0_18 = malloc(temp_r4_27);
            var_r8_9 = temp_r4_27;
            if (var_r0_18 == 0) {
                var_r0_18 = func_080D3BC0(var_r8_9);
            }
        } else {
            var_r0_18 = 0;
            var_r8_9 = 0;
        }
        sp1A0 = var_r0_18;
        var_r2_17 = temp_r5->unk0;
        var_r3_26 = var_r0_18;
        if (var_r2_17 != sp19C) {
            do {
                if (var_r3_26 != 0) {
                    var_r3_26->unk0 = (s32) var_r2_17->unk0;
                    var_r3_26->unk4 = (s32) var_r2_17->unk4;
                    var_r3_26->unk8 = (s32) var_r2_17->unk8;
                    var_r3_26->unkC = (s32) var_r2_17->unkC;
                }
                var_r2_17 += 0x10;
                var_r3_26 += 0x10;
            } while (var_r2_17 != sp19C);
        }
        temp_r0_44 = sp114;
        if (temp_r0_44 == 1) {
            if (var_r3_26 != 0) {
                var_r3_26->unk0 = (s32) sp164->unk0;
                var_r3_26->unk4 = (s32) sp164->unk4;
                var_r3_26->unk8 = (s32) sp164->unk8;
                var_r3_26->unkC = (s32) sp164->unkC;
            }
            var_r5_10 = var_r3_26 + 0x10;
        } else {
            var_r3_27 = temp_r0_44;
            var_r2_18 = var_r3_26;
            if (var_r3_27 != 0) {
                do {
                    if (var_r2_18 != 0) {
                        var_r2_18->unk0 = (s32) sp164->unk0;
                        var_r2_18->unk4 = (s32) sp164->unk4;
                        var_r2_18->unk8 = (s32) sp164->unk8;
                        var_r2_18->unkC = (s32) sp164->unkC;
                    }
                    var_r3_27 -= 1;
                    var_r2_18 += 0x10;
                } while (var_r3_27 != 0);
            }
            var_r5_10 = var_r2_18;
        }
        temp_r2_11 = temp_r5->unk4;
        temp_r0_45 = temp_r5->unk0;
        var_r1_10 = temp_r0_45;
        if (temp_r0_45 != temp_r2_11) {
            do {
                var_r1_10 += 0x10;
            } while (var_r1_10 != temp_r2_11);
        }
        if (temp_r0_45 != 0) {
            free();
        }
        temp_r5->unk0 = sp1A0;
        temp_r5->unk4 = var_r5_10;
        temp_r5->unkC = (void *) (sp1A0 + var_r8_9);
    }
    sp18C += 0x20;
    sp190 += 0x20;
    sp194 += 4;
    sp198 += 4;
    var_sb_3 += 1;
    if (var_sb_3 <= 1) {
        goto loop_232;
    }
    temp_r0_46 = func_0805E824(__builtin_new(0x14), sp138->unk798, 0, 0x100);
    if (temp_r0_46 != sp138->unkA30) {
        __builtin_delete();
    }
    sp138->unkA30 = temp_r0_46;
    func_0805E860(temp_r0_46, 0);
    sp138->unkA30->unk10 = 0x90;
    var_sb_4 = 0;
    var_r6_2 = sp138 + 0xA34;
    var_r7 = 0;
    do {
        temp_r0_47 = __builtin_new(0x1C);
        temp_r0_47->unk0 = 0;
        temp_r0_47->unk2 = 0;
        temp_r0_47->unk4 = 0;
        temp_r0_47->unk6 = 0U;
        temp_r0_47->unk8 = 0;
        temp_r0_47->unkC = 0;
        temp_r0_47->unk10 = 0;
        temp_r0_47->unk11 = 0;
        temp_r0_47->unk14 = 0;
        temp_r0_47->unk18 = 0;
        if (temp_r0_47 != *var_r6_2) {
            __builtin_delete();
        }
        *var_r6_2 = temp_r0_47;
        var_r6_2 += 4;
        temp_r0_47->unk0 = (s16) ((var_sb_4 << 7) + 0x10);
        temp_r0_47->unk2 = (s16) (0x4A - var_r7);
        temp_r0_47->unk6 = (u16) sp14C;
        temp_r0_47->unk4 = 5;
        temp_r0_47->unk18 = 1;
        var_r7 += 0x24;
        var_sb_4 += 1;
    } while (var_sb_4 <= 1);
    temp_r0_48 = func_0805E824(__builtin_new(0x14), sp138->unk79C, 0, 0x100);
    if (temp_r0_48 != sp138->unkA7C) {
        __builtin_delete();
    }
    sp138->unkA7C = temp_r0_48;
    func_0805E860(temp_r0_48, 0);
    temp_r0_49 = __builtin_new(0x1C);
    temp_r0_49->unk0 = 0;
    temp_r0_49->unk2 = 0;
    temp_r0_49->unk4 = 0;
    temp_r0_49->unk6 = 0U;
    temp_r0_49->unk8 = 0;
    temp_r0_49->unkC = 0;
    temp_r0_49->unk10 = 0;
    temp_r0_49->unk11 = 0;
    temp_r0_49->unk14 = 0;
    temp_r0_49->unk18 = 0;
    if (temp_r0_49 != sp138->unkA80) {
        __builtin_delete();
    }
    sp138->unkA80 = temp_r0_49;
    temp_r0_49->unk0 = 0x60;
    temp_r0_49->unk2 = 0x48;
    temp_r0_49->unk6 = (u16) sp150;
    temp_r0_49->unk4 = 6;
    temp_r0_49->unk18 = 1;
    sp154 = 1;
    sp158 = 0;
    if (sp138->unkB14 != 0) {

    } else {
        sp15C = sp138 + 0x7A0;
loop_311:
        func_080087C8(sp138);
        func_080088B8(sp138);
        temp_r4_28 = func_080088D4(sp138);
        if (sp154 != 0) {
            func_0800934C(*sp15C + 0xC, 0x889, 1, 1);
            temp_r0_50 = func_08008940(sp138);
            temp_r0_50->unk8->unk10(temp_r0_50, *sp15C);
            sp154 = 0;
        }
        if (sp158 != 0) {
            temp_r1_27 = **sp15C;
            if ((s32) ((0 - temp_r1_27) | temp_r1_27) >= 0) {
                sp138->unkB14 = 1;
            }
        } else if (temp_r4_28 & 1) {
            temp_r2_12 = sp138->unk7A0;
            temp_r1_28 = *temp_r2_12;
            if ((s32) ((0 - temp_r1_28) | temp_r1_28) >= 0) {
                sp158 = 1;
                func_08009378(temp_r2_12 + 0xC, 0x889, 1);
                temp_r0_51 = func_08008940(sp138);
                temp_r0_51->unk8->unk10(temp_r0_51, sp138->unk7A0);
            }
        }
        var_r4_3 = &sp0;
        var_sb_5 = 5;
        do {
            temp_r0_52 = func_08008920(sp138);
            temp_r2_13 = *temp_r0_52;
            if ((u32) temp_r2_13 <= 0x7FU) {
                temp_r0_53 = temp_r0_52 + ((temp_r2_13 * 8) + 4);
                temp_r0_53->unk0 = (s32) var_r4_3->unk0;
                temp_r0_53->unk4 = (u16) var_r4_3->unk4;
                *temp_r0_52 = temp_r2_13 + 1;
            }
            var_r4_3 += 8;
            var_sb_5 -= 1;
        } while (var_sb_5 >= 0);
        temp_r4_29 = func_08008920(sp138);
        temp_r1_29 = sp138->unk974;
        var_r2_19 = 0;
        if (temp_r1_29 != 0) {
            var_r2_19 = (sp138 + 0x974)->unk4;
        }
        func_0805E99C(temp_r4_29, temp_r1_29, var_r2_19, sp138->unk970);
        temp_r4_30 = func_08008920(sp138);
        temp_r1_30 = sp138->unk99C;
        var_r2_20 = 0;
        if (temp_r1_30 != 0) {
            var_r2_20 = (sp138 + 0x99C)->unk4;
        }
        func_0805E99C(temp_r4_30, temp_r1_30, var_r2_20, sp138->unk998);
        if (*(sp138 + 0xB3D + sp138->unkB18) != 0) {
            temp_r4_31 = func_08008920(sp138);
            temp_r1_31 = sp138->unk9C4;
            var_r2_21 = 0;
            if (temp_r1_31 != 0) {
                var_r2_21 = (sp138 + 0x9C4)->unk4;
            }
            func_0805E99C(temp_r4_31, temp_r1_31, var_r2_21, sp138->unk9C0);
        }
        temp_r3 = func_08008920(sp138);
        temp_r0_54 = sp184->unk0;
        var_r2_22 = 0;
        if (temp_r0_54 != 0) {
            var_r2_22 = sp184->unk4;
        }
        func_0805E99C(temp_r3, temp_r0_54, var_r2_22, sp180);
        var_sb_6 = 0;
        var_r4_4 = sp138 + 0x9F0;
        do {
            temp_r5_2 = func_08008920(sp138);
            temp_r0_55 = var_r4_4->unk0;
            var_r2_23 = 0;
            if (temp_r0_55 != 0) {
                var_r2_23 = var_r4_4->unk4;
            }
            func_0805E99C(temp_r5_2, temp_r0_55, var_r2_23, ((var_sb_6 * 4) + sp138)->unk9E8);
            var_r4_4 += 0x20;
            var_sb_6 += 1;
        } while (var_sb_6 <= 1);
        var_sb_7 = 0;
        sp160 = sp138 + 0xA30;
loop_338:
        temp_r0_56 = func_0805E8F0(*sp160) << 0x1E;
        sp174 = var_sb_7 + 1;
        temp_r5_3 = var_sb_7 << 5;
        sp178 = var_sb_7 * 4;
        if (temp_r0_56 >= 0) {

        } else {
            temp_r5_4 = sp138 + temp_r5_3;
            temp_r4_32 = temp_r5_4 + 0xA3C;
            temp_r0_57 = *sp160;
            temp_r1_32 = temp_r0_57->unk0;
            (*temp_r1_32)->unk10(&spA0, temp_r1_32, *(temp_r0_57->unk4 + (temp_r0_57->unkC * 4)));
            memcpy(sp164, sp164, 0x20);
            temp_r0_58 = sp164 + 0xC;
            temp_r5_4->unkA3C = (s32) sp164->unk0;
            temp_r4_32->unk4 = (s32) sp164->unk4;
            temp_r4_32->unk8 = (s32) sp164->unk8;
            temp_r4_33 = temp_r4_32 + 0xC;
            temp_r4_32->unkC = (s32) sp164->unkC;
            temp_r4_33->unk4 = (s32) temp_r0_58->unk4;
            temp_r4_33->unk8 = (s32) temp_r0_58->unk8;
            temp_r4_33->unkC = (s32) temp_r0_58->unkC;
            (temp_r4_33 + 0xC)->unk4 = (s32) (temp_r0_58 + 0xC)->unk4;
            temp_r2_14 = func_08008910(sp138);
            temp_r0_59 = temp_r5_4->unkA44;
            var_r3_28 = 0;
            if (temp_r0_59 != 0) {
                var_r3_28 = (temp_r5_4 + 0xA44)->unk4;
            }
            func_08008F0C(sp164, temp_r0_59, (sp14C << 5) + 0x06010000, var_r3_28);
            temp_r1_33 = temp_r2_14->unk4;
            if (temp_r1_33 != temp_r2_14->unkC) {
                if (temp_r1_33 != 0) {
                    temp_r1_33->unk0 = (s32) sp164->unk0;
                    temp_r1_33->unk4 = (s32) sp164->unk4;
                    temp_r1_33->unk8 = (s32) sp164->unk8;
                    temp_r1_33->unkC = (s32) sp164->unkC;
                }
                temp_r2_14->unk4 = (void *) (temp_r2_14->unk4 + 0x10);
            } else {
                sp19C = temp_r1_33;
                sp11C = 1;
                temp_r4_34 = (s32) (sp19C - temp_r2_14->unk0) >> 4;
                var_r0_19 = &sp118;
                *var_r0_19 = (u32) temp_r4_34;
                if ((u32) temp_r4_34 < (u32) sp11C) {
                    var_r0_19 = &sp11C;
                }
                temp_r0_60 = temp_r4_34 + *var_r0_19;
                if (temp_r0_60 != 0) {
                    temp_r4_35 = temp_r0_60 * 0x10;
                    var_r0_20 = malloc(temp_r4_35);
                    var_r8_10 = temp_r4_35;
                    if (var_r0_20 == 0) {
                        var_r0_20 = func_080D3BC0(var_r8_10);
                    }
                } else {
                    var_r0_20 = 0;
                    var_r8_10 = 0;
                }
                sp1A0 = var_r0_20;
                var_r2_24 = temp_r2_14->unk0;
                var_r3_29 = var_r0_20;
                sp174 = var_sb_7 + 1;
                sp178 = var_sb_7 * 4;
                if (var_r2_24 != sp19C) {
                    do {
                        if (var_r3_29 != 0) {
                            var_r3_29->unk0 = (s32) var_r2_24->unk0;
                            var_r3_29->unk4 = (s32) var_r2_24->unk4;
                            var_r3_29->unk8 = (s32) var_r2_24->unk8;
                            var_r3_29->unkC = (s32) var_r2_24->unkC;
                        }
                        var_r2_24 += 0x10;
                        var_r3_29 += 0x10;
                    } while (var_r2_24 != sp19C);
                }
                temp_r0_61 = sp11C;
                if (temp_r0_61 == 1) {
                    if (var_r3_29 != 0) {
                        var_r3_29->unk0 = (s32) spA0.unk0;
                        var_r3_29->unk4 = (s32) spA0.unk4;
                        var_r3_29->unk8 = (s32) spA0.unk8;
                        var_r3_29->unkC = (s32) spA0.unkC;
                    }
                    var_r5_11 = var_r3_29 + 0x10;
                } else {
                    var_r3_30 = temp_r0_61;
                    var_r2_25 = var_r3_29;
                    if (var_r3_30 != 0) {
                        do {
                            if (var_r2_25 != 0) {
                                var_r2_25->unk0 = (s32) spA0.unk0;
                                var_r2_25->unk4 = (s32) spA0.unk4;
                                var_r2_25->unk8 = (s32) spA0.unk8;
                                var_r2_25->unkC = (s32) spA0.unkC;
                            }
                            var_r3_30 -= 1;
                            var_r2_25 += 0x10;
                        } while (var_r3_30 != 0);
                    }
                    var_r5_11 = var_r2_25;
                }
                temp_r2_15 = temp_r2_14->unk4;
                temp_r0_62 = temp_r2_14->unk0;
                var_r1_11 = temp_r0_62;
                if (temp_r0_62 != temp_r2_15) {
                    do {
                        var_r1_11 += 0x10;
                    } while (var_r1_11 != temp_r2_15);
                }
                if (temp_r0_62 != 0) {
                    free();
                }
                temp_r2_14->unk0 = sp1A0;
                temp_r2_14->unk4 = var_r5_11;
                temp_r2_14->unkC = (void *) (sp1A0 + var_r8_10);
            }
            temp_r5_5 = func_08008910(sp138);
            temp_r2_16 = sp138 + temp_r5_3;
            var_r3_31 = 0;
            if (temp_r2_16->unkA4C != 0) {
                var_r3_31 = (temp_r2_16 + 0xA4C)->unk4;
            }
            func_08008F0C(&spA0, (sp138 + temp_r5_3)->unkA4C, 0x050002A0, var_r3_31);
            temp_r1_34 = temp_r5_5->unk4;
            if (temp_r1_34 != temp_r5_5->unkC) {
                if (temp_r1_34 != 0) {
                    temp_r1_34->unk0 = (s32) sp164->unk0;
                    temp_r1_34->unk4 = (s32) sp164->unk4;
                    temp_r1_34->unk8 = (s32) sp164->unk8;
                    temp_r1_34->unkC = (s32) sp164->unkC;
                }
                temp_r5_5->unk4 = (void *) (temp_r5_5->unk4 + 0x10);
            } else {
                sp19C = temp_r1_34;
                sp124 = 1;
                temp_r4_36 = (s32) (sp19C - temp_r5_5->unk0) >> 4;
                var_r0_21 = &sp120;
                *var_r0_21 = (u32) temp_r4_36;
                if ((u32) temp_r4_36 < (u32) sp124) {
                    var_r0_21 = &sp124;
                }
                temp_r0_63 = temp_r4_36 + *var_r0_21;
                if (temp_r0_63 != 0) {
                    temp_r4_37 = temp_r0_63 * 0x10;
                    var_r0_22 = malloc(temp_r4_37);
                    var_r8_11 = temp_r4_37;
                    if (var_r0_22 == 0) {
                        var_r0_22 = func_080D3BC0(var_r8_11);
                    }
                } else {
                    var_r0_22 = 0;
                    var_r8_11 = 0;
                }
                sp1A0 = var_r0_22;
                var_r2_26 = temp_r5_5->unk0;
                var_r3_32 = var_r0_22;
loop_386:
                if (var_r2_26 != sp19C) {
                    if (var_r3_32 != 0) {
                        var_r3_32->unk0 = (s32) var_r2_26->unk0;
                        var_r3_32->unk4 = (s32) var_r2_26->unk4;
                        var_r3_32->unk8 = (s32) var_r2_26->unk8;
                        var_r3_32->unkC = (s32) var_r2_26->unkC;
                    }
                    var_r2_26 += 0x10;
                    var_r3_32 += 0x10;
                    goto loop_386;
                }
                temp_r0_64 = sp124;
                if (temp_r0_64 == 1) {
                    if (var_r3_32 != 0) {
                        var_r3_32->unk0 = (s32) sp164->unk0;
                        var_r3_32->unk4 = (s32) sp164->unk4;
                        var_r3_32->unk8 = (s32) sp164->unk8;
                        var_r3_32->unkC = (s32) sp164->unkC;
                    }
                    var_r5_12 = var_r3_32 + 0x10;
                } else {
                    var_r3_33 = temp_r0_64;
                    var_r2_27 = var_r3_32;
                    if (var_r3_33 != 0) {
                        do {
                            if (var_r2_27 != 0) {
                                var_r2_27->unk0 = (s32) sp164->unk0;
                                var_r2_27->unk4 = (s32) sp164->unk4;
                                var_r2_27->unk8 = (s32) sp164->unk8;
                                var_r2_27->unkC = (s32) sp164->unkC;
                            }
                            var_r3_33 -= 1;
                            var_r2_27 += 0x10;
                        } while (var_r3_33 != 0);
                    }
                    var_r5_12 = var_r2_27;
                }
                temp_r2_17 = temp_r5_5->unk4;
                temp_r0_65 = temp_r5_5->unk0;
                var_r1_12 = temp_r0_65;
                if (temp_r0_65 != temp_r2_17) {
                    do {
                        var_r1_12 += 0x10;
                    } while (var_r1_12 != temp_r2_17);
                }
                if (temp_r0_65 != 0) {
                    free();
                }
                temp_r5_5->unk0 = sp1A0;
                temp_r5_5->unk4 = var_r5_12;
                temp_r5_5->unkC = (void *) (sp1A0 + var_r8_11);
            }
        }
        temp_r6 = func_08008920(sp138);
        temp_r5_6 = sp138 + temp_r5_3;
        var_r2_28 = 0;
        if (temp_r5_6->unkA3C != 0) {
            var_r2_28 = (temp_r5_6 + 0xA3C)->unk4;
        }
        func_0805E99C(temp_r6, (sp138 + temp_r5_3)->unkA3C, var_r2_28, (sp178 + sp138)->unkA34);
        var_sb_7 = sp174;
        if (var_sb_7 <= 1) {
            goto loop_338;
        }
        if ((s32) (func_0805E8F0(sp138->unkA7C) << 0x1E) >= 0) {

        } else {
            temp_r0_66 = sp138->unkA7C;
            temp_r1_35 = temp_r0_66->unk0;
            (*temp_r1_35)->unk10(&spA0, temp_r1_35, *(temp_r0_66->unk4 + (temp_r0_66->unkC * 4)));
            memcpy(sp164, sp164, 0x20);
            temp_r1_36 = sp138 + 0xA84;
            temp_r0_67 = sp164 + 0xC;
            sp138->unkA84 = (s32) sp164->unk0;
            temp_r1_36->unk4 = (s32) sp164->unk4;
            temp_r1_36->unk8 = (s32) sp164->unk8;
            temp_r1_37 = temp_r1_36 + 0xC;
            temp_r1_36->unkC = (s32) sp164->unkC;
            temp_r1_37->unk4 = (s32) temp_r0_67->unk4;
            temp_r1_37->unk8 = (s32) temp_r0_67->unk8;
            temp_r1_38 = temp_r1_37 + 0xC;
            temp_r1_37->unkC = (s32) temp_r0_67->unkC;
            temp_r1_38->unk4 = (s32) (temp_r0_67 + 0xC)->unk4;
            temp_r0_68 = func_08008910(sp138, temp_r1_38 + 8);
            temp_r1_39 = sp138->unkA8C;
            var_r3_34 = 0;
            if (temp_r1_39 != 0) {
                var_r3_34 = (sp138 + 0xA8C)->unk4;
            }
            func_08008F0C(sp164, temp_r1_39, (sp150 << 5) + 0x06010000, var_r3_34);
            temp_r1_40 = temp_r0_68->unk4;
            if (temp_r1_40 != temp_r0_68->unkC) {
                if (temp_r1_40 != 0) {
                    temp_r1_40->unk0 = (s32) sp164->unk0;
                    temp_r1_40->unk4 = (s32) sp164->unk4;
                    temp_r1_40->unk8 = (s32) sp164->unk8;
                    temp_r1_40->unkC = (s32) sp164->unkC;
                }
                temp_r0_68->unk4 = (void *) (temp_r0_68->unk4 + 0x10);
            } else {
                sp12C = 1;
                temp_r4_38 = (s32) (temp_r1_40 - temp_r0_68->unk0) >> 4;
                var_r0_23 = &sp128;
                *var_r0_23 = (u32) temp_r4_38;
                if ((u32) temp_r4_38 < (u32) sp12C) {
                    var_r0_23 = &sp12C;
                }
                temp_r0_69 = temp_r4_38 + *var_r0_23;
                if (temp_r0_69 != 0) {
                    temp_r4_39 = temp_r0_69 * 0x10;
                    var_r0_24 = malloc(temp_r4_39);
                    var_r8_12 = temp_r4_39;
                    if (var_r0_24 == 0) {
                        var_r0_24 = func_080D3BC0(var_r8_12);
                    }
                } else {
                    var_r0_24 = 0;
                    var_r8_12 = 0;
                }
                sp1A0 = var_r0_24;
                var_r2_29 = temp_r0_68->unk0;
                var_r3_35 = var_r0_24;
                if (var_r2_29 != temp_r1_40) {
                    do {
                        if (var_r3_35 != 0) {
                            var_r3_35->unk0 = (s32) var_r2_29->unk0;
                            var_r3_35->unk4 = (s32) var_r2_29->unk4;
                            var_r3_35->unk8 = (s32) var_r2_29->unk8;
                            var_r3_35->unkC = (s32) var_r2_29->unkC;
                        }
                        var_r2_29 += 0x10;
                        var_r3_35 += 0x10;
                    } while (var_r2_29 != temp_r1_40);
                }
                temp_r0_70 = sp12C;
                if (temp_r0_70 == 1) {
                    if (var_r3_35 != 0) {
                        var_r3_35->unk0 = (s32) sp164->unk0;
                        var_r3_35->unk4 = (s32) sp164->unk4;
                        var_r3_35->unk8 = (s32) sp164->unk8;
                        var_r3_35->unkC = (s32) sp164->unkC;
                    }
                    var_r5_13 = var_r3_35 + 0x10;
                } else {
                    var_r3_36 = temp_r0_70;
                    var_r2_30 = var_r3_35;
                    if (var_r3_36 != 0) {
                        do {
                            if (var_r2_30 != 0) {
                                var_r2_30->unk0 = (s32) sp164->unk0;
                                var_r2_30->unk4 = (s32) sp164->unk4;
                                var_r2_30->unk8 = (s32) sp164->unk8;
                                var_r2_30->unkC = (s32) sp164->unkC;
                            }
                            var_r3_36 -= 1;
                            var_r2_30 += 0x10;
                        } while (var_r3_36 != 0);
                    }
                    var_r5_13 = var_r2_30;
                }
                temp_r2_18 = temp_r0_68->unk4;
                temp_r0_71 = temp_r0_68->unk0;
                var_r1_13 = temp_r0_71;
                if (temp_r0_71 != temp_r2_18) {
                    do {
                        var_r1_13 += 0x10;
                    } while (var_r1_13 != temp_r2_18);
                }
                if (temp_r0_71 != 0) {
                    free();
                }
                temp_r0_68->unk0 = sp1A0;
                temp_r0_68->unk4 = var_r5_13;
                temp_r0_68->unkC = (void *) (sp1A0 + var_r8_12);
            }
            temp_r4_40 = func_08008910(sp138);
            temp_r0_72 = sp138->unkA94;
            var_r3_37 = 0;
            if (temp_r0_72 != 0) {
                var_r3_37 = (sp138 + 0xA94)->unk4;
            }
            func_08008F0C(&spA0, temp_r0_72, 0x050002C0, var_r3_37);
            temp_r1_41 = temp_r4_40->unk4;
            if (temp_r1_41 != temp_r4_40->unkC) {
                if (temp_r1_41 != 0) {
                    temp_r1_41->unk0 = (s32) sp164->unk0;
                    temp_r1_41->unk4 = (s32) sp164->unk4;
                    temp_r1_41->unk8 = (s32) sp164->unk8;
                    temp_r1_41->unkC = (s32) sp164->unkC;
                }
                temp_r4_40->unk4 = (void *) (temp_r4_40->unk4 + 0x10);
            } else {
                sp134 = 1;
                temp_r4_41 = (s32) (temp_r1_41 - temp_r4_40->unk0) >> 4;
                var_r0_25 = &sp130;
                *var_r0_25 = (u32) temp_r4_41;
                if ((u32) temp_r4_41 < (u32) sp134) {
                    var_r0_25 = &sp134;
                }
                temp_r0_73 = temp_r4_41 + *var_r0_25;
                if (temp_r0_73 != 0) {
                    temp_r4_42 = temp_r0_73 * 0x10;
                    var_r0_26 = malloc(temp_r4_42);
                    var_r8_13 = temp_r4_42;
                    if (var_r0_26 == 0) {
                        var_r0_26 = func_080D3BC0(var_r8_13);
                    }
                } else {
                    var_r0_26 = 0;
                    var_r8_13 = 0;
                }
                sp1A0 = var_r0_26;
                var_r2_31 = temp_r4_40->unk0;
                var_r3_38 = var_r0_26;
                if (var_r2_31 != temp_r1_41) {
                    do {
                        if (var_r3_38 != 0) {
                            var_r3_38->unk0 = (s32) var_r2_31->unk0;
                            var_r3_38->unk4 = (s32) var_r2_31->unk4;
                            var_r3_38->unk8 = (s32) var_r2_31->unk8;
                            var_r3_38->unkC = (s32) var_r2_31->unkC;
                        }
                        var_r2_31 += 0x10;
                        var_r3_38 += 0x10;
                    } while (var_r2_31 != temp_r1_41);
                }
                temp_r0_74 = sp134;
                if (temp_r0_74 == 1) {
                    if (var_r3_38 != 0) {
                        var_r3_38->unk0 = (s32) sp164->unk0;
                        var_r3_38->unk4 = (s32) sp164->unk4;
                        var_r3_38->unk8 = (s32) sp164->unk8;
                        var_r3_38->unkC = (s32) sp164->unkC;
                    }
                    var_r5_14 = var_r3_38 + 0x10;
                } else {
                    var_r3_39 = temp_r0_74;
                    var_r2_32 = var_r3_38;
                    if (var_r3_39 != 0) {
                        do {
                            if (var_r2_32 != 0) {
                                var_r2_32->unk0 = (s32) sp164->unk0;
                                var_r2_32->unk4 = (s32) sp164->unk4;
                                var_r2_32->unk8 = (s32) sp164->unk8;
                                var_r2_32->unkC = (s32) sp164->unkC;
                            }
                            var_r3_39 -= 1;
                            var_r2_32 += 0x10;
                        } while (var_r3_39 != 0);
                    }
                    var_r5_14 = var_r2_32;
                }
                temp_r2_19 = temp_r4_40->unk4;
                temp_r0_75 = temp_r4_40->unk0;
                var_r1_14 = temp_r0_75;
                if (temp_r0_75 != temp_r2_19) {
                    do {
                        var_r1_14 += 0x10;
                    } while (var_r1_14 != temp_r2_19);
                }
                if (temp_r0_75 != 0) {
                    free();
                }
                temp_r4_40->unk0 = sp1A0;
                temp_r4_40->unk4 = var_r5_14;
                temp_r4_40->unkC = (void *) (sp1A0 + var_r8_13);
            }
        }
        temp_r4_43 = func_08008920(sp138);
        temp_r0_76 = sp138->unkA84;
        var_r2_33 = 0;
        if (temp_r0_76 != 0) {
            var_r2_33 = (sp138 + 0xA84)->unk4;
        }
        func_0805E99C(temp_r4_43, temp_r0_76, var_r2_33, sp138->unkA80);
        if (sp138->unkB14 == 0) {
            goto loop_311;
        }
    }
    func_08007C28(&sp58, sp5C);
    func_080079E8(&sp58, 2);
    func_08007C28(&sp50, sp54);
    func_080079E8(&sp50, 2);
    func_08007C28(&sp48, sp4C);
    func_080079E8(&sp48, 2);
    func_08007C28(&sp40, sp44);
    func_080079E8(&sp40, 2);
    func_08007C28(&sp38, sp3C);
    func_080079E8(&sp38, 2);
    func_08007C28(&sp30, sp34);
    func_080079E8(&sp30, 2);
}

