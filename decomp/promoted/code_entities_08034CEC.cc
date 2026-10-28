
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

// DECOMP-MATCHED func_080399C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 GetLocation__C12AActorEntity(s32 *, void *);        /* extern */
s32 SetLocation__5ActorRC13ActorLocation(s32, s32 *);   /* extern */
s32 __builtin_delete(void *);                         /* extern */
extern s32 __vt_7AEntity;
extern s32 vtable_unk_080E74DC;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    void *unk14;
    u8 _pad18[28];
    s32 unk34;
} GenObj;
void func_080399C0(GenObj *arg0, s32 arg1) {
s32 sp[2];
    s32 temp_r4;
    s32 *var_r4;
    u8 *var_r6;
    void *temp_r0;
    GenObj *temp_r1;

    arg0->unk14 = &vtable_unk_080E74DC;
    temp_r4 = arg0->unk34;
    GetLocation__C12AActorEntity(&sp[0], arg0);
    SetLocation__5ActorRC13ActorLocation(temp_r4, &sp[0]);
    temp_r0 = (u8 *)arg0 + 0x38;
    if (temp_r0 == 0) {
        goto skip;
    }
    var_r4 = (s32 *)((u8 *)arg0 + 0x4C);
    if (temp_r0 != (u8 *)var_r4) {
        var_r6 = temp_r0;
        do {
            var_r4 = (s32 *)((u8 *)var_r4 - 4);
            __builtin_delete((void *)*var_r4);
        } while ((u8 *)var_r6 != (u8 *)var_r4);
    }
skip:;
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

/* ATTEMPT-NOTE opencode: null-check temp_r0 dulu (sebelum var_r4); u8-byte-arith + var_r6 copy; sp array utk sub#8. */

// DECOMP-MATCHED func_08035AFC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F280C;
extern s32 vtable_unk_080E7198;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035AFC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F280C, 0x25F, 0x263, 0x3E2);
    arg0->unk14 = &vtable_unk_080E7198;
    return arg0;
}

// DECOMP-MATCHED func_08035B64 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 ScheduleInfo_Unk_080F1A80;
extern s32 vtable_unk_080E7158;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035B64(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &ScheduleInfo_Unk_080F1A80, 0x213, 0x217, (0xF8 << 2));
    arg0->unk14 = &vtable_unk_080E7158;
    return arg0;
}

// DECOMP-MATCHED func_08035BC8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F1FC0;
extern s32 vtable_unk_080E7118;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035BC8(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F1FC0, 0x22F, 0x233, 0x3E1);
    arg0->unk14 = &vtable_unk_080E7118;
    return arg0;
}

// DECOMP-MATCHED func_08035D04 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F8678;
extern s32 vtable_unk_080E70D8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035D04(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F8678, 0x9EF, 0x9F3, 0x406);
    arg0->unk14 = &vtable_unk_080E70D8;
    return arg0;
}

// DECOMP-MATCHED func_08035D70 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F81BC;
extern s32 vtable_unk_080E7098;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035D70(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F81BC, 0x9E7, 0x9EB, 0x405);
    arg0->unk14 = &vtable_unk_080E7098;
    return arg0;
}

// DECOMP-MATCHED func_08035DD8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F77FC;
extern s32 vtable_unk_080E7058;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035DD8(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F77FC, 0x9A1, 0x9A5, 0x403);
    arg0->unk14 = &vtable_unk_080E7058;
    return arg0;
}

// DECOMP-MATCHED func_08035E40 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F7294;
extern s32 vtable_unk_080E7018;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035E40(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F7294, 0x989, 0x98D, 0x402);
    arg0->unk14 = &vtable_unk_080E7018;
    return arg0;
}

// DECOMP-MATCHED func_08035EAC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6370;
extern s32 vtable_unk_080E6FD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035EAC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6370, (0x8C << 4), (0x8C << 4) + 4, (0xFF << 2));
    arg0->unk14 = &vtable_unk_080E6FD8;
    return arg0;
}

// DECOMP-MATCHED func_08035F10 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F66C4;
extern s32 vtable_unk_080E6F98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035F10(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F66C4, (0x8D << 4), (0x8D << 4) + 4, 0x3FD);
    arg0->unk14 = &vtable_unk_080E6F98;
    return arg0;
}

// DECOMP-MATCHED func_08035F74 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F49C0;
extern s32 vtable_unk_080E6F58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035F74(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F49C0, 0x80B, 0x80F, 0x3F5);
    arg0->unk14 = &vtable_unk_080E6F58;
    return arg0;
}

