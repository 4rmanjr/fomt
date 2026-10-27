
// DECOMP-MATCHED func_08035CB8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08035C04(s32);                               /* extern */

void func_08035CB8(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08035C04(arg0);
    }
}

// DECOMP-MATCHED func_080364E4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036430(s32);                               /* extern */

void func_080364E4(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036430(arg0);
    }
}

// DECOMP-MATCHED func_080369C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036900(s32);                               /* extern */

void func_080369C4(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036900(arg0);
    }
}

// DECOMP-MATCHED func_08036138 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036084(s32);                               /* extern */

void func_08036138(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036084(arg0);
    }
}

// DECOMP-MATCHED func_08036680 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_080365CC(s32);                               /* extern */

void func_08036680(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_080365CC(arg0);
    }
}

// DECOMP-MATCHED func_08036B00 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036AB4(s32);                               /* extern */

void func_08036B00(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036AB4(arg0);
    }
}

// DECOMP-MATCHED func_080367AC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036768(s32);                               /* extern */

void func_080367AC(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036768(arg0);
    }
}

// DECOMP-MATCHED func_08038320 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038110(s32);                               /* extern */
s32 vfunc_2C__7AEntityUi();                           /* extern */

void func_08038320(s32 arg0) {
    vfunc_2C__7AEntityUi();
    func_08038110(arg0);
}

// DECOMP-MATCHED func_080391C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_080391C0(s32 arg0, s32 arg1) {
    if (((arg1 <= 0x38) && (arg0 > 0x143) && (arg0 <= 0x164)) || ((arg1 > 0x27F) && (arg0 > 0xF7) && (arg0 <= 0x118))) {
        return 1;
    }
    return 0;
}

// DECOMP-MATCHED func_080391FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
void func_080391FC(void) {

}

// DECOMP-MATCHED func_08039200 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08039200(void) {
    return 0;
}

// DECOMP-MATCHED func_0803930C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_0803930C(void) {
    return 1;
}

// DECOMP-MATCHED func_08039A5C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
void func_08039A5C(void) {

}

// DECOMP-MATCHED func_08037430 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[60];
    s32 unk3C;
} GenObj;
u16 func_08037430(GenObj *arg0) {
    return arg0->unk3C;
}

// DECOMP-MATCHED func_08037EB4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_0800FFF4(s32, u8);                           /* extern */
s32 func_08037F74();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[4];
    s32 unk18;
} GenObj;
void func_08037EB4(GenObj *arg0, u8 *arg1) {
    func_0800FFF4(arg0->unk18, *arg1);
    if (arg0->unk10 != 0) {
        func_08037F74();
    }
}

// DECOMP-MATCHED func_08038300 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038110(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[4];
    struct GenObj *unkC;
    s32 unk10;
} GenObj;
void func_08038300(GenObj *arg0) {
    GenObj *temp_r2;

    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        ((void (*)(void *,...))(temp_r2->unk4->unkC))(temp_r2);
    }
    func_08038110(arg0);
}

// DECOMP-MATCHED func_080387B8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038DF0();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_080387B8(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        func_08038DF0();
    }
}

// DECOMP-MATCHED func_080387C8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038E90();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_080387C8(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        func_08038E90();
    }
}

// DECOMP-MATCHED func_080387EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038EB8();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_080387EC(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        func_08038EB8();
    }
}

// DECOMP-MATCHED func_080387FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038EE0();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_080387FC(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        func_08038EE0();
    }
}

