s32 GetUnkAge__C4Coop(void *);                      /* extern */
s32 GetUnkCowAge__C4Barn(void *);                   /* extern */
s32 GetUnkCowName__C4Barn(void *);                  /* extern */
s32 GetUnkName__C4Coop(void *);                     /* extern */
s32 GetUnkSheepAge__C4Barn(void *);                 /* extern */
s32 GetUnkSheepName__C4Barn(void *);                /* extern */
s32 free();                                           /* extern */
void *func_08008910(s32);                           /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
u32 func_0800E97C(void *);                          /* extern */
u32 func_0800E988(void *);                          /* extern */
u32 func_08010F0C(void *);                          /* extern */
u32 func_08010F1C(void *);                          /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
s32 func_0804E9F4(s32, s32, s32, s32);                /* extern */
s32 func_0804EDB4(u32, s32, s32, s32);                /* extern */
s32 func_0805E6CC(void *, s32 *);                       /* extern */
s32 func_08070C24(void *, s32, ?, s32);                 /* extern */
s32 func_08075220(void *, s32, s32);                  /* extern */
s32 func_08075334(void *, s32, s32, s32 *);             /* extern */
s32 func_08075450(void *, s32);                     /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
u32 func_0809B05C(void *);                          /* extern */
u32 func_0809B084(void *);                          /* extern */
u32 func_0809B0B0(void *);                          /* extern */
u32 func_0809B0D8(void *);                          /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 gUnk_080FBE8C;
extern s32 gUnk_080FBEC8;
extern s32 gUnk_080FBECC;
extern s32 gUnk_080FBED8;
extern s32 gUnk_080FBEE0;
extern s32 gUnk_080FBEFC;
extern s32 gUnk_080FBF08;
extern s32 gUnk_080FBF1C;
extern s32 gUnk_080FBF28;
extern s32 gUnk_080FBF34;
extern s32 gUnk_080FBF3C;
extern s32 gUnk_080FBF58;
extern s32 gUnk_080FBF68;
extern s32 gUnk_080FBF74;
extern s32 gUnk_080FBF80;
extern s32 gUnk_080FBF84;
extern s32 gUnk_080FBFA0;
extern s32 gUnk_080FBFAC;
extern s32 gUnk_080FBFB4;
extern s32 gUnk_080FBFBC;
extern s32 gUnk_080FBFC4;
extern s32 gUnk_080FBFC8;
extern s32 gUnk_080FBFCC;
extern s32 gUnk_080FBFE8;
extern s32 gUnk_080FBFF0;
extern s32 gUnk_080FC008;
extern s32 gUnk_080FC024;
extern s32 gUnk_0858BA28;
extern s32 gUnk_086678A0;
extern s32 gUnk_08751B4C;
extern s32 gUnk_08751BCC;
extern s32 gUnk_08751E6C;
extern s32 gUnk_08751EEC;
extern s32 gUnk_0875268C;
extern s32 gUnk_0875270C;
extern s32 gUnk_0875320C;
extern s32 gUnk_0875328C;
extern s32 vtable_unk_080E5A28;
extern s32 vtable_unk_080E7AFC;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[8];
    struct GenObj *unk18;
    u8 _pad1C[1392];
    void *unk58C;
    u8 _pad590[36];
    void *unk5B4;
    u8 _pad5B8[5860];
    s32 unk1C9C;
} GenObj;
void *func_080722DC(GenObj *arg0, ? arg1, ? arg2, ? arg1A, s32 *arg1C, s32 arg1E, ? arg22, u32 arg23, u32 arg24, s16 arg25, u32 arg26, u32 arg27, s16 arg28, u32 arg29, u32 arg2A, s16 arg2B, u32 arg2C, u32 arg2D, s16 arg2E, u32 arg2F, u32 arg30, s16 arg31, u32 arg32, u32 arg33, s16 arg34, u32 arg35, u32 arg36, s16 arg37, u32 arg38, u32 arg39, s16 arg3A, u32 arg3B, u32 arg3C, s16 arg3D, u32 arg3E, u32 arg3F, s16 arg40, u32 arg41, u32 arg42, s16 arg43, u32 arg44, u32 arg45, s16 arg46, u32 arg47, u32 arg48, s16 arg49, u32 arg4A, u32 arg4B, s16 arg4C, u32 arg4D, u32 arg4E, s16 arg4F, u32 arg50, u32 arg51, s16 arg52, u32 arg53, u32 arg54, s16 arg55, u32 arg56, u32 arg57, s16 arg58, u32 arg59, u32 arg5A, s16 arg5B, u32 arg5C, u32 arg5D, s16 arg5E, u32 arg5F, u32 arg60, ? arg61, ? arg62, u32 arg63, u32 arg64, ? arg65, ? arg66, u32 arg67, u32 arg68, ? arg69, ? arg6A, u32 arg6B, u32 arg6C, s16 arg6D, u32 arg6E, u32 arg6F, s16 arg70, u32 arg71, u32 arg72, s16 arg73, u32 arg74, u32 arg75, s16 arg76, u32 arg77, u32 arg78, s16 arg79, u32 arg7A, u32 arg7B, u16 *arg7C, GenObj *arg7E, s32 arg7F, GenObj *arg80, GenObj *arg81, GenObj *arg82, GenObj *arg83, GenObj *arg84, GenObj *arg85, void *arg86, GenObj *arg87, GenObj *arg88, GenObj *arg89, GenObj *arg8A, GenObj *arg8B, GenObj *arg8C, GenObj *arg8D, void *arg8E, GenObj *arg8F, GenObj *arg90, GenObj *arg91, GenObj *arg92, GenObj *arg93, GenObj *arg94, GenObj *arg95, GenObj *arg96, GenObj *arg97, GenObj *arg98, void *arg99, void *arg9A, void *arg9B, void *arg9C, void *arg9D, void *arg9E, void *arg9F, void *argA0, void *argA1, void *argA2, void *argA3, void *argA4, void *argA5, void *argA6, void *argA7, void *argA8, void *argA9, void *argAA, void *argAB, void *argAC, void *argAD, void *argAE, void *argAF, void *argB0, void *argB1, s32 argB2, s32 argB3, GenObj *argB4, GenObj *argB5, void *argB6, void *argB7) {
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_12;
    s32 temp_r0_14;
    s32 temp_r0_16;
    s32 temp_r0_18;
    s32 temp_r0_20;
    s32 temp_r0_30;
    s32 temp_r0_33;
    s32 temp_r0_36;
    s32 temp_r0_39;
    s32 temp_r0_42;
    s32 temp_r0_49;
    s32 temp_r0_52;
    s32 temp_r0_55;
    s32 temp_r0_58;
    s32 temp_r0_61;
    s32 temp_r0_64;
    s32 temp_r0_67;
    s32 temp_r0_6;
    s32 temp_r0_70;
    s32 temp_r0_73;
    s32 temp_r0_76;
    s32 temp_r0_79;
    s32 temp_r0_82;
    s32 temp_r0_85;
    s32 temp_r0_89;
    s32 temp_r0_8;
    s32 temp_r0_92;
    s32 temp_r2_11;
    s32 temp_r2_24;
    s32 temp_r2_25;
    s32 temp_r2_27;
    s32 temp_r2_28;
    s32 temp_r2_30;
    s32 temp_r2_31;
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
    s32 temp_r4_29;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_33;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_3;
    s32 temp_r4_40;
    s32 temp_r4_41;
    s32 temp_r4_42;
    s32 temp_r4_43;
    s32 temp_r4_44;
    s32 temp_r4_45;
    s32 temp_r4_46;
    s32 temp_r4_47;
    s32 temp_r4_48;
    s32 temp_r4_50;
    s32 temp_r4_51;
    s32 temp_r4_53;
    s32 temp_r4_54;
    s32 temp_r4_56;
    s32 temp_r4_57;
    s32 temp_r4_58;
    s32 temp_r4_59;
    s32 temp_r4_5;
    s32 temp_r4_60;
    s32 temp_r4_61;
    s32 temp_r4_62;
    s32 temp_r4_63;
    s32 temp_r4_64;
    s32 temp_r4_65;
    s32 temp_r4_66;
    s32 temp_r4_67;
    s32 temp_r4_68;
    s32 temp_r4_69;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_10;
    s32 temp_r5_11;
    s32 temp_r5_12;
    s32 temp_r5_13;
    s32 temp_r5_14;
    s32 temp_r5_15;
    s32 temp_r5_16;
    s32 temp_r5_17;
    s32 temp_r5_18;
    s32 temp_r5_19;
    s32 temp_r5_20;
    s32 temp_r5_21;
    s32 temp_r5_22;
    s32 temp_r5_26;
    s32 temp_r5_8;
    s32 temp_r5_9;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 var_r7;
    s32 var_r8;
    s32 var_r8_10;
    s32 var_r8_11;
    s32 var_r8_12;
    s32 var_r8_13;
    s32 var_r8_14;
    s32 var_r8_15;
    s32 var_r8_16;
    s32 var_r8_17;
    s32 var_r8_18;
    s32 var_r8_19;
    s32 var_r8_20;
    s32 var_r8_21;
    s32 var_r8_22;
    s32 var_r8_23;
    s32 var_r8_24;
    s32 var_r8_25;
    s32 var_r8_26;
    s32 var_r8_27;
    s32 var_r8_28;
    s32 var_r8_29;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_r8_9;
    u32 *var_r0;
    u32 *var_r0_11;
    u32 *var_r0_13;
    u32 *var_r0_15;
    u32 *var_r0_17;
    u32 *var_r0_3;
    u32 *var_r0_5;
    u32 *var_r0_7;
    u32 *var_r0_9;
    u32 *var_r1_10;
    u32 *var_r1_12;
    u32 *var_r1_14;
    u32 *var_r1_16;
    u32 *var_r1_18;
    u32 *var_r1_20;
    u32 *var_r1_22;
    u32 *var_r1_24;
    u32 *var_r1_26;
    u32 *var_r1_28;
    u32 *var_r1_30;
    u32 *var_r1_32;
    u32 *var_r1_34;
    u32 *var_r1_36;
    u32 *var_r1_38;
    u32 *var_r1_40;
    u32 *var_r1_42;
    u32 *var_r1_44;
    u32 *var_r1_46;
    u32 *var_r1_48;
    u32 temp_r0_23;
    u32 temp_r0_25;
    u32 temp_r0_27;
    u32 temp_r0_28;
    u32 temp_r0_29;
    u32 temp_r0_31;
    u32 temp_r0_34;
    u32 temp_r0_37;
    u32 temp_r0_40;
    u32 temp_r0_43;
    u32 temp_r0_45;
    u32 temp_r0_46;
    u32 temp_r0_47;
    u32 temp_r0_48;
    u32 temp_r0_50;
    u32 temp_r0_53;
    u32 temp_r0_56;
    u32 temp_r0_59;
    u32 temp_r0_62;
    u32 temp_r0_65;
    u32 temp_r0_68;
    u32 temp_r0_71;
    u32 temp_r0_74;
    u32 temp_r0_77;
    u32 temp_r0_80;
    u32 temp_r0_83;
    u32 temp_r0_86;
    u32 temp_r0_88;
    u32 temp_r0_90;
    u32 temp_r0_93;
    u32 temp_r0_95;
    u32 temp_r5_2;
    u32 var_r3_10;
    u32 var_r3_12;
    u32 var_r3_14;
    u32 var_r3_16;
    u32 var_r3_18;
    u32 var_r3_20;
    u32 var_r3_22;
    u32 var_r3_24;
    u32 var_r3_26;
    u32 var_r3_28;
    u32 var_r3_2;
    u32 var_r3_30;
    u32 var_r3_32;
    u32 var_r3_34;
    u32 var_r3_36;
    u32 var_r3_38;
    u32 var_r3_40;
    u32 var_r3_42;
    u32 var_r3_44;
    u32 var_r3_46;
    u32 var_r3_48;
    u32 var_r3_4;
    u32 var_r3_50;
    u32 var_r3_52;
    u32 var_r3_54;
    u32 var_r3_56;
    u32 var_r3_58;
    u32 var_r3_6;
    u32 var_r3_8;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_15;
    void *temp_r0_17;
    void *temp_r0_19;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_24;
    void *temp_r0_26;
    void *temp_r0_2;
    void *temp_r0_32;
    void *temp_r0_35;
    void *temp_r0_38;
    void *temp_r0_3;
    void *temp_r0_41;
    void *temp_r0_44;
    void *temp_r0_4;
    void *temp_r0_51;
    void *temp_r0_54;
    void *temp_r0_57;
    void *temp_r0_5;
    void *temp_r0_60;
    void *temp_r0_63;
    void *temp_r0_66;
    void *temp_r0_69;
    void *temp_r0_72;
    void *temp_r0_75;
    void *temp_r0_78;
    void *temp_r0_7;
    void *temp_r0_81;
    void *temp_r0_84;
    void *temp_r0_87;
    void *temp_r0_91;
    void *temp_r0_94;
    void *temp_r0_9;
    GenObj *temp_r1;
    GenObj *temp_r1_10;
    GenObj *temp_r1_11;
    GenObj *temp_r1_12;
    GenObj *temp_r1_13;
    GenObj *temp_r1_14;
    GenObj *temp_r1_15;
    GenObj *temp_r1_16;
    GenObj *temp_r1_17;
    GenObj *temp_r1_18;
    GenObj *temp_r1_19;
    GenObj *temp_r1_20;
    GenObj *temp_r1_21;
    GenObj *temp_r1_22;
    GenObj *temp_r1_23;
    GenObj *temp_r1_24;
    GenObj *temp_r1_25;
    GenObj *temp_r1_26;
    GenObj *temp_r1_27;
    GenObj *temp_r1_28;
    GenObj *temp_r1_29;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    GenObj *temp_r1_8;
    GenObj *temp_r1_9;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_14;
    void *temp_r2_15;
    void *temp_r2_16;
    void *temp_r2_17;
    void *temp_r2_18;
    void *temp_r2_19;
    void *temp_r2_20;
    void *temp_r2_21;
    void *temp_r2_22;
    void *temp_r2_23;
    void *temp_r2_26;
    void *temp_r2_29;
    void *temp_r2_2;
    void *temp_r2_32;
    void *temp_r2_33;
    void *temp_r2_34;
    void *temp_r2_35;
    void *temp_r2_36;
    void *temp_r2_37;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;
    void *temp_r4;
    void *temp_r4_49;
    void *temp_r4_4;
    void *temp_r4_52;
    void *temp_r4_55;
    GenObj *temp_r5_23;
    GenObj *temp_r5_24;
    GenObj *temp_r5_25;
    GenObj *temp_r5_3;
    GenObj *temp_r5_4;
    GenObj *temp_r5_5;
    GenObj *temp_r5_6;
    GenObj *temp_r5_7;
    GenObj *temp_r6;
    GenObj *temp_r6_10;
    GenObj *temp_r6_11;
    GenObj *temp_r6_12;
    GenObj *temp_r6_13;
    GenObj *temp_r6_14;
    GenObj *temp_r6_15;
    GenObj *temp_r6_16;
    GenObj *temp_r6_17;
    GenObj *temp_r6_18;
    GenObj *temp_r6_19;
    GenObj *temp_r6_20;
    GenObj *temp_r6_21;
    GenObj *temp_r6_22;
    void *temp_r6_2;
    GenObj *temp_r6_3;
    GenObj *temp_r6_4;
    GenObj *temp_r6_5;
    GenObj *temp_r6_6;
    GenObj *temp_r6_7;
    GenObj *temp_r6_8;
    GenObj *temp_r6_9;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_18;
    void *var_r0_19;
    void *var_r0_20;
    void *var_r0_21;
    void *var_r0_22;
    void *var_r0_23;
    void *var_r0_24;
    void *var_r0_25;
    void *var_r0_26;
    void *var_r0_27;
    void *var_r0_28;
    void *var_r0_29;
    void *var_r0_2;
    void *var_r0_30;
    void *var_r0_31;
    void *var_r0_32;
    void *var_r0_33;
    void *var_r0_34;
    void *var_r0_35;
    void *var_r0_36;
    void *var_r0_37;
    void *var_r0_38;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_11;
    void *var_r1_13;
    void *var_r1_15;
    void *var_r1_17;
    void *var_r1_19;
    void *var_r1_21;
    void *var_r1_23;
    void *var_r1_25;
    void *var_r1_27;
    void *var_r1_29;
    void *var_r1_2;
    void *var_r1_31;
    void *var_r1_33;
    void *var_r1_35;
    void *var_r1_37;
    void *var_r1_39;
    void *var_r1_3;
    void *var_r1_41;
    void *var_r1_43;
    void *var_r1_45;
    void *var_r1_47;
    void *var_r1_49;
    void *var_r1_4;
    void *var_r1_5;
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
    GenObj *var_r2_19;
    GenObj *var_r2_20;
    GenObj *var_r2_21;
    GenObj *var_r2_22;
    GenObj *var_r2_23;
    GenObj *var_r2_24;
    GenObj *var_r2_25;
    GenObj *var_r2_26;
    GenObj *var_r2_27;
    GenObj *var_r2_28;
    GenObj *var_r2_29;
    GenObj *var_r2_2;
    GenObj *var_r2_30;
    GenObj *var_r2_31;
    GenObj *var_r2_32;
    GenObj *var_r2_33;
    GenObj *var_r2_34;
    GenObj *var_r2_35;
    GenObj *var_r2_36;
    GenObj *var_r2_37;
    GenObj *var_r2_38;
    GenObj *var_r2_39;
    GenObj *var_r2_3;
    GenObj *var_r2_40;
    GenObj *var_r2_41;
    GenObj *var_r2_42;
    GenObj *var_r2_43;
    GenObj *var_r2_44;
    GenObj *var_r2_45;
    GenObj *var_r2_46;
    GenObj *var_r2_47;
    GenObj *var_r2_48;
    GenObj *var_r2_49;
    GenObj *var_r2_4;
    GenObj *var_r2_50;
    GenObj *var_r2_51;
    GenObj *var_r2_52;
    GenObj *var_r2_53;
    GenObj *var_r2_54;
    GenObj *var_r2_55;
    GenObj *var_r2_56;
    GenObj *var_r2_57;
    GenObj *var_r2_58;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3;
    GenObj *var_r3_11;
    GenObj *var_r3_13;
    GenObj *var_r3_15;
    GenObj *var_r3_17;
    GenObj *var_r3_19;
    GenObj *var_r3_21;
    GenObj *var_r3_23;
    GenObj *var_r3_25;
    GenObj *var_r3_27;
    GenObj *var_r3_29;
    GenObj *var_r3_31;
    GenObj *var_r3_33;
    GenObj *var_r3_35;
    GenObj *var_r3_37;
    GenObj *var_r3_39;
    GenObj *var_r3_3;
    GenObj *var_r3_41;
    GenObj *var_r3_43;
    GenObj *var_r3_45;
    GenObj *var_r3_47;
    GenObj *var_r3_49;
    GenObj *var_r3_51;
    GenObj *var_r3_53;
    GenObj *var_r3_55;
    GenObj *var_r3_57;
    GenObj *var_r3_5;
    GenObj *var_r3_7;
    GenObj *var_r3_9;
    void *var_r5;
    void *var_r5_10;
    void *var_r5_11;
    void *var_r5_12;
    void *var_r5_13;
    void *var_r5_14;
    void *var_r5_15;
    void *var_r5_16;
    void *var_r5_17;
    void *var_r5_18;
    void *var_r5_19;
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
    void *var_r6;
    void *var_r6_2;
    void *var_r6_3;
    void *var_r6_4;
    void *var_r6_5;
    void *var_r6_6;
    void *var_r6_7;
    void *var_r6_8;

    unksp0 = &gUnk_080FBED8;
    func_08070C24(arg0, arg1, arg2, 0x78);
    arg0->unk5B4 = &vtable_unk_080E7AFC;
    arg7E = arg0->unk4;
    arg7F = 4;
    arg22.unk0 = 0x1A;
    arg22.unk2 = 2;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x427C);
    unksp0 = &gUnk_080FBEE0;
    func_0804E8F0((s32) arg22.unk0, temp_r4, 0, 0);
    temp_r6 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, temp_r4, 0x06003000, 0x680);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 == temp_r6->unkC) {
        argB6 = temp_r1;
        arg24 = 1;
        temp_r4_2 = (s32) (argB6 - temp_r6->unk0) >> 4;
        var_r0 = &arg23;
        *var_r0 = temp_r4_2;
        if ((u32) temp_r4_2 < (u32) arg24) {
            var_r0 = &arg24;
        }
        temp_r0 = temp_r4_2 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_3 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_r8 = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        argB7 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_2;
        argB4 = &unksp0 + 0xA4;
        argA7 = (GenObj *)((u8 *)arg0 + 0x4900);
        argB5 = &unksp0 + 0xB0;
        argAC = (GenObj *)((u8 *)arg0 + 0x4B04);
        arg80 = &unksp0 + 0xBC;
        arg9D = (GenObj *)((u8 *)arg0 + 0x4F08);
        arg81 = &unksp0 + 0xC8;
        argA0 = (GenObj *)((u8 *)arg0 + 0x510C);
        arg82 = &unksp0 + 0xD4;
        argA4 = (GenObj *)((u8 *)arg0 + 0x5310);
        arg83 = &unksp0 + 0xE0;
        argA6 = (GenObj *)((u8 *)arg0 + 0x5394);
        temp_r0_2 = &unksp0 + 0xEC;
        arg84 = temp_r0_2;
        argA8 = (GenObj *)((u8 *)arg0 + 0x5418);
        arg85 = &unksp0 + 0xF8;
        argA9 = (GenObj *)((u8 *)arg0 + 0x551C);
        argAE = &unksp0 + 0x18;
        argB0 = temp_r0_2 - 0xA4;
        arg87 = &arg3D;
        argAD = (GenObj *)((u8 *)arg0 + 0x5620);
        arg88 = &arg40;
        argA3 = (GenObj *)((u8 *)arg0 + 0x5CA4);
        arg89 = &arg43;
        argAA = (GenObj *)((u8 *)arg0 + 0x6028);
        arg8A = &arg46;
        argAF = (GenObj *)((u8 *)arg0 + 0x622C);
        arg8B = &arg49;
        arg9B = (GenObj *)((u8 *)arg0 + 0x6430);
        arg8C = &arg4C;
        arg9C = (GenObj *)((u8 *)arg0 + 0x64B4);
        arg8D = &arg4F;
        argAB = (GenObj *)((u8 *)arg0 + 0x6B38);
        arg8F = &arg52;
        argB1 = (GenObj *)((u8 *)arg0 + 0x6D3C);
        arg90 = &arg55;
        arg8E = (GenObj *)((u8 *)arg0 + 0x6E40);
        arg91 = &arg58;
        arg9E = (GenObj *)((u8 *)arg0 + 0x6FC4);
        arg92 = &arg5B;
        arg9F = (GenObj *)((u8 *)arg0 + 0x7148);
        arg93 = &arg5E;
        argA1 = (GenObj *)((u8 *)arg0 + 0x71CC);
        arg94 = &arg6D;
        argA2 = (GenObj *)((u8 *)arg0 + 0x7250);
        arg95 = &arg70;
        arg86 = (GenObj *)((u8 *)arg0 + 0x78D4);
        arg96 = &arg73;
        arg99 = (GenObj *)((u8 *)arg0 + 0x79D8);
        arg97 = &arg76;
        argA5 = (GenObj *)((u8 *)arg0 + 0x7EDC);
        arg98 = &arg79;
        arg9A = (GenObj *)((u8 *)arg0 + 0x84E0);
loop_15:
        if (var_r2 != argB6) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
            goto loop_15;
        }
        if (arg24 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) unksp8.unk0;
                var_r3->unk4 = (s32) unksp8.unk4;
                var_r3->unk8 = (s32) unksp8.unk8;
                var_r3->unkC = (s32) unksp8.unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = arg24;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) unksp8.unk0;
                        var_r2_2->unk4 = (s32) unksp8.unk4;
                        var_r2_2->unk8 = (s32) unksp8.unk8;
                        var_r2_2->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6->unk4;
        temp_r0_3 = temp_r6->unk0;
        var_r1 = temp_r0_3;
        if (temp_r0_3 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_3 != 0) {
            free();
        }
        temp_r6->unk0 = argB7;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (argB7 + var_r8);
    } else {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) unksp8.unk0;
            temp_r1->unk4 = (s32) unksp8.unk4;
            temp_r1->unk8 = (s32) unksp8.unk8;
            temp_r1->unkC = (s32) unksp8.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        temp_r0_4 = &unksp0 + 0xA4;
        argB4 = temp_r0_4;
        argA7 = (GenObj *)((u8 *)arg0 + 0x4900);
        temp_r2_2 = &unksp0 + 0xB0;
        argB5 = temp_r2_2;
        argAC = (GenObj *)((u8 *)arg0 + 0x4B04);
        temp_r4_4 = &unksp0 + 0xBC;
        arg80 = temp_r4_4;
        arg9D = (GenObj *)((u8 *)arg0 + 0x4F08);
        temp_r6_2 = &unksp0 + 0xC8;
        arg81 = temp_r6_2;
        argA0 = (GenObj *)((u8 *)arg0 + 0x510C);
        temp_r0_5 = temp_r0_4 + 0x30;
        arg82 = temp_r0_5;
        argA4 = (GenObj *)((u8 *)arg0 + 0x5310);
        arg83 = temp_r2_2 + 0x30;
        argA6 = (GenObj *)((u8 *)arg0 + 0x5394);
        arg84 = temp_r4_4 + 0x30;
        argA8 = (GenObj *)((u8 *)arg0 + 0x5418);
        arg85 = temp_r6_2 + 0x30;
        argA9 = (GenObj *)((u8 *)arg0 + 0x551C);
        argAE = temp_r0_5 - 0xBC;
        argB0 = &unksp0 + 0x48;
        arg87 = &arg3D;
        argAD = (GenObj *)((u8 *)arg0 + 0x5620);
        arg88 = &arg40;
        argA3 = (GenObj *)((u8 *)arg0 + 0x5CA4);
        arg89 = &arg43;
        argAA = (GenObj *)((u8 *)arg0 + 0x6028);
        arg8A = &arg46;
        argAF = (GenObj *)((u8 *)arg0 + 0x622C);
        arg8B = &arg49;
        arg9B = (GenObj *)((u8 *)arg0 + 0x6430);
        arg8C = &arg4C;
        arg9C = (GenObj *)((u8 *)arg0 + 0x64B4);
        arg8D = &arg4F;
        argAB = (GenObj *)((u8 *)arg0 + 0x6B38);
        arg8F = &arg52;
        argB1 = (GenObj *)((u8 *)arg0 + 0x6D3C);
        arg90 = &arg55;
        arg8E = (GenObj *)((u8 *)arg0 + 0x6E40);
        arg91 = &arg58;
        arg9E = (GenObj *)((u8 *)arg0 + 0x6FC4);
        arg92 = &arg5B;
        arg9F = (GenObj *)((u8 *)arg0 + 0x7148);
        arg93 = &arg5E;
        argA1 = (GenObj *)((u8 *)arg0 + 0x71CC);
        arg94 = &arg6D;
        argA2 = (GenObj *)((u8 *)arg0 + 0x7250);
        arg95 = &arg70;
        arg86 = (GenObj *)((u8 *)arg0 + 0x78D4);
        arg96 = &arg73;
        arg99 = (GenObj *)((u8 *)arg0 + 0x79D8);
        arg97 = &arg76;
        argA5 = (GenObj *)((u8 *)arg0 + 0x7EDC);
        arg98 = &arg79;
        arg9A = (GenObj *)((u8 *)arg0 + 0x84E0);
    }
    arg25 = 8;
    argB4->unk2 = 2;
    unksp0 = &gUnk_080FBEFC;
    func_0804E8F0((s32) arg25, argA7, 0, 0);
    temp_r6_3 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA7, 0x06003980, 0x200);
    temp_r1_2 = temp_r6_3->unk4;
    if (temp_r1_2 != temp_r6_3->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) unksp8.unk0;
            temp_r1_2->unk4 = (s32) unksp8.unk4;
            temp_r1_2->unk8 = (s32) unksp8.unk8;
            temp_r1_2->unkC = (s32) unksp8.unkC;
        }
        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
    } else {
        argB6 = temp_r1_2;
        arg27 = 1;
        temp_r4_5 = (s32) (argB6 - temp_r6_3->unk0) >> 4;
        var_r0_3 = &arg26;
        *var_r0_3 = temp_r4_5;
        if ((u32) temp_r4_5 < (u32) arg27) {
            var_r0_3 = &arg27;
        }
        temp_r0_6 = temp_r4_5 + *var_r0_3;
        if (temp_r0_6 != 0) {
            temp_r4_6 = temp_r0_6 * 0x10;
            var_r0_4 = malloc(temp_r4_6);
            var_r8_2 = temp_r4_6;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_4 = 0;
            var_r8_2 = 0;
        }
        argB7 = var_r0_4;
        var_r2_3 = temp_r6_3->unk0;
        var_r3_3 = var_r0_4;
        if (var_r2_3 != argB6) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != argB6);
        }
        if (arg27 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) unksp8.unk0;
                var_r3_3->unk4 = (s32) unksp8.unk4;
                var_r3_3->unk8 = (s32) unksp8.unk8;
                var_r3_3->unkC = (s32) unksp8.unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_3 + 0x10);
        } else {
            var_r3_4 = arg27;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) unksp8.unk0;
                        var_r2_4->unk4 = (s32) unksp8.unk4;
                        var_r2_4->unk8 = (s32) unksp8.unk8;
                        var_r2_4->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_3 = temp_r6_3->unk4;
        temp_r0_7 = temp_r6_3->unk0;
        var_r1_2 = temp_r0_7;
        if (temp_r0_7 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        temp_r6_3->unk0 = argB7;
        temp_r6_3->unk4 = var_r5_2;
        temp_r6_3->unkC = (void *) (argB7 + var_r8_2);
    }
    arg28 = 0x10;
    argB5->unk2 = 2;
    unksp0 = &gUnk_080FBF08;
    func_0804E8F0((s32) arg28, argAC, 0, 0);
    temp_r6_4 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argAC, 0x06003B80, 0x400);
    temp_r1_3 = temp_r6_4->unk4;
    if (temp_r1_3 != temp_r6_4->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) unksp8.unk0;
            temp_r1_3->unk4 = (s32) unksp8.unk4;
            temp_r1_3->unk8 = (s32) unksp8.unk8;
            temp_r1_3->unkC = (s32) unksp8.unkC;
        }
        temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
    } else {
        argB6 = temp_r1_3;
        arg2A = 1;
        temp_r4_7 = (s32) (argB6 - temp_r6_4->unk0) >> 4;
        var_r0_5 = &arg29;
        *var_r0_5 = temp_r4_7;
        if ((u32) temp_r4_7 < (u32) arg2A) {
            var_r0_5 = &arg2A;
        }
        temp_r0_8 = temp_r4_7 + *var_r0_5;
        if (temp_r0_8 != 0) {
            temp_r4_8 = temp_r0_8 * 0x10;
            var_r0_6 = malloc(temp_r4_8);
            var_r8_3 = temp_r4_8;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_6 = 0;
            var_r8_3 = 0;
        }
        argB7 = var_r0_6;
        var_r2_5 = temp_r6_4->unk0;
        var_r3_5 = var_r0_6;
        if (var_r2_5 != argB6) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_5->unk0;
                    var_r3_5->unk4 = (s32) var_r2_5->unk4;
                    var_r3_5->unk8 = (s32) var_r2_5->unk8;
                    var_r3_5->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_5 != argB6);
        }
        if (arg2A == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) unksp8.unk0;
                var_r3_5->unk4 = (s32) unksp8.unk4;
                var_r3_5->unk8 = (s32) unksp8.unk8;
                var_r3_5->unkC = (s32) unksp8.unkC;
            }
            var_r5_3 = (GenObj *)((u8 *)var_r3_5 + 0x10);
        } else {
            var_r3_6 = arg2A;
            var_r2_6 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) unksp8.unk0;
                        var_r2_6->unk4 = (s32) unksp8.unk4;
                        var_r2_6->unk8 = (s32) unksp8.unk8;
                        var_r2_6->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5_3 = var_r2_6;
        }
        temp_r2_4 = temp_r6_4->unk4;
        temp_r0_9 = temp_r6_4->unk0;
        var_r1_3 = temp_r0_9;
        if (temp_r0_9 != temp_r2_4) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_4);
        }
        if (temp_r0_9 != 0) {
            free();
        }
        temp_r6_4->unk0 = argB7;
        temp_r6_4->unk4 = var_r5_3;
        temp_r6_4->unkC = (void *) (argB7 + var_r8_3);
    }
    arg2B = 8;
    arg80->unk2 = 2;
    unksp0 = &gUnk_080FBF1C;
    func_0804E8F0((s32) arg2B, arg9D, 0, 0);
    temp_r6_5 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg9D, 0x06003F80, 0x200);
    temp_r1_4 = temp_r6_5->unk4;
    if (temp_r1_4 != temp_r6_5->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) unksp8.unk0;
            temp_r1_4->unk4 = (s32) unksp8.unk4;
            temp_r1_4->unk8 = (s32) unksp8.unk8;
            temp_r1_4->unkC = (s32) unksp8.unkC;
        }
        temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
    } else {
        argB6 = temp_r1_4;
        arg2D = 1;
        temp_r4_9 = (s32) (argB6 - temp_r6_5->unk0) >> 4;
        var_r0_7 = &arg2C;
        *var_r0_7 = temp_r4_9;
        if ((u32) temp_r4_9 < (u32) arg2D) {
            var_r0_7 = &arg2D;
        }
        temp_r0_10 = temp_r4_9 + *var_r0_7;
        if (temp_r0_10 != 0) {
            temp_r4_10 = temp_r0_10 * 0x10;
            var_r0_8 = malloc(temp_r4_10);
            var_r8_4 = temp_r4_10;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_8 = 0;
            var_r8_4 = 0;
        }
        argB7 = var_r0_8;
        var_r2_7 = temp_r6_5->unk0;
        var_r3_7 = var_r0_8;
        if (var_r2_7 != argB6) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_7->unk0;
                    var_r3_7->unk4 = (s32) var_r2_7->unk4;
                    var_r3_7->unk8 = (s32) var_r2_7->unk8;
                    var_r3_7->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_7 != argB6);
        }
        if (arg2D == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32) unksp8.unk0;
                var_r3_7->unk4 = (s32) unksp8.unk4;
                var_r3_7->unk8 = (s32) unksp8.unk8;
                var_r3_7->unkC = (s32) unksp8.unkC;
            }
            var_r5_4 = (GenObj *)((u8 *)var_r3_7 + 0x10);
        } else {
            var_r3_8 = arg2D;
            var_r2_8 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) unksp8.unk0;
                        var_r2_8->unk4 = (s32) unksp8.unk4;
                        var_r2_8->unk8 = (s32) unksp8.unk8;
                        var_r2_8->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r5_4 = var_r2_8;
        }
        temp_r2_5 = temp_r6_5->unk4;
        temp_r0_11 = temp_r6_5->unk0;
        var_r1_4 = temp_r0_11;
        if (temp_r0_11 != temp_r2_5) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_5);
        }
        if (temp_r0_11 != 0) {
            free();
        }
        temp_r6_5->unk0 = argB7;
        temp_r6_5->unk4 = var_r5_4;
        temp_r6_5->unkC = (void *) (argB7 + var_r8_4);
    }
    arg2E = 8;
    arg81->unk2 = 2;
    unksp0 = &gUnk_080FBF28;
    func_0804E8F0((s32) arg2E, argA0, 0, 0);
    temp_r6_6 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA0, 0x06004180, 0x200);
    temp_r1_5 = temp_r6_6->unk4;
    if (temp_r1_5 != temp_r6_6->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) unksp8.unk0;
            temp_r1_5->unk4 = (s32) unksp8.unk4;
            temp_r1_5->unk8 = (s32) unksp8.unk8;
            temp_r1_5->unkC = (s32) unksp8.unkC;
        }
        temp_r6_6->unk4 = (void *) (temp_r6_6->unk4 + 0x10);
    } else {
        argB6 = temp_r1_5;
        arg30 = 1;
        temp_r4_11 = (s32) (argB6 - temp_r6_6->unk0) >> 4;
        var_r0_9 = &arg2F;
        *var_r0_9 = temp_r4_11;
        if ((u32) temp_r4_11 < (u32) arg30) {
            var_r0_9 = &arg30;
        }
        temp_r0_12 = temp_r4_11 + *var_r0_9;
        if (temp_r0_12 != 0) {
            temp_r4_12 = temp_r0_12 * 0x10;
            var_r0_10 = malloc(temp_r4_12);
            var_r8_5 = temp_r4_12;
            if (var_r0_10 == 0) {
                var_r0_10 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_10 = 0;
            var_r8_5 = 0;
        }
        argB7 = var_r0_10;
        var_r2_9 = temp_r6_6->unk0;
        var_r3_9 = var_r0_10;
        if (var_r2_9 != argB6) {
            do {
                if (var_r3_9 != 0) {
                    var_r3_9->unk0 = (s32) var_r2_9->unk0;
                    var_r3_9->unk4 = (s32) var_r2_9->unk4;
                    var_r3_9->unk8 = (s32) var_r2_9->unk8;
                    var_r3_9->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_9 += 0x10;
            } while (var_r2_9 != argB6);
        }
        if (arg30 == 1) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) unksp8.unk0;
                var_r3_9->unk4 = (s32) unksp8.unk4;
                var_r3_9->unk8 = (s32) unksp8.unk8;
                var_r3_9->unkC = (s32) unksp8.unkC;
            }
            var_r5_5 = (GenObj *)((u8 *)var_r3_9 + 0x10);
        } else {
            var_r3_10 = arg30;
            var_r2_10 = var_r3_9;
            if (var_r3_10 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32) unksp8.unk0;
                        var_r2_10->unk4 = (s32) unksp8.unk4;
                        var_r2_10->unk8 = (s32) unksp8.unk8;
                        var_r2_10->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_10 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r3_10 != 0);
            }
            var_r5_5 = var_r2_10;
        }
        temp_r2_6 = temp_r6_6->unk4;
        temp_r0_13 = temp_r6_6->unk0;
        var_r1_5 = temp_r0_13;
        if (temp_r0_13 != temp_r2_6) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_6);
        }
        if (temp_r0_13 != 0) {
            free();
        }
        temp_r6_6->unk0 = argB7;
        temp_r6_6->unk4 = var_r5_5;
        temp_r6_6->unkC = (void *) (argB7 + var_r8_5);
    }
    arg31 = 2;
    arg82->unk2 = 2;
    unksp0 = &gUnk_080FBE8C;
    func_0804E8F0((s32) arg31, argA4, 0, 0);
    temp_r6_7 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA4, 0x06000700, 0x80);
    temp_r1_6 = temp_r6_7->unk4;
    if (temp_r1_6 != temp_r6_7->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) unksp8.unk0;
            temp_r1_6->unk4 = (s32) unksp8.unk4;
            temp_r1_6->unk8 = (s32) unksp8.unk8;
            temp_r1_6->unkC = (s32) unksp8.unkC;
        }
        temp_r6_7->unk4 = (void *) (temp_r6_7->unk4 + 0x10);
    } else {
        argB6 = temp_r1_6;
        arg33 = 1;
        temp_r4_13 = (s32) (argB6 - temp_r6_7->unk0) >> 4;
        var_r0_11 = &arg32;
        *var_r0_11 = temp_r4_13;
        if ((u32) temp_r4_13 < (u32) arg33) {
            var_r0_11 = &arg33;
        }
        temp_r0_14 = temp_r4_13 + *var_r0_11;
        if (temp_r0_14 != 0) {
            temp_r4_14 = temp_r0_14 * 0x10;
            var_r0_12 = malloc(temp_r4_14);
            var_r8_6 = temp_r4_14;
            if (var_r0_12 == 0) {
                var_r0_12 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_12 = 0;
            var_r8_6 = 0;
        }
        argB7 = var_r0_12;
        var_r2_11 = temp_r6_7->unk0;
        var_r3_11 = var_r0_12;
        if (var_r2_11 != argB6) {
            do {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (s32) var_r2_11->unk0;
                    var_r3_11->unk4 = (s32) var_r2_11->unk4;
                    var_r3_11->unk8 = (s32) var_r2_11->unk8;
                    var_r3_11->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_11 += 0x10;
            } while (var_r2_11 != argB6);
        }
        if (arg33 == 1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) unksp8.unk0;
                var_r3_11->unk4 = (s32) unksp8.unk4;
                var_r3_11->unk8 = (s32) unksp8.unk8;
                var_r3_11->unkC = (s32) unksp8.unkC;
            }
            var_r5_6 = (GenObj *)((u8 *)var_r3_11 + 0x10);
        } else {
            var_r3_12 = arg33;
            var_r2_12 = var_r3_11;
            if (var_r3_12 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) unksp8.unk0;
                        var_r2_12->unk4 = (s32) unksp8.unk4;
                        var_r2_12->unk8 = (s32) unksp8.unk8;
                        var_r2_12->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_12 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_12 != 0);
            }
            var_r5_6 = var_r2_12;
        }
        temp_r2_7 = temp_r6_7->unk4;
        temp_r0_15 = temp_r6_7->unk0;
        var_r1_6 = temp_r0_15;
        if (temp_r0_15 != temp_r2_7) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_7);
        }
        if (temp_r0_15 != 0) {
            free();
        }
        temp_r6_7->unk0 = argB7;
        temp_r6_7->unk4 = var_r5_6;
        temp_r6_7->unkC = (void *) (argB7 + var_r8_6);
    }
    arg34 = 2;
    arg83->unk2 = 2;
    unksp0 = &gUnk_080FBEC8;
    func_0804E8F0((s32) arg34, argA6, 0, 0);
    temp_r6_8 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA6, 0x06000780, 0x80);
    temp_r1_7 = temp_r6_8->unk4;
    if (temp_r1_7 != temp_r6_8->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32) unksp8.unk0;
            temp_r1_7->unk4 = (s32) unksp8.unk4;
            temp_r1_7->unk8 = (s32) unksp8.unk8;
            temp_r1_7->unkC = (s32) unksp8.unkC;
        }
        temp_r6_8->unk4 = (void *) (temp_r6_8->unk4 + 0x10);
    } else {
        argB6 = temp_r1_7;
        arg36 = 1;
        temp_r4_15 = (s32) (argB6 - temp_r6_8->unk0) >> 4;
        var_r0_13 = &arg35;
        *var_r0_13 = temp_r4_15;
        if ((u32) temp_r4_15 < (u32) arg36) {
            var_r0_13 = &arg36;
        }
        temp_r0_16 = temp_r4_15 + *var_r0_13;
        if (temp_r0_16 != 0) {
            temp_r4_16 = temp_r0_16 * 0x10;
            var_r0_14 = malloc(temp_r4_16);
            var_r8_7 = temp_r4_16;
            if (var_r0_14 == 0) {
                var_r0_14 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_14 = 0;
            var_r8_7 = 0;
        }
        argB7 = var_r0_14;
        var_r2_13 = temp_r6_8->unk0;
        var_r3_13 = var_r0_14;
        if (var_r2_13 != argB6) {
            do {
                if (var_r3_13 != 0) {
                    var_r3_13->unk0 = (s32) var_r2_13->unk0;
                    var_r3_13->unk4 = (s32) var_r2_13->unk4;
                    var_r3_13->unk8 = (s32) var_r2_13->unk8;
                    var_r3_13->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_13 += 0x10;
            } while (var_r2_13 != argB6);
        }
        if (arg36 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32) unksp8.unk0;
                var_r3_13->unk4 = (s32) unksp8.unk4;
                var_r3_13->unk8 = (s32) unksp8.unk8;
                var_r3_13->unkC = (s32) unksp8.unkC;
            }
            var_r5_7 = (GenObj *)((u8 *)var_r3_13 + 0x10);
        } else {
            var_r3_14 = arg36;
            var_r2_14 = var_r3_13;
            if (var_r3_14 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) unksp8.unk0;
                        var_r2_14->unk4 = (s32) unksp8.unk4;
                        var_r2_14->unk8 = (s32) unksp8.unk8;
                        var_r2_14->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_14 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_14 != 0);
            }
            var_r5_7 = var_r2_14;
        }
        temp_r2_8 = temp_r6_8->unk4;
        temp_r0_17 = temp_r6_8->unk0;
        var_r1_7 = temp_r0_17;
        if (temp_r0_17 != temp_r2_8) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_8);
        }
        if (temp_r0_17 != 0) {
            free();
        }
        temp_r6_8->unk0 = argB7;
        temp_r6_8->unk4 = var_r5_7;
        temp_r6_8->unkC = (void *) (argB7 + var_r8_7);
    }
    arg37 = 4;
    arg84->unk2 = 2;
    unksp0 = &gUnk_080FBECC;
    func_0804E8F0((s32) arg37, argA8, 0, 0);
    temp_r6_9 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA8, 0x06000800, 0x100);
    temp_r1_8 = temp_r6_9->unk4;
    if (temp_r1_8 != temp_r6_9->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32) unksp8.unk0;
            temp_r1_8->unk4 = (s32) unksp8.unk4;
            temp_r1_8->unk8 = (s32) unksp8.unk8;
            temp_r1_8->unkC = (s32) unksp8.unkC;
        }
        temp_r6_9->unk4 = (void *) (temp_r6_9->unk4 + 0x10);
    } else {
        argB6 = temp_r1_8;
        arg39 = 1;
        temp_r4_17 = (s32) (argB6 - temp_r6_9->unk0) >> 4;
        var_r0_15 = &arg38;
        *var_r0_15 = temp_r4_17;
        if ((u32) temp_r4_17 < (u32) arg39) {
            var_r0_15 = &arg39;
        }
        temp_r0_18 = temp_r4_17 + *var_r0_15;
        if (temp_r0_18 != 0) {
            temp_r4_18 = temp_r0_18 * 0x10;
            var_r0_16 = malloc(temp_r4_18);
            var_r8_8 = temp_r4_18;
            if (var_r0_16 == 0) {
                var_r0_16 = func_080D3BC0(var_r8_8);
            }
        } else {
            var_r0_16 = 0;
            var_r8_8 = 0;
        }
        argB7 = var_r0_16;
        var_r2_15 = temp_r6_9->unk0;
        var_r3_15 = var_r0_16;
        if (var_r2_15 != argB6) {
            do {
                if (var_r3_15 != 0) {
                    var_r3_15->unk0 = (s32) var_r2_15->unk0;
                    var_r3_15->unk4 = (s32) var_r2_15->unk4;
                    var_r3_15->unk8 = (s32) var_r2_15->unk8;
                    var_r3_15->unkC = (s32) var_r2_15->unkC;
                }
                var_r2_15 += 0x10;
                var_r3_15 += 0x10;
            } while (var_r2_15 != argB6);
        }
        if (arg39 == 1) {
            if (var_r3_15 != 0) {
                var_r3_15->unk0 = (s32) unksp8.unk0;
                var_r3_15->unk4 = (s32) unksp8.unk4;
                var_r3_15->unk8 = (s32) unksp8.unk8;
                var_r3_15->unkC = (s32) unksp8.unkC;
            }
            var_r5_8 = (GenObj *)((u8 *)var_r3_15 + 0x10);
        } else {
            var_r3_16 = arg39;
            var_r2_16 = var_r3_15;
            if (var_r3_16 != 0) {
                do {
                    if (var_r2_16 != 0) {
                        var_r2_16->unk0 = (s32) unksp8.unk0;
                        var_r2_16->unk4 = (s32) unksp8.unk4;
                        var_r2_16->unk8 = (s32) unksp8.unk8;
                        var_r2_16->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_16 -= 1;
                    var_r2_16 += 0x10;
                } while (var_r3_16 != 0);
            }
            var_r5_8 = var_r2_16;
        }
        temp_r2_9 = temp_r6_9->unk4;
        temp_r0_19 = temp_r6_9->unk0;
        var_r1_8 = temp_r0_19;
        if (temp_r0_19 != temp_r2_9) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_9);
        }
        if (temp_r0_19 != 0) {
            free();
        }
        temp_r6_9->unk0 = argB7;
        temp_r6_9->unk4 = var_r5_8;
        temp_r6_9->unkC = (void *) (argB7 + var_r8_8);
    }
    arg3A = 4;
    arg85->unk2 = 2;
    unksp0 = &gUnk_080FBF34;
    func_0804E8F0((s32) arg3A, argA9, 0, 0);
    temp_r6_10 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA9, 0x06000900, 0x100);
    temp_r1_9 = temp_r6_10->unk4;
    if (temp_r1_9 != temp_r6_10->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) unksp8.unk0;
            temp_r1_9->unk4 = (s32) unksp8.unk4;
            temp_r1_9->unk8 = (s32) unksp8.unk8;
            temp_r1_9->unkC = (s32) unksp8.unkC;
        }
        temp_r6_10->unk4 = (void *) (temp_r6_10->unk4 + 0x10);
    } else {
        argB6 = temp_r1_9;
        arg3C = 1;
        temp_r4_19 = (s32) (argB6 - temp_r6_10->unk0) >> 4;
        var_r0_17 = &arg3B;
        *var_r0_17 = temp_r4_19;
        if ((u32) temp_r4_19 < (u32) arg3C) {
            var_r0_17 = &arg3C;
        }
        temp_r0_20 = temp_r4_19 + *var_r0_17;
        if (temp_r0_20 != 0) {
            temp_r4_20 = temp_r0_20 * 0x10;
            var_r0_18 = malloc(temp_r4_20);
            var_r8_9 = temp_r4_20;
            if (var_r0_18 == 0) {
                var_r0_18 = func_080D3BC0(var_r8_9);
            }
        } else {
            var_r0_18 = 0;
            var_r8_9 = 0;
        }
        argB7 = var_r0_18;
        var_r2_17 = temp_r6_10->unk0;
        var_r3_17 = var_r0_18;
        if (var_r2_17 != argB6) {
            do {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (s32) var_r2_17->unk0;
                    var_r3_17->unk4 = (s32) var_r2_17->unk4;
                    var_r3_17->unk8 = (s32) var_r2_17->unk8;
                    var_r3_17->unkC = (s32) var_r2_17->unkC;
                }
                var_r2_17 += 0x10;
                var_r3_17 += 0x10;
            } while (var_r2_17 != argB6);
        }
        if (arg3C == 1) {
            if (var_r3_17 != 0) {
                var_r3_17->unk0 = (s32) unksp8.unk0;
                var_r3_17->unk4 = (s32) unksp8.unk4;
                var_r3_17->unk8 = (s32) unksp8.unk8;
                var_r3_17->unkC = (s32) unksp8.unkC;
            }
            var_r5_9 = (GenObj *)((u8 *)var_r3_17 + 0x10);
        } else {
            var_r3_18 = arg3C;
            var_r2_18 = var_r3_17;
            if (var_r3_18 != 0) {
                do {
                    if (var_r2_18 != 0) {
                        var_r2_18->unk0 = (s32) unksp8.unk0;
                        var_r2_18->unk4 = (s32) unksp8.unk4;
                        var_r2_18->unk8 = (s32) unksp8.unk8;
                        var_r2_18->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_18 -= 1;
                    var_r2_18 += 0x10;
                } while (var_r3_18 != 0);
            }
            var_r5_9 = var_r2_18;
        }
        temp_r2_10 = temp_r6_10->unk4;
        temp_r0_21 = temp_r6_10->unk0;
        var_r1_9 = temp_r0_21;
        if (temp_r0_21 != temp_r2_10) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_10);
        }
        if (temp_r0_21 != 0) {
            free();
        }
        temp_r6_10->unk0 = argB7;
        temp_r6_10->unk4 = var_r5_9;
        temp_r6_10->unkC = (void *) (argB7 + var_r8_9);
    }
    func_0805E6CC(argAE, &gUnk_0858BA28);
    func_0805E6CC(argB0, &gUnk_086678A0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + (arg7F << 6) + 4, 0x180, 0x1A, 2);
    temp_r5 = arg7F + 2;
    arg7F = temp_r5;
    temp_r0_22 = (func_08075450(arg0, 0) * 8) + &gUnk_080FC024;
    unksp0 = temp_r0_22->unk4;
    func_08075334(arg0, 0x10, temp_r5 * 8, temp_r0_22->unk0);
    temp_r4_21 = arg7F << 6;
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_21 + 8, 0x1CC, 8, 2);
    temp_r0_23 = func_08010F0C(arg0->unk58C);
    unksp0 = 0x20;
    func_0804EDB4(temp_r0_23, arg7E->unk18 + temp_r4_21 + 0x32, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_21 + 0x34, 0x38, 2, 2);
    temp_r7 = arg7F + 2;
    arg7F = temp_r7;
    temp_r0_24 = (func_08075450(arg0, 2) * 8) + &gUnk_080FC024;
    unksp0 = temp_r0_24->unk4;
    func_08075334(arg0, 0x10, temp_r7 * 8, temp_r0_24->unk0);
    temp_r4_22 = temp_r7 << 6;
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_22 + 8, 0x1DC, 0x10, 2);
    temp_r0_25 = func_08010F0C(arg0->unk58C);
    unksp0 = 0x20;
    func_0804EDB4(temp_r0_25, arg7E->unk18 + temp_r4_22 + 0x32, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_22 + 0x34, 0x38, 2, 2);
    temp_r7_2 = arg7F + 2;
    arg7F = temp_r7_2;
    temp_r0_26 = (func_08075450(arg0, 1) * 8) + &gUnk_080FC024;
    unksp0 = temp_r0_26->unk4;
    func_08075334(arg0, 0x10, temp_r7_2 * 8, temp_r0_26->unk0);
    temp_r4_23 = temp_r7_2 << 6;
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_23 + 8, 0x1FC, 8, 2);
    temp_r0_27 = func_08010F1C(arg0->unk58C);
    unksp0 = 0x20;
    func_0804EDB4(temp_r0_27, arg7E->unk18 + temp_r4_23 + 0x32, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_23 + 0x34, 0x38, 2, 2);
    temp_r2_11 = arg7F + 2;
    arg7F = temp_r2_11;
    unksp0 = &gUnk_08751EEC;
    func_08075334(arg0, 0x10, temp_r2_11 * 8, &gUnk_08751E6C);
    temp_r4_24 = arg7F << 6;
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_24 + 8, 0x20C, 8, 2);
    temp_r5_2 = ((u32) (arg0->unk58C->unk1C9C << 0x16) >> 0x16) * 0xA;
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r4_24 + 0x32, 0x40, 4, 2);
    unksp0 = 0x20;
    func_0804EDB4(temp_r5_2, arg7E->unk18 + temp_r4_24 + 0x30, 0x120, 0);
    var_r7 = 0x19;
    temp_r0_28 = temp_r5_2 % 100U;
    if (temp_r0_28 != 0) {
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + temp_r4_24 + 0x32, 0x40, 4, 2);
        unksp0 = 0x20;
        func_0804EDB4(temp_r0_28, arg7E->unk18 + temp_r4_24 + 0x30, 0x120, 0);
        var_r7 = 0x13;
    }
    temp_r0_29 = temp_r5_2 / 100U;
    if (temp_r0_29 != 0) {
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + temp_r4_24 + (var_r7 * 2), 0x3C, 2, 2);
        unksp0 = 0x20;
        func_0804EDB4(temp_r0_29, arg7E->unk18 + temp_r4_24 + ((var_r7 - 1) * 2), 0x120, 0);
    }
    arg7F += 3;
    arg3D = 0x1A;
    arg87->unk2 = 2;
    unksp0 = &gUnk_080FBF3C;
    func_0804E8F0((s32) arg3D, argAD, 0, 0);
    temp_r5_3 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argAD, 0x06004380, 0x680);
    temp_r1_10 = temp_r5_3->unk4;
    if (temp_r1_10 != temp_r5_3->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) unksp8.unk0;
            temp_r1_10->unk4 = (s32) unksp8.unk4;
            temp_r1_10->unk8 = (s32) unksp8.unk8;
            temp_r1_10->unkC = (s32) unksp8.unkC;
        }
        temp_r5_3->unk4 = (void *) (temp_r5_3->unk4 + 0x10);
        argB3 = arg7F << 6;
        argB2 = arg7F + 2;
    } else {
        argB6 = temp_r1_10;
        arg3F = 1;
        temp_r4_25 = (s32) (argB6 - temp_r5_3->unk0) >> 4;
        arg3E = temp_r4_25;
        var_r1_10 = &arg3E;
        if ((u32) temp_r4_25 < (u32) arg3F) {
            var_r1_10 = &arg3F;
        }
        temp_r0_30 = temp_r4_25 + *var_r1_10;
        if (temp_r0_30 != 0) {
            temp_r4_26 = temp_r0_30 * 0x10;
            var_r0_19 = malloc(temp_r4_26);
            var_r8_10 = temp_r4_26;
            if (var_r0_19 == 0) {
                var_r0_19 = func_080D3BC0(var_r8_10);
            }
        } else {
            var_r0_19 = 0;
            var_r8_10 = 0;
        }
        argB7 = var_r0_19;
        var_r2_19 = temp_r5_3->unk0;
        var_r3_19 = var_r0_19;
        argB3 = arg7F << 6;
        argB2 = arg7F + 2;
        if (var_r2_19 != argB6) {
            do {
                if (var_r3_19 != 0) {
                    var_r3_19->unk0 = (s32) var_r2_19->unk0;
                    var_r3_19->unk4 = (s32) var_r2_19->unk4;
                    var_r3_19->unk8 = (s32) var_r2_19->unk8;
                    var_r3_19->unkC = (s32) var_r2_19->unkC;
                }
                var_r2_19 += 0x10;
                var_r3_19 += 0x10;
            } while (var_r2_19 != argB6);
        }
        temp_r0_31 = arg3F;
        if (temp_r0_31 == 1) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32) unksp8.unk0;
                var_r3_19->unk4 = (s32) unksp8.unk4;
                var_r3_19->unk8 = (s32) unksp8.unk8;
                var_r3_19->unkC = (s32) unksp8.unkC;
            }
            var_r6 = (GenObj *)((u8 *)var_r3_19 + 0x10);
        } else {
            var_r3_20 = temp_r0_31;
            var_r2_20 = var_r3_19;
            if (var_r3_20 != 0) {
                do {
                    if (var_r2_20 != 0) {
                        var_r2_20->unk0 = (s32) unksp8.unk0;
                        var_r2_20->unk4 = (s32) unksp8.unk4;
                        var_r2_20->unk8 = (s32) unksp8.unk8;
                        var_r2_20->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_20 -= 1;
                    var_r2_20 += 0x10;
                } while (var_r3_20 != 0);
            }
            var_r6 = var_r2_20;
        }
        temp_r2_12 = temp_r5_3->unk4;
        temp_r0_32 = temp_r5_3->unk0;
        var_r1_11 = temp_r0_32;
        if (temp_r0_32 != temp_r2_12) {
            do {
                var_r1_11 += 0x10;
            } while (var_r1_11 != temp_r2_12);
        }
        if (temp_r0_32 != 0) {
            free();
        }
        temp_r5_3->unk0 = argB7;
        temp_r5_3->unk4 = var_r6;
        temp_r5_3->unkC = (void *) (argB7 + var_r8_10);
    }
    arg40 = 0xE;
    arg88->unk2 = 2;
    unksp0 = &gUnk_080FBF58;
    func_0804E8F0((s32) arg40, argA3, 0, 0);
    temp_r5_4 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA3, 0x06004A00, 0x380);
    temp_r1_11 = temp_r5_4->unk4;
    if (temp_r1_11 != temp_r5_4->unkC) {
        if (temp_r1_11 != 0) {
            temp_r1_11->unk0 = (s32) unksp8.unk0;
            temp_r1_11->unk4 = (s32) unksp8.unk4;
            temp_r1_11->unk8 = (s32) unksp8.unk8;
            temp_r1_11->unkC = (s32) unksp8.unkC;
        }
        temp_r5_4->unk4 = (void *) (temp_r5_4->unk4 + 0x10);
    } else {
        argB6 = temp_r1_11;
        arg42 = 1;
        temp_r4_27 = (s32) (argB6 - temp_r5_4->unk0) >> 4;
        arg41 = temp_r4_27;
        var_r1_12 = &arg41;
        if ((u32) temp_r4_27 < (u32) arg42) {
            var_r1_12 = &arg42;
        }
        temp_r0_33 = temp_r4_27 + *var_r1_12;
        if (temp_r0_33 != 0) {
            temp_r4_28 = temp_r0_33 * 0x10;
            var_r0_20 = malloc(temp_r4_28);
            var_r8_11 = temp_r4_28;
            if (var_r0_20 == 0) {
                var_r0_20 = func_080D3BC0(var_r8_11);
            }
        } else {
            var_r0_20 = 0;
            var_r8_11 = 0;
        }
        argB7 = var_r0_20;
        var_r2_21 = temp_r5_4->unk0;
        var_r3_21 = var_r0_20;
        if (var_r2_21 != argB6) {
            do {
                if (var_r3_21 != 0) {
                    var_r3_21->unk0 = (s32) var_r2_21->unk0;
                    var_r3_21->unk4 = (s32) var_r2_21->unk4;
                    var_r3_21->unk8 = (s32) var_r2_21->unk8;
                    var_r3_21->unkC = (s32) var_r2_21->unkC;
                }
                var_r2_21 += 0x10;
                var_r3_21 += 0x10;
            } while (var_r2_21 != argB6);
        }
        temp_r0_34 = arg42;
        if (temp_r0_34 == 1) {
            if (var_r3_21 != 0) {
                var_r3_21->unk0 = (s32) unksp8.unk0;
                var_r3_21->unk4 = (s32) unksp8.unk4;
                var_r3_21->unk8 = (s32) unksp8.unk8;
                var_r3_21->unkC = (s32) unksp8.unkC;
            }
            var_r6_2 = (GenObj *)((u8 *)var_r3_21 + 0x10);
        } else {
            var_r3_22 = temp_r0_34;
            var_r2_22 = var_r3_21;
            if (var_r3_22 != 0) {
                do {
                    if (var_r2_22 != 0) {
                        var_r2_22->unk0 = (s32) unksp8.unk0;
                        var_r2_22->unk4 = (s32) unksp8.unk4;
                        var_r2_22->unk8 = (s32) unksp8.unk8;
                        var_r2_22->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_22 -= 1;
                    var_r2_22 += 0x10;
                } while (var_r3_22 != 0);
            }
            var_r6_2 = var_r2_22;
        }
        temp_r2_13 = temp_r5_4->unk4;
        temp_r0_35 = temp_r5_4->unk0;
        var_r1_13 = temp_r0_35;
        if (temp_r0_35 != temp_r2_13) {
            do {
                var_r1_13 += 0x10;
            } while (var_r1_13 != temp_r2_13);
        }
        if (temp_r0_35 != 0) {
            free();
        }
        temp_r5_4->unk0 = argB7;
        temp_r5_4->unk4 = var_r6_2;
        temp_r5_4->unkC = (void *) (argB7 + var_r8_11);
    }
    arg43 = 8;
    arg89->unk2 = 2;
    unksp0 = &gUnk_080FBF68;
    func_0804E8F0((s32) arg43, argAA, 0, 0);
    temp_r5_5 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argAA, 0x06004D80, 0x200);
    temp_r1_12 = temp_r5_5->unk4;
    if (temp_r1_12 != temp_r5_5->unkC) {
        if (temp_r1_12 != 0) {
            temp_r1_12->unk0 = (s32) unksp8.unk0;
            temp_r1_12->unk4 = (s32) unksp8.unk4;
            temp_r1_12->unk8 = (s32) unksp8.unk8;
            temp_r1_12->unkC = (s32) unksp8.unkC;
        }
        temp_r5_5->unk4 = (void *) (temp_r5_5->unk4 + 0x10);
    } else {
        argB6 = temp_r1_12;
        arg45 = 1;
        temp_r4_29 = (s32) (argB6 - temp_r5_5->unk0) >> 4;
        arg44 = temp_r4_29;
        var_r1_14 = &arg44;
        if ((u32) temp_r4_29 < (u32) arg45) {
            var_r1_14 = &arg45;
        }
        temp_r0_36 = temp_r4_29 + *var_r1_14;
        if (temp_r0_36 != 0) {
            temp_r4_30 = temp_r0_36 * 0x10;
            var_r0_21 = malloc(temp_r4_30);
            var_r8_12 = temp_r4_30;
            if (var_r0_21 == 0) {
                var_r0_21 = func_080D3BC0(var_r8_12);
            }
        } else {
            var_r0_21 = 0;
            var_r8_12 = 0;
        }
        argB7 = var_r0_21;
        var_r2_23 = temp_r5_5->unk0;
        var_r3_23 = var_r0_21;
        if (var_r2_23 != argB6) {
            do {
                if (var_r3_23 != 0) {
                    var_r3_23->unk0 = (s32) var_r2_23->unk0;
                    var_r3_23->unk4 = (s32) var_r2_23->unk4;
                    var_r3_23->unk8 = (s32) var_r2_23->unk8;
                    var_r3_23->unkC = (s32) var_r2_23->unkC;
                }
                var_r2_23 += 0x10;
                var_r3_23 += 0x10;
            } while (var_r2_23 != argB6);
        }
        temp_r0_37 = arg45;
        if (temp_r0_37 == 1) {
            if (var_r3_23 != 0) {
                var_r3_23->unk0 = (s32) unksp8.unk0;
                var_r3_23->unk4 = (s32) unksp8.unk4;
                var_r3_23->unk8 = (s32) unksp8.unk8;
                var_r3_23->unkC = (s32) unksp8.unkC;
            }
            var_r6_3 = (GenObj *)((u8 *)var_r3_23 + 0x10);
        } else {
            var_r3_24 = temp_r0_37;
            var_r2_24 = var_r3_23;
            if (var_r3_24 != 0) {
                do {
                    if (var_r2_24 != 0) {
                        var_r2_24->unk0 = (s32) unksp8.unk0;
                        var_r2_24->unk4 = (s32) unksp8.unk4;
                        var_r2_24->unk8 = (s32) unksp8.unk8;
                        var_r2_24->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_24 -= 1;
                    var_r2_24 += 0x10;
                } while (var_r3_24 != 0);
            }
            var_r6_3 = var_r2_24;
        }
        temp_r2_14 = temp_r5_5->unk4;
        temp_r0_38 = temp_r5_5->unk0;
        var_r1_15 = temp_r0_38;
        if (temp_r0_38 != temp_r2_14) {
            do {
                var_r1_15 += 0x10;
            } while (var_r1_15 != temp_r2_14);
        }
        if (temp_r0_38 != 0) {
            free();
        }
        temp_r5_5->unk0 = argB7;
        temp_r5_5->unk4 = var_r6_3;
        temp_r5_5->unkC = (void *) (argB7 + var_r8_12);
    }
    arg46 = 8;
    arg8A->unk2 = 2;
    unksp0 = &gUnk_080FBF74;
    func_0804E8F0((s32) arg46, argAF, 0, 0);
    temp_r5_6 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argAF, 0x06004F80, 0x200);
    temp_r1_13 = temp_r5_6->unk4;
    if (temp_r1_13 != temp_r5_6->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32) unksp8.unk0;
            temp_r1_13->unk4 = (s32) unksp8.unk4;
            temp_r1_13->unk8 = (s32) unksp8.unk8;
            temp_r1_13->unkC = (s32) unksp8.unkC;
        }
        temp_r5_6->unk4 = (void *) (temp_r5_6->unk4 + 0x10);
    } else {
        argB6 = temp_r1_13;
        arg48 = 1;
        temp_r4_31 = (s32) (argB6 - temp_r5_6->unk0) >> 4;
        arg47 = temp_r4_31;
        var_r1_16 = &arg47;
        if ((u32) temp_r4_31 < (u32) arg48) {
            var_r1_16 = &arg48;
        }
        temp_r0_39 = temp_r4_31 + *var_r1_16;
        if (temp_r0_39 != 0) {
            temp_r4_32 = temp_r0_39 * 0x10;
            var_r0_22 = malloc(temp_r4_32);
            var_r8_13 = temp_r4_32;
            if (var_r0_22 == 0) {
                var_r0_22 = func_080D3BC0(var_r8_13);
            }
        } else {
            var_r0_22 = 0;
            var_r8_13 = 0;
        }
        argB7 = var_r0_22;
        var_r2_25 = temp_r5_6->unk0;
        var_r3_25 = var_r0_22;
        if (var_r2_25 != argB6) {
            do {
                if (var_r3_25 != 0) {
                    var_r3_25->unk0 = (s32) var_r2_25->unk0;
                    var_r3_25->unk4 = (s32) var_r2_25->unk4;
                    var_r3_25->unk8 = (s32) var_r2_25->unk8;
                    var_r3_25->unkC = (s32) var_r2_25->unkC;
                }
                var_r2_25 += 0x10;
                var_r3_25 += 0x10;
            } while (var_r2_25 != argB6);
        }
        temp_r0_40 = arg48;
        if (temp_r0_40 == 1) {
            if (var_r3_25 != 0) {
                var_r3_25->unk0 = (s32) unksp8.unk0;
                var_r3_25->unk4 = (s32) unksp8.unk4;
                var_r3_25->unk8 = (s32) unksp8.unk8;
                var_r3_25->unkC = (s32) unksp8.unkC;
            }
            var_r6_4 = (GenObj *)((u8 *)var_r3_25 + 0x10);
        } else {
            var_r3_26 = temp_r0_40;
            var_r2_26 = var_r3_25;
            if (var_r3_26 != 0) {
                do {
                    if (var_r2_26 != 0) {
                        var_r2_26->unk0 = (s32) unksp8.unk0;
                        var_r2_26->unk4 = (s32) unksp8.unk4;
                        var_r2_26->unk8 = (s32) unksp8.unk8;
                        var_r2_26->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_26 -= 1;
                    var_r2_26 += 0x10;
                } while (var_r3_26 != 0);
            }
            var_r6_4 = var_r2_26;
        }
        temp_r2_15 = temp_r5_6->unk4;
        temp_r0_41 = temp_r5_6->unk0;
        var_r1_17 = temp_r0_41;
        if (temp_r0_41 != temp_r2_15) {
            do {
                var_r1_17 += 0x10;
            } while (var_r1_17 != temp_r2_15);
        }
        if (temp_r0_41 != 0) {
            free();
        }
        temp_r5_6->unk0 = argB7;
        temp_r5_6->unk4 = var_r6_4;
        temp_r5_6->unkC = (void *) (argB7 + var_r8_13);
    }
    arg49 = 2;
    arg8B->unk2 = 2;
    unksp0 = &gUnk_080FBF80;
    func_0804E8F0((s32) arg49, arg9B, 0, 0);
    temp_r5_7 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg9B, 0x06000A00, 0x80);
    temp_r1_14 = temp_r5_7->unk4;
    if (temp_r1_14 != temp_r5_7->unkC) {
        if (temp_r1_14 != 0) {
            temp_r1_14->unk0 = (s32) unksp8.unk0;
            temp_r1_14->unk4 = (s32) unksp8.unk4;
            temp_r1_14->unk8 = (s32) unksp8.unk8;
            temp_r1_14->unkC = (s32) unksp8.unkC;
        }
        temp_r5_7->unk4 = (void *) (temp_r5_7->unk4 + 0x10);
    } else {
        argB6 = temp_r1_14;
        arg4B = 1;
        temp_r4_33 = (s32) (argB6 - temp_r5_7->unk0) >> 4;
        arg4A = temp_r4_33;
        var_r1_18 = &arg4A;
        if ((u32) temp_r4_33 < (u32) arg4B) {
            var_r1_18 = &arg4B;
        }
        temp_r0_42 = temp_r4_33 + *var_r1_18;
        if (temp_r0_42 != 0) {
            temp_r4_34 = temp_r0_42 * 0x10;
            var_r0_23 = malloc(temp_r4_34);
            var_r8_14 = temp_r4_34;
            if (var_r0_23 == 0) {
                var_r0_23 = func_080D3BC0(var_r8_14);
            }
        } else {
            var_r0_23 = 0;
            var_r8_14 = 0;
        }
        argB7 = var_r0_23;
        var_r2_27 = temp_r5_7->unk0;
        var_r3_27 = var_r0_23;
        if (var_r2_27 != argB6) {
            do {
                if (var_r3_27 != 0) {
                    var_r3_27->unk0 = (s32) var_r2_27->unk0;
                    var_r3_27->unk4 = (s32) var_r2_27->unk4;
                    var_r3_27->unk8 = (s32) var_r2_27->unk8;
                    var_r3_27->unkC = (s32) var_r2_27->unkC;
                }
                var_r2_27 += 0x10;
                var_r3_27 += 0x10;
            } while (var_r2_27 != argB6);
        }
        temp_r0_43 = arg4B;
        if (temp_r0_43 == 1) {
            if (var_r3_27 != 0) {
                var_r3_27->unk0 = (s32) unksp8.unk0;
                var_r3_27->unk4 = (s32) unksp8.unk4;
                var_r3_27->unk8 = (s32) unksp8.unk8;
                var_r3_27->unkC = (s32) unksp8.unkC;
            }
            var_r6_5 = (GenObj *)((u8 *)var_r3_27 + 0x10);
        } else {
            var_r3_28 = temp_r0_43;
            var_r2_28 = var_r3_27;
            if (var_r3_28 != 0) {
                do {
                    if (var_r2_28 != 0) {
                        var_r2_28->unk0 = (s32) unksp8.unk0;
                        var_r2_28->unk4 = (s32) unksp8.unk4;
                        var_r2_28->unk8 = (s32) unksp8.unk8;
                        var_r2_28->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_28 -= 1;
                    var_r2_28 += 0x10;
                } while (var_r3_28 != 0);
            }
            var_r6_5 = var_r2_28;
        }
        temp_r2_16 = temp_r5_7->unk4;
        temp_r0_44 = temp_r5_7->unk0;
        var_r1_19 = temp_r0_44;
        if (temp_r0_44 != temp_r2_16) {
            do {
                var_r1_19 += 0x10;
            } while (var_r1_19 != temp_r2_16);
        }
        if (temp_r0_44 != 0) {
            free();
        }
        temp_r5_7->unk0 = argB7;
        temp_r5_7->unk4 = var_r6_5;
        temp_r5_7->unkC = (void *) (argB7 + var_r8_14);
    }
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + argB3 + 4, 0x21C, 0x1A, 2);
    arg7F = argB2;
    temp_r5_8 = argB2 << 6;
    unksp0 = 0x20;
    func_0804EDB4(1U, arg7E->unk18 + temp_r5_8 + 6, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_8 + 8, 0x88, 2, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_8 + 0xC, 0x26C, 8, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_8 + 0x1C, 0x250, 0xE, 2);
    temp_r5_9 = arg7F + 2;
    arg7F = temp_r5_9;
    temp_r0_45 = func_0809B05C(arg0->unk58C + 0x1AA8);
    temp_r5_10 = temp_r5_9 << 6;
    unksp0 = 0x20;
    func_0804EDB4(temp_r0_45, arg7E->unk18 + temp_r5_10 + 0x32, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_10 + 0x34, 0x50, 2, 2);
    temp_r5_11 = arg7F + 2;
    arg7F = temp_r5_11;
    temp_r5_12 = temp_r5_11 << 6;
    unksp0 = 0x20;
    func_0804EDB4(1U, arg7E->unk18 + temp_r5_12 + 6, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_12 + 8, 0x88, 2, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_12 + 0xC, 0x27C, 8, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_12 + 0x1C, 0x250, 0xE, 2);
    temp_r5_13 = arg7F + 2;
    arg7F = temp_r5_13;
    temp_r0_46 = func_0809B084(arg0->unk58C + 0x1AA8);
    temp_r5_14 = temp_r5_13 << 6;
    unksp0 = 0x20;
    func_0804EDB4(temp_r0_46, arg7E->unk18 + temp_r5_14 + 0x32, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_14 + 0x34, 0x50, 2, 2);
    temp_r5_15 = arg7F + 2;
    arg7F = temp_r5_15;
    temp_r5_16 = temp_r5_15 << 6;
    unksp0 = 0x20;
    func_0804EDB4(1U, arg7E->unk18 + temp_r5_16 + 6, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_16 + 8, 0x84, 2, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_16 + 0xC, 0x26C, 8, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_16 + 0x1C, 0x250, 0xE, 2);
    temp_r5_17 = arg7F + 2;
    arg7F = temp_r5_17;
    temp_r0_47 = func_0809B0B0(arg0->unk58C + 0x1AA8);
    temp_r5_18 = temp_r5_17 << 6;
    unksp0 = 0x20;
    func_0804EDB4(temp_r0_47, arg7E->unk18 + temp_r5_18 + 0x32, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_18 + 0x34, 0x50, 2, 2);
    temp_r5_19 = arg7F + 2;
    arg7F = temp_r5_19;
    temp_r5_20 = temp_r5_19 << 6;
    unksp0 = 0x20;
    func_0804EDB4(1U, arg7E->unk18 + temp_r5_20 + 6, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_20 + 8, 0x84, 2, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_20 + 0xC, 0x27C, 8, 2);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_20 + 0x1C, 0x250, 0xE, 2);
    temp_r5_21 = arg7F + 2;
    arg7F = temp_r5_21;
    temp_r0_48 = func_0809B0D8(arg0->unk58C + 0x1AA8);
    temp_r5_22 = temp_r5_21 << 6;
    unksp0 = 0x20;
    func_0804EDB4(temp_r0_48, arg7E->unk18 + temp_r5_22 + 0x32, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg7E->unk18 + temp_r5_22 + 0x34, 0x50, 2, 2);
    arg7F += 3;
    arg4C = 0x1A;
    arg8C->unk2 = 2;
    unksp0 = &gUnk_080FBF84;
    func_0804E8F0((s32) arg4C, arg9C, 0, 0);
    temp_r6_11 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg9C, 0x06005180, 0x680);
    temp_r1_15 = temp_r6_11->unk4;
    if (temp_r1_15 != temp_r6_11->unkC) {
        if (temp_r1_15 != 0) {
            temp_r1_15->unk0 = (s32) unksp8.unk0;
            temp_r1_15->unk4 = (s32) unksp8.unk4;
            temp_r1_15->unk8 = (s32) unksp8.unk8;
            temp_r1_15->unkC = (s32) unksp8.unkC;
        }
        temp_r6_11->unk4 = (void *) (temp_r6_11->unk4 + 0x10);
    } else {
        argB6 = temp_r1_15;
        arg4E = 1;
        temp_r4_35 = (s32) (argB6 - temp_r6_11->unk0) >> 4;
        arg4D = temp_r4_35;
        var_r1_20 = &arg4D;
        if ((u32) temp_r4_35 < (u32) arg4E) {
            var_r1_20 = &arg4E;
        }
        temp_r0_49 = temp_r4_35 + *var_r1_20;
        if (temp_r0_49 != 0) {
            temp_r4_36 = temp_r0_49 * 0x10;
            var_r0_24 = malloc(temp_r4_36);
            var_r8_15 = temp_r4_36;
            if (var_r0_24 == 0) {
                var_r0_24 = func_080D3BC0(var_r8_15);
            }
        } else {
            var_r0_24 = 0;
            var_r8_15 = 0;
        }
        argB7 = var_r0_24;
        var_r2_29 = temp_r6_11->unk0;
        var_r3_29 = var_r0_24;
        if (var_r2_29 != argB6) {
            do {
                if (var_r3_29 != 0) {
                    var_r3_29->unk0 = (s32) var_r2_29->unk0;
                    var_r3_29->unk4 = (s32) var_r2_29->unk4;
                    var_r3_29->unk8 = (s32) var_r2_29->unk8;
                    var_r3_29->unkC = (s32) var_r2_29->unkC;
                }
                var_r2_29 += 0x10;
                var_r3_29 += 0x10;
            } while (var_r2_29 != argB6);
        }
        temp_r0_50 = arg4E;
        if (temp_r0_50 == 1) {
            if (var_r3_29 != 0) {
                var_r3_29->unk0 = (s32) unksp8.unk0;
                var_r3_29->unk4 = (s32) unksp8.unk4;
                var_r3_29->unk8 = (s32) unksp8.unk8;
                var_r3_29->unkC = (s32) unksp8.unkC;
            }
            var_r5_10 = (GenObj *)((u8 *)var_r3_29 + 0x10);
        } else {
            var_r3_30 = temp_r0_50;
            var_r2_30 = var_r3_29;
            if (var_r3_30 != 0) {
                do {
                    if (var_r2_30 != 0) {
                        var_r2_30->unk0 = (s32) unksp8.unk0;
                        var_r2_30->unk4 = (s32) unksp8.unk4;
                        var_r2_30->unk8 = (s32) unksp8.unk8;
                        var_r2_30->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_30 -= 1;
                    var_r2_30 += 0x10;
                } while (var_r3_30 != 0);
            }
            var_r5_10 = var_r2_30;
        }
        temp_r2_17 = temp_r6_11->unk4;
        temp_r0_51 = temp_r6_11->unk0;
        var_r1_21 = temp_r0_51;
        if (temp_r0_51 != temp_r2_17) {
            do {
                var_r1_21 += 0x10;
            } while (var_r1_21 != temp_r2_17);
        }
        if (temp_r0_51 != 0) {
            free();
        }
        temp_r6_11->unk0 = argB7;
        temp_r6_11->unk4 = var_r5_10;
        temp_r6_11->unkC = (void *) (argB7 + var_r8_15);
    }
    arg4F = 8;
    arg8D->unk2 = 2;
    unksp0 = &gUnk_080FBFA0;
    func_0804E8F0((s32) arg4F, argAB, 0, 0);
    temp_r6_12 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argAB, 0x06000A80, 0x200);
    temp_r1_16 = temp_r6_12->unk4;
    if (temp_r1_16 != temp_r6_12->unkC) {
        if (temp_r1_16 != 0) {
            temp_r1_16->unk0 = (s32) unksp8.unk0;
            temp_r1_16->unk4 = (s32) unksp8.unk4;
            temp_r1_16->unk8 = (s32) unksp8.unk8;
            temp_r1_16->unkC = (s32) unksp8.unkC;
        }
        temp_r6_12->unk4 = (void *) (temp_r6_12->unk4 + 0x10);
    } else {
        argB6 = temp_r1_16;
        arg51 = 1;
        temp_r4_37 = (s32) (argB6 - temp_r6_12->unk0) >> 4;
        arg50 = temp_r4_37;
        var_r1_22 = &arg50;
        if ((u32) temp_r4_37 < (u32) arg51) {
            var_r1_22 = &arg51;
        }
        temp_r0_52 = temp_r4_37 + *var_r1_22;
        if (temp_r0_52 != 0) {
            temp_r4_38 = temp_r0_52 * 0x10;
            var_r0_25 = malloc(temp_r4_38);
            var_r8_16 = temp_r4_38;
            if (var_r0_25 == 0) {
                var_r0_25 = func_080D3BC0(var_r8_16);
            }
        } else {
            var_r0_25 = 0;
            var_r8_16 = 0;
        }
        argB7 = var_r0_25;
        var_r2_31 = temp_r6_12->unk0;
        var_r3_31 = var_r0_25;
        if (var_r2_31 != argB6) {
            do {
                if (var_r3_31 != 0) {
                    var_r3_31->unk0 = (s32) var_r2_31->unk0;
                    var_r3_31->unk4 = (s32) var_r2_31->unk4;
                    var_r3_31->unk8 = (s32) var_r2_31->unk8;
                    var_r3_31->unkC = (s32) var_r2_31->unkC;
                }
                var_r2_31 += 0x10;
                var_r3_31 += 0x10;
            } while (var_r2_31 != argB6);
        }
        temp_r0_53 = arg51;
        if (temp_r0_53 == 1) {
            if (var_r3_31 != 0) {
                var_r3_31->unk0 = (s32) unksp8.unk0;
                var_r3_31->unk4 = (s32) unksp8.unk4;
                var_r3_31->unk8 = (s32) unksp8.unk8;
                var_r3_31->unkC = (s32) unksp8.unkC;
            }
            var_r5_11 = (GenObj *)((u8 *)var_r3_31 + 0x10);
        } else {
            var_r3_32 = temp_r0_53;
            var_r2_32 = var_r3_31;
            if (var_r3_32 != 0) {
                do {
                    if (var_r2_32 != 0) {
                        var_r2_32->unk0 = (s32) unksp8.unk0;
                        var_r2_32->unk4 = (s32) unksp8.unk4;
                        var_r2_32->unk8 = (s32) unksp8.unk8;
                        var_r2_32->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_32 -= 1;
                    var_r2_32 += 0x10;
                } while (var_r3_32 != 0);
            }
            var_r5_11 = var_r2_32;
        }
        temp_r2_18 = temp_r6_12->unk4;
        temp_r0_54 = temp_r6_12->unk0;
        var_r1_23 = temp_r0_54;
        if (temp_r0_54 != temp_r2_18) {
            do {
                var_r1_23 += 0x10;
            } while (var_r1_23 != temp_r2_18);
        }
        if (temp_r0_54 != 0) {
            free();
        }
        temp_r6_12->unk0 = argB7;
        temp_r6_12->unk4 = var_r5_11;
        temp_r6_12->unkC = (void *) (argB7 + var_r8_16);
    }
    arg52 = 4;
    arg8F->unk2 = 2;
    unksp0 = &gUnk_080FBFAC;
    func_0804E8F0((s32) arg52, argB1, 0, 0);
    temp_r6_13 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argB1, 0x06000C80, 0x100);
    temp_r1_17 = temp_r6_13->unk4;
    if (temp_r1_17 != temp_r6_13->unkC) {
        if (temp_r1_17 != 0) {
            temp_r1_17->unk0 = (s32) unksp8.unk0;
            temp_r1_17->unk4 = (s32) unksp8.unk4;
            temp_r1_17->unk8 = (s32) unksp8.unk8;
            temp_r1_17->unkC = (s32) unksp8.unkC;
        }
        temp_r6_13->unk4 = (void *) (temp_r6_13->unk4 + 0x10);
    } else {
        argB6 = temp_r1_17;
        arg54 = 1;
        temp_r4_39 = (s32) (argB6 - temp_r6_13->unk0) >> 4;
        arg53 = temp_r4_39;
        var_r1_24 = &arg53;
        if ((u32) temp_r4_39 < (u32) arg54) {
            var_r1_24 = &arg54;
        }
        temp_r0_55 = temp_r4_39 + *var_r1_24;
        if (temp_r0_55 != 0) {
            temp_r4_40 = temp_r0_55 * 0x10;
            var_r0_26 = malloc(temp_r4_40);
            var_r8_17 = temp_r4_40;
            if (var_r0_26 == 0) {
                var_r0_26 = func_080D3BC0(var_r8_17);
            }
        } else {
            var_r0_26 = 0;
            var_r8_17 = 0;
        }
        argB7 = var_r0_26;
        var_r2_33 = temp_r6_13->unk0;
        var_r3_33 = var_r0_26;
        if (var_r2_33 != argB6) {
            do {
                if (var_r3_33 != 0) {
                    var_r3_33->unk0 = (s32) var_r2_33->unk0;
                    var_r3_33->unk4 = (s32) var_r2_33->unk4;
                    var_r3_33->unk8 = (s32) var_r2_33->unk8;
                    var_r3_33->unkC = (s32) var_r2_33->unkC;
                }
                var_r2_33 += 0x10;
                var_r3_33 += 0x10;
            } while (var_r2_33 != argB6);
        }
        temp_r0_56 = arg54;
        if (temp_r0_56 == 1) {
            if (var_r3_33 != 0) {
                var_r3_33->unk0 = (s32) unksp8.unk0;
                var_r3_33->unk4 = (s32) unksp8.unk4;
                var_r3_33->unk8 = (s32) unksp8.unk8;
                var_r3_33->unkC = (s32) unksp8.unkC;
            }
            var_r5_12 = (GenObj *)((u8 *)var_r3_33 + 0x10);
        } else {
            var_r3_34 = temp_r0_56;
            var_r2_34 = var_r3_33;
            if (var_r3_34 != 0) {
                do {
                    if (var_r2_34 != 0) {
                        var_r2_34->unk0 = (s32) unksp8.unk0;
                        var_r2_34->unk4 = (s32) unksp8.unk4;
                        var_r2_34->unk8 = (s32) unksp8.unk8;
                        var_r2_34->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_34 -= 1;
                    var_r2_34 += 0x10;
                } while (var_r3_34 != 0);
            }
            var_r5_12 = var_r2_34;
        }
        temp_r2_19 = temp_r6_13->unk4;
        temp_r0_57 = temp_r6_13->unk0;
        var_r1_25 = temp_r0_57;
        if (temp_r0_57 != temp_r2_19) {
            do {
                var_r1_25 += 0x10;
            } while (var_r1_25 != temp_r2_19);
        }
        if (temp_r0_57 != 0) {
            free();
        }
        temp_r6_13->unk0 = argB7;
        temp_r6_13->unk4 = var_r5_12;
        temp_r6_13->unkC = (void *) (argB7 + var_r8_17);
    }
    arg55 = 6;
    arg90->unk2 = 2;
    unksp0 = &gUnk_080FBFB4;
    func_0804E8F0((s32) arg55, arg8E, 0, 0);
    temp_r6_14 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg8E, 0x06000D80, 0x180);
    temp_r1_18 = temp_r6_14->unk4;
    if (temp_r1_18 != temp_r6_14->unkC) {
        if (temp_r1_18 != 0) {
            temp_r1_18->unk0 = (s32) unksp8.unk0;
            temp_r1_18->unk4 = (s32) unksp8.unk4;
            temp_r1_18->unk8 = (s32) unksp8.unk8;
            temp_r1_18->unkC = (s32) unksp8.unkC;
        }
        temp_r6_14->unk4 = (void *) (temp_r6_14->unk4 + 0x10);
    } else {
        argB6 = temp_r1_18;
        arg57 = 1;
        temp_r4_41 = (s32) (argB6 - temp_r6_14->unk0) >> 4;
        arg56 = temp_r4_41;
        var_r1_26 = &arg56;
        if ((u32) temp_r4_41 < (u32) arg57) {
            var_r1_26 = &arg57;
        }
        temp_r0_58 = temp_r4_41 + *var_r1_26;
        if (temp_r0_58 != 0) {
            temp_r4_42 = temp_r0_58 * 0x10;
            var_r0_27 = malloc(temp_r4_42);
            var_r8_18 = temp_r4_42;
            if (var_r0_27 == 0) {
                var_r0_27 = func_080D3BC0(var_r8_18);
            }
        } else {
            var_r0_27 = 0;
            var_r8_18 = 0;
        }
        argB7 = var_r0_27;
        var_r2_35 = temp_r6_14->unk0;
        var_r3_35 = var_r0_27;
        if (var_r2_35 != argB6) {
            do {
                if (var_r3_35 != 0) {
                    var_r3_35->unk0 = (s32) var_r2_35->unk0;
                    var_r3_35->unk4 = (s32) var_r2_35->unk4;
                    var_r3_35->unk8 = (s32) var_r2_35->unk8;
                    var_r3_35->unkC = (s32) var_r2_35->unkC;
                }
                var_r2_35 += 0x10;
                var_r3_35 += 0x10;
            } while (var_r2_35 != argB6);
        }
        temp_r0_59 = arg57;
        if (temp_r0_59 == 1) {
            if (var_r3_35 != 0) {
                var_r3_35->unk0 = (s32) unksp8.unk0;
                var_r3_35->unk4 = (s32) unksp8.unk4;
                var_r3_35->unk8 = (s32) unksp8.unk8;
                var_r3_35->unkC = (s32) unksp8.unkC;
            }
            var_r5_13 = (GenObj *)((u8 *)var_r3_35 + 0x10);
        } else {
            var_r3_36 = temp_r0_59;
            var_r2_36 = var_r3_35;
            if (var_r3_36 != 0) {
                do {
                    if (var_r2_36 != 0) {
                        var_r2_36->unk0 = (s32) unksp8.unk0;
                        var_r2_36->unk4 = (s32) unksp8.unk4;
                        var_r2_36->unk8 = (s32) unksp8.unk8;
                        var_r2_36->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_36 -= 1;
                    var_r2_36 += 0x10;
                } while (var_r3_36 != 0);
            }
            var_r5_13 = var_r2_36;
        }
        temp_r2_20 = temp_r6_14->unk4;
        temp_r0_60 = temp_r6_14->unk0;
        var_r1_27 = temp_r0_60;
        if (temp_r0_60 != temp_r2_20) {
            do {
                var_r1_27 += 0x10;
            } while (var_r1_27 != temp_r2_20);
        }
        if (temp_r0_60 != 0) {
            free();
        }
        temp_r6_14->unk0 = argB7;
        temp_r6_14->unk4 = var_r5_13;
        temp_r6_14->unkC = (void *) (argB7 + var_r8_18);
    }
    arg58 = 6;
    arg91->unk2 = 2;
    unksp0 = &gUnk_080FBFBC;
    func_0804E8F0((s32) arg58, arg9E, 0, 0);
    temp_r6_15 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg9E, 0x06000F00, 0x180);
    temp_r1_19 = temp_r6_15->unk4;
    if (temp_r1_19 != temp_r6_15->unkC) {
        if (temp_r1_19 != 0) {
            temp_r1_19->unk0 = (s32) unksp8.unk0;
            temp_r1_19->unk4 = (s32) unksp8.unk4;
            temp_r1_19->unk8 = (s32) unksp8.unk8;
            temp_r1_19->unkC = (s32) unksp8.unkC;
        }
        temp_r6_15->unk4 = (void *) (temp_r6_15->unk4 + 0x10);
    } else {
        argB6 = temp_r1_19;
        arg5A = 1;
        temp_r4_43 = (s32) (argB6 - temp_r6_15->unk0) >> 4;
        arg59 = temp_r4_43;
        var_r1_28 = &arg59;
        if ((u32) temp_r4_43 < (u32) arg5A) {
            var_r1_28 = &arg5A;
        }
        temp_r0_61 = temp_r4_43 + *var_r1_28;
        if (temp_r0_61 != 0) {
            temp_r4_44 = temp_r0_61 * 0x10;
            var_r0_28 = malloc(temp_r4_44);
            var_r8_19 = temp_r4_44;
            if (var_r0_28 == 0) {
                var_r0_28 = func_080D3BC0(var_r8_19);
            }
        } else {
            var_r0_28 = 0;
            var_r8_19 = 0;
        }
        argB7 = var_r0_28;
        var_r2_37 = temp_r6_15->unk0;
        var_r3_37 = var_r0_28;
        if (var_r2_37 != argB6) {
            do {
                if (var_r3_37 != 0) {
                    var_r3_37->unk0 = (s32) var_r2_37->unk0;
                    var_r3_37->unk4 = (s32) var_r2_37->unk4;
                    var_r3_37->unk8 = (s32) var_r2_37->unk8;
                    var_r3_37->unkC = (s32) var_r2_37->unkC;
                }
                var_r2_37 += 0x10;
                var_r3_37 += 0x10;
            } while (var_r2_37 != argB6);
        }
        temp_r0_62 = arg5A;
        if (temp_r0_62 == 1) {
            if (var_r3_37 != 0) {
                var_r3_37->unk0 = (s32) unksp8.unk0;
                var_r3_37->unk4 = (s32) unksp8.unk4;
                var_r3_37->unk8 = (s32) unksp8.unk8;
                var_r3_37->unkC = (s32) unksp8.unkC;
            }
            var_r5_14 = (GenObj *)((u8 *)var_r3_37 + 0x10);
        } else {
            var_r3_38 = temp_r0_62;
            var_r2_38 = var_r3_37;
            if (var_r3_38 != 0) {
                do {
                    if (var_r2_38 != 0) {
                        var_r2_38->unk0 = (s32) unksp8.unk0;
                        var_r2_38->unk4 = (s32) unksp8.unk4;
                        var_r2_38->unk8 = (s32) unksp8.unk8;
                        var_r2_38->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_38 -= 1;
                    var_r2_38 += 0x10;
                } while (var_r3_38 != 0);
            }
            var_r5_14 = var_r2_38;
        }
        temp_r2_21 = temp_r6_15->unk4;
        temp_r0_63 = temp_r6_15->unk0;
        var_r1_29 = temp_r0_63;
        if (temp_r0_63 != temp_r2_21) {
            do {
                var_r1_29 += 0x10;
            } while (var_r1_29 != temp_r2_21);
        }
        if (temp_r0_63 != 0) {
            free();
        }
        temp_r6_15->unk0 = argB7;
        temp_r6_15->unk4 = var_r5_14;
        temp_r6_15->unkC = (void *) (argB7 + var_r8_19);
    }
    arg5B = 2;
    arg92->unk2 = 2;
    unksp0 = &gUnk_080FBFC4;
    func_0804E8F0((s32) arg5B, arg9F, 0, 0);
    temp_r6_16 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg9F, 0x06001080, 0x80);
    temp_r1_20 = temp_r6_16->unk4;
    if (temp_r1_20 != temp_r6_16->unkC) {
        if (temp_r1_20 != 0) {
            temp_r1_20->unk0 = (s32) unksp8.unk0;
            temp_r1_20->unk4 = (s32) unksp8.unk4;
            temp_r1_20->unk8 = (s32) unksp8.unk8;
            temp_r1_20->unkC = (s32) unksp8.unkC;
        }
        temp_r6_16->unk4 = (void *) (temp_r6_16->unk4 + 0x10);
    } else {
        argB6 = temp_r1_20;
        arg5D = 1;
        temp_r4_45 = (s32) (argB6 - temp_r6_16->unk0) >> 4;
        arg5C = temp_r4_45;
        var_r1_30 = &arg5C;
        if ((u32) temp_r4_45 < (u32) arg5D) {
            var_r1_30 = &arg5D;
        }
        temp_r0_64 = temp_r4_45 + *var_r1_30;
        if (temp_r0_64 != 0) {
            temp_r4_46 = temp_r0_64 * 0x10;
            var_r0_29 = malloc(temp_r4_46);
            var_r8_20 = temp_r4_46;
            if (var_r0_29 == 0) {
                var_r0_29 = func_080D3BC0(var_r8_20);
            }
        } else {
            var_r0_29 = 0;
            var_r8_20 = 0;
        }
        argB7 = var_r0_29;
        var_r2_39 = temp_r6_16->unk0;
        var_r3_39 = var_r0_29;
        if (var_r2_39 != argB6) {
            do {
                if (var_r3_39 != 0) {
                    var_r3_39->unk0 = (s32) var_r2_39->unk0;
                    var_r3_39->unk4 = (s32) var_r2_39->unk4;
                    var_r3_39->unk8 = (s32) var_r2_39->unk8;
                    var_r3_39->unkC = (s32) var_r2_39->unkC;
                }
                var_r2_39 += 0x10;
                var_r3_39 += 0x10;
            } while (var_r2_39 != argB6);
        }
        temp_r0_65 = arg5D;
        if (temp_r0_65 == 1) {
            if (var_r3_39 != 0) {
                var_r3_39->unk0 = (s32) unksp8.unk0;
                var_r3_39->unk4 = (s32) unksp8.unk4;
                var_r3_39->unk8 = (s32) unksp8.unk8;
                var_r3_39->unkC = (s32) unksp8.unkC;
            }
            var_r5_15 = (GenObj *)((u8 *)var_r3_39 + 0x10);
        } else {
            var_r3_40 = temp_r0_65;
            var_r2_40 = var_r3_39;
            if (var_r3_40 != 0) {
                do {
                    if (var_r2_40 != 0) {
                        var_r2_40->unk0 = (s32) unksp8.unk0;
                        var_r2_40->unk4 = (s32) unksp8.unk4;
                        var_r2_40->unk8 = (s32) unksp8.unk8;
                        var_r2_40->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_40 -= 1;
                    var_r2_40 += 0x10;
                } while (var_r3_40 != 0);
            }
            var_r5_15 = var_r2_40;
        }
        temp_r2_22 = temp_r6_16->unk4;
        temp_r0_66 = temp_r6_16->unk0;
        var_r1_31 = temp_r0_66;
        if (temp_r0_66 != temp_r2_22) {
            do {
                var_r1_31 += 0x10;
            } while (var_r1_31 != temp_r2_22);
        }
        if (temp_r0_66 != 0) {
            free();
        }
        temp_r6_16->unk0 = argB7;
        temp_r6_16->unk4 = var_r5_15;
        temp_r6_16->unkC = (void *) (argB7 + var_r8_20);
    }
    arg5E = 2;
    arg93->unk2 = 2;
    unksp0 = &gUnk_080FBFC8;
    func_0804E8F0((s32) arg5E, argA1, 0, 0);
    temp_r6_17 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA1, 0x06001100, 0x80);
    temp_r1_21 = temp_r6_17->unk4;
    if (temp_r1_21 != temp_r6_17->unkC) {
        if (temp_r1_21 != 0) {
            temp_r1_21->unk0 = (s32) unksp8.unk0;
            temp_r1_21->unk4 = (s32) unksp8.unk4;
            temp_r1_21->unk8 = (s32) unksp8.unk8;
            temp_r1_21->unkC = (s32) unksp8.unkC;
        }
        temp_r6_17->unk4 = (void *) (temp_r6_17->unk4 + 0x10);
    } else {
        argB6 = temp_r1_21;
        arg60 = 1;
        temp_r4_47 = (s32) (argB6 - temp_r6_17->unk0) >> 4;
        arg5F = temp_r4_47;
        var_r1_32 = &arg5F;
        if ((u32) temp_r4_47 < (u32) arg60) {
            var_r1_32 = &arg60;
        }
        temp_r0_67 = temp_r4_47 + *var_r1_32;
        if (temp_r0_67 != 0) {
            temp_r4_48 = temp_r0_67 * 0x10;
            var_r0_30 = malloc(temp_r4_48);
            var_r8_21 = temp_r4_48;
            if (var_r0_30 == 0) {
                var_r0_30 = func_080D3BC0(var_r8_21);
            }
        } else {
            var_r0_30 = 0;
            var_r8_21 = 0;
        }
        argB7 = var_r0_30;
        var_r2_41 = temp_r6_17->unk0;
        var_r3_41 = var_r0_30;
        if (var_r2_41 != argB6) {
            do {
                if (var_r3_41 != 0) {
                    var_r3_41->unk0 = (s32) var_r2_41->unk0;
                    var_r3_41->unk4 = (s32) var_r2_41->unk4;
                    var_r3_41->unk8 = (s32) var_r2_41->unk8;
                    var_r3_41->unkC = (s32) var_r2_41->unkC;
                }
                var_r2_41 += 0x10;
                var_r3_41 += 0x10;
            } while (var_r2_41 != argB6);
        }
        temp_r0_68 = arg60;
        if (temp_r0_68 == 1) {
            if (var_r3_41 != 0) {
                var_r3_41->unk0 = (s32) unksp8.unk0;
                var_r3_41->unk4 = (s32) unksp8.unk4;
                var_r3_41->unk8 = (s32) unksp8.unk8;
                var_r3_41->unkC = (s32) unksp8.unkC;
            }
            var_r5_16 = (GenObj *)((u8 *)var_r3_41 + 0x10);
        } else {
            var_r3_42 = temp_r0_68;
            var_r2_42 = var_r3_41;
            if (var_r3_42 != 0) {
                do {
                    if (var_r2_42 != 0) {
                        var_r2_42->unk0 = (s32) unksp8.unk0;
                        var_r2_42->unk4 = (s32) unksp8.unk4;
                        var_r2_42->unk8 = (s32) unksp8.unk8;
                        var_r2_42->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_42 -= 1;
                    var_r2_42 += 0x10;
                } while (var_r3_42 != 0);
            }
            var_r5_16 = var_r2_42;
        }
        temp_r2_23 = temp_r6_17->unk4;
        temp_r0_69 = temp_r6_17->unk0;
        var_r1_33 = temp_r0_69;
        if (temp_r0_69 != temp_r2_23) {
            do {
                var_r1_33 += 0x10;
            } while (var_r1_33 != temp_r2_23);
        }
        if (temp_r0_69 != 0) {
            free();
        }
        temp_r6_17->unk0 = argB7;
        temp_r6_17->unk4 = var_r5_16;
        temp_r6_17->unkC = (void *) (argB7 + var_r8_21);
    }
    if ((GetUnkAge__C4Coop(arg0->unk58C + 0x410) != 0) || (GetUnkCowAge__C4Barn(arg0->unk58C + 0x5F0) != 0) || (GetUnkSheepAge__C4Barn(arg0->unk58C + 0x5F0) != 0)) {
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + (arg7F << 6) + 4, 0x28C, 0x1A, 2);
        arg7F += 2;
    }
    if (GetUnkAge__C4Coop(arg0->unk58C + 0x410) == 0) {

    } else {
        temp_r2_24 = arg7F << 6;
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + temp_r2_24 + 8, 0x54, 8, 2);
        unksp0 = &gUnk_0875270C;
        func_08075334(arg0, 0x10, arg7F * 8, &gUnk_0875268C);
        arg61.unk0 = 0xC;
        arg61.unk2 = 2;
        temp_r4_49 = (GenObj *)((u8 *)arg0 + 0x8564);
        func_0804E7A0((s32) arg61.unk0, temp_r4_49, 0);
        temp_r2_25 = GetUnkName__C4Coop(arg0->unk58C + 0x410);
        arg62.unk0 = 0xC;
        arg62.unk2 = 2;
        unksp0 = temp_r2_25;
        func_0804E8F0((s32) arg62.unk0, temp_r4_49, 0, 0);
        temp_r5_23 = func_08008910(arg0->unk0);
        func_08008F0C(&unksp8, temp_r4_49, 0x06006480, 0x300);
        temp_r1_22 = temp_r5_23->unk4;
        argB3 = temp_r2_24;
        if (temp_r1_22 != temp_r5_23->unkC) {
            if (temp_r1_22 != 0) {
                temp_r1_22->unk0 = (s32) unksp8.unk0;
                temp_r1_22->unk4 = (s32) unksp8.unk4;
                temp_r1_22->unk8 = (s32) unksp8.unk8;
                temp_r1_22->unkC = (s32) unksp8.unkC;
            }
            temp_r5_23->unk4 = (void *) (temp_r5_23->unk4 + 0x10);
            argB2 = arg7F + 2;
        } else {
            argB6 = temp_r1_22;
            arg64 = 1;
            temp_r4_50 = (s32) (argB6 - temp_r5_23->unk0) >> 4;
            arg63 = temp_r4_50;
            var_r1_34 = &arg63;
            if ((u32) temp_r4_50 < (u32) arg64) {
                var_r1_34 = &arg64;
            }
            temp_r0_70 = temp_r4_50 + *var_r1_34;
            if (temp_r0_70 != 0) {
                temp_r4_51 = temp_r0_70 * 0x10;
                var_r0_31 = malloc(temp_r4_51);
                var_r8_22 = temp_r4_51;
                if (var_r0_31 == 0) {
                    var_r0_31 = func_080D3BC0(var_r8_22);
                }
            } else {
                var_r0_31 = 0;
                var_r8_22 = 0;
            }
            argB7 = var_r0_31;
            var_r2_43 = temp_r5_23->unk0;
            var_r3_43 = var_r0_31;
            argB2 = arg7F + 2;
            if (var_r2_43 != argB6) {
                do {
                    if (var_r3_43 != 0) {
                        var_r3_43->unk0 = (s32) var_r2_43->unk0;
                        var_r3_43->unk4 = (s32) var_r2_43->unk4;
                        var_r3_43->unk8 = (s32) var_r2_43->unk8;
                        var_r3_43->unkC = (s32) var_r2_43->unkC;
                    }
                    var_r2_43 += 0x10;
                    var_r3_43 += 0x10;
                } while (var_r2_43 != argB6);
            }
            temp_r0_71 = arg64;
            if (temp_r0_71 == 1) {
                if (var_r3_43 != 0) {
                    var_r3_43->unk0 = (s32) unksp8.unk0;
                    var_r3_43->unk4 = (s32) unksp8.unk4;
                    var_r3_43->unk8 = (s32) unksp8.unk8;
                    var_r3_43->unkC = (s32) unksp8.unkC;
                }
                var_r6_6 = (GenObj *)((u8 *)var_r3_43 + 0x10);
            } else {
                var_r3_44 = temp_r0_71;
                var_r2_44 = var_r3_43;
                if (var_r3_44 != 0) {
                    do {
                        if (var_r2_44 != 0) {
                            var_r2_44->unk0 = (s32) unksp8.unk0;
                            var_r2_44->unk4 = (s32) unksp8.unk4;
                            var_r2_44->unk8 = (s32) unksp8.unk8;
                            var_r2_44->unkC = (s32) unksp8.unkC;
                        }
                        var_r3_44 -= 1;
                        var_r2_44 += 0x10;
                    } while (var_r3_44 != 0);
                }
                var_r6_6 = var_r2_44;
            }
            temp_r2_26 = temp_r5_23->unk4;
            temp_r0_72 = temp_r5_23->unk0;
            var_r1_35 = temp_r0_72;
            if (temp_r0_72 != temp_r2_26) {
                do {
                    var_r1_35 += 0x10;
                } while (var_r1_35 != temp_r2_26);
            }
            if (temp_r0_72 != 0) {
                free();
            }
            temp_r5_23->unk0 = argB7;
            temp_r5_23->unk4 = var_r6_6;
            temp_r5_23->unkC = (void *) (argB7 + var_r8_22);
        }
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + argB3 + 0x18, 0x324, 0xC, 2);
        arg7F = argB2;
        func_08075220(arg0, GetUnkAge__C4Coop(arg0->unk58C + 0x410), arg7F);
        arg7F += 2;
    }
    if (GetUnkCowAge__C4Barn(arg0->unk58C + 0x5F0) == 0) {

    } else {
        temp_r2_27 = arg7F << 6;
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + temp_r2_27 + 8, 0x64, 4, 2);
        unksp0 = &gUnk_08751BCC;
        func_08075334(arg0, 0x10, arg7F * 8, &gUnk_08751B4C);
        arg65.unk0 = 0xC;
        arg65.unk2 = 2;
        temp_r4_52 = (GenObj *)((u8 *)arg0 + 0x8868);
        func_0804E7A0((s32) arg65.unk0, temp_r4_52, 0);
        temp_r2_28 = GetUnkCowName__C4Barn(arg0->unk58C + 0x5F0);
        arg66.unk0 = 0xC;
        arg66.unk2 = 2;
        unksp0 = temp_r2_28;
        func_0804E8F0((s32) arg66.unk0, temp_r4_52, 0, 0);
        temp_r5_24 = func_08008910(arg0->unk0);
        func_08008F0C(&unksp8, temp_r4_52, 0x06006780, 0x300);
        temp_r1_23 = temp_r5_24->unk4;
        argB3 = temp_r2_27;
        if (temp_r1_23 != temp_r5_24->unkC) {
            if (temp_r1_23 != 0) {
                temp_r1_23->unk0 = (s32) unksp8.unk0;
                temp_r1_23->unk4 = (s32) unksp8.unk4;
                temp_r1_23->unk8 = (s32) unksp8.unk8;
                temp_r1_23->unkC = (s32) unksp8.unkC;
            }
            temp_r5_24->unk4 = (void *) (temp_r5_24->unk4 + 0x10);
            argB2 = arg7F + 2;
        } else {
            argB6 = temp_r1_23;
            arg68 = 1;
            temp_r4_53 = (s32) (argB6 - temp_r5_24->unk0) >> 4;
            arg67 = temp_r4_53;
            var_r1_36 = &arg67;
            if ((u32) temp_r4_53 < (u32) arg68) {
                var_r1_36 = &arg68;
            }
            temp_r0_73 = temp_r4_53 + *var_r1_36;
            if (temp_r0_73 != 0) {
                temp_r4_54 = temp_r0_73 * 0x10;
                var_r0_32 = malloc(temp_r4_54);
                var_r8_23 = temp_r4_54;
                if (var_r0_32 == 0) {
                    var_r0_32 = func_080D3BC0(var_r8_23);
                }
            } else {
                var_r0_32 = 0;
                var_r8_23 = 0;
            }
            argB7 = var_r0_32;
            var_r2_45 = temp_r5_24->unk0;
            var_r3_45 = var_r0_32;
            argB2 = arg7F + 2;
            if (var_r2_45 != argB6) {
                do {
                    if (var_r3_45 != 0) {
                        var_r3_45->unk0 = (s32) var_r2_45->unk0;
                        var_r3_45->unk4 = (s32) var_r2_45->unk4;
                        var_r3_45->unk8 = (s32) var_r2_45->unk8;
                        var_r3_45->unkC = (s32) var_r2_45->unkC;
                    }
                    var_r2_45 += 0x10;
                    var_r3_45 += 0x10;
                } while (var_r2_45 != argB6);
            }
            temp_r0_74 = arg68;
            if (temp_r0_74 == 1) {
                if (var_r3_45 != 0) {
                    var_r3_45->unk0 = (s32) unksp8.unk0;
                    var_r3_45->unk4 = (s32) unksp8.unk4;
                    var_r3_45->unk8 = (s32) unksp8.unk8;
                    var_r3_45->unkC = (s32) unksp8.unkC;
                }
                var_r6_7 = (GenObj *)((u8 *)var_r3_45 + 0x10);
            } else {
                var_r3_46 = temp_r0_74;
                var_r2_46 = var_r3_45;
                if (var_r3_46 != 0) {
                    do {
                        if (var_r2_46 != 0) {
                            var_r2_46->unk0 = (s32) unksp8.unk0;
                            var_r2_46->unk4 = (s32) unksp8.unk4;
                            var_r2_46->unk8 = (s32) unksp8.unk8;
                            var_r2_46->unkC = (s32) unksp8.unkC;
                        }
                        var_r3_46 -= 1;
                        var_r2_46 += 0x10;
                    } while (var_r3_46 != 0);
                }
                var_r6_7 = var_r2_46;
            }
            temp_r2_29 = temp_r5_24->unk4;
            temp_r0_75 = temp_r5_24->unk0;
            var_r1_37 = temp_r0_75;
            if (temp_r0_75 != temp_r2_29) {
                do {
                    var_r1_37 += 0x10;
                } while (var_r1_37 != temp_r2_29);
            }
            if (temp_r0_75 != 0) {
                free();
            }
            temp_r5_24->unk0 = argB7;
            temp_r5_24->unk4 = var_r6_7;
            temp_r5_24->unkC = (void *) (argB7 + var_r8_23);
        }
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + argB3 + 0x10, 0x33C, 0xC, 2);
        arg7F = argB2;
        func_08075220(arg0, GetUnkCowAge__C4Barn(arg0->unk58C + 0x5F0), arg7F);
        arg7F += 2;
    }
    if (GetUnkSheepAge__C4Barn(arg0->unk58C + 0x5F0) == 0) {

    } else {
        temp_r2_30 = arg7F << 6;
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + temp_r2_30 + 8, 0x6C, 6, 2);
        unksp0 = &gUnk_0875328C;
        func_08075334(arg0, 0x10, arg7F * 8, &gUnk_0875320C);
        arg69.unk0 = 0xC;
        arg69.unk2 = 2;
        temp_r4_55 = (GenObj *)((u8 *)arg0 + 0x8B6C);
        func_0804E7A0((s32) arg69.unk0, temp_r4_55, 0);
        temp_r2_31 = GetUnkSheepName__C4Barn(arg0->unk58C + 0x5F0);
        arg6A.unk0 = 0xC;
        arg6A.unk2 = 2;
        unksp0 = temp_r2_31;
        func_0804E8F0((s32) arg6A.unk0, temp_r4_55, 0, 0);
        temp_r5_25 = func_08008910(arg0->unk0);
        func_08008F0C(&unksp8, temp_r4_55, 0x06006A80, 0x300);
        temp_r1_24 = temp_r5_25->unk4;
        argB3 = temp_r2_30;
        if (temp_r1_24 != temp_r5_25->unkC) {
            if (temp_r1_24 != 0) {
                temp_r1_24->unk0 = (s32) unksp8.unk0;
                temp_r1_24->unk4 = (s32) unksp8.unk4;
                temp_r1_24->unk8 = (s32) unksp8.unk8;
                temp_r1_24->unkC = (s32) unksp8.unkC;
            }
            temp_r5_25->unk4 = (void *) (temp_r5_25->unk4 + 0x10);
            argB2 = arg7F + 2;
        } else {
            argB6 = temp_r1_24;
            arg6C = 1;
            temp_r4_56 = (s32) (argB6 - temp_r5_25->unk0) >> 4;
            arg6B = temp_r4_56;
            var_r1_38 = &arg6B;
            if ((u32) temp_r4_56 < (u32) arg6C) {
                var_r1_38 = &arg6C;
            }
            temp_r0_76 = temp_r4_56 + *var_r1_38;
            if (temp_r0_76 != 0) {
                temp_r4_57 = temp_r0_76 * 0x10;
                var_r0_33 = malloc(temp_r4_57);
                var_r8_24 = temp_r4_57;
                if (var_r0_33 == 0) {
                    var_r0_33 = func_080D3BC0(var_r8_24);
                }
            } else {
                var_r0_33 = 0;
                var_r8_24 = 0;
            }
            argB7 = var_r0_33;
            var_r2_47 = temp_r5_25->unk0;
            var_r3_47 = var_r0_33;
            argB2 = arg7F + 2;
            if (var_r2_47 != argB6) {
                do {
                    if (var_r3_47 != 0) {
                        var_r3_47->unk0 = (s32) var_r2_47->unk0;
                        var_r3_47->unk4 = (s32) var_r2_47->unk4;
                        var_r3_47->unk8 = (s32) var_r2_47->unk8;
                        var_r3_47->unkC = (s32) var_r2_47->unkC;
                    }
                    var_r2_47 += 0x10;
                    var_r3_47 += 0x10;
                } while (var_r2_47 != argB6);
            }
            temp_r0_77 = arg6C;
            if (temp_r0_77 == 1) {
                if (var_r3_47 != 0) {
                    var_r3_47->unk0 = (s32) unksp8.unk0;
                    var_r3_47->unk4 = (s32) unksp8.unk4;
                    var_r3_47->unk8 = (s32) unksp8.unk8;
                    var_r3_47->unkC = (s32) unksp8.unkC;
                }
                var_r6_8 = (GenObj *)((u8 *)var_r3_47 + 0x10);
            } else {
                var_r3_48 = temp_r0_77;
                var_r2_48 = var_r3_47;
                if (var_r3_48 != 0) {
                    do {
                        if (var_r2_48 != 0) {
                            var_r2_48->unk0 = (s32) unksp8.unk0;
                            var_r2_48->unk4 = (s32) unksp8.unk4;
                            var_r2_48->unk8 = (s32) unksp8.unk8;
                            var_r2_48->unkC = (s32) unksp8.unkC;
                        }
                        var_r3_48 -= 1;
                        var_r2_48 += 0x10;
                    } while (var_r3_48 != 0);
                }
                var_r6_8 = var_r2_48;
            }
            temp_r2_32 = temp_r5_25->unk4;
            temp_r0_78 = temp_r5_25->unk0;
            var_r1_39 = temp_r0_78;
            if (temp_r0_78 != temp_r2_32) {
                do {
                    var_r1_39 += 0x10;
                } while (var_r1_39 != temp_r2_32);
            }
            if (temp_r0_78 != 0) {
                free();
            }
            temp_r5_25->unk0 = argB7;
            temp_r5_25->unk4 = var_r6_8;
            temp_r5_25->unkC = (void *) (argB7 + var_r8_24);
        }
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + argB3 + 0x14, 0x354, 0xC, 2);
        arg7F = argB2;
        func_08075220(arg0, GetUnkSheepAge__C4Barn(arg0->unk58C + 0x5F0), arg7F);
        arg7F += 3;
    }
    arg6D = 0x1A;
    arg94->unk2 = 2;
    unksp0 = &gUnk_080FBFCC;
    func_0804E8F0((s32) arg6D, argA2, 0, 0);
    temp_r6_18 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA2, 0x06005800, 0x680);
    temp_r1_25 = temp_r6_18->unk4;
    if (temp_r1_25 != temp_r6_18->unkC) {
        if (temp_r1_25 != 0) {
            temp_r1_25->unk0 = (s32) unksp8.unk0;
            temp_r1_25->unk4 = (s32) unksp8.unk4;
            temp_r1_25->unk8 = (s32) unksp8.unk8;
            temp_r1_25->unkC = (s32) unksp8.unkC;
        }
        temp_r6_18->unk4 = (void *) (temp_r6_18->unk4 + 0x10);
    } else {
        argB6 = temp_r1_25;
        arg6F = 1;
        temp_r4_58 = (s32) (argB6 - temp_r6_18->unk0) >> 4;
        arg6E = temp_r4_58;
        var_r1_40 = &arg6E;
        if ((u32) temp_r4_58 < (u32) arg6F) {
            var_r1_40 = &arg6F;
        }
        temp_r0_79 = temp_r4_58 + *var_r1_40;
        if (temp_r0_79 != 0) {
            temp_r4_59 = temp_r0_79 * 0x10;
            var_r0_34 = malloc(temp_r4_59);
            var_r8_25 = temp_r4_59;
            if (var_r0_34 == 0) {
                var_r0_34 = func_080D3BC0(var_r8_25);
            }
        } else {
            var_r0_34 = 0;
            var_r8_25 = 0;
        }
        argB7 = var_r0_34;
        var_r2_49 = temp_r6_18->unk0;
        var_r3_49 = var_r0_34;
        if (var_r2_49 != argB6) {
            do {
                if (var_r3_49 != 0) {
                    var_r3_49->unk0 = (s32) var_r2_49->unk0;
                    var_r3_49->unk4 = (s32) var_r2_49->unk4;
                    var_r3_49->unk8 = (s32) var_r2_49->unk8;
                    var_r3_49->unkC = (s32) var_r2_49->unkC;
                }
                var_r2_49 += 0x10;
                var_r3_49 += 0x10;
            } while (var_r2_49 != argB6);
        }
        temp_r0_80 = arg6F;
        if (temp_r0_80 == 1) {
            if (var_r3_49 != 0) {
                var_r3_49->unk0 = (s32) unksp8.unk0;
                var_r3_49->unk4 = (s32) unksp8.unk4;
                var_r3_49->unk8 = (s32) unksp8.unk8;
                var_r3_49->unkC = (s32) unksp8.unkC;
            }
            var_r5_17 = (GenObj *)((u8 *)var_r3_49 + 0x10);
        } else {
            var_r3_50 = temp_r0_80;
            var_r2_50 = var_r3_49;
            if (var_r3_50 != 0) {
                do {
                    if (var_r2_50 != 0) {
                        var_r2_50->unk0 = (s32) unksp8.unk0;
                        var_r2_50->unk4 = (s32) unksp8.unk4;
                        var_r2_50->unk8 = (s32) unksp8.unk8;
                        var_r2_50->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_50 -= 1;
                    var_r2_50 += 0x10;
                } while (var_r3_50 != 0);
            }
            var_r5_17 = var_r2_50;
        }
        temp_r2_33 = temp_r6_18->unk4;
        temp_r0_81 = temp_r6_18->unk0;
        var_r1_41 = temp_r0_81;
        if (temp_r0_81 != temp_r2_33) {
            do {
                var_r1_41 += 0x10;
            } while (var_r1_41 != temp_r2_33);
        }
        if (temp_r0_81 != 0) {
            free();
        }
        temp_r6_18->unk0 = argB7;
        temp_r6_18->unk4 = var_r5_17;
        temp_r6_18->unkC = (void *) (argB7 + var_r8_25);
    }
    arg70 = 4;
    arg95->unk2 = 2;
    unksp0 = &gUnk_080FBFE8;
    func_0804E8F0((s32) arg70, arg86, 0, 0);
    temp_r6_19 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg86, 0x06001180, 0x100);
    temp_r1_26 = temp_r6_19->unk4;
    if (temp_r1_26 != temp_r6_19->unkC) {
        if (temp_r1_26 != 0) {
            temp_r1_26->unk0 = (s32) unksp8.unk0;
            temp_r1_26->unk4 = (s32) unksp8.unk4;
            temp_r1_26->unk8 = (s32) unksp8.unk8;
            temp_r1_26->unkC = (s32) unksp8.unkC;
        }
        temp_r6_19->unk4 = (void *) (temp_r6_19->unk4 + 0x10);
    } else {
        argB6 = temp_r1_26;
        arg72 = 1;
        temp_r4_60 = (s32) (argB6 - temp_r6_19->unk0) >> 4;
        arg71 = temp_r4_60;
        var_r1_42 = &arg71;
        if ((u32) temp_r4_60 < (u32) arg72) {
            var_r1_42 = &arg72;
        }
        temp_r0_82 = temp_r4_60 + *var_r1_42;
        if (temp_r0_82 != 0) {
            temp_r4_61 = temp_r0_82 * 0x10;
            var_r0_35 = malloc(temp_r4_61);
            var_r8_26 = temp_r4_61;
            if (var_r0_35 == 0) {
                var_r0_35 = func_080D3BC0(var_r8_26);
            }
        } else {
            var_r0_35 = 0;
            var_r8_26 = 0;
        }
        argB7 = var_r0_35;
        var_r2_51 = temp_r6_19->unk0;
        var_r3_51 = var_r0_35;
        if (var_r2_51 != argB6) {
            do {
                if (var_r3_51 != 0) {
                    var_r3_51->unk0 = (s32) var_r2_51->unk0;
                    var_r3_51->unk4 = (s32) var_r2_51->unk4;
                    var_r3_51->unk8 = (s32) var_r2_51->unk8;
                    var_r3_51->unkC = (s32) var_r2_51->unkC;
                }
                var_r2_51 += 0x10;
                var_r3_51 += 0x10;
            } while (var_r2_51 != argB6);
        }
        temp_r0_83 = arg72;
        if (temp_r0_83 == 1) {
            if (var_r3_51 != 0) {
                var_r3_51->unk0 = (s32) unksp8.unk0;
                var_r3_51->unk4 = (s32) unksp8.unk4;
                var_r3_51->unk8 = (s32) unksp8.unk8;
                var_r3_51->unkC = (s32) unksp8.unkC;
            }
            var_r5_18 = (GenObj *)((u8 *)var_r3_51 + 0x10);
        } else {
            var_r3_52 = temp_r0_83;
            var_r2_52 = var_r3_51;
            if (var_r3_52 != 0) {
                do {
                    if (var_r2_52 != 0) {
                        var_r2_52->unk0 = (s32) unksp8.unk0;
                        var_r2_52->unk4 = (s32) unksp8.unk4;
                        var_r2_52->unk8 = (s32) unksp8.unk8;
                        var_r2_52->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_52 -= 1;
                    var_r2_52 += 0x10;
                } while (var_r3_52 != 0);
            }
            var_r5_18 = var_r2_52;
        }
        temp_r2_34 = temp_r6_19->unk4;
        temp_r0_84 = temp_r6_19->unk0;
        var_r1_43 = temp_r0_84;
        if (temp_r0_84 != temp_r2_34) {
            do {
                var_r1_43 += 0x10;
            } while (var_r1_43 != temp_r2_34);
        }
        if (temp_r0_84 != 0) {
            free();
        }
        temp_r6_19->unk0 = argB7;
        temp_r6_19->unk4 = var_r5_18;
        temp_r6_19->unkC = (void *) (argB7 + var_r8_26);
    }
    arg73 = 0x14;
    arg96->unk2 = 2;
    unksp0 = &gUnk_080FBFF0;
    func_0804E8F0((s32) arg73, arg99, 0, 0);
    temp_r6_20 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg99, 0x06001280, 0x500);
    temp_r1_27 = temp_r6_20->unk4;
    if (temp_r1_27 != temp_r6_20->unkC) {
        if (temp_r1_27 != 0) {
            temp_r1_27->unk0 = (s32) unksp8.unk0;
            temp_r1_27->unk4 = (s32) unksp8.unk4;
            temp_r1_27->unk8 = (s32) unksp8.unk8;
            temp_r1_27->unkC = (s32) unksp8.unkC;
        }
        temp_r6_20->unk4 = (void *) (temp_r6_20->unk4 + 0x10);
    } else {
        argB6 = temp_r1_27;
        arg75 = 1;
        temp_r4_62 = (s32) (argB6 - temp_r6_20->unk0) >> 4;
        arg74 = temp_r4_62;
        var_r1_44 = &arg74;
        if ((u32) temp_r4_62 < (u32) arg75) {
            var_r1_44 = &arg75;
        }
        temp_r0_85 = temp_r4_62 + *var_r1_44;
        if (temp_r0_85 != 0) {
            temp_r4_63 = temp_r0_85 * 0x10;
            var_r0_36 = malloc(temp_r4_63);
            var_r8_27 = temp_r4_63;
            if (var_r0_36 == 0) {
                var_r0_36 = func_080D3BC0(var_r8_27);
            }
        } else {
            var_r0_36 = 0;
            var_r8_27 = 0;
        }
        argB7 = var_r0_36;
        var_r2_53 = temp_r6_20->unk0;
        var_r3_53 = var_r0_36;
        if (var_r2_53 != argB6) {
            do {
                if (var_r3_53 != 0) {
                    var_r3_53->unk0 = (s32) var_r2_53->unk0;
                    var_r3_53->unk4 = (s32) var_r2_53->unk4;
                    var_r3_53->unk8 = (s32) var_r2_53->unk8;
                    var_r3_53->unkC = (s32) var_r2_53->unkC;
                }
                var_r2_53 += 0x10;
                var_r3_53 += 0x10;
            } while (var_r2_53 != argB6);
        }
        temp_r0_86 = arg75;
        if (temp_r0_86 == 1) {
            if (var_r3_53 != 0) {
                var_r3_53->unk0 = (s32) unksp8.unk0;
                var_r3_53->unk4 = (s32) unksp8.unk4;
                var_r3_53->unk8 = (s32) unksp8.unk8;
                var_r3_53->unkC = (s32) unksp8.unkC;
            }
            var_r5_19 = (GenObj *)((u8 *)var_r3_53 + 0x10);
        } else {
            var_r3_54 = temp_r0_86;
            var_r2_54 = var_r3_53;
            if (var_r3_54 != 0) {
                do {
                    if (var_r2_54 != 0) {
                        var_r2_54->unk0 = (s32) unksp8.unk0;
                        var_r2_54->unk4 = (s32) unksp8.unk4;
                        var_r2_54->unk8 = (s32) unksp8.unk8;
                        var_r2_54->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_54 -= 1;
                    var_r2_54 += 0x10;
                } while (var_r3_54 != 0);
            }
            var_r5_19 = var_r2_54;
        }
        temp_r2_35 = temp_r6_20->unk4;
        temp_r0_87 = temp_r6_20->unk0;
        var_r1_45 = temp_r0_87;
        if (temp_r0_87 != temp_r2_35) {
            do {
                var_r1_45 += 0x10;
            } while (var_r1_45 != temp_r2_35);
        }
        if (temp_r0_87 != 0) {
            free();
        }
        temp_r6_20->unk0 = argB7;
        temp_r6_20->unk4 = var_r5_19;
        temp_r6_20->unkC = (void *) (argB7 + var_r8_27);
    }
    if (func_0800E97C(arg0->unk58C + 0x1BD8) != 0) {
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + (arg7F << 6) + 4, 0x2C0, 0x1A, 2);
        temp_r7_3 = arg7F + 2;
        temp_r0_88 = func_0800E97C(arg0->unk58C + 0x1BD8);
        temp_r5_26 = temp_r7_3 << 6;
        unksp0 = 0x20;
        func_0804EDB4(temp_r0_88, arg7E->unk18 + temp_r5_26 + 8, 0x120, 0);
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + temp_r5_26 + 0xA, 0x94, 0x14, 2);
        arg7F = temp_r7_3 + 3;
    }
    arg76 = 0x18;
    arg97->unk2 = 2;
    unksp0 = &gUnk_080FC008;
    func_0804E8F0((s32) arg76, argA5, 0, 0);
    temp_r6_21 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, argA5, 0x06005E80, 0x600);
    temp_r1_28 = temp_r6_21->unk4;
    if (temp_r1_28 != temp_r6_21->unkC) {
        if (temp_r1_28 != 0) {
            temp_r1_28->unk0 = (s32) unksp8.unk0;
            temp_r1_28->unk4 = (s32) unksp8.unk4;
            temp_r1_28->unk8 = (s32) unksp8.unk8;
            temp_r1_28->unkC = (s32) unksp8.unkC;
        }
        temp_r6_21->unk4 = (void *) (temp_r6_21->unk4 + 0x10);
    } else {
        argB6 = temp_r1_28;
        arg78 = 1;
        temp_r4_64 = (s32) (argB6 - temp_r6_21->unk0) >> 4;
        arg77 = temp_r4_64;
        var_r1_46 = &arg77;
        if ((u32) temp_r4_64 < (u32) arg78) {
            var_r1_46 = &arg78;
        }
        temp_r0_89 = temp_r4_64 + *var_r1_46;
        if (temp_r0_89 != 0) {
            temp_r4_65 = temp_r0_89 * 0x10;
            var_r0_37 = malloc(temp_r4_65);
            var_r8_28 = temp_r4_65;
            if (var_r0_37 == 0) {
                var_r0_37 = func_080D3BC0(var_r8_28);
            }
        } else {
            var_r0_37 = 0;
            var_r8_28 = 0;
        }
        argB7 = var_r0_37;
        var_r2_55 = temp_r6_21->unk0;
        var_r3_55 = var_r0_37;
        if (var_r2_55 != argB6) {
            do {
                if (var_r3_55 != 0) {
                    var_r3_55->unk0 = (s32) var_r2_55->unk0;
                    var_r3_55->unk4 = (s32) var_r2_55->unk4;
                    var_r3_55->unk8 = (s32) var_r2_55->unk8;
                    var_r3_55->unkC = (s32) var_r2_55->unkC;
                }
                var_r2_55 += 0x10;
                var_r3_55 += 0x10;
            } while (var_r2_55 != argB6);
        }
        temp_r0_90 = arg78;
        if (temp_r0_90 == 1) {
            if (var_r3_55 != 0) {
                var_r3_55->unk0 = (s32) unksp8.unk0;
                var_r3_55->unk4 = (s32) unksp8.unk4;
                var_r3_55->unk8 = (s32) unksp8.unk8;
                var_r3_55->unkC = (s32) unksp8.unkC;
            }
            var_r5_20 = (GenObj *)((u8 *)var_r3_55 + 0x10);
        } else {
            var_r3_56 = temp_r0_90;
            var_r2_56 = var_r3_55;
            if (var_r3_56 != 0) {
                do {
                    if (var_r2_56 != 0) {
                        var_r2_56->unk0 = (s32) unksp8.unk0;
                        var_r2_56->unk4 = (s32) unksp8.unk4;
                        var_r2_56->unk8 = (s32) unksp8.unk8;
                        var_r2_56->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_56 -= 1;
                    var_r2_56 += 0x10;
                } while (var_r3_56 != 0);
            }
            var_r5_20 = var_r2_56;
        }
        temp_r2_36 = temp_r6_21->unk4;
        temp_r0_91 = temp_r6_21->unk0;
        var_r1_47 = temp_r0_91;
        if (temp_r0_91 != temp_r2_36) {
            do {
                var_r1_47 += 0x10;
            } while (var_r1_47 != temp_r2_36);
        }
        if (temp_r0_91 != 0) {
            free();
        }
        temp_r6_21->unk0 = argB7;
        temp_r6_21->unk4 = var_r5_20;
        temp_r6_21->unkC = (void *) (argB7 + var_r8_28);
    }
    arg79 = 2;
    arg98->unk2 = 2;
    unksp0 = &gUnk_080FBE8C;
    func_0804E8F0((s32) arg79, arg9A, 0, 0);
    temp_r6_22 = func_08008910(arg0->unk0);
    func_08008F0C(&unksp8, arg9A, 0x06001780, 0x80);
    temp_r1_29 = temp_r6_22->unk4;
    if (temp_r1_29 != temp_r6_22->unkC) {
        if (temp_r1_29 != 0) {
            temp_r1_29->unk0 = (s32) unksp8.unk0;
            temp_r1_29->unk4 = (s32) unksp8.unk4;
            temp_r1_29->unk8 = (s32) unksp8.unk8;
            temp_r1_29->unkC = (s32) unksp8.unkC;
        }
        temp_r6_22->unk4 = (void *) (temp_r6_22->unk4 + 0x10);
    } else {
        argB6 = temp_r1_29;
        arg7B = 1;
        temp_r4_66 = (s32) (argB6 - temp_r6_22->unk0) >> 4;
        arg7A = temp_r4_66;
        var_r1_48 = &arg7A;
        if ((u32) temp_r4_66 < (u32) arg7B) {
            var_r1_48 = &arg7B;
        }
        temp_r0_92 = temp_r4_66 + *var_r1_48;
        if (temp_r0_92 != 0) {
            temp_r4_67 = temp_r0_92 * 0x10;
            var_r0_38 = malloc(temp_r4_67);
            var_r8_29 = temp_r4_67;
            if (var_r0_38 == 0) {
                var_r0_38 = func_080D3BC0(var_r8_29);
            }
        } else {
            var_r0_38 = 0;
            var_r8_29 = 0;
        }
        argB7 = var_r0_38;
        var_r2_57 = temp_r6_22->unk0;
        var_r3_57 = var_r0_38;
        if (var_r2_57 != argB6) {
            do {
                if (var_r3_57 != 0) {
                    var_r3_57->unk0 = (s32) var_r2_57->unk0;
                    var_r3_57->unk4 = (s32) var_r2_57->unk4;
                    var_r3_57->unk8 = (s32) var_r2_57->unk8;
                    var_r3_57->unkC = (s32) var_r2_57->unkC;
                }
                var_r2_57 += 0x10;
                var_r3_57 += 0x10;
            } while (var_r2_57 != argB6);
        }
        temp_r0_93 = arg7B;
        if (temp_r0_93 == 1) {
            if (var_r3_57 != 0) {
                var_r3_57->unk0 = (s32) unksp8.unk0;
                var_r3_57->unk4 = (s32) unksp8.unk4;
                var_r3_57->unk8 = (s32) unksp8.unk8;
                var_r3_57->unkC = (s32) unksp8.unkC;
            }
            var_r5_21 = (GenObj *)((u8 *)var_r3_57 + 0x10);
        } else {
            var_r3_58 = temp_r0_93;
            var_r2_58 = var_r3_57;
            if (var_r3_58 != 0) {
                do {
                    if (var_r2_58 != 0) {
                        var_r2_58->unk0 = (s32) unksp8.unk0;
                        var_r2_58->unk4 = (s32) unksp8.unk4;
                        var_r2_58->unk8 = (s32) unksp8.unk8;
                        var_r2_58->unkC = (s32) unksp8.unkC;
                    }
                    var_r3_58 -= 1;
                    var_r2_58 += 0x10;
                } while (var_r3_58 != 0);
            }
            var_r5_21 = var_r2_58;
        }
        temp_r2_37 = temp_r6_22->unk4;
        temp_r0_94 = temp_r6_22->unk0;
        var_r1_49 = temp_r0_94;
        if (temp_r0_94 != temp_r2_37) {
            do {
                var_r1_49 += 0x10;
            } while (var_r1_49 != temp_r2_37);
        }
        if (temp_r0_94 != 0) {
            free();
        }
        temp_r6_22->unk0 = argB7;
        temp_r6_22->unk4 = var_r5_21;
        temp_r6_22->unkC = (void *) (argB7 + var_r8_29);
    }
    if (func_0800E988(arg0->unk58C + 0x1BD8) != 0) {
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + (arg7F << 6) + 8, 0x2F4, 0x18, 2);
        unksp18->unkC(&arg7C, &unksp18, 0x86B);
        unksp18->unk10(&arg1A, &unksp18, *arg7C);
        memcpy(&arg1A, &arg1A, 0x20);
        unksp0 = arg1E;
        func_08075334(arg0, 0x10, arg7F * 8, arg1C);
        temp_r4_68 = arg7F + 2;
        arg7F = temp_r4_68;
        temp_r0_95 = func_0800E988(arg0->unk58C + 0x1BD8);
        temp_r4_69 = temp_r4_68 << 6;
        unksp0 = 0x20;
        func_0804EDB4(temp_r0_95, arg7E->unk18 + temp_r4_69 + 0x32, 0x120, 0);
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg7E->unk18 + temp_r4_69 + 0x34, 0xBC, 2, 2);
        arg7F += 3;
    }
    func_08075E24(arg0->unk4, (s16) (arg7F * 8));
    argE = &vtable_unk_080E5A28;
    unksp18 = &vtable_unk_080E5A28;
    return arg0;
}