// DECOMP-MATCHED func_08035FE0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F5540;
extern s32 vtable_unk_080E6F18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035FE0(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F5540, 0x84B, 0x84F, 0x3F7);
    arg0->unk14 = &vtable_unk_080E6F18;
    return arg0;
}

// DECOMP-MATCHED func_08036048 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F4D74;
extern s32 vtable_unk_080E6ED8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036048(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F4D74, 0x813, 0x817, 0x3F6);
    arg0->unk14 = &vtable_unk_080E6ED8;
    return arg0;
}

// DECOMP-MATCHED func_08036184 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F59CC;
extern s32 vtable_unk_080E6E98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036184(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F59CC, 0x85F, 0x863, 0x3F9);
    arg0->unk14 = &vtable_unk_080E6E98;
    return arg0;
}

// DECOMP-MATCHED func_080361EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6B4C;
extern s32 vtable_unk_080E6E58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080361EC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6B4C, 0x8E4, 0x8E8, 0x3FF);
    arg0->unk14 = &vtable_unk_080E6E58;
    return arg0;
}

// DECOMP-MATCHED func_08036258 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F33B8;
extern s32 vtable_unk_080E6E18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036258(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F33B8, 0x685, 0x685, 0x3EE);
    arg0->unk14 = &vtable_unk_080E6E18;
    return arg0;
}

// DECOMP-MATCHED func_080362C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F61FC;
extern s32 vtable_unk_080E6DD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080362C0(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F61FC, 0x8B8, 0x8BC, 0x3FB);
    arg0->unk14 = &vtable_unk_080E6DD8;
    return arg0;
}

// DECOMP-MATCHED func_08036328 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F3408;
extern s32 vtable_unk_080E6D98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036328(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F3408, 0x689, 0x68D, 0x3EF);
    arg0->unk14 = &vtable_unk_080E6D98;
    return arg0;
}

// DECOMP-MATCHED func_08036390 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F3FD8;
extern s32 vtable_unk_080E6D58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036390(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F3FD8, 0x6C5, 0x6C9, 0x3F1);
    arg0->unk14 = &vtable_unk_080E6D58;
    return arg0;
}

// DECOMP-MATCHED func_080363F8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F35E4;
extern s32 vtable_unk_080E6D18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080363F8(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F35E4, 0x691, 0x695, (0xFC << 2));
    arg0->unk14 = &vtable_unk_080E6D18;
    return arg0;
}

// DECOMP-MATCHED func_08036530 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F3010;
extern s32 vtable_unk_080E6CD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036530(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F3010, (0xC8 << 2), (0xC8 << 2) + 4, 0x3E6);
    arg0->unk14 = &vtable_unk_080E6CD8;
    return arg0;
}

// DECOMP-MATCHED func_08036590 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F5D94;
extern s32 vtable_unk_080E6C98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036590(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F5D94, 0x884, 0x888, 0x3FA);
    arg0->unk14 = &vtable_unk_080E6C98;
    return arg0;
}

// DECOMP-MATCHED func_080366CC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6DE8;
extern s32 vtable_unk_080E6C58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080366CC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6DE8, 0x8EC, 0x8F0, (0x80 << 3));
    arg0->unk14 = &vtable_unk_080E6C58;
    return arg0;
}

// DECOMP-MATCHED func_08036730 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F2AF8;
extern s32 vtable_unk_080E6C18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036730(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F2AF8, 0x27B, 0x27F, (0xF9 << 2));
    arg0->unk14 = &vtable_unk_080E6C18;
    return arg0;
}

// DECOMP-MATCHED func_080367F8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F42F0;
extern s32 vtable_unk_080E6BD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080367F8(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F42F0, 0x7B2, 0x7B6, 0x3F2);
    arg0->unk14 = &vtable_unk_080E6BD8;
    return arg0;
}

// DECOMP-MATCHED func_08036860 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F4974;
extern s32 vtable_unk_080E6B98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036860(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F4974, 0x7F2, 0x7F6, (0xFD << 2));
    arg0->unk14 = &vtable_unk_080E6B98;
    return arg0;
}

// DECOMP-MATCHED func_080368C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F43DC;
extern s32 vtable_unk_080E6B58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080368C4(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F43DC, 0x7BE, 0x7C2, 0x3F3);
    arg0->unk14 = &vtable_unk_080E6B58;
    return arg0;
}