// DECOMP-MATCHED func_08039F50 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_delete(void *);                         /* extern */
s32 func_080A47B4(void *, s32);                       /* extern */
extern s32 vtable_unk_080E76BC;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[24];
    struct GenObj *unk24;
    u8 _pad28[32];
    s32 unk48;
    void *unk4C;
} GenObj;
void func_08039F50(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk4C = &vtable_unk_080E76BC;
    temp_r1 = arg0->unk48;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    func_080A47B4((GenObj *)((u8 *)arg0 + 8), 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

// DECOMP-MATCHED func_0803A320 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern s32 gUnk_080F16D2;

s16 func_0803A320(s32 arg0, s32 arg1) {
    s8 *temp_r0 = (s8 *) &gUnk_080F16D2;

    return *(s16 *) (temp_r0 + (((s32) (arg1 << 0x10)) >> 0xF));
}

// DECOMP-MATCHED func_080390D0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
u32 func_080390D0(GenObj *arg0) {
    s32 temp_r1;

    temp_r1 = arg0->unk10;
    return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
}

// DECOMP-MATCHED func_08037F74 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[84];
    u8 unk54;
} GenObj;
void func_08037F74(GenObj *arg0) {
    arg0->unk54 = 0xA;
}

/* ATTEMPT-NOTE opencode: member u8 (strb). */

// DECOMP-MATCHED func_08038108 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[37];
    u8 unk25;
} GenObj;
u8 func_08038108(GenObj *arg0) {
    return arg0->unk25;
}

/* ATTEMPT-NOTE opencode: member+return u8 (ldrb, tanpa lsls/lsrs). */

// DECOMP-MATCHED func_08038E90 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[60];
    s32 unk4C;
    u8 unk50;
} GenObj;
void func_08038E90(GenObj *arg0) {
    GenObj *temp_r0;

    temp_r0 = arg0->unkC;
    temp_r0->unk4C = 0x01200000;
    temp_r0->unk50 = 1;
}

/* ATTEMPT-NOTE opencode: unk50 u8 (strb via adds r0,#80); unk4C s32. */

// DECOMP-MATCHED func_08035AE0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad6[8];
    s16 unkE;
} GenObj;
s32 func_08035AE0(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 == 0x1D) && ((s32) arg0->unkE <= 0x37)) {
        var_r2 = 1;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk4 u16 (ldrh), unkE s16 (ldrsh). */

// DECOMP-MATCHED func_0803745C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 vfunc_14__7AEntity();                             /* extern */

typedef struct GenObj {
    u8 _pad0[64];
    u8 unk40;
} GenObj;
void func_0803745C(GenObj *arg0) {
    vfunc_14__7AEntity();
    arg0->unk40 = 0;
}

/* ATTEMPT-NOTE opencode: unk40 u8 (adds+strb). */

// DECOMP-MATCHED func_080380EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[28];
    s32 unk1C;
    s32 unk20;
    u8 unk24;
    u8 unk25;
} GenObj;
void func_080380EC(GenObj *arg0, s8 arg1) {
    arg0->unk24 = arg1;
    arg0->unk1C = 0xA8 << 0xD;
    arg0->unk20 = 0xC0 << 0xA;
    arg0->unk25 = 1;
}

/* ATTEMPT-NOTE opencode: unk24/unk25 u8 (strb); konstanta via shift (movs+lsl) bukan imm. */

// DECOMP-MATCHED func_0803A334 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern s32 gUnk_080F16D2;

s16 func_0803A334(s32 dummy, s16 arg1) {
    u8 *base = (u8 *)&gUnk_080F16D2;
    s32 t = (arg1 + 0x40) & 0xFF;

    return *(s16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE opencode: arg di r1 (s32 dummy + s16 arg1); & 0xFF imm (movs belakangan, bukan var di awal); base (u8*) di var; ldrsh [r1,r2]. */

// DECOMP-MATCHED func_08037434 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 vfunc_10__7AEntity(void *);                       /* extern */

typedef struct S3E { u8 _pb[2]; u16 unk3E; } S3E;
typedef union U3C { s32 unk3C; S3E s; } U3C;
typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[36];
    U3C u;
    u8 unk40;
} GenObj;
void func_08037434(GenObj *arg0) {
    if (arg0->unk40 == 0) {
        ((void (*)(void *))(arg0->unk14->u.unk3C))(arg0);
    }
    arg0->u.s.unk3E = 0;
    vfunc_10__7AEntity(arg0);
}

/* ATTEMPT-NOTE opencode: named union U3C/S3E (agbcc29 tolak anon); unk40 u8@0x40, unk3E u16@0x3E, unk3C funcptr@0x3C. */
