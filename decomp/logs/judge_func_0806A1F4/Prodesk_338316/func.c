#include "common.h"
/* Warning: missing "bx $lr" in last block of func_0806A1F4 (.L0806C43C). */

u32 GetAffection__C6Animal(s32);                    /* extern */
u32 GetAge__C6Animal(s32);                          /* extern */
u32 GetCapacity__C4Barn(void *);                    /* extern */
u32 GetCapacity__C4Coop(void *);                    /* extern */
s32 GetChicken__4CoopUi(void *, u32);               /* extern */
s32 GetCow__4BarnUi(s32, u32);                      /* extern */
u32 GetGrowthStage__C3Cow(s32);                     /* extern */
s32 GetGrowthStage__C5Sheep(s32);                   /* extern */
s32 GetGrowthStage__C7Chicken(s32);                 /* extern */
s32 GetName__C6Animal(s32);                         /* extern */
s32 GetSheep__4BarnUi(void *, u32);                 /* extern */
s32 IsFestivalWinner__C6Animal(s32);                /* extern */
s32 IsPregnant__C10BarnAnimal(s32);                 /* extern */
s32 IsSheared__C5Sheep(s32);                        /* extern */
s32 IsSick__C9Livestock(s32, void *);               /* extern */
u8 IsUnhappy__C9Livestock(s32);                     /* extern */
s32 __builtin_delete(void *);                         /* extern */
void *__builtin_new(s32);                           /* extern */
s32 free();                                           /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08008724(void *);                            /* extern */
void *func_08008910(void *);                        /* extern */
s16 *func_08008918(void *);                         /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008E64(void *, s32, s32);                  /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_08008F0C(void **, ? *, s32, u16);            /* extern */
s32 func_08009300(void *, s16 *);                     /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_0804E5AC(s32, ? *, s32, s32);                /* extern */
s32 func_0804E7A0(s32, ? *, s32);                     /* extern */
s32 func_0804E958(s32, ? *, s32, s32);                /* extern */
s32 func_0804E9F4(s32, u16, s32, s32);                /* extern */
s32 func_0804EDB4(u32, s32, s32, s32);                /* extern */
s32 func_08075B00(void *, s32, s32, s16 *);         /* extern */
s32 func_08075C88(void *, s32);                       /* extern */
s32 func_08075DEC(s32, s32);                          /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memset(void *, s32, s32);                         /* extern */
extern s32 .L0806C514;
extern s32 .L0806C518;
extern void *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern u16 gUnk_080FB966;
extern ? gUnk_080FB97C;
extern ? gUnk_080FB988;
extern ? gUnk_080FB994;
extern ? gUnk_080FB9A0;
extern ? gUnk_080FB9A8;
extern ? gUnk_080FB9B0;
extern ? gUnk_080FB9B8;
extern ? gUnk_080FB9C0;
extern ? gUnk_080FB9C4;
extern ? gUnk_0875196C;
extern ? gUnk_087519EC;
extern ? gUnk_08751B4C;
extern ? gUnk_08751BCC;
extern ? gUnk_08751BEC;
extern ? gUnk_08751C6C;
extern ? gUnk_08751C8C;
extern ? gUnk_08751D0C;
extern ? gUnk_08751D2C;
extern ? gUnk_08751DAC;
extern ? gUnk_0875254C;
extern ? gUnk_087525CC;
extern ? gUnk_0875268C;
extern ? gUnk_0875270C;
extern ? gUnk_0875272C;
extern ? gUnk_087527AC;
extern ? gUnk_0875320C;
extern ? gUnk_0875328C;
extern ? gUnk_087532AC;
extern ? gUnk_0875332C;
extern ? gUnk_0875334C;
extern ? gUnk_087533CC;
extern ? gUnk_087533EC;
extern ? gUnk_0875346C;