// DECOMP-MATCHED func_08036A10 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6FF8;
extern s32 vtable_unk_080E6B18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036A10(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6FF8, 0x902, 0x906, 0x401);
    arg0->unk14 = &vtable_unk_080E6B18;
    return arg0;
}

// DECOMP-MATCHED func_08036A78 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F7B40;
extern s32 vtable_unk_080E6AD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036A78(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F7B40, 0x9D3, 0x9D7, 0x404);
    arg0->unk14 = &vtable_unk_080E6AD8;
    return arg0;
}

// DECOMP-MATCHED func_08036B4C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F2DC0;
extern s32 vtable_unk_080E6A98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036B4C(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F2DC0, (0xC6 << 2), (0xC6 << 2) + 4, 0x3E5);
    arg0->unk14 = &vtable_unk_080E6A98;
    return arg0;
}

// DECOMP-MATCHED func_08036C48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F597C;
extern s32 vtable_unk_080E6A58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036C48(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F597C, 0x857, 0x85B, (0xFE << 2));
    arg0->unk14 = &vtable_unk_080E6A58;
    return arg0;
}

// DECOMP-MATCHED func_08036CAC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E6A18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036CAC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, 0, 0x679, 0x67D, 0);
    arg0->unk14 = &vtable_unk_080E6A18;
    return arg0;
}

// DECOMP-MATCHED func_08036D0C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E69D8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036D0C(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, 0, 0x669, 0x66D, 0);
    arg0->unk14 = &vtable_unk_080E69D8;
    return arg0;
}

// DECOMP-MATCHED func_08036D68 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E6998;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036D68(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, 0, 0x7FE, 0x7FE, 0);
    arg0->unk14 = &vtable_unk_080E6998;
    return arg0;
}

// DECOMP-MATCHED func_08036E2C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F29C0;
extern s32 vtable_unk_080E6918;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036E2C(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F29C0, 0x267, 0x26F, 0x3E3);
    arg0->unk14 = &vtable_unk_080E6918;
    ((u16 *)arg0)[0x24] = 0;
    return arg0;
}

// DECOMP-MATCHED func_08035B38 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08035B38 { s32 a; s32 b; s32 c; };

s32 func_08035B38(s32 arg0) {
    s32 t;
    struct Params_func_08035B38 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08035B9C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08035B9C { s32 a; s32 b; s32 c; };

s32 func_08035B9C(s32 arg0) {
    s32 t;
    struct Params_func_08035B9C w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08035DAC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08035DAC { s32 a; s32 b; s32 c; };

s32 func_08035DAC(s32 arg0) {
    s32 t;
    struct Params_func_08035DAC w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 1; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08035E14 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08035E14 { s32 a; s32 b; s32 c; };

s32 func_08035E14(s32 arg0) {
    s32 t;
    struct Params_func_08035E14 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08035EE4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08035EE4 { s32 a; s32 b; s32 c; };

s32 func_08035EE4(s32 arg0) {
    s32 t;
    struct Params_func_08035EE4 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08035F48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08035F48 { s32 a; s32 b; s32 c; };

s32 func_08035F48(s32 arg0) {
    s32 t;
    struct Params_func_08035F48 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_0803601C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_0803601C { s32 a; s32 b; s32 c; };

s32 func_0803601C(s32 arg0) {
    s32 t;
    struct Params_func_0803601C w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_080361C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_080361C0 { s32 a; s32 b; s32 c; };

s32 func_080361C0(s32 arg0) {
    s32 t;
    struct Params_func_080361C0 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_080362FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_080362FC { s32 a; s32 b; s32 c; };

s32 func_080362FC(s32 arg0) {
    s32 t;
    struct Params_func_080362FC w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 1; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036364 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036364 { s32 a; s32 b; s32 c; };

s32 func_08036364(s32 arg0) {
    s32 t;
    struct Params_func_08036364 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_080363CC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_080363CC { s32 a; s32 b; s32 c; };

s32 func_080363CC(s32 arg0) {
    s32 t;
    struct Params_func_080363CC w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036564 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036564 { s32 a; s32 b; s32 c; };

s32 func_08036564(s32 arg0) {
    s32 t;
    struct Params_func_08036564 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036704 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036704 { s32 a; s32 b; s32 c; };

s32 func_08036704(s32 arg0) {
    s32 t;
    struct Params_func_08036704 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036834 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036834 { s32 a; s32 b; s32 c; };

s32 func_08036834(s32 arg0) {
    s32 t;
    struct Params_func_08036834 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036898 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036898 { s32 a; s32 b; s32 c; };

s32 func_08036898(s32 arg0) {
    s32 t;
    struct Params_func_08036898 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036A4C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036A4C { s32 a; s32 b; s32 c; };

s32 func_08036A4C(s32 arg0) {
    s32 t;
    struct Params_func_08036A4C w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036C80 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036C80 { s32 a; s32 b; s32 c; };

s32 func_08036C80(s32 arg0) {
    s32 t;
    struct Params_func_08036C80 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036D3C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036D3C { s32 a; s32 b; s32 c; };

s32 func_08036D3C(s32 arg0) {
    s32 t;
    struct Params_func_08036D3C w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_08036D98 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08036D98 { s32 a; s32 b; s32 c; };

s32 func_08036D98(s32 arg0) {
    s32 t;
    struct Params_func_08036D98 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}

// DECOMP-MATCHED func_0803753C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_0803753C { s32 a; s32 b; s32 c; };

s32 func_0803753C(s32 arg0) {
    s32 t;
    struct Params_func_0803753C w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 0; w.b = 7; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 2, 9);
}

// DECOMP-MATCHED func_0803788C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_0803788C { s32 a; s32 b; s32 c; };

s32 func_0803788C(s32 arg0) {
    s32 t;
    struct Params_func_0803788C w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 0; w.b = 8; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 2, 0x1b);
}

// DECOMP-MATCHED func_080379D8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_080379D8 { s32 a; s32 b; s32 c; };

s32 func_080379D8(s32 arg0) {
    s32 t;
    struct Params_func_080379D8 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 0; w.b = 8; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 2, 0x1b);
}

// DECOMP-MATCHED func_08039A30 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32);              /* extern */

struct Params_func_08039A30 { s32 a; s32 b; s32 c; };

s32 func_08039A30(s32 arg0) {
    s32 t;
    struct Params_func_08039A30 w;
    volatile u8 flag;

    t = __builtin_new(0x8C);
    w.a = 0; w.b = 8; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 2, 0x1b);
}

// DECOMP-MATCHED func_080378B8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, s32 *); /* extern */
s32 func_080378EC(void *, s32);                     /* extern */
s32 func_080A198C(s32 *);                               /* extern */

typedef struct GenObj {
    u8 _pad0[34];
    u16 unk22;
} GenObj;
void func_080378B8(GenObj *arg0) {
    s32 sp[2];
    s32 t;

    func_080A198C(&sp[0]);
    SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp[0]);
    t = func_080378EC(arg0, 0);
    if (arg0->unk22 != t) {
        SetAnim__12AActorEntityUi(arg0, t);
    }
}

// DECOMP-MATCHED func_08037A04 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, s32 *); /* extern */
s32 func_08037A38(void *, s32);                     /* extern */
s32 func_080A19EC(s32 *);                               /* extern */

typedef struct GenObj {
    u8 _pad0[34];
    u16 unk22;
} GenObj;
void func_08037A04(GenObj *arg0) {
    s32 sp[2];
    s32 t;

    func_080A19EC(&sp[0]);
    SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp[0]);
    t = func_08037A38(arg0, 0);
    if (arg0->unk22 != t) {
        SetAnim__12AActorEntityUi(arg0, t);
    }
}

/* ATTEMPT-NOTE opencode: pola 378B8 (sp-array + t-var); sisa adds-copy. */

// DECOMP-MATCHED func_08037628 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08037628(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}

// DECOMP-MATCHED func_080377D4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_080377D4(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}

// DECOMP-MATCHED func_080378FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_080378FC(s32 arg0, u32 arg1) {
    switch (arg1) {
    default:
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
        return 0;
    case 1:
        return 0x8000;
    case 2:
    case 11:
        return 0x10000;
    }
}

// DECOMP-MATCHED func_08037A48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08037A48(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}

// DECOMP-MATCHED func_08037E18 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 __7AEntityP10GameObjectRC8Location(void *, s32, s32 *); /* extern */
s32 func_0800FFE0(s32 *, s32);                          /* extern */
extern s32 vtable_unk_080E73FC;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
    s32 unk18;
} GenObj;
void *func_08037E18(GenObj *arg0, s32 arg1, s32 arg2) {
s32 sp0[2];

    func_0800FFE0(sp0, arg2);
    __7AEntityP10GameObjectRC8Location(arg0, arg1, sp0);
    arg0->unk14 = &vtable_unk_080E73FC;
    arg0->unk18 = arg2;
    return arg0;
}