void func_0806A1F4(s32 arg0, void *arg1, void *arg14, s32 arg17, ? arg18, ? *arg1F, ? arg3A, s16 arg3B, s16 arg3C, u32 arg3D, u32 arg3E, s16 arg3F, u32 arg40, u32 arg41, s16 arg42, s16 arg43, u32 arg44, u32 arg45, s16 arg46, u32 arg47, u32 arg48, s16 arg49, u32 arg4A, u32 arg4B, s16 arg4C, u32 arg4D, u32 arg4E, s16 arg4F, u32 arg50, u32 arg51, s16 arg52, u32 arg53, u32 arg54, s16 arg55, u32 arg56, u32 arg57, u32 arg58, u32 arg59, u32 arg5A, u32 arg5B, u32 arg5C, u32 arg5D, u32 arg5E, u32 arg5F, s16 arg60, s16 arg61, u8 arg62, s16 arg63, s16 arg64, u8 arg65, s16 arg66, s16 arg67, u8 arg68, u32 arg69, u32 arg6A, u32 arg6B, u32 arg6C, s32 arg80, s32 arg81, s32 arg82, s32 arg83, s32 arg84, s32 arg85, u32 arg86, s32 arg87, s32 arg88, s32 arg89, u32 arg8A, u32 arg8B, u8 arg8C, u32 arg8D, u32 arg8E, u8 arg8F, u32 arg90, u32 arg91, u8 arg92, ? *arg9E, s32 arg9F, s32 argA0, s32 argA1, s32 argA2, ? *argA3, ? *argA4, void *argA8, s32 *argA9, void *argAA, void *argAB, void *argAD, void *argAE, ? *argAF, void *argB0, s16 *argB1, s16 *argB2, s32 argB3, void *argB4, s32 *argB5, void *argB6, s32 argB7, s32 argB8, s16 *argBB, s16 *argBC, void *argBD, s16 *argBE, s16 *argBF, s16 *argC1, s16 *argC2, void *argC3, s32 *argC4, s16 *argC5, s16 *argC6, s16 *argC7, s16 *argC8, s16 *argC9, s16 *argCA, s16 *argCB, s16 *argCC, u8 *argCD, s16 *argCE, s16 *argCF, u8 *argD0, s16 *argD1, s16 *argD2, u8 *argD3, ? *argD6, ? *argD7, u32 argD8, u32 argD9, ? *argDA, ? *argDB, void *argDC, void *argDD) {
    ? *temp_r4;
    ? *temp_r5_13;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_6;
    s16 *temp_r0_94;
    s16 *temp_r1_25;
    s16 *temp_r1_3;
    s16 *temp_r2;
    s16 *temp_r3_3;
    s32 *temp_r1_2;
    s32 *temp_r5;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_15;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_22;
    s32 temp_r0_25;
    s32 temp_r0_28;
    s32 temp_r0_31;
    s32 temp_r0_32;
    s32 temp_r0_35;
    s32 temp_r0_36;
    s32 temp_r0_39;
    s32 temp_r0_42;
    s32 temp_r0_45;
    s32 temp_r0_48;
    s32 temp_r0_49;
    s32 temp_r0_51;
    s32 temp_r0_5;
    s32 temp_r0_63;
    s32 temp_r0_67;
    s32 temp_r0_75;
    s32 temp_r0_79;
    s32 temp_r0_87;
    s32 temp_r0_8;
    s32 temp_r0_91;
    s32 temp_r1_16;
    s32 temp_r1_17;
    s32 temp_r1_18;
    s32 temp_r1_19;
    s32 temp_r1_20;
    s32 temp_r2_15;
    s32 temp_r2_16;
    s32 temp_r2_17;
    s32 temp_r2_18;
    s32 temp_r2_19;
    s32 temp_r2_21;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_34;
    s32 temp_r4_38;
    s32 temp_r4_3;
    s32 temp_r4_43;
    s32 temp_r4_44;
    s32 temp_r4_46;
    s32 temp_r4_47;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_10;
    s32 temp_r5_11;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_9;
    s32 var_r1_26;
    s32 var_r5;
    s32 var_sb;
    s32 var_sb_10;
    s32 var_sb_11;
    s32 var_sb_12;
    s32 var_sb_13;
    s32 var_sb_14;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    s32 var_sb_7;
    s32 var_sb_8;
    s32 var_sb_9;
    s32 var_sl;
    s32 var_sl_2;
    u16 *var_r4;
    u16 temp_r4_31;
    u16 temp_r4_35;
    u16 temp_r4_39;
    u16 var_r3_17;
    u16 var_r3_19;
    u32 *temp_r0_53;
    u32 *temp_r0_65;
    u32 *temp_r0_77;
    u32 *var_r0;
    u32 *var_r1_10;
    u32 *var_r1_12;
    u32 *var_r1_14;
    u32 *var_r1_16;
    u32 *var_r1_18;
    u32 *var_r1_20;
    u32 *var_r1_22;
    u32 *var_r1_24;
    u32 *var_r1_2;
    u32 *var_r1_33;
    u32 *var_r1_35;
    u32 *var_r1_4;
    u32 *var_r1_6;
    u32 *var_r1_8;
    u32 temp_r0_13;
    u32 temp_r0_16;
    u32 temp_r0_20;
    u32 temp_r0_23;
    u32 temp_r0_26;
    u32 temp_r0_29;
    u32 temp_r0_33;
    u32 temp_r0_37;
    u32 temp_r0_40;
    u32 temp_r0_43;
    u32 temp_r0_46;
    u32 temp_r0_50;
    u32 temp_r0_52;
    u32 temp_r0_54;
    u32 temp_r0_55;
    u32 temp_r0_56;
    u32 temp_r0_59;
    u32 temp_r0_62;
    u32 temp_r0_64;
    u32 temp_r0_66;
    u32 temp_r0_68;
    u32 temp_r0_71;
    u32 temp_r0_74;
    u32 temp_r0_76;
    u32 temp_r0_78;
    u32 temp_r0_80;
    u32 temp_r0_83;
    u32 temp_r0_88;
    u32 temp_r0_92;
    u32 temp_r0_9;
    u32 temp_r4_32;
    u32 temp_r4_36;
    u32 temp_r4_40;
    u32 temp_r5_12;
    u32 temp_r5_5;
    u32 temp_r5_8;
    u32 var_r0_15;
    u32 var_r0_16;
    u32 var_r0_17;
    u32 var_r1_27;
    u32 var_r1_28;
    u32 var_r1_29;
    u32 var_r1_30;
    u32 var_r1_31;
    u32 var_r1_32;
    u32 var_r2_27;
    u32 var_r2_28;
    u32 var_r2_29;
    u32 var_r3_14;
    u32 var_r3_15;
    u32 var_r3_16;
    u32 var_r4_2;
    u32 var_r5_15;
    u32 var_r5_16;
    u32 var_r5_17;
    u32 var_r5_18;
    u32 var_r5_19;
    u32 var_r8;
    u32 var_r8_10;
    u32 var_r8_11;
    u32 var_r8_12;
    u32 var_r8_13;
    u32 var_r8_14;
    u32 var_r8_15;
    u32 var_r8_2;
    u32 var_r8_3;
    u32 var_r8_4;
    u32 var_r8_5;
    u32 var_r8_6;
    u32 var_r8_7;
    u32 var_r8_8;
    u32 var_r8_9;
    u8 temp_r0_58;
    u8 temp_r0_60;
    u8 temp_r0_61;
    u8 temp_r0_70;
    u8 temp_r0_72;
    u8 temp_r0_73;
    u8 temp_r0_82;
    u8 temp_r0_84;
    u8 temp_r0_85;
    u8 temp_r4_33;
    u8 temp_r4_37;
    u8 temp_r4_41;
    void **temp_r1_21;
    void **temp_r1_23;
    void *temp_r0_10;
    void *temp_r0_14;
    void *temp_r0_17;
    void *temp_r0_21;
    void *temp_r0_24;
    void *temp_r0_27;
    void *temp_r0_30;
    void *temp_r0_34;
    void *temp_r0_38;
    void *temp_r0_41;
    void *temp_r0_44;
    void *temp_r0_47;
    void *temp_r0_57;
    void *temp_r0_69;
    void *temp_r0_7;
    void *temp_r0_81;
    void *temp_r0_86;
    void *temp_r0_89;
    void *temp_r0_90;
    void *temp_r0_93;
    void *temp_r0_95;
    void *temp_r1;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_13;
    void *temp_r1_14;
    void *temp_r1_15;
    void *temp_r1_22;
    void *temp_r1_24;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_14;
    void *temp_r2_20;
    void *temp_r2_22;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;
    void *temp_r4_29;
    void *temp_r4_42;
    void *temp_r4_45;
    void *temp_r4_48;
    void *temp_r5_14;
    void *temp_r5_2;
    void *var_r0_10;
    void *var_r0_11;
    void *var_r0_12;
    void *var_r0_13;
    void *var_r0_14;
    void *var_r0_18;
    void *var_r0_19;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r0_7;
    void *var_r0_8;
    void *var_r0_9;
    void *var_r1;
    void *var_r1_11;
    void *var_r1_13;
    void *var_r1_15;
    void *var_r1_17;
    void *var_r1_19;
    void *var_r1_21;
    void *var_r1_23;
    void *var_r1_25;
    void *var_r1_34;
    void *var_r1_36;
    void *var_r1_3;
    void *var_r1_5;
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
    void *var_r2_17;
    void *var_r2_18;
    void *var_r2_19;
    void *var_r2_20;
    void *var_r2_21;
    void *var_r2_22;
    void *var_r2_23;
    void *var_r2_24;
    void *var_r2_25;
    void *var_r2_26;
    void *var_r2_2;
    void *var_r2_30;
    void *var_r2_31;
    void *var_r2_32;
    void *var_r2_33;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3;
    void *var_r3_10;
    void *var_r3_11;
    void *var_r3_12;
    void *var_r3_13;
    void *var_r3_18;
    void *var_r3_20;
    void *var_r3_2;
    void *var_r3_3;
    void *var_r3_4;
    void *var_r3_5;
    void *var_r3_6;
    void *var_r3_7;
    void *var_r3_8;
    void *var_r3_9;
    void *var_r5_10;
    void *var_r5_11;
    void *var_r5_12;
    void *var_r5_13;
    void *var_r5_14;
    void *var_r5_20;
    void *var_r5_21;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;
    void *var_r5_9;

    arg7F = arg0;
    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    unksp10 = 0x1D40;
    temp_r0->unk8 = 0x1D40;
    temp_r0_2 = func_08008918(arg1);
    unksp10 = 0x1E41;
    temp_r0_2->unkA = 0x1E41;
    temp_r0_3 = func_08008918(arg1);
    unksp10 = 0x3F42;
    temp_r0_3->unkC = 0x3F42;
    func_08008EB8(-1, 0x0600E800, 0x1800);
    func_08008EB8(0, 0x06007FE0, 0x20);
    temp_r0_4 = func_08008918(arg1);
    unksp10 = 0x1640;
    *temp_r0_4 = 0x1640;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600F800, 0x800);
    var_sl = 0;
    argA8 = &unksp0 + 0x18;
    argAA = &unksp0 + 0x58;
    argBD = &unksp0 + 0xFC;
    argBE = &arg3C;
    argAB = &unksp0 + 0x60;
    argBF = &arg3F;
    argC1 = &arg42;
    argC2 = &arg43;
    argC5 = &arg46;
    argC6 = &arg49;
    argC7 = &arg4C;
    argC8 = &arg4F;
    argC9 = &arg52;
    argCA = &arg55;
    argAD = &unksp0 + 0x7C;
    argAE = &unksp0 + 0x8C;
    argB0 = &unksp0 + 0x9C;
    argB6 = &unksp0 + 0xAC;
    argAC = &unksp0 + 0x64;
    var_r5 = 0x06001400;
    var_r4 = &gUnk_080FB966;
    do {
        arg3A.unk0 = 1;
        arg3A.unk2 = 2;
        unksp0 = (s32) *var_r4;
        unksp4 = 0;
        unksp8 = 1;
        func_0804E5AC((s32) arg3A.unk0, &unksp18, 0, 0);
        func_08008E64(argA8, var_r5, 0x40);
        var_r5 += 0x40;
        var_r4 += 2;
        var_sl += 1;
    } while (var_sl <= 9);
    memset(argAA, 0, 6);
    arg80 = 0;
    argAA->unk0 = 0x20U;
    arg3B = 8;
    argBD->unk2 = 2;
    temp_r4 = arg1 + 0x140;
    func_0804E7A0((s32) arg3B, temp_r4, 0);
    arg3C = 8;
    argBE->unk2 = 2;
    unksp0 = &gUnk_080FB97C;
    unksp4 = arg80;
    unksp8 = 1;
    func_0804E958((s32) arg3C, temp_r4, 0, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, temp_r4, (argAA->unk0 << 5) + 0x06000000, 0x200U);
    temp_r1 = argDC->unk4;
    if (temp_r1 != argDC->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) argAB->unk0;
            temp_r1->unk4 = (s32) argAB->unk4;
            temp_r1->unk8 = (s32 *) argAB->unk8;
            temp_r1->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
        argD6 = arg1 + 0x344;
        argD7 = arg1 + 0x548;
        arg9E = arg1 + 0x854;
        argA3 = arg1 + 0x9D8;
        argA4 = arg1 + 0xB5C;
        argAF = arg1 + 0xCE0;
        argDA = arg1 + 0x74C;
        argDB = arg1 + 0x7D0;
        temp_r1_2 = arg1 + 0x1C;
        argA9 = temp_r1_2;
        temp_r2 = arg1 + 0x84;
        argB1 = temp_r2;
        argB2 = arg1 + 0x86;
        argBB = arg1 + 0xBC;
        argBC = arg1 + 0xBE;
        argC3 = arg1 + 0xFC;
        argC4 = arg1 + 0x100;
        argB4 = temp_r1_2 + 0x6C;
        argB5 = temp_r2 + 8;
    } else {
        arg3E = 1;
        temp_r4_2 = (s32) (temp_r1 - argDC->unk0) >> 4;
        var_r0 = &arg3D;
        *var_r0 = temp_r4_2;
        if ((u32) temp_r4_2 < (u32) arg3E) {
            var_r0 = &arg3E;
        }
        temp_r0_5 = temp_r4_2 + *var_r0;
        if (temp_r0_5 != 0) {
            temp_r4_3 = temp_r0_5 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_sb = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        argDD = var_r0_2;
        var_r2 = argDC->unk0;
        var_r3 = var_r0_2;
        argD6 = arg1 + 0x344;
        argD7 = arg1 + 0x548;
        arg9E = arg1 + 0x854;
        argA3 = arg1 + 0x9D8;
        argA4 = arg1 + 0xB5C;
        argAF = arg1 + 0xCE0;
        argDA = arg1 + 0x74C;
        argDB = arg1 + 0x7D0;
        temp_r5 = arg1 + 0x1C;
        argA9 = temp_r5;
        argB1 = arg1 + 0x84;
        temp_r0_6 = arg1 + 0x86;
        argB2 = temp_r0_6;
        temp_r1_3 = arg1 + 0xBC;
        argBB = temp_r1_3;
        argBC = arg1 + 0xBE;
        argC3 = temp_r5 + 0xE0;
        argC4 = arg1 + 0x100;
        argB4 = temp_r0_6 + 2;
        argB5 = temp_r1_3 - 0x30;
        if (var_r2 != temp_r1) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != temp_r1);
        }
        if (arg3E == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) argAB->unk0;
                var_r3->unk4 = (s32) argAB->unk4;
                var_r3->unk8 = (s32 *) argAB->unk8;
                var_r3->unkC = (s32 *) argAB->unkC;
            }
            var_r5_2 = var_r3 + 0x10;
        } else {
            var_r8 = arg3E;
            var_r2_2 = var_r3;
            if (arg3E != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) argAB->unk0;
                        var_r2_2->unk4 = (s32) argAB->unk4;
                        var_r2_2->unk8 = (s32 *) argAB->unk8;
                        var_r2_2->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5_2 = var_r2_2;
        }
        temp_r2_2 = argDC->unk4;
        temp_r0_7 = argDC->unk0;
        var_r1 = temp_r0_7;
        if (temp_r0_7 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_2;
        argDC->unkC = (void *) (argDD + var_sb);
    }
    arg80 = 0x10;
    argAA->unk2 = 0x30U;
    arg3F = 8;
    argBF->unk2 = 2;
    unksp0 = &gUnk_080FB988;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg3F, argD6, 0, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, argD6, (argAA->unk2 << 5) + 0x06000000, 0x200U);
    temp_r1_4 = argDC->unk4;
    if (temp_r1_4 != argDC->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) argAB->unk0;
            temp_r1_4->unk4 = (s32) argAB->unk4;
            temp_r1_4->unk8 = (s32 *) argAB->unk8;
            temp_r1_4->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg41 = 1;
        temp_r4_4 = (s32) (temp_r1_4 - argDC->unk0) >> 4;
        arg40 = temp_r4_4;
        var_r1_2 = &arg40;
        if ((u32) temp_r4_4 < (u32) arg41) {
            var_r1_2 = &arg41;
        }
        temp_r0_8 = temp_r4_4 + *var_r1_2;
        if (temp_r0_8 != 0) {
            temp_r4_5 = temp_r0_8 * 0x10;
            var_r0_3 = malloc(temp_r4_5);
            var_sb_2 = temp_r4_5;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_3 = 0;
            var_sb_2 = 0;
        }
        argDD = var_r0_3;
        var_r2_3 = argDC->unk0;
        var_r3_2 = var_r0_3;
        if (var_r2_3 != temp_r1_4) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_3->unk0;
                    var_r3_2->unk4 = (s32) var_r2_3->unk4;
                    var_r3_2->unk8 = (s32) var_r2_3->unk8;
                    var_r3_2->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_3 != temp_r1_4);
        }
        temp_r0_9 = arg41;
        if (temp_r0_9 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) argAB->unk0;
                var_r3_2->unk4 = (s32) argAB->unk4;
                var_r3_2->unk8 = (s32 *) argAB->unk8;
                var_r3_2->unkC = (s32 *) argAB->unkC;
            }
            var_r5_3 = var_r3_2 + 0x10;
        } else {
            var_r8_2 = temp_r0_9;
            var_r2_4 = var_r3_2;
            if (temp_r0_9 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) argAB->unk0;
                        var_r2_4->unk4 = (s32) argAB->unk4;
                        var_r2_4->unk8 = (s32 *) argAB->unk8;
                        var_r2_4->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_2 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r8_2 != 0);
            }
            var_r5_3 = var_r2_4;
        }
        temp_r2_3 = argDC->unk4;
        temp_r0_10 = argDC->unk0;
        var_r1_3 = temp_r0_10;
        if (temp_r0_10 != temp_r2_3) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0_10 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_3;
        argDC->unkC = (void *) (argDD + var_sb_2);
    }
    temp_r0_11 = arg80 + 0x10;
    arg80 = temp_r0_11;
    argAA->unk4 = (u16) (temp_r0_11 + 0x20);
    arg42 = 8;
    argC1->unk2 = 2;
    func_0804E7A0((s32) arg42, argD7, 0);
    arg43 = 8;
    argC2->unk2 = 2;
    unksp0 = &gUnk_080FB994;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg43, argD7, 0, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, argD7, (argAA->unk4 << 5) + 0x06000000, 0x200U);
    temp_r1_5 = argDC->unk4;
    if (temp_r1_5 != argDC->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) argAB->unk0;
            temp_r1_5->unk4 = (s32) argAB->unk4;
            temp_r1_5->unk8 = (s32 *) argAB->unk8;
            temp_r1_5->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
        argB8 = arg80 + 0x10;
    } else {
        arg45 = 1;
        temp_r4_6 = (s32) (temp_r1_5 - argDC->unk0) >> 4;
        arg44 = temp_r4_6;
        var_r1_4 = &arg44;
        if ((u32) temp_r4_6 < (u32) arg45) {
            var_r1_4 = &arg45;
        }
        temp_r0_12 = temp_r4_6 + *var_r1_4;
        if (temp_r0_12 != 0) {
            temp_r4_7 = temp_r0_12 * 0x10;
            var_r0_4 = malloc(temp_r4_7);
            var_sb_3 = temp_r4_7;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_3);
            }
        } else {
            var_r0_4 = 0;
            var_sb_3 = 0;
        }
        argDD = var_r0_4;
        var_r2_5 = argDC->unk0;
        var_r3_3 = var_r0_4;
        argB8 = arg80 + 0x10;
        if (var_r2_5 != temp_r1_5) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_5->unk0;
                    var_r3_3->unk4 = (s32) var_r2_5->unk4;
                    var_r3_3->unk8 = (s32) var_r2_5->unk8;
                    var_r3_3->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_5 != temp_r1_5);
        }
        temp_r0_13 = arg45;
        if (temp_r0_13 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) argAB->unk0;
                var_r3_3->unk4 = (s32) argAB->unk4;
                var_r3_3->unk8 = (s32 *) argAB->unk8;
                var_r3_3->unkC = (s32 *) argAB->unkC;
            }
            var_r5_4 = var_r3_3 + 0x10;
        } else {
            var_r8_3 = temp_r0_13;
            var_r2_6 = var_r3_3;
            if (temp_r0_13 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) argAB->unk0;
                        var_r2_6->unk4 = (s32) argAB->unk4;
                        var_r2_6->unk8 = (s32 *) argAB->unk8;
                        var_r2_6->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_3 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r8_3 != 0);
            }
            var_r5_4 = var_r2_6;
        }
        temp_r2_4 = argDC->unk4;
        temp_r0_14 = argDC->unk0;
        var_r1_5 = temp_r0_14;
        if (temp_r0_14 != temp_r2_4) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_4);
        }
        if (temp_r0_14 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_4;
        argDC->unkC = (void *) (argDD + var_sb_3);
    }
    arg80 = argB8;
    arg81 = argB8 + 0x20;
    arg46 = 6;
    argC5->unk2 = 2;
    unksp0 = &gUnk_080FB9A0;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg46, arg9E, 0, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, arg9E, (arg81 << 5) + 0x06000000, 0x180U);
    temp_r1_6 = argDC->unk4;
    if (temp_r1_6 != argDC->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) argAB->unk0;
            temp_r1_6->unk4 = (s32) argAB->unk4;
            temp_r1_6->unk8 = (s32 *) argAB->unk8;
            temp_r1_6->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg48 = 1;
        temp_r4_8 = (s32) (temp_r1_6 - argDC->unk0) >> 4;
        arg47 = temp_r4_8;
        var_r1_6 = &arg47;
        if ((u32) temp_r4_8 < (u32) arg48) {
            var_r1_6 = &arg48;
        }
        temp_r0_15 = temp_r4_8 + *var_r1_6;
        if (temp_r0_15 != 0) {
            temp_r4_9 = temp_r0_15 * 0x10;
            var_r0_5 = malloc(temp_r4_9);
            var_sb_4 = temp_r4_9;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_sb_4);
            }
        } else {
            var_r0_5 = 0;
            var_sb_4 = 0;
        }
        argDD = var_r0_5;
        var_r2_7 = argDC->unk0;
        var_r3_4 = var_r0_5;
        if (var_r2_7 != temp_r1_6) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_7->unk0;
                    var_r3_4->unk4 = (s32) var_r2_7->unk4;
                    var_r3_4->unk8 = (s32) var_r2_7->unk8;
                    var_r3_4->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_7 != temp_r1_6);
        }
        temp_r0_16 = arg48;
        if (temp_r0_16 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) argAB->unk0;
                var_r3_4->unk4 = (s32) argAB->unk4;
                var_r3_4->unk8 = (s32 *) argAB->unk8;
                var_r3_4->unkC = (s32 *) argAB->unkC;
            }
            var_r5_5 = var_r3_4 + 0x10;
        } else {
            var_r8_4 = temp_r0_16;
            var_r2_8 = var_r3_4;
            if (temp_r0_16 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) argAB->unk0;
                        var_r2_8->unk4 = (s32) argAB->unk4;
                        var_r2_8->unk8 = (s32 *) argAB->unk8;
                        var_r2_8->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_4 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r8_4 != 0);
            }
            var_r5_5 = var_r2_8;
        }
        temp_r2_5 = argDC->unk4;
        temp_r0_17 = argDC->unk0;
        var_r1_7 = temp_r0_17;
        if (temp_r0_17 != temp_r2_5) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_5);
        }
        if (temp_r0_17 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_5;
        argDC->unkC = (void *) (argDD + var_sb_4);
    }
    temp_r0_18 = arg80 + 0xC;
    arg80 = temp_r0_18;
    arg49 = 6;
    argC6->unk2 = 2;
    unksp0 = &gUnk_080FB9A8;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg49, argA3, 0, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, argA3, ((temp_r0_18 + 0x20) << 5) + 0x06000000, 0x180U);
    temp_r1_7 = argDC->unk4;
    if (temp_r1_7 != argDC->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32) argAB->unk0;
            temp_r1_7->unk4 = (s32) argAB->unk4;
            temp_r1_7->unk8 = (s32 *) argAB->unk8;
            temp_r1_7->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg4B = 1;
        temp_r4_10 = (s32) (temp_r1_7 - argDC->unk0) >> 4;
        arg4A = temp_r4_10;
        var_r1_8 = &arg4A;
        if ((u32) temp_r4_10 < (u32) arg4B) {
            var_r1_8 = &arg4B;
        }
        temp_r0_19 = temp_r4_10 + *var_r1_8;
        if (temp_r0_19 != 0) {
            temp_r4_11 = temp_r0_19 * 0x10;
            var_r0_6 = malloc(temp_r4_11);
            var_sb_5 = temp_r4_11;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_sb_5);
            }
        } else {
            var_r0_6 = 0;
            var_sb_5 = 0;
        }
        argDD = var_r0_6;
        var_r2_9 = argDC->unk0;
        var_r3_5 = var_r0_6;
        if (var_r2_9 != temp_r1_7) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_9->unk0;
                    var_r3_5->unk4 = (s32) var_r2_9->unk4;
                    var_r3_5->unk8 = (s32) var_r2_9->unk8;
                    var_r3_5->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_9 != temp_r1_7);
        }
        temp_r0_20 = arg4B;
        if (temp_r0_20 == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) argAB->unk0;
                var_r3_5->unk4 = (s32) argAB->unk4;
                var_r3_5->unk8 = (s32 *) argAB->unk8;
                var_r3_5->unkC = (s32 *) argAB->unkC;
            }
            var_r5_6 = var_r3_5 + 0x10;
        } else {
            var_r8_5 = temp_r0_20;
            var_r2_10 = var_r3_5;
            if (temp_r0_20 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32) argAB->unk0;
                        var_r2_10->unk4 = (s32) argAB->unk4;
                        var_r2_10->unk8 = (s32 *) argAB->unk8;
                        var_r2_10->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_5 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r8_5 != 0);
            }
            var_r5_6 = var_r2_10;
        }
        temp_r2_6 = argDC->unk4;
        temp_r0_21 = argDC->unk0;
        var_r1_9 = temp_r0_21;
        if (temp_r0_21 != temp_r2_6) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_6);
        }
        if (temp_r0_21 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_6;
        argDC->unkC = (void *) (argDD + var_sb_5);
    }
    temp_r3 = arg80 + 0xC;
    arg80 = temp_r3;
    arg4C = 6;
    argC7->unk2 = 2;
    unksp0 = &gUnk_080FB9B0;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg4C, argA4, 0, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, argA4, ((temp_r3 + 0x20) << 5) + 0x06000000, 0x180U);
    temp_r1_8 = argDC->unk4;
    if (temp_r1_8 != argDC->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32) argAB->unk0;
            temp_r1_8->unk4 = (s32) argAB->unk4;
            temp_r1_8->unk8 = (s32 *) argAB->unk8;
            temp_r1_8->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg4E = 1;
        temp_r4_12 = (s32) (temp_r1_8 - argDC->unk0) >> 4;
        arg4D = temp_r4_12;
        var_r1_10 = &arg4D;
        if ((u32) temp_r4_12 < (u32) arg4E) {
            var_r1_10 = &arg4E;
        }
        temp_r0_22 = temp_r4_12 + *var_r1_10;
        if (temp_r0_22 != 0) {
            temp_r4_13 = temp_r0_22 * 0x10;
            var_r0_7 = malloc(temp_r4_13);
            var_sb_6 = temp_r4_13;
            if (var_r0_7 == 0) {
                var_r0_7 = func_080D3BC0(var_sb_6);
            }
        } else {
            var_r0_7 = 0;
            var_sb_6 = 0;
        }
        argDD = var_r0_7;
        var_r2_11 = argDC->unk0;
        var_r3_6 = var_r0_7;
        if (var_r2_11 != temp_r1_8) {
            do {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) var_r2_11->unk0;
                    var_r3_6->unk4 = (s32) var_r2_11->unk4;
                    var_r3_6->unk8 = (s32) var_r2_11->unk8;
                    var_r3_6->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_6 += 0x10;
            } while (var_r2_11 != temp_r1_8);
        }
        temp_r0_23 = arg4E;
        if (temp_r0_23 == 1) {
            if (var_r3_6 != 0) {
                var_r3_6->unk0 = (s32) argAB->unk0;
                var_r3_6->unk4 = (s32) argAB->unk4;
                var_r3_6->unk8 = (s32 *) argAB->unk8;
                var_r3_6->unkC = (s32 *) argAB->unkC;
            }
            var_r5_7 = var_r3_6 + 0x10;
        } else {
            var_r8_6 = temp_r0_23;
            var_r2_12 = var_r3_6;
            if (temp_r0_23 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) argAB->unk0;
                        var_r2_12->unk4 = (s32) argAB->unk4;
                        var_r2_12->unk8 = (s32 *) argAB->unk8;
                        var_r2_12->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_6 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r8_6 != 0);
            }
            var_r5_7 = var_r2_12;
        }
        temp_r2_7 = argDC->unk4;
        temp_r0_24 = argDC->unk0;
        var_r1_11 = temp_r0_24;
        if (temp_r0_24 != temp_r2_7) {
            do {
                var_r1_11 += 0x10;
            } while (var_r1_11 != temp_r2_7);
        }
        if (temp_r0_24 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_7;
        argDC->unkC = (void *) (argDD + var_sb_6);
    }
    temp_r3_2 = arg80 + 0xC;
    arg80 = temp_r3_2;
    arg4F = 6;
    argC8->unk2 = 2;
    unksp0 = &gUnk_080FB9B8;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg4F, argAF, 0, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, argAF, ((temp_r3_2 + 0x20) << 5) + 0x06000000, 0x180U);
    temp_r1_9 = argDC->unk4;
    if (temp_r1_9 != argDC->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) argAB->unk0;
            temp_r1_9->unk4 = (s32) argAB->unk4;
            temp_r1_9->unk8 = (s32 *) argAB->unk8;
            temp_r1_9->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
        argB7 = arg80 + 0xC;
    } else {
        arg51 = 1;
        temp_r4_14 = (s32) (temp_r1_9 - argDC->unk0) >> 4;
        arg50 = temp_r4_14;
        var_r1_12 = &arg50;
        if ((u32) temp_r4_14 < (u32) arg51) {
            var_r1_12 = &arg51;
        }
        temp_r0_25 = temp_r4_14 + *var_r1_12;
        if (temp_r0_25 != 0) {
            temp_r4_15 = temp_r0_25 * 0x10;
            var_r0_8 = malloc(temp_r4_15);
            var_sb_7 = temp_r4_15;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_sb_7);
            }
        } else {
            var_r0_8 = 0;
            var_sb_7 = 0;
        }
        argDD = var_r0_8;
        var_r2_13 = argDC->unk0;
        var_r3_7 = var_r0_8;
        argB7 = arg80 + 0xC;
        if (var_r2_13 != temp_r1_9) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_13->unk0;
                    var_r3_7->unk4 = (s32) var_r2_13->unk4;
                    var_r3_7->unk8 = (s32) var_r2_13->unk8;
                    var_r3_7->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_13 != temp_r1_9);
        }
        temp_r0_26 = arg51;
        if (temp_r0_26 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32) argAB->unk0;
                var_r3_7->unk4 = (s32) argAB->unk4;
                var_r3_7->unk8 = (s32 *) argAB->unk8;
                var_r3_7->unkC = (s32 *) argAB->unkC;
            }
            var_r5_8 = var_r3_7 + 0x10;
        } else {
            var_r8_7 = temp_r0_26;
            var_r2_14 = var_r3_7;
            if (temp_r0_26 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) argAB->unk0;
                        var_r2_14->unk4 = (s32) argAB->unk4;
                        var_r2_14->unk8 = (s32 *) argAB->unk8;
                        var_r2_14->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_7 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r8_7 != 0);
            }
            var_r5_8 = var_r2_14;
        }
        temp_r2_8 = argDC->unk4;
        temp_r0_27 = argDC->unk0;
        var_r1_13 = temp_r0_27;
        if (temp_r0_27 != temp_r2_8) {
            do {
                var_r1_13 += 0x10;
            } while (var_r1_13 != temp_r2_8);
        }
        if (temp_r0_27 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_8;
        argDC->unkC = (void *) (argDD + var_sb_7);
    }
    arg80 = argB7;
    arg82 = argB7 + 0x20;
    arg52 = 2;
    argC9->unk2 = 2;
    unksp0 = &gUnk_080FB9C0;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg52, argDA, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, argDA, (arg82 << 5) + 0x06000000, 0x80U);
    temp_r1_10 = argDC->unk4;
    if (temp_r1_10 != argDC->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) argAB->unk0;
            temp_r1_10->unk4 = (s32) argAB->unk4;
            temp_r1_10->unk8 = (s32 *) argAB->unk8;
            temp_r1_10->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg54 = 1;
        temp_r4_16 = (s32) (temp_r1_10 - argDC->unk0) >> 4;
        arg53 = temp_r4_16;
        var_r1_14 = &arg53;
        if ((u32) temp_r4_16 < (u32) arg54) {
            var_r1_14 = &arg54;
        }
        temp_r0_28 = temp_r4_16 + *var_r1_14;
        if (temp_r0_28 != 0) {
            temp_r4_17 = temp_r0_28 * 0x10;
            var_r0_9 = malloc(temp_r4_17);
            var_sb_8 = temp_r4_17;
            if (var_r0_9 == 0) {
                var_r0_9 = func_080D3BC0(var_sb_8);
            }
        } else {
            var_r0_9 = 0;
            var_sb_8 = 0;
        }
        argDD = var_r0_9;
        var_r2_15 = argDC->unk0;
        var_r3_8 = var_r0_9;
        if (var_r2_15 != temp_r1_10) {
            do {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) var_r2_15->unk0;
                    var_r3_8->unk4 = (s32) var_r2_15->unk4;
                    var_r3_8->unk8 = (s32) var_r2_15->unk8;
                    var_r3_8->unkC = (s32) var_r2_15->unkC;
                }
                var_r2_15 += 0x10;
                var_r3_8 += 0x10;
            } while (var_r2_15 != temp_r1_10);
        }
        temp_r0_29 = arg54;
        if (temp_r0_29 == 1) {
            if (var_r3_8 != 0) {
                var_r3_8->unk0 = (s32) argAB->unk0;
                var_r3_8->unk4 = (s32) argAB->unk4;
                var_r3_8->unk8 = (s32 *) argAB->unk8;
                var_r3_8->unkC = (s32 *) argAB->unkC;
            }
            var_r5_9 = var_r3_8 + 0x10;
        } else {
            var_r8_8 = temp_r0_29;
            var_r2_16 = var_r3_8;
            if (temp_r0_29 != 0) {
                do {
                    if (var_r2_16 != 0) {
                        var_r2_16->unk0 = (s32) argAB->unk0;
                        var_r2_16->unk4 = (s32) argAB->unk4;
                        var_r2_16->unk8 = (s32 *) argAB->unk8;
                        var_r2_16->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_8 -= 1;
                    var_r2_16 += 0x10;
                } while (var_r8_8 != 0);
            }
            var_r5_9 = var_r2_16;
        }
        temp_r2_9 = argDC->unk4;
        temp_r0_30 = argDC->unk0;
        var_r1_15 = temp_r0_30;
        if (temp_r0_30 != temp_r2_9) {
            do {
                var_r1_15 += 0x10;
            } while (var_r1_15 != temp_r2_9);
        }
        if (temp_r0_30 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_9;
        argDC->unkC = (void *) (argDD + var_sb_8);
    }
    temp_r0_31 = arg80 + 4;
    arg80 = temp_r0_31;
    arg83 = temp_r0_31 + 0x20;
    arg55 = 2;
    argCA->unk2 = 2;
    unksp0 = &gUnk_080FB9C4;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg55, argDB, 0);
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, argDB, (arg83 << 5) + 0x06000000, 0x80U);
    temp_r1_11 = argDC->unk4;
    if (temp_r1_11 != argDC->unkC) {
        if (temp_r1_11 != 0) {
            temp_r1_11->unk0 = (s32) argAB->unk0;
            temp_r1_11->unk4 = (s32) argAB->unk4;
            temp_r1_11->unk8 = (s32 *) argAB->unk8;
            temp_r1_11->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg57 = 1;
        temp_r4_18 = (s32) (temp_r1_11 - argDC->unk0) >> 4;
        arg56 = temp_r4_18;
        var_r1_16 = &arg56;
        if ((u32) temp_r4_18 < (u32) arg57) {
            var_r1_16 = &arg57;
        }
        temp_r0_32 = temp_r4_18 + *var_r1_16;
        if (temp_r0_32 != 0) {
            temp_r4_19 = temp_r0_32 * 0x10;
            var_r0_10 = malloc(temp_r4_19);
            var_sb_9 = temp_r4_19;
            if (var_r0_10 == 0) {
                var_r0_10 = func_080D3BC0(var_sb_9);
            }
        } else {
            var_r0_10 = 0;
            var_sb_9 = 0;
        }
        argDD = var_r0_10;
        var_r2_17 = argDC->unk0;
        var_r3_9 = var_r0_10;
        if (var_r2_17 != temp_r1_11) {
            do {
                if (var_r3_9 != 0) {
                    var_r3_9->unk0 = (s32) var_r2_17->unk0;
                    var_r3_9->unk4 = (s32) var_r2_17->unk4;
                    var_r3_9->unk8 = (s32) var_r2_17->unk8;
                    var_r3_9->unkC = (s32) var_r2_17->unkC;
                }
                var_r2_17 += 0x10;
                var_r3_9 += 0x10;
            } while (var_r2_17 != temp_r1_11);
        }
        temp_r0_33 = arg57;
        if (temp_r0_33 == 1) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) argAB->unk0;
                var_r3_9->unk4 = (s32) argAB->unk4;
                var_r3_9->unk8 = (s32 *) argAB->unk8;
                var_r3_9->unkC = (s32 *) argAB->unkC;
            }
            var_r5_10 = var_r3_9 + 0x10;
        } else {
            var_r8_9 = temp_r0_33;
            var_r2_18 = var_r3_9;
            if (temp_r0_33 != 0) {
                do {
                    if (var_r2_18 != 0) {
                        var_r2_18->unk0 = (s32) argAB->unk0;
                        var_r2_18->unk4 = (s32) argAB->unk4;
                        var_r2_18->unk8 = (s32 *) argAB->unk8;
                        var_r2_18->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_9 -= 1;
                    var_r2_18 += 0x10;
                } while (var_r8_9 != 0);
            }
            var_r5_10 = var_r2_18;
        }
        temp_r2_10 = argDC->unk4;
        temp_r0_34 = argDC->unk0;
        var_r1_17 = temp_r0_34;
        if (temp_r0_34 != temp_r2_10) {
            do {
                var_r1_17 += 0x10;
            } while (var_r1_17 != temp_r2_10);
        }
        if (temp_r0_34 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_10;
        argDC->unkC = (void *) (argDD + var_sb_9);
    }
    temp_r0_35 = arg80 + 4;
    arg80 = temp_r0_35;
    arg84 = temp_r0_35 + 0x20;
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, &gUnk_0875196C, (arg84 << 5) + 0x06000000, 0x80U);
    temp_r1_12 = argDC->unk4;
    if (temp_r1_12 != argDC->unkC) {
        if (temp_r1_12 != 0) {
            temp_r1_12->unk0 = (s32) argAB->unk0;
            temp_r1_12->unk4 = (s32) argAB->unk4;
            temp_r1_12->unk8 = (s32 *) argAB->unk8;
            temp_r1_12->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
        argB3 = arg80 + 4;
    } else {
        arg59 = 1;
        temp_r4_20 = (s32) (temp_r1_12 - argDC->unk0) >> 4;
        arg58 = temp_r4_20;
        var_r1_18 = &arg58;
        if ((u32) temp_r4_20 < (u32) arg59) {
            var_r1_18 = &arg59;
        }
        temp_r0_36 = temp_r4_20 + *var_r1_18;
        if (temp_r0_36 != 0) {
            temp_r4_21 = temp_r0_36 * 0x10;
            var_r0_11 = malloc(temp_r4_21);
            var_sb_10 = temp_r4_21;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_sb_10);
            }
        } else {
            var_r0_11 = 0;
            var_sb_10 = 0;
        }
        argDD = var_r0_11;
        var_r2_19 = argDC->unk0;
        var_r3_10 = var_r0_11;
        argB3 = arg80 + 4;
        if (var_r2_19 != temp_r1_12) {
            do {
                if (var_r3_10 != 0) {
                    var_r3_10->unk0 = (s32) var_r2_19->unk0;
                    var_r3_10->unk4 = (s32) var_r2_19->unk4;
                    var_r3_10->unk8 = (s32) var_r2_19->unk8;
                    var_r3_10->unkC = (s32) var_r2_19->unkC;
                }
                var_r2_19 += 0x10;
                var_r3_10 += 0x10;
            } while (var_r2_19 != temp_r1_12);
        }
        temp_r0_37 = arg59;
        if (temp_r0_37 == 1) {
            if (var_r3_10 != 0) {
                var_r3_10->unk0 = (s32) argAB->unk0;
                var_r3_10->unk4 = (s32) argAB->unk4;
                var_r3_10->unk8 = (s32 *) argAB->unk8;
                var_r3_10->unkC = (s32 *) argAB->unkC;
            }
            var_r5_11 = var_r3_10 + 0x10;
        } else {
            var_r8_10 = temp_r0_37;
            var_r2_20 = var_r3_10;
            if (temp_r0_37 != 0) {
                do {
                    if (var_r2_20 != 0) {
                        var_r2_20->unk0 = (s32) argAB->unk0;
                        var_r2_20->unk4 = (s32) argAB->unk4;
                        var_r2_20->unk8 = (s32 *) argAB->unk8;
                        var_r2_20->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_10 -= 1;
                    var_r2_20 += 0x10;
                } while (var_r8_10 != 0);
            }
            var_r5_11 = var_r2_20;
        }
        temp_r2_11 = argDC->unk4;
        temp_r0_38 = argDC->unk0;
        var_r1_19 = temp_r0_38;
        if (temp_r0_38 != temp_r2_11) {
            do {
                var_r1_19 += 0x10;
            } while (var_r1_19 != temp_r2_11);
        }
        if (temp_r0_38 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_11;
        argDC->unkC = (void *) (argDD + var_sb_10);
    }
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, &gUnk_087519EC, 0x05000020, 0x20U);
    temp_r1_13 = argDC->unk4;
    if (temp_r1_13 != argDC->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32) argAB->unk0;
            temp_r1_13->unk4 = (s32) argAB->unk4;
            temp_r1_13->unk8 = (s32 *) argAB->unk8;
            temp_r1_13->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg5B = 1;
        temp_r4_22 = (s32) (temp_r1_13 - argDC->unk0) >> 4;
        arg5A = temp_r4_22;
        var_r1_20 = &arg5A;
        if ((u32) temp_r4_22 < (u32) arg5B) {
            var_r1_20 = &arg5B;
        }
        temp_r0_39 = temp_r4_22 + *var_r1_20;
        if (temp_r0_39 != 0) {
            temp_r4_23 = temp_r0_39 * 0x10;
            var_r0_12 = malloc(temp_r4_23);
            var_sb_11 = temp_r4_23;
            if (var_r0_12 == 0) {
                var_r0_12 = func_080D3BC0(var_sb_11);
            }
        } else {
            var_r0_12 = 0;
            var_sb_11 = 0;
        }
        argDD = var_r0_12;
        var_r2_21 = argDC->unk0;
        var_r3_11 = var_r0_12;
        if (var_r2_21 != temp_r1_13) {
            do {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (s32) var_r2_21->unk0;
                    var_r3_11->unk4 = (s32) var_r2_21->unk4;
                    var_r3_11->unk8 = (s32) var_r2_21->unk8;
                    var_r3_11->unkC = (s32) var_r2_21->unkC;
                }
                var_r2_21 += 0x10;
                var_r3_11 += 0x10;
            } while (var_r2_21 != temp_r1_13);
        }
        temp_r0_40 = arg5B;
        if (temp_r0_40 == 1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) argAB->unk0;
                var_r3_11->unk4 = (s32) argAB->unk4;
                var_r3_11->unk8 = (s32 *) argAB->unk8;
                var_r3_11->unkC = (s32 *) argAB->unkC;
            }
            var_r5_12 = var_r3_11 + 0x10;
        } else {
            var_r8_11 = temp_r0_40;
            var_r2_22 = var_r3_11;
            if (temp_r0_40 != 0) {
                do {
                    if (var_r2_22 != 0) {
                        var_r2_22->unk0 = (s32) argAB->unk0;
                        var_r2_22->unk4 = (s32) argAB->unk4;
                        var_r2_22->unk8 = (s32 *) argAB->unk8;
                        var_r2_22->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_11 -= 1;
                    var_r2_22 += 0x10;
                } while (var_r8_11 != 0);
            }
            var_r5_12 = var_r2_22;
        }
        temp_r2_12 = argDC->unk4;
        temp_r0_41 = argDC->unk0;
        var_r1_21 = temp_r0_41;
        if (temp_r0_41 != temp_r2_12) {
            do {
                var_r1_21 += 0x10;
            } while (var_r1_21 != temp_r2_12);
        }
        if (temp_r0_41 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_12;
        argDC->unkC = (void *) (argDD + var_sb_11);
    }
    arg85 = argB3 + 0x20;
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, &gUnk_0875254C, (arg85 << 5) + 0x06000000, 0x20U);
    temp_r1_14 = argDC->unk4;
    if (temp_r1_14 != argDC->unkC) {
        if (temp_r1_14 != 0) {
            temp_r1_14->unk0 = (s32) argAB->unk0;
            temp_r1_14->unk4 = (s32) argAB->unk4;
            temp_r1_14->unk8 = (s32 *) argAB->unk8;
            temp_r1_14->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg5D = 1;
        temp_r4_24 = (s32) (temp_r1_14 - argDC->unk0) >> 4;
        arg5C = temp_r4_24;
        var_r1_22 = &arg5C;
        if ((u32) temp_r4_24 < (u32) arg5D) {
            var_r1_22 = &arg5D;
        }
        temp_r0_42 = temp_r4_24 + *var_r1_22;
        if (temp_r0_42 != 0) {
            temp_r4_25 = temp_r0_42 * 0x10;
            var_r0_13 = malloc(temp_r4_25);
            var_sb_12 = temp_r4_25;
            if (var_r0_13 == 0) {
                var_r0_13 = func_080D3BC0(var_sb_12);
            }
        } else {
            var_r0_13 = 0;
            var_sb_12 = 0;
        }
        argDD = var_r0_13;
        var_r2_23 = argDC->unk0;
        var_r3_12 = var_r0_13;
        if (var_r2_23 != temp_r1_14) {
            do {
                if (var_r3_12 != 0) {
                    var_r3_12->unk0 = (s32) var_r2_23->unk0;
                    var_r3_12->unk4 = (s32) var_r2_23->unk4;
                    var_r3_12->unk8 = (s32) var_r2_23->unk8;
                    var_r3_12->unkC = (s32) var_r2_23->unkC;
                }
                var_r2_23 += 0x10;
                var_r3_12 += 0x10;
            } while (var_r2_23 != temp_r1_14);
        }
        temp_r0_43 = arg5D;
        if (temp_r0_43 == 1) {
            if (var_r3_12 != 0) {
                var_r3_12->unk0 = (s32) argAB->unk0;
                var_r3_12->unk4 = (s32) argAB->unk4;
                var_r3_12->unk8 = (s32 *) argAB->unk8;
                var_r3_12->unkC = (s32 *) argAB->unkC;
            }
            var_r5_13 = var_r3_12 + 0x10;
        } else {
            var_r8_12 = temp_r0_43;
            var_r2_24 = var_r3_12;
            if (temp_r0_43 != 0) {
                do {
                    if (var_r2_24 != 0) {
                        var_r2_24->unk0 = (s32) argAB->unk0;
                        var_r2_24->unk4 = (s32) argAB->unk4;
                        var_r2_24->unk8 = (s32 *) argAB->unk8;
                        var_r2_24->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_12 -= 1;
                    var_r2_24 += 0x10;
                } while (var_r8_12 != 0);
            }
            var_r5_13 = var_r2_24;
        }
        temp_r2_13 = argDC->unk4;
        temp_r0_44 = argDC->unk0;
        var_r1_23 = temp_r0_44;
        if (temp_r0_44 != temp_r2_13) {
            do {
                var_r1_23 += 0x10;
            } while (var_r1_23 != temp_r2_13);
        }
        if (temp_r0_44 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_13;
        argDC->unkC = (void *) (argDD + var_sb_12);
    }
    argDC = func_08008910(arg1);
    func_08008F0C(&arg14, &gUnk_087525CC, 0x05000040, 0x20U);
    temp_r1_15 = argDC->unk4;
    if (temp_r1_15 != argDC->unkC) {
        if (temp_r1_15 != 0) {
            temp_r1_15->unk0 = (s32) argAB->unk0;
            temp_r1_15->unk4 = (s32) argAB->unk4;
            temp_r1_15->unk8 = (s32 *) argAB->unk8;
            temp_r1_15->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg5F = 1;
        temp_r4_26 = (s32) (temp_r1_15 - argDC->unk0) >> 4;
        arg5E = temp_r4_26;
        var_r1_24 = &arg5E;
        if ((u32) temp_r4_26 < (u32) arg5F) {
            var_r1_24 = &arg5F;
        }
        temp_r0_45 = temp_r4_26 + *var_r1_24;
        if (temp_r0_45 != 0) {
            temp_r4_27 = temp_r0_45 * 0x10;
            var_r0_14 = malloc(temp_r4_27);
            var_sb_13 = temp_r4_27;
            if (var_r0_14 == 0) {
                var_r0_14 = func_080D3BC0(var_sb_13);
            }
        } else {
            var_r0_14 = 0;
            var_sb_13 = 0;
        }
        argDD = var_r0_14;
        var_r2_25 = argDC->unk0;
        var_r3_13 = var_r0_14;
        if (var_r2_25 != temp_r1_15) {
            do {
                if (var_r3_13 != 0) {
                    var_r3_13->unk0 = (s32) var_r2_25->unk0;
                    var_r3_13->unk4 = (s32) var_r2_25->unk4;
                    var_r3_13->unk8 = (s32) var_r2_25->unk8;
                    var_r3_13->unkC = (s32) var_r2_25->unkC;
                }
                var_r2_25 += 0x10;
                var_r3_13 += 0x10;
            } while (var_r2_25 != temp_r1_15);
        }
        temp_r0_46 = arg5F;
        if (temp_r0_46 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32) argAB->unk0;
                var_r3_13->unk4 = (s32) argAB->unk4;
                var_r3_13->unk8 = (s32 *) argAB->unk8;
                var_r3_13->unkC = (s32 *) argAB->unkC;
            }
            var_r5_14 = var_r3_13 + 0x10;
        } else {
            var_r8_13 = temp_r0_46;
            var_r2_26 = var_r3_13;
            if (temp_r0_46 != 0) {
                do {
                    if (var_r2_26 != 0) {
                        var_r2_26->unk0 = (s32) argAB->unk0;
                        var_r2_26->unk4 = (s32) argAB->unk4;
                        var_r2_26->unk8 = (s32 *) argAB->unk8;
                        var_r2_26->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_13 -= 1;
                    var_r2_26 += 0x10;
                } while (var_r8_13 != 0);
            }
            var_r5_14 = var_r2_26;
        }
        temp_r2_14 = argDC->unk4;
        temp_r0_47 = argDC->unk0;
        var_r1_25 = temp_r0_47;
        if (temp_r0_47 != temp_r2_14) {
            do {
                var_r1_25 += 0x10;
            } while (var_r1_25 != temp_r2_14);
        }
        if (temp_r0_47 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_14;
        argDC->unkC = (void *) (argDD + var_sb_13);
    }
    func_08008EB8(0x03FF03FF, 0x0600F000, 0x800);
    temp_r5_2 = __builtin_new(0x4C);
    temp_r4_28 = func_0800894C(arg1);
    temp_r3_3 = func_08008918(arg1);
    unksp0 = 0x0600F000;
    temp_r0_48 = func_08075B00(temp_r5_2, 0x64, temp_r4_28, temp_r3_3);
    temp_r4_29 = arg1->unk1C;
    if ((temp_r0_48 != temp_r4_29) && (temp_r4_29 != 0)) {
        func_08075DEC(temp_r4_29 + 0x28, 2);
        temp_r2_15 = (temp_r4_29 + 0x18)->unk4;
        var_r1_26 = temp_r4_29->unk18;
        if (var_r1_26 != temp_r2_15) {
            do {
                var_r1_26 += 0x40;
            } while (var_r1_26 != temp_r2_15);
        }
        if (temp_r4_29->unk18 != 0) {
            free();
        }
        __builtin_delete(temp_r4_29);
    }
    *argA9 = temp_r0_48;
    arg86 = 0U;
    arg87 = 0;
    arg88 = 0;
    arg89 = 0;
    temp_r0_49 = arg1->unk10;
    switch (temp_r0_49) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        arg8E = 0U;
        temp_r0_50 = GetCapacity__C4Barn(arg1->unkC + 0x5F0);
        arg8D = temp_r0_50;
        var_r1_27 = 0;
        if (arg86 >= temp_r0_50) {

        } else {
loop_420:
            temp_r0_51 = GetCow__4BarnUi(arg1->unkC + 0x5F0, var_r1_27);
            if (temp_r0_51 == 0) {

            } else {
                temp_r0_52 = arg1->unk4068;
                if (temp_r0_52 <= 0xFU) {
                    temp_r0_53 = arg1 + 0x4068 + ((temp_r0_52 * 4) + 4);
                    if (temp_r0_53 != 0) {
                        *temp_r0_53 = arg8E;
                    }
                    arg1->unk4068 = (u32) (arg1->unk4068 + 1);
                }
                temp_r0_54 = (arg88 * 6) + 2;
                arg86 = temp_r0_54;
                argAB->unk0 = (s16) (temp_r0_54 * 8);
                argAB->unk4 = 8;
                temp_r0_55 = GetGrowthStage__C3Cow(temp_r0_51);
                switch (temp_r0_55) {               /* switch 2; irregular */
                case 2:                             /* switch 2 */
                    argAB->unk8 = &gUnk_08751B4C;
                    argAB->unkC = &gUnk_08751BCC;
                    if ((IsPregnant__C10BarnAnimal(temp_r0_51) << 0x18) != 0) {
                        argAB->unk8 = &gUnk_08751C8C;
                        argAB->unkC = &gUnk_08751D0C;
                    }
                    break;
                case 1:                             /* switch 2 */
                    argAB->unk8 = &gUnk_08751BEC;
                    argAB->unkC = &gUnk_08751C6C;
                    break;
                default:                            /* switch 2 */
                    argAB->unk8 = &gUnk_08751D2C;
                    argAB->unkC = &gUnk_08751DAC;
                    break;
                }
                temp_r0_56 = arg1->unk3EA0;
                if (temp_r0_56 <= 0xFU) {
                    temp_r0_57 = arg1 + 0x3EA0 + ((temp_r0_56 * 0x10) + 4);
                    if (temp_r0_57 != 0) {
                        temp_r0_57->unk0 = (s32) argAB->unk0;
                        temp_r0_57->unk4 = (s32) argAB->unk4;
                        temp_r0_57->unk8 = (s32 *) argAB->unk8;
                        temp_r0_57->unkC = arg17;
                    }
                    arg1->unk3EA0 = (u32) (arg1->unk3EA0 + 1);
                }
                if ((IsFestivalWinner__C6Animal(temp_r0_51) << 0x18) != 0) {
                    unksp0 = 1;
                    unksp4 = 0x20;
                    func_0804E9F4(arg1->unk1C->unk18 + ((arg86 - 2) << 6) + 2, (u16) arg84, 2, 2);
                }
                var_r5_15 = 0;
                arg9F = arg86 + 2;
                temp_r1_16 = arg86 << 6;
                argD8 = arg82 << 0x10;
                argD9 = arg83 << 0x10;
                argCE = &arg63;
                argCF = &arg64;
                argD0 = &arg65;
                argA1 = arg88 + 1;
loop_441:
                if (var_r5_15 < (u32) (GetAffection__C6Animal(temp_r0_51) / 25U)) {
                    unksp0 = 2;
                    unksp4 = 0x20;
                    func_0804E9F4(arg1->unk1C->unk18 + (arg9F << 6) + ((var_r5_15 + 5) * 2), (u16) arg85, 1, 1);
                    var_r5_15 += 1;
                    goto loop_441;
                }
                arg18.unk0 = (s16) (arg86 * 8);
                temp_r4_30 = arg88 * 0x304;
                arg63 = 0xC;
                argCE->unk2 = 2;
                func_0804E7A0((s32) arg63, temp_r4_30 + arg1 + 0xE60 + 4, 0);
                temp_r2_16 = GetName__C6Animal(temp_r0_51);
                arg64 = 0xC;
                argCF->unk2 = 2;
                unksp0 = temp_r2_16;
                unksp4 = 0;
                unksp8 = 1;
                func_0804E958((s32) arg64, temp_r4_30 + arg1 + 0xE60 + 4, 0, 0);
                arg18.unk4 = (void *) (temp_r4_30 + arg1 + 0xE60 + 4);
                temp_r4_31 = ((3 & arg88) * 0x18) + 0x100;
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r1_16 + 6, temp_r4_31, 0xC, 2);
                arg18.unk8 = (s32) ((temp_r4_31 << 5) + 0x06000000);
                var_r1_28 = arg1->unk3FA4;
                if (var_r1_28 <= 0xFU) {
                    var_r1_28 = (u32) (arg1 + 0x3FA4 + ((var_r1_28 * 0xC) + 4));
                    if (var_r1_28 != 0) {
                        var_r1_28->unk0 = (s32) arg18.unk0;
                        var_r1_28->unk4 = (void *) arg18.unk4;
                        var_r1_28->unk8 = (s32) arg18.unk8;
                        var_r1_28 += 0xC;
                    }
                    arg1->unk3FA4 = (u32) (arg1->unk3FA4 + 1);
                }
                temp_r5_3 = arg1->unk1C->unk18 + temp_r1_16 + 0x20;
                if ((IsSick__C9Livestock(temp_r0_51, (void *) var_r1_28) << 0x18) != 0) {
                    var_r0_15 = 2;
                } else {
                    temp_r0_58 = IsUnhappy__C9Livestock(temp_r0_51);
                    var_r0_15 = (u32) ((0 - temp_r0_58) | temp_r0_58) >> 0x1F;
                }
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(temp_r5_3, *(argAA + (var_r0_15 * 2)), 8, 2);
                temp_r0_59 = GetAge__C6Animal(temp_r0_51) / 120U;
                unksp0 = 0x20;
                func_0804EDB4(temp_r0_59, arg1->unk1C->unk18 + temp_r1_16 + 0x34, 0xA0, 0);
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r1_16 + 0x36, (u16) (argD8 >> 0x10), 2, 2);
                temp_r4_32 = GetAge__C6Animal(temp_r0_51);
                arg65 = arg1->unkC->unk11;
                if (temp_r4_32 <= 0x1DU) {
                    var_r5_16 = temp_r4_32;
                    var_r3_14 = 0;
                } else {
                    var_r5_16 = temp_r4_32 % 30U;
                    var_r3_14 = temp_r4_32 / 30U;
                }
                temp_r0_60 = *argD0;
                var_r2_27 = ((u32) (temp_r0_60 << 0x19) >> 0x1B) - (var_r5_16 - 0x1E);
                if (var_r2_27 <= 0x1DU) {
                    var_r3_14 += 1;
                } else {
                    var_r2_27 -= 0x1E;
                }
                temp_r1_17 = ((u32) (temp_r0_60 << 0x1E) >> 0x1E) & 3;
                temp_r0_61 = (((-4 & arg8F) | temp_r1_17) & ~3) | ((temp_r1_17 - var_r3_14) & 3);
                arg8F = temp_r0_61;
                temp_r4_33 = (((-4 & *argD0) | (((u32) (temp_r0_61 << 0x1E) >> 0x1E) & 3)) & ~0x7C) | ((var_r2_27 & 0x1F) * 4);
                *argD0 = temp_r4_33;
                temp_r5_4 = arg9F << 6;
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_4 + 0x22, (u16) (arg81 + (((u32) (temp_r4_33 << 0x1E) >> 0x1E) * 0xC)), 6, 2);
                unksp0 = 0x20;
                func_0804EDB4(((u32) (temp_r4_33 << 0x19) >> 0x1B) + 1, arg1->unk1C->unk18 + temp_r5_4 + 0x34, 0xA0, 0);
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_4 + 0x36, (u16) (argD9 >> 0x10), 2, 2);
                arg88 = argA1;
            }
            temp_r5_5 = arg8E + 1;
            arg8E = temp_r5_5;
            var_r1_27 = temp_r5_5;
            if (var_r1_27 < arg8D) {
                goto loop_420;
            }
        }
        break;
    case 2:                                         /* switch 1 */
        arg91 = 0U;
        temp_r0_62 = GetCapacity__C4Barn(arg1->unkC + 0x5F0);
        arg90 = temp_r0_62;
        var_r1_29 = 0;
        if (arg86 >= temp_r0_62) {

        } else {
loop_461:
            temp_r0_63 = GetSheep__4BarnUi(arg1->unkC + 0x5F0, var_r1_29);
            if (temp_r0_63 == 0) {

            } else {
                temp_r0_64 = arg1->unk4068;
                if (temp_r0_64 <= 0xFU) {
                    temp_r0_65 = arg1 + 0x4068 + ((temp_r0_64 * 4) + 4);
                    if (temp_r0_65 != 0) {
                        *temp_r0_65 = arg91;
                    }
                    arg1->unk4068 = (u32) (arg1->unk4068 + 1);
                }
                temp_r0_66 = (arg89 * 6) + 2;
                arg86 = temp_r0_66;
                argAB->unk0 = (s16) (temp_r0_66 * 8);
                argAB->unk4 = 8;
                temp_r0_67 = GetGrowthStage__C5Sheep(temp_r0_63);
                if ((temp_r0_67 != 0) && (temp_r0_67 == 1)) {
                    argAB->unk8 = &gUnk_0875320C;
                    argAB->unkC = &gUnk_0875328C;
                    if ((IsPregnant__C10BarnAnimal(temp_r0_63) << 0x18) != 0) {
                        argAB->unk8 = &gUnk_0875334C;
                        argAB->unkC = &gUnk_087533CC;
                    }
                    if ((IsSheared__C5Sheep(temp_r0_63) << 0x18) != 0) {
                        argAB->unk8 = &gUnk_087532AC;
                        argAB->unkC = &gUnk_0875332C;
                    }
                } else {
                    argAB->unk8 = &gUnk_087533EC;
                    argAB->unkC = &gUnk_0875346C;
                }
                temp_r0_68 = arg1->unk3EA0;
                if (temp_r0_68 <= 0xFU) {
                    temp_r0_69 = arg1 + 0x3EA0 + ((temp_r0_68 * 0x10) + 4);
                    if (temp_r0_69 != 0) {
                        temp_r0_69->unk0 = (s32) argAB->unk0;
                        temp_r0_69->unk4 = (s32) argAB->unk4;
                        temp_r0_69->unk8 = (s32 *) argAB->unk8;
                        temp_r0_69->unkC = arg17;
                    }
                    arg1->unk3EA0 = (u32) (arg1->unk3EA0 + 1);
                }
                if ((IsFestivalWinner__C6Animal(temp_r0_63) << 0x18) != 0) {
                    unksp0 = 1;
                    unksp4 = 0x20;
                    func_0804E9F4(arg1->unk1C->unk18 + ((arg86 - 2) << 6) + 2, (u16) arg84, 2, 2);
                }
                var_r5_17 = 0;
                arg9F = arg86 + 2;
                temp_r1_18 = arg86 << 6;
                argD8 = arg82 << 0x10;
                argD9 = arg83 << 0x10;
                argD1 = &arg66;
                argD2 = &arg67;
                argD3 = &arg68;
                argA2 = arg89 + 1;
loop_482:
                if (var_r5_17 < (u32) (GetAffection__C6Animal(temp_r0_63) / 25U)) {
                    unksp0 = 2;
                    unksp4 = 0x20;
                    func_0804E9F4(arg1->unk1C->unk18 + (arg9F << 6) + ((var_r5_17 + 5) * 2), (u16) arg85, 1, 1);
                    var_r5_17 += 1;
                    goto loop_482;
                }
                arg18.unk0 = (s16) (arg86 * 8);
                temp_r4_34 = arg89 * 0x304;
                arg66 = 0xC;
                argD1->unk2 = 2;
                func_0804E7A0((s32) arg66, temp_r4_34 + arg1 + 0xE60 + 4, 0);
                temp_r2_17 = GetName__C6Animal(temp_r0_63);
                arg67 = 0xC;
                argD2->unk2 = 2;
                unksp0 = temp_r2_17;
                unksp4 = 0;
                unksp8 = 1;
                func_0804E958((s32) arg67, temp_r4_34 + arg1 + 0xE60 + 4, 0, 0);
                arg18.unk4 = (void *) (temp_r4_34 + arg1 + 0xE60 + 4);
                temp_r4_35 = ((3 & arg89) * 0x18) + 0x100;
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r1_18 + 6, temp_r4_35, 0xC, 2);
                arg18.unk8 = (s32) ((temp_r4_35 << 5) + 0x06000000);
                var_r1_30 = arg1->unk3FA4;
                if (var_r1_30 <= 0xFU) {
                    var_r1_30 = (u32) (arg1 + 0x3FA4 + ((var_r1_30 * 0xC) + 4));
                    if (var_r1_30 != 0) {
                        var_r1_30->unk0 = (s32) arg18.unk0;
                        var_r1_30->unk4 = (void *) arg18.unk4;
                        var_r1_30->unk8 = (s32) arg18.unk8;
                        var_r1_30 += 0xC;
                    }
                    arg1->unk3FA4 = (u32) (arg1->unk3FA4 + 1);
                }
                temp_r5_6 = arg1->unk1C->unk18 + temp_r1_18 + 0x20;
                if ((IsSick__C9Livestock(temp_r0_63, (void *) var_r1_30) << 0x18) != 0) {
                    var_r0_16 = 2;
                } else {
                    temp_r0_70 = IsUnhappy__C9Livestock(temp_r0_63);
                    var_r0_16 = (u32) ((0 - temp_r0_70) | temp_r0_70) >> 0x1F;
                }
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(temp_r5_6, *(argAA + (var_r0_16 * 2)), 8, 2);
                temp_r0_71 = GetAge__C6Animal(temp_r0_63) / 120U;
                unksp0 = 0x20;
                func_0804EDB4(temp_r0_71, arg1->unk1C->unk18 + temp_r1_18 + 0x34, 0xA0, 0);
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r1_18 + 0x36, (u16) (argD8 >> 0x10), 2, 2);
                temp_r4_36 = GetAge__C6Animal(temp_r0_63);
                arg68 = arg1->unkC->unk11;
                if (temp_r4_36 <= 0x1DU) {
                    var_r5_18 = temp_r4_36;
                    var_r3_15 = 0;
                } else {
                    var_r5_18 = temp_r4_36 % 30U;
                    var_r3_15 = temp_r4_36 / 30U;
                }
                temp_r0_72 = *argD3;
                var_r2_28 = ((u32) (temp_r0_72 << 0x19) >> 0x1B) - (var_r5_18 - 0x1E);
                if (var_r2_28 <= 0x1DU) {
                    var_r3_15 += 1;
                } else {
                    var_r2_28 -= 0x1E;
                }
                temp_r1_19 = ((u32) (temp_r0_72 << 0x1E) >> 0x1E) & 3;
                temp_r0_73 = (((-4 & arg92) | temp_r1_19) & ~3) | ((temp_r1_19 - var_r3_15) & 3);
                arg92 = temp_r0_73;
                temp_r4_37 = (((-4 & *argD3) | (((u32) (temp_r0_73 << 0x1E) >> 0x1E) & 3)) & ~0x7C) | ((var_r2_28 & 0x1F) * 4);
                *argD3 = temp_r4_37;
                temp_r5_7 = arg9F << 6;
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_7 + 0x22, (u16) (arg81 + (((u32) (temp_r4_37 << 0x1E) >> 0x1E) * 0xC)), 6, 2);
                unksp0 = 0x20;
                func_0804EDB4(((u32) (temp_r4_37 << 0x19) >> 0x1B) + 1, arg1->unk1C->unk18 + temp_r5_7 + 0x34, 0xA0, 0);
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_7 + 0x36, (u16) (argD9 >> 0x10), 2, 2);
                arg89 = argA2;
            }
            temp_r5_8 = arg91 + 1;
            arg91 = temp_r5_8;
            var_r1_29 = temp_r5_8;
            if (var_r1_29 < arg90) {
                goto loop_461;
            }
        }
        break;
    case 0:                                         /* switch 1 */
        arg8B = 0U;
        temp_r0_74 = GetCapacity__C4Coop(arg1->unkC + 0x410);
        arg8A = temp_r0_74;
        var_r1_31 = 0;
        if (arg86 < temp_r0_74) {
loop_382:
            temp_r0_75 = GetChicken__4CoopUi(arg1->unkC + 0x410, var_r1_31);
            if (temp_r0_75 == 0) {

            } else {
                temp_r0_76 = arg1->unk4068;
                if (temp_r0_76 <= 0xFU) {
                    temp_r0_77 = arg1 + 0x4068 + ((temp_r0_76 * 4) + 4);
                    if (temp_r0_77 != 0) {
                        *temp_r0_77 = arg8B;
                    }
                    arg1->unk4068 = (u32) (arg1->unk4068 + 1);
                }
                temp_r0_78 = (arg87 * 6) + 2;
                arg86 = temp_r0_78;
                argAB->unk0 = (s16) (temp_r0_78 * 8);
                argAB->unk4 = 8;
                temp_r0_79 = GetGrowthStage__C7Chicken(temp_r0_75);
                if ((temp_r0_79 != 0) && (temp_r0_79 == 1)) {
                    argAB->unk8 = &gUnk_0875268C;
                    argAB->unkC = &gUnk_0875270C;
                } else {
                    argAB->unk8 = &gUnk_0875272C;
                    argAB->unkC = &gUnk_087527AC;
                }
                temp_r0_80 = arg1->unk3EA0;
                if (temp_r0_80 <= 0xFU) {
                    temp_r0_81 = arg1 + 0x3EA0 + ((temp_r0_80 * 0x10) + 4);
                    if (temp_r0_81 != 0) {
                        temp_r0_81->unk0 = (s32) argAB->unk0;
                        temp_r0_81->unk4 = (s32) argAB->unk4;
                        temp_r0_81->unk8 = (s32 *) argAB->unk8;
                        temp_r0_81->unkC = arg17;
                    }
                    arg1->unk3EA0 = (u32) (arg1->unk3EA0 + 1);
                }
                if ((IsFestivalWinner__C6Animal(temp_r0_75) << 0x18) != 0) {
                    unksp0 = 1;
                    unksp4 = 0x20;
                    func_0804E9F4(arg1->unk1C->unk18 + ((arg86 - 2) << 6) + 2, (u16) arg84, 2, 2);
                }
                var_r4_2 = 0;
                arg9F = arg86 + 2;
                argCB = &arg60;
                argCC = &arg61;
                temp_r5_9 = arg86 << 6;
                argD8 = arg82 << 0x10;
                argCD = &arg62;
                argD9 = arg83 << 0x10;
                argA0 = arg87 + 1;
loop_400:
                if (var_r4_2 < (u32) (GetAffection__C6Animal(temp_r0_75) / 25U)) {
                    unksp0 = 2;
                    unksp4 = 0x20;
                    func_0804E9F4(arg1->unk1C->unk18 + (arg9F << 6) + ((var_r4_2 + 5) * 2), (u16) arg85, 1, 1);
                    var_r4_2 += 1;
                    goto loop_400;
                }
                arg18.unk0 = (s16) (arg86 * 8);
                temp_r4_38 = arg8B * 0x304;
                arg60 = 0xC;
                argCB->unk2 = 2;
                func_0804E7A0((s32) arg60, temp_r4_38 + arg1 + 0xE60 + 4, 0);
                temp_r2_18 = GetName__C6Animal(temp_r0_75);
                arg61 = 0xC;
                argCC->unk2 = 2;
                unksp0 = temp_r2_18;
                unksp4 = 0;
                unksp8 = 1;
                func_0804E958((s32) arg61, temp_r4_38 + arg1 + 0xE60 + 4, 0, 0);
                arg18.unk4 = (void *) (temp_r4_38 + arg1 + 0xE60 + 4);
                temp_r4_39 = ((3 & arg87) * 0x18) + 0x100;
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_9 + 6, temp_r4_39, 0xC, 2);
                arg18.unk8 = (s32) ((temp_r4_39 << 5) + 0x06000000);
                var_r1_32 = arg1->unk3FA4;
                if (var_r1_32 <= 0xFU) {
                    var_r1_32 = (u32) (arg1 + 0x3FA4 + ((var_r1_32 * 0xC) + 4));
                    if (var_r1_32 != 0) {
                        var_r1_32->unk0 = (s32) arg18.unk0;
                        var_r1_32->unk4 = (void *) arg18.unk4;
                        var_r1_32->unk8 = (s32) arg18.unk8;
                        var_r1_32 += 0xC;
                    }
                    arg1->unk3FA4 = (u32) (arg1->unk3FA4 + 1);
                }
                temp_r5_10 = arg1->unk1C->unk18 + temp_r5_9 + 0x20;
                if ((IsSick__C9Livestock(temp_r0_75, (void *) var_r1_32) << 0x18) != 0) {
                    var_r0_17 = 2;
                } else {
                    temp_r0_82 = IsUnhappy__C9Livestock(temp_r0_75);
                    var_r0_17 = (u32) ((0 - temp_r0_82) | temp_r0_82) >> 0x1F;
                }
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(temp_r5_10, *(argAA + (var_r0_17 * 2)), 8, 2);
                temp_r0_83 = GetAge__C6Animal(temp_r0_75) / 120U;
                unksp0 = 0x20;
                func_0804EDB4(temp_r0_83, arg1->unk1C->unk18 + temp_r5_9 + 0x34, 0xA0, 0);
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_9 + 0x36, (u16) (argD8 >> 0x10), 2, 2);
                temp_r4_40 = GetAge__C6Animal(temp_r0_75);
                arg62 = arg1->unkC->unk11;
                if (temp_r4_40 <= 0x1DU) {
                    var_r5_19 = temp_r4_40;
                    var_r3_16 = 0;
                } else {
                    var_r5_19 = temp_r4_40 % 30U;
                    var_r3_16 = temp_r4_40 / 30U;
                }
                temp_r0_84 = *argCD;
                var_r2_29 = ((u32) (temp_r0_84 << 0x19) >> 0x1B) - (var_r5_19 - 0x1E);
                if (var_r2_29 <= 0x1DU) {
                    var_r3_16 += 1;
                } else {
                    var_r2_29 -= 0x1E;
                }
                temp_r1_20 = ((u32) (temp_r0_84 << 0x1E) >> 0x1E) & 3;
                temp_r0_85 = (((-4 & arg8C) | temp_r1_20) & ~3) | ((temp_r1_20 - var_r3_16) & 3);
                arg8C = temp_r0_85;
                temp_r4_41 = (((-4 & *argCD) | (((u32) (temp_r0_85 << 0x1E) >> 0x1E) & 3)) & ~0x7C) | ((var_r2_29 & 0x1F) * 4);
                *argCD = temp_r4_41;
                temp_r5_11 = arg9F << 6;
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_11 + 0x22, (u16) (arg81 + (((u32) (temp_r4_41 << 0x1E) >> 0x1E) * 0xC)), 6, 2);
                unksp0 = 0x20;
                func_0804EDB4(((u32) (temp_r4_41 << 0x19) >> 0x1B) + 1, arg1->unk1C->unk18 + temp_r5_11 + 0x34, 0xA0, 0);
                unksp0 = 0;
                unksp4 = 0x20;
                func_0804E9F4(arg1->unk1C->unk18 + temp_r5_11 + 0x36, (u16) (argD9 >> 0x10), 2, 2);
                arg87 = argA0;
            }
            temp_r5_12 = arg8B + 1;
            arg8B = temp_r5_12;
            var_r1_31 = temp_r5_12;
            if (var_r1_31 < arg8A) {
                goto loop_382;
            }
        }
        break;
    }
    func_08075E24(arg1->unk1C, (s16) ((arg86 + 6) * 8));
    func_08075C88(arg1->unk1C, (s32) (arg1->unk20 << 0x10) >> 0x14);
    *argB1 = 0xE8;
    *argB2 = 8;
    *argBB = 0xE8;
    *argBC = 0x90;
    temp_r1_21 = argC3->unk0;
    (*temp_r1_21)->unk10(argAD, temp_r1_21, *(*argC4 + (argC3->unkC * 4)));
    temp_r4_42 = func_08008910(arg1);
    temp_r0_86 = arg1 + 0x40B8;
    temp_r2_19 = func_080074C0(temp_r0_86, temp_r0_86->unk4);
    var_r3_17 = 0;
    if (arg1F != 0) {
        var_r3_17 = argAE->unk4;
    }
    argDC = temp_r4_42;
    func_08008F0C(&arg14, arg1F, (temp_r2_19 << 5) + 0x05000200, var_r3_17);
    temp_r1_22 = temp_r4_42->unk4;
    if (temp_r1_22 != temp_r4_42->unkC) {
        if (temp_r1_22 != 0) {
            temp_r1_22->unk0 = (s32) argAB->unk0;
            temp_r1_22->unk4 = (s32) argAB->unk4;
            temp_r1_22->unk8 = (s32 *) argAB->unk8;
            temp_r1_22->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg6A = 1;
        temp_r4_43 = (s32) (temp_r1_22 - argDC->unk0) >> 4;
        arg69 = temp_r4_43;
        var_r1_33 = &arg69;
        if ((u32) temp_r4_43 < (u32) arg6A) {
            var_r1_33 = &arg6A;
        }
        temp_r0_87 = temp_r4_43 + *var_r1_33;
        if (temp_r0_87 != 0) {
            temp_r4_44 = temp_r0_87 * 0x10;
            var_r0_18 = malloc(temp_r4_44);
            var_sb_14 = temp_r4_44;
            if (var_r0_18 == 0) {
                var_r0_18 = func_080D3BC0(var_sb_14);
            }
        } else {
            var_r0_18 = 0;
            var_sb_14 = 0;
        }
        argDD = var_r0_18;
        var_r2_30 = argDC->unk0;
        var_r3_18 = var_r0_18;
        if (var_r2_30 != temp_r1_22) {
            do {
                if (var_r3_18 != 0) {
                    var_r3_18->unk0 = (s32) var_r2_30->unk0;
                    var_r3_18->unk4 = (s32) var_r2_30->unk4;
                    var_r3_18->unk8 = (s32) var_r2_30->unk8;
                    var_r3_18->unkC = (s32) var_r2_30->unkC;
                }
                var_r2_30 += 0x10;
                var_r3_18 += 0x10;
            } while (var_r2_30 != temp_r1_22);
        }
        temp_r0_88 = arg6A;
        if (temp_r0_88 == 1) {
            if (var_r3_18 != 0) {
                var_r3_18->unk0 = (s32) argAB->unk0;
                var_r3_18->unk4 = (s32) argAB->unk4;
                var_r3_18->unk8 = (s32 *) argAB->unk8;
                var_r3_18->unkC = (s32 *) argAB->unkC;
            }
            var_r5_20 = var_r3_18 + 0x10;
        } else {
            var_r8_14 = temp_r0_88;
            var_r2_31 = var_r3_18;
            if (temp_r0_88 != 0) {
                do {
                    if (var_r2_31 != 0) {
                        var_r2_31->unk0 = (s32) argAB->unk0;
                        var_r2_31->unk4 = (s32) argAB->unk4;
                        var_r2_31->unk8 = (s32 *) argAB->unk8;
                        var_r2_31->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_14 -= 1;
                    var_r2_31 += 0x10;
                } while (var_r8_14 != 0);
            }
            var_r5_20 = var_r2_31;
        }
        temp_r2_20 = argDC->unk4;
        temp_r0_89 = argDC->unk0;
        var_r1_34 = temp_r0_89;
        if (temp_r0_89 != temp_r2_20) {
            do {
                var_r1_34 += 0x10;
            } while (var_r1_34 != temp_r2_20);
        }
        if (temp_r0_89 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_20;
        argDC->unkC = (void *) (argDD + var_sb_14);
    }
    temp_r1_23 = argB4->unk0;
    (*temp_r1_23)->unk10(argB0, temp_r1_23, *(*argB5 + (argB4->unkC * 4)));
    temp_r4_45 = func_08008910(arg1);
    temp_r5_13 = argB6->unk0;
    temp_r0_90 = arg1 + 0x40C8;
    temp_r2_21 = func_080074C0(temp_r0_90, temp_r0_90->unk4);
    var_r3_19 = 0;
    if (argB6->unk0 != 0) {
        var_r3_19 = argB6->unk4;
    }
    argDC = temp_r4_45;
    func_08008F0C(&arg14, temp_r5_13, (temp_r2_21 << 5) + 0x05000200, var_r3_19);
    temp_r1_24 = argDC->unk4;
    if (temp_r1_24 != argDC->unkC) {
        if (temp_r1_24 != 0) {
            temp_r1_24->unk0 = (s32) argAB->unk0;
            temp_r1_24->unk4 = (s32) argAB->unk4;
            temp_r1_24->unk8 = (s32 *) argAB->unk8;
            temp_r1_24->unkC = (s32 *) argAB->unkC;
        }
        argDC->unk4 = (void *) (argDC->unk4 + 0x10);
    } else {
        arg6C = 1;
        temp_r4_46 = (s32) (temp_r1_24 - argDC->unk0) >> 4;
        arg6B = temp_r4_46;
        var_r1_35 = &arg6B;
        if ((u32) temp_r4_46 < (u32) arg6C) {
            var_r1_35 = &arg6C;
        }
        temp_r0_91 = temp_r4_46 + *var_r1_35;
        if (temp_r0_91 != 0) {
            temp_r4_47 = temp_r0_91 * 0x10;
            var_r0_19 = malloc(temp_r4_47);
            var_sl_2 = temp_r4_47;
            if (var_r0_19 == 0) {
                var_r0_19 = func_080D3BC0(var_sl_2);
            }
        } else {
            var_r0_19 = 0;
            var_sl_2 = 0;
        }
        argDD = var_r0_19;
        var_r2_32 = argDC->unk0;
        var_r3_20 = var_r0_19;
        if (var_r2_32 != temp_r1_24) {
            do {
                if (var_r3_20 != 0) {
                    var_r3_20->unk0 = (s32) var_r2_32->unk0;
                    var_r3_20->unk4 = (s32) var_r2_32->unk4;
                    var_r3_20->unk8 = (s32) var_r2_32->unk8;
                    var_r3_20->unkC = (s32) var_r2_32->unkC;
                }
                var_r2_32 += 0x10;
                var_r3_20 += 0x10;
            } while (var_r2_32 != temp_r1_24);
        }
        temp_r0_92 = arg6C;
        if (temp_r0_92 == 1) {
            if (var_r3_20 != 0) {
                var_r3_20->unk0 = (s32) argAB->unk0;
                var_r3_20->unk4 = (s32) argAB->unk4;
                var_r3_20->unk8 = (s32 *) argAB->unk8;
                var_r3_20->unkC = (s32 *) argAB->unkC;
            }
            var_r5_21 = var_r3_20 + 0x10;
        } else {
            var_r8_15 = temp_r0_92;
            var_r2_33 = var_r3_20;
            if (temp_r0_92 != 0) {
                do {
                    if (var_r2_33 != 0) {
                        var_r2_33->unk0 = (s32) argAB->unk0;
                        var_r2_33->unk4 = (s32) argAB->unk4;
                        var_r2_33->unk8 = (s32 *) argAB->unk8;
                        var_r2_33->unkC = (s32 *) argAB->unkC;
                    }
                    var_r8_15 -= 1;
                    var_r2_33 += 0x10;
                } while (var_r8_15 != 0);
            }
            var_r5_21 = var_r2_33;
        }
        temp_r2_22 = argDC->unk4;
        temp_r0_93 = argDC->unk0;
        var_r1_36 = temp_r0_93;
        if (temp_r0_93 != temp_r2_22) {
            do {
                var_r1_36 += 0x10;
            } while (var_r1_36 != temp_r2_22);
        }
        if (temp_r0_93 != 0) {
            free();
        }
        argDC->unk0 = argDD;
        argDC->unk4 = var_r5_21;
        argDC->unkC = (void *) (argDD + var_sl_2);
    }
    temp_r0_94 = func_08008918(arg1);
    unksp10 = 0x3F;
    temp_r0_94->unk50 = 0x3F;
    temp_r4_48 = __builtin_new(0x10);
    temp_r1_25 = func_08008918(arg1);
    temp_r4_48->unk0 = 0;
    temp_r4_48->unk4 = 0;
    temp_r4_48->unk8 = (s32) .L0806C514;
    temp_r5_14 = temp_r4_48 + 0xC;
    func_08009300(temp_r5_14, temp_r1_25);
    arg14 = temp_r4_48;
    func_0800934C(temp_r5_14, .L0806C518, 1, 1);
    temp_r0_95 = func_08008940(arg1);
    temp_r0_95->unk8->unk10(temp_r0_95, arg14);
    arg93 = 0;
}

