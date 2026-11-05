
// DECOMP-MATCHED func_08010E48 (dari game_state.s; cek manusia sebelum ke src/)
u32 func_08010E48(u8 *arg0) {
    return (u32) (*arg0 << 0x1F) >> 0x1F;
}

// DECOMP-MATCHED func_08010E50 (dari game_state.s; cek manusia sebelum ke src/)
u32 func_08010E50(u8 *arg0) {
    return (u32) (*arg0 << 0x1E) >> 0x1F;
}

// DECOMP-MATCHED func_08010E58 (dari game_state.s; cek manusia sebelum ke src/)
u32 func_08010E58(u8 *arg0) {
    return (u32) (*arg0 << 0x1D) >> 0x1F;
}

// DECOMP-MATCHED func_08010E60 (dari game_state.s; cek manusia sebelum ke src/)
u32 func_08010E60(u8 *arg0) {
    return (u32) (*arg0 << 0x1C) >> 0x1F;
}

// DECOMP-MATCHED func_08010F04 (dari game_state.s; cek manusia sebelum ke src/)
u32 func_08010F04(u8 *arg0) {
    return (u32) (*arg0 << 0x1B) >> 0x1F;
}

// DECOMP-MATCHED func_08010F24 (dari game_state.s; cek manusia sebelum ke src/)
void func_08010F24(u8 *arg0) {
    *arg0 |= 1;
}

// DECOMP-MATCHED func_08010F30 (dari game_state.s; cek manusia sebelum ke src/)
void func_08010F30(u8 *arg0) {
    *arg0 |= 2;
}

// DECOMP-MATCHED func_08010F3C (dari game_state.s; cek manusia sebelum ke src/)
void func_08010F3C(u8 *arg0) {
    *arg0 |= 4;
}

// DECOMP-MATCHED func_08010F48 (dari game_state.s; cek manusia sebelum ke src/)
void func_08010F48(u8 *arg0) {
    *arg0 |= 8;
}

// DECOMP-MATCHED func_08011458 (dari game_state.s; cek manusia sebelum ke src/)
void func_08011458(u8 *arg0) {
    *arg0 |= 0x10;
}

// DECOMP-MATCHED func_0801151C (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0801151C(s32 *arg0) {
    return *arg0;
}

// DECOMP-MATCHED func_08011540 (dari game_state.s; cek manusia sebelum ke src/)
void func_08011540(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

// DECOMP-MATCHED func_08012218 (dari game_state.s; cek manusia sebelum ke src/)
void func_08012218(void) {

}

// DECOMP-MATCHED func_080124C4 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08008DE8();                                  /* extern */

void func_080124C4(void) {
    func_08008DE8();
}

// DECOMP-MATCHED func_08011520 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_08011520(GenObj *arg0) {
    return arg0->unk4;
}

// DECOMP-MATCHED func_08011550 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_08011550(GenObj *arg0) {
    if (arg0->unk4 == arg0->unk0) {
        arg0->unk0 = 0x10;
    }
    arg0->unk4 = 0x10;
}

// DECOMP-MATCHED func_08011FE8 (dari game_state.s; cek manusia sebelum ke src/)
s32 ClearUnk__12ScriptEngine(s32);                    /* extern */
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 gUnk_0300040C;
extern s32 vtable_unk_080E5E64;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    struct GenObj *unk8;
    u8 _padC[232];
    struct GenObj *unkF4;
} GenObj;
void func_08011FE8(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E5E64;
    ClearUnk__12ScriptEngine(gUnk_0300040C + 8);
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unkF4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_08012454 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08008BE0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_08012454(GenObj *arg0) {
    func_08008BE0(arg0->unk4 + 0xBC);
}

// DECOMP-MATCHED func_08012658 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08050D74();                                  /* extern */
s32 func_080D7F60(void *);                            /* extern */
s32 func_080D7F74(void *);                            /* extern */
s32 func_080D7F88(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[12];
    struct GenObj *unkAC;
} GenObj;
void func_08012658(GenObj *arg0) {
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    if (temp_r4->unkAC != 0) {
        func_08050D74();
        func_080D7F88(temp_r4);
        func_080D7F74(temp_r4);
        func_080D7F60(temp_r4);
        temp_r4->unk9C = 0xF;
    }
}

// DECOMP-MATCHED func_08012B04 (dari game_state.s; cek manusia sebelum ke src/)
s32 LoadById__12ScriptEngineii(s32);                  /* extern */
s32 func_080D7F3C(s32);                               /* extern */
extern s32 gUnk_0300040C;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_08012B04(GenObj *arg0) {
    s32 temp_r4;

    temp_r4 = arg0->unk4;
    LoadById__12ScriptEngineii(gUnk_0300040C + 8);
    func_080D7F3C(temp_r4);
}

// DECOMP-MATCHED func_0801468C (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_0801468C(GenObj *arg0) {
    return arg0->unk4 + 0xD0;
}

// DECOMP-MATCHED func_0801DD18 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A6138(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DD18(GenObj *arg0) {
    func_080A6138(arg0->unk4);
}

// DECOMP-MATCHED func_0801DD24 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A6194(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DD24(GenObj *arg0) {
    func_080A6194(arg0->unk4);
}

// DECOMP-MATCHED func_0801DDCC (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0809C5B4(s32, s32);                          /* extern */
s32 func_080AA850(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[4144];
    s32 unk1038;
} GenObj;
void func_0801DDCC(GenObj *arg0, s32 arg1) {
    func_0809C5B4(arg0->unk1038 + 0x34D8, arg1);
    func_080AA850(arg0->unk4, arg1);
}

// DECOMP-MATCHED func_0801DDF8 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0809C5D0(s32, s32);                          /* extern */
s32 func_080AA850(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[4144];
    s32 unk1038;
} GenObj;
void func_0801DDF8(GenObj *arg0, s32 arg1) {
    func_0809C5D0(arg0->unk1038 + 0x34D8, arg1);
    func_080AA850(arg0->unk4, arg1);
}

// DECOMP-MATCHED func_0801DE3C (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080AA8BC(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DE3C(GenObj *arg0) {
    func_080AA8BC(arg0->unk4);
}

// DECOMP-MATCHED func_0801FD60 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A59BC(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801FD60(GenObj *arg0) {
    func_080A59BC(arg0->unk4);
}

// DECOMP-MATCHED func_0801FD6C (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A5960(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801FD6C(GenObj *arg0) {
    func_080A5960(arg0->unk4);
}

// DECOMP-MATCHED func_08010F0C (dari game_state.s; cek manusia sebelum ke src/)
u32 func_08010F0C(s32 *arg0) {
    return (u32) (*arg0 << 0xE) >> 0x1B;
}

// DECOMP-MATCHED func_0801DD30 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A61F0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DD30(GenObj *arg0) {
    func_080A61F0(arg0->unk4);
}

// DECOMP-MATCHED func_0801DE24 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A63B8(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DE24(GenObj *arg0) {
    func_080A63B8(arg0->unk4);
}

// DECOMP-MATCHED func_08011498 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[2];
    u16 unk2;
} GenObj;
s32 func_08011498(GenObj *arg0, u32 arg1) {
    u32 var_r1;
    u16 temp_r2;
    u32 mask;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk2;
    if ((u32) ((u32) (temp_r2 << 0x17) >> 0x19) < var_r1) {
        var_r1 &= 0x7F;
        var_r1 *= 4;
        mask = 0xFFFFFE03;
        mask &= temp_r2;
        arg0->unk2 = var_r1 | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE opencode: b via andeq/muleq (r1) + mask-var andeq (dst r0): ands r0,r2 + orrs r0,r1. */

// DECOMP-MATCHED func_080114C8 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
s32 func_080114C8(GenObj *arg0, u32 arg1) {
    u32 var_r1;
    u8 temp_r2;
    s32 mask;
    s32 seven = 0x7F;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk3;
    if ((u32) ((u32) (temp_r2 << 0x19) >> 0x1A) < var_r1) {
        var_r1 &= 0x3F;
        var_r1 *= 2;
        mask = seven;
        mask = 0 - mask;
        mask &= temp_r2;
        arg0->unk3 = var_r1 | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE opencode: seven-var cegah fold subs (movs+negs); mask-var andeq dst r0. */

// DECOMP-MATCHED func_0801A054 (dari game_state.s; cek manusia sebelum ke src/)
void *GetMapData(s32);                              /* extern */
s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_0803A8A4(u32, s32, s32, s32, s32);         /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    u16 unk8;
    u16 unkA;
    u8 _padC[12];
    s32 unk18;
    s32 unk1C;
    u16 unk20;
    u16 unk22;
    u8 _pad26[8];
    struct GenObj *unk2C;
    u8 _pad30[4104];
    s32 unk1038;
    u8 _pad103C[20];
    s32 unk1050;
} GenObj;
void *func_0801A054(GenObj *arg0, GenObj *arg1, u32 arg2) {
    s32 sp4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    u16 temp_r5_2;
    u16 temp_r6_2;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r4;

    if (arg2 > 0x233U) {
        arg0->unk0 = 0;
        arg0->unk4 = 0;
        arg0->unk8 = 0U;
        arg0->unkA = 0U;
    } else {
        temp_r0 = arg1->unk4;
        sp4 = temp_r0->unk0;
        if ((arg2 == 2) && (sp4 != 2)) {
            s32 v0 = arg1->unk1050;
            u16 a = 0x80;
            u16 b = 0x58;
            arg0->unk0 = v0;
            arg0->unk4 = 0;
            arg0->unk8 = a;
            arg0->unkA = b;
        } else {
            if (sp4 == arg2) {
                var_r0 = temp_r0->unk4;
            } else {
                u8 *b1038 = (u8 *)arg1 + 0x1038;
                temp_r8 = func_0800E324(*(s32 *)b1038 + 0x10);
                temp_r6 = GetUpgradeLevel__C9FarmHouse(*(s32 *)b1038 + (0xFA << 1));
                temp_r5 = GetUpgradeLevel__C4Coop(*(s32 *)b1038 + (0x82 << 3));
                var_r0 = func_0803A8A4(arg2, temp_r8, temp_r6, temp_r5, GetUpgradeLevel__C4Barn(*(s32 *)b1038 + (0xBE << 3)));
            }
            temp_r0_2 = GetMapData(var_r0);
            temp_r5_2 = temp_r0_2->unk20;
            temp_r6_2 = temp_r0_2->unk22;
            if (sp4 == arg2) {
                temp_r4 = arg1->unk4;
                GetMapData(temp_r4->unk4);
                var_r1 = 0;
                var_r0_2 = temp_r4->unk2C;
            } else {
                var_r1 = temp_r0_2->unk1C;
                var_r0_2 = temp_r0_2->unk18;
            }
            arg0->unk0 = var_r0_2;
            arg0->unk4 = var_r1;
            arg0->unk8 = temp_r5_2;
            arg0->unkA = temp_r6_2;
        }
    }
    return arg0;
}

/* ATTEMPT-NOTE opencode: layout struct tepat (_padC[12], _pad26[8]) agar offset pool 0x1038/0x1050 pas; u16 member; shift-konstanta. */

// DECOMP-MATCHED func_08012BAC (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    s32 unk9C;
    u8 _padA0[64];
    u16 unkE0;
} GenObj;
void func_08012BAC(GenObj *arg0, s16 arg1) {
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r0->unkE0 = arg1;
    temp_r0->unk9C = 0x15;
}

/* ATTEMPT-NOTE opencode: unkE0 u16 (strh). */

// DECOMP-MATCHED func_08010348 (dari game_state.s; cek manusia sebelum ke src/)
s32 rand();                                         /* extern */

s32 func_08010348(void) {
    s32 r;
    do {
        r = rand();
    } while (r == 0);
    return r;
}

// DECOMP-MATCHED func_08011510 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 unk8;
} GenObj;
void func_08011510(GenObj *arg0) {
    arg0->unk0 = 0x10;
    arg0->unk4 = 0x10;
    arg0->unk8 = 0;
}

// DECOMP-MATCHED func_080167CC (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08008CD0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080167CC(GenObj *arg0) {
    return func_08008CD0(arg0->unk4 + 0xBC);
}

// DECOMP-MATCHED func_0801A8C0 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0801A8C0(s32 arg0, u32 arg1) {
    if (arg1 <= 5U) {
        return 3;
    } else if (arg1 <= 0xBU) {
        return 0;
    } else if (arg1 > 0x11U) {
        return 2;
    }
    return 1;
}

// DECOMP-MATCHED func_08010F1C (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
u32 func_08010F1C(GenObj *arg0) {
    return (u32) (arg0->unk3 << 0x19) >> 0x1A;
}

// DECOMP-MATCHED func_08011544 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 unk8;
} GenObj;
void func_08011544(GenObj *arg0) {
    arg0->unk4 = (s32) arg0->unk0;
    arg0->unk8 = 2;
}

// DECOMP-MATCHED func_08012AA4 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0803B6B8(s32, s32, s32 *);                     /* extern */
s32 func_0804EC84(s32, s32 *, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[168];
    struct GenObj *unkB0;
} GenObj;
void func_08012AA4(GenObj *arg0, s32 arg1, s32 arg2) {
u8 sp0[0x34];
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    func_0804EC84(arg2, &sp0, 0);
    func_0803B6B8(temp_r4->unkB0, arg1, &sp0);
}

// DECOMP-MATCHED func_08012ADC (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0803B6B8(s32, s32, s32 *);                     /* extern */
s32 func_0804EC84(s32, s32 *, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[168];
    struct GenObj *unkB0;
} GenObj;
void func_08012ADC(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
u8 sp0[0x34];
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    func_0804EC84(arg2, &sp0, arg3);
    func_0803B6B8(temp_r4->unkB0, arg1, &sp0);
}

// DECOMP-MATCHED func_08011524 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 unk8;
} GenObj;
s32 func_08011524(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 != 0x10) && (arg0->unk8 == 0)) {
        var_r2 = 1;
    }
    return var_r2;
}

// DECOMP-MATCHED func_080114F8 (dari game_state.s; cek manusia sebelum ke src/)
void func_080114F8(u8 *arg0) {
    s32 v;
    s32 w;
    w = *arg0;
    v = -2;
    v &= w;
    v |= 2;
    v |= 4;
    v |= 8;
    *arg0 = v;
}

// DECOMP-MATCHED func_0801DB44 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0801468C(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4180];
    s32 unk1054;
} GenObj;
s32 func_0801DB44(GenObj *arg0) {
    return func_0801468C(arg0->unk1054);
}

// DECOMP-MATCHED func_08011568 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 unk8;
} GenObj;
void func_08011568(GenObj *arg0) {
    if ((arg0->unk0 != 0x10) && (arg0->unk4 != 0x10) && (arg0->unk8 != 0)) {
        arg0->unk8--;
    }
}

// DECOMP-MATCHED func_0801DCA8 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct C24 {
    u8 _pad0[8];
    void (*unk8)(void *, s32);
} C24;
typedef struct O24 {
    u8 _pad0[0x24];
    C24 *unk24;
} O24;
typedef struct GenObj {
    u8 _pad0[0x1058];
    O24 *unk1058;
} GenObj;
void func_0801DCA8(GenObj *arg0) {
    O24 **p = &arg0->unk1058;
    O24 *v;
    O24 *zero = 0;

    v = *p;
    if ((zero != v) && (v != 0)) {
        v->unk24->unk8(v, 3);
    }
    *p = zero;
}

// DECOMP-MATCHED func_0801140C (dari game_state.s; cek manusia sebelum ke src/)
s32 GetValueShipped__C11ShippingBin(s32);           /* extern */
s32 ResetValueShipped__11ShippingBin(s32);            /* extern */
s32 func_0809ABD8(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[13509];
    u8 unk34C5;
} GenObj;
u32 func_0801140C(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r7;

    temp_r7 = (s32)((u8 *)arg0 + 0x54);
    temp_r0 = GetValueShipped__C11ShippingBin(temp_r7);
    temp_r6 = (s32)((u8 *)arg0 + 0x1AA8);
    func_0809ABD8(temp_r6, temp_r0);
    if (arg0->unk34C5 != 0) {
        func_0809ABD8(temp_r6, temp_r0);
        arg0->unk34C5 = 0U;
    }
    ResetValueShipped__11ShippingBin(temp_r7);
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}

// DECOMP-MATCHED func_0801274C (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08050E74();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[164];
    s32 unkAC;
} GenObj;
void func_0801274C(GenObj *arg0) {
    if (arg0->unk4->unkAC != 0) {
        func_08050E74();
    }
}

// DECOMP-MATCHED func_0801278C (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08050E5C();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[164];
    s32 unkAC;
} GenObj;
void func_0801278C(GenObj *arg0) {
    if (arg0->unk4->unkAC != 0) {
        func_08050E5C();
    }
}

// DECOMP-MATCHED func_0801284C (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08050E8C();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[164];
    s32 unkAC;
} GenObj;
void func_0801284C(GenObj *arg0) {
    if (arg0->unk4->unkAC != 0) {
        func_08050E8C();
    }
}

// DECOMP-MATCHED func_08016784 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08008BF8(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_08016784(GenObj *arg0) {
    s32 temp_r4;

    temp_r4 = arg0->unk4 + 0xBC;
    if ((func_08008CD0(temp_r4) << 0x18) == 0) {
        return 0;
    }
    func_08008BF8(temp_r4, 5);
    return 1;
}

// DECOMP-MATCHED func_08011464 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08011464(s32 *arg0, u32 arg1) {
    register s32 *ptr __asm__ ("r4") = arg0;
    register u32 var_r2 __asm__ ("r2") = arg1;
    register s32 temp_r3 __asm__ ("r3");
    register s32 shift __asm__ ("r1");
    s32 mask;

    if (var_r2 > 0x63U) {
        var_r2 = 0x63;
    }
    temp_r3 = *ptr;
    if ((u32) ((u32) (temp_r3 << 0xE) >> 0x1B) < var_r2) {
        shift = 0x1F;
        shift &= var_r2;
        shift <<= 0xD;
        mask = 0xFFFC1FFF;
        mask &= temp_r3;
        *ptr = shift | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE worker-11464: register-pin r4/r2/r3/r1 agar push{r4,lr}+regalloc pas; pola store tiru 11498 (shift-var, mask-var). */

// DECOMP-MATCHED func_0801FD3C (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A5A9C(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_0801FD3C(GenObj *arg0) {
    return func_080A5A9C(arg0->unk4);
}

// DECOMP-MATCHED func_0801FD0C (dari game_state.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    u8 _padC[8];
    struct GenObj *unk14;
} GenObj;
void func_0801FD0C(s32 arg0, s32 arg1) {
    GenObj **pp;
    GenObj *obj;

    arg0 += 8;
    pp = (GenObj **)(arg0 + arg1 * 4);
    obj = *pp;
    if (obj != 0) {
        ((void (*)(GenObj *, ...))(obj->unk14->unk8))(obj, 3);
        *pp = 0;
    }
}

// DECOMP-MATCHED func_0801FB7C (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Fb7cV Fb7cV;
typedef struct Fb7cObj Fb7cObj;
struct Fb7cV {
    void *f0;
    void *f4;
    s32 f8;
};
struct Fb7cObj {
    Fb7cV *vtab;
};

void *__builtin_new(s32);                        /* extern */
s32 func_080A6474(void *, s32);                  /* extern */
/* NOTE: actual callee takes 5 args (u8 arg4); the 5th outgoing stack slot
 * aliases fr.s0 below, so the call is declared with 4 (value already in place). */
Fb7cObj *func_080175B4(void *, s32, s32, s32 *);  /* extern */

void ***func_0801FB7C(void ***arg0, s32 arg1, s32 arg2, u8 arg3) {
    struct FR { u8 s0; Fb7cObj *s4; s32 s8; Fb7cObj **sC; Fb7cObj *s10; } fr;
    Fb7cObj *nn;
    u8 *ps0;
    s32 *p8;
    Fb7cObj *chk2;
    Fb7cObj **qq;
    Fb7cObj **tmp;

    fr.s8 = func_080A6474(__builtin_new(0xBC), arg1);
    nn = (Fb7cObj *)__builtin_new(0x10CC);
    p8 = &fr.s8;
    ps0 = (u8 *)&fr;
    *ps0 = arg3;
    fr.s4 = func_080175B4(nn, arg1, arg2, p8);
    fr.sC = &fr.s4;
    fr.s10 = fr.s4;
    chk2 = fr.s4;
    qq = &fr.s4;
    /* hide &fr.s4 from CSE so the s4-home store and the reload-check survive */
    __asm__ ("" : "+r" (qq));
    /* exact copy/zero/store triple; "memory" keeps the s4 reload-check */
    __asm__ volatile ("add %0, %1, #0\nmovs %1, #0\nstr %1, [%0]" : "=&l" (tmp) : "r" (qq) : "memory");
    *arg0 = (void **)chk2;
    if (fr.s4 != 0) {
        ((void (*)(void *, s32))(fr.s4->vtab->f8))(fr.s4, 3);
    }
    return arg0;
}

// DECOMP-MATCHED func_0801F5F0 (dari game_state.s; cek manusia sebelum ke src/)
s32 SetVaseArticleId__9FarmHouseUi(s32, s32);         /* extern */
s32 func_0801F3E4(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4152];
    s32 unk1038;
} GenObj;
void func_0801F5F0(GenObj *arg0, s32 arg1) {
    SetVaseArticleId__9FarmHouseUi((u8 *)arg0->unk1038 + (0xFA << 1), arg1);
    func_0801F3E4(arg0);
}

// DECOMP-MATCHED func_0801FAC8 (dari game_state.s; cek manusia sebelum ke src/)
void *__builtin_new(s32);                             /* extern */
s32 func_0803AEA0(s32, void *, s32, s32, s32);      /* extern */
s32 func_0803B0A8(s32, s32);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 *unk4;
    s32 unk8;
    u8 _padC[8];
    struct GenObj *unk14;
    u8 _pad18[0x1064];
    s32 unk107C;
} GenObj;
void func_0801FAC8(GenObj *arg0, s32 arg1) {
    s32 temp_r5;
    s32 var_r7;
    void *var_r8;
    u32 var_r3;
    void **var_r1;
    GenObj *temp_r0;
    void **temp_r2;
    s32 res;
    s32 nv;
    s32 *slot;

    var_r8 = 0;
    if (arg1 != 0) {
        if (arg1 == 1) {
            var_r8 = (void *)((u8 *)arg0 + 0xED4);
        }
    } else {
        var_r8 = (void *)((u8 *)arg0 + 0xEA4);
    }
    if (var_r8 != 0) {
        var_r7 = 0x20;
        temp_r5 = *arg0->unk4;
        if (temp_r5 == 2) {
            var_r3 = 0;
            var_r1 = (void **)((u8 *)arg0 + 8);
            temp_r2 = (void **)((u8 *)arg0 + 0x198);
            if (var_r1 != temp_r2) {
                do {
                    temp_r0 = (GenObj *)*var_r1;
                    if ((temp_r0 != 0) && (*(u16 *)((u8 *)temp_r0 + 4) == temp_r5)) {
                        var_r3 += 1;
                    }
                    var_r1 += 1;
                } while (var_r1 != temp_r2);
            }
            if ((u32) (var_r3 + 0xA) > 0xAU) {
                if (var_r3 <= 0x15U) {
                    var_r7 = 0x20 - var_r3;
                } else {
                    var_r7 = 0xA;
                }
            }
        }
        /* res menahan hasil call di r0 melewati hitung-alamat slot;
           salinan nv = res yg memaksa urutan emisi ldr/adds/adds */
        res = func_0803AEA0((s32)__builtin_new(0x46C), arg0, (s32)var_r8, arg1, var_r7);
        slot = &arg0->unk107C;
        nv = res;
        if ((nv != *slot) && (*slot != 0)) {
            func_0803B0A8(*slot, 3);
        }
        *slot = nv;
    }
}

// DECOMP-MATCHED func_0801FAB8 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vtbl1FAB8 {
    u8 _pad0[0x44];
    s32 (*unk44)(void *, s32);
} Vtbl1FAB8;
typedef struct GenObj {
    Vtbl1FAB8 *unk0;
} GenObj;
s32 func_0801FAB8(GenObj *arg0, s32 arg1) {
    return arg0->unk0->unk44(arg0, arg1);
}

// DECOMP-MATCHED func_0801FAA8 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vtbl1FAA8 {
    u8 _pad0[0x40];
    s32 (*unk40)(void *, s32);
} Vtbl1FAA8;
typedef struct GenObj {
    Vtbl1FAA8 *unk0;
} GenObj;
s32 func_0801FAA8(GenObj *arg0, s32 arg1) {
    return arg0->unk0->unk40(arg0, arg1);
}

// DECOMP-MATCHED func_08011588 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_08011588(u8 *arg0, s32 arg1) {
    s32 sum = 0;
    u8 *p;
    s32 n;
    if ((arg0 != 0) && (arg1 != 0)) {
        p = arg0;
        n = arg1;
        do {
            sum += *p;
            p++;
            n--;
        } while (n != 0);
    }
    return sum;
}

// DECOMP-MATCHED func_08012ACC (dari game_state.s; cek manusia sebelum ke src/)
s32 func_0803B6B8(s32);                               /* extern */

typedef struct Inner12ACC { u8 _pad0[176]; s32 unkB0; } Inner12ACC;
typedef struct GenObj {
    u8 _pad0[4];
    Inner12ACC *unk4;
} GenObj;
void func_08012ACC(GenObj *arg0) {
    func_0803B6B8(arg0->unk4->unkB0);
}

// DECOMP-MATCHED func_080142F0 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Inner142F0 { u8 _pad0[140]; void *unk8C; } Inner142F0;
typedef struct GenObj {
    u8 _pad0[4];
    Inner142F0 *unk4;
} GenObj;
void func_080142F0(GenObj *arg0) {
    ((u8 *)arg0->unk4->unk8C)[0x34C4] = 1;
}

// DECOMP-MATCHED func_08014304 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Inner14304 { u8 _pad0[140]; void *unk8C; } Inner14304;
typedef struct GenObj {
    u8 _pad0[4];
    Inner14304 *unk4;
} GenObj;
void func_08014304(GenObj *arg0) {
    ((u8 *)arg0->unk4->unk8C)[0x34C4] = 0;
}

// DECOMP-MATCHED func_08014034 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid14034 { u8 _pad0[168]; void **unkA8; } Mid14034;
typedef struct GenObj { u8 _pad0[4]; Mid14034 *unk4; } GenObj;
void func_08014034(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x84);
    fn();
}

// DECOMP-MATCHED func_0801DD78 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080A601C(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DD78(GenObj *arg0) {
    func_080A601C(arg0->unk4);
}

// DECOMP-MATCHED func_0801DE48 (dari game_state.s; cek manusia sebelum ke src/)
s32 func_080AA8DC(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_0801DE48(GenObj *arg0) {
    func_080AA8DC(arg0->unk4);
}

// DECOMP-MATCHED func_08014064 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid64 { u8 _pad0[168]; void **unkA8; } Mid64;
typedef struct GenObj { u8 _pad0[4]; Mid64 *unk4; } GenObj;
void func_08014064(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x8C);
    fn();
}

// DECOMP-MATCHED func_08014094 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid94 { u8 _pad0[168]; void **unkA8; } Mid94;
typedef struct GenObj { u8 _pad0[4]; Mid94 *unk4; } GenObj;
void func_08014094(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x94);
    fn();
}

// DECOMP-MATCHED func_080140AC (dari game_state.s; cek manusia sebelum ke src/)
typedef struct MidAC { u8 _pad0[168]; void **unkA8; } MidAC;
typedef struct GenObj { u8 _pad0[4]; MidAC *unk4; } GenObj;
void func_080140AC(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x98);
    fn();
}

// DECOMP-MATCHED func_080140C4 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid140C4 { u8 _pad0[168]; void **unkA8; } Mid140C4;
typedef struct GenObj { u8 _pad0[4]; Mid140C4 *unk4; } GenObj;
void func_080140C4(GenObj *arg0) {
    register void *p asm("r2") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r2");
    fn = *(void (**)(void))((u8 *)p + 0x9C);
    fn();
}

// DECOMP-MATCHED func_080140DC (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid140DC { u8 _pad0[168]; void **unkA8; } Mid140DC;
typedef struct GenObj { u8 _pad0[4]; Mid140DC *unk4; } GenObj;
void func_080140DC(GenObj *arg0) {
    register void *p asm("r2") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r2");
    fn = *(void (**)(void))((u8 *)p + 0xA0);
    fn();
}

// DECOMP-MATCHED func_080140F4 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid140F4 { u8 _pad0[168]; void **unkA8; } Mid140F4;
typedef struct GenObj { u8 _pad0[4]; Mid140F4 *unk4; } GenObj;
void func_080140F4(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x80);
    fn();
}

// DECOMP-MATCHED func_08016BDC (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid08016BDC { u8 _pad0[168]; void **unkA8; } Mid08016BDC;
typedef struct GenObj { u8 _pad0[4]; Mid08016BDC *unk4; } GenObj;
void func_08016BDC(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0xFC);
    fn();
}

// DECOMP-MATCHED func_080142D4 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt080142D4 {
    u8 _pad0[0x11C];
    void (*unk11C)(void);
} Vt080142D4;

typedef struct H080142D4 {
    Vt080142D4 *unk0;
} H080142D4;

typedef struct M080142D4 {
    u8 _pad0[0xA8];
    H080142D4 *unkA8;
} M080142D4;

typedef struct GenObj080142D4 {
    u8 _pad0[4];
    M080142D4 *unk4;
} GenObj080142D4;

void func_080142D4(GenObj080142D4 *arg0) {
    register Vt080142D4 *vt __asm__("r1");
    register u32 off __asm__("r2");
    register void (*fn)(void) __asm__("r1");
    H080142D4 *h;

    h = *(H080142D4 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x11C;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_08014694 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt08014694 {
    u8 _pad0[0x150];
    void (*unk150)(void);
} Vt08014694;

typedef struct H08014694 {
    Vt08014694 *unk0;
} H08014694;

typedef struct M08014694 {
    u8 _pad0[0xA8];
    H08014694 *unkA8;
} M08014694;

typedef struct GenObj08014694 {
    u8 _pad0[4];
    M08014694 *unk4;
} GenObj08014694;

void func_08014694(GenObj08014694 *arg0) {
    register Vt08014694 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H08014694 *h;

    h = *(H08014694 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x150;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_08016BA4 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt08016BA4 {
    u8 _pad0[0x10C];
    void (*unk10C)(void);
} Vt08016BA4;

typedef struct H08016BA4 {
    Vt08016BA4 *unk0;
} H08016BA4;

typedef struct M08016BA4 {
    u8 _pad0[0xA8];
    H08016BA4 *unkA8;
} M08016BA4;

typedef struct GenObj08016BA4 {
    u8 _pad0[4];
    M08016BA4 *unk4;
} GenObj08016BA4;

void func_08016BA4(GenObj08016BA4 *arg0) {
    register Vt08016BA4 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H08016BA4 *h;

    h = *(H08016BA4 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x10C;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_080146B0 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt080146B0 {
    u8 _pad0[0x154];
    void (*unk0x154)(void);
} Vt080146B0;

typedef struct H080146B0 {
    Vt080146B0 *unk0;
} H080146B0;

typedef struct M080146B0 {
    u8 _pad0[0xA8];
    H080146B0 *unkA8;
} M080146B0;

typedef struct GenObj080146B0 {
    u8 _pad0[4];
    M080146B0 *unk4;
} GenObj080146B0;

void func_080146B0(GenObj080146B0 *arg0) {
    register Vt080146B0 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H080146B0 *h;

    h = *(H080146B0 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x154;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_08016BF4 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt08016BF4 {
    u8 _pad0[0x100];
    void (*unk0x100)(void);
} Vt08016BF4;

typedef struct H08016BF4 {
    Vt08016BF4 *unk0;
} H08016BF4;

typedef struct M08016BF4 {
    u8 _pad0[0xA8];
    H08016BF4 *unkA8;
} M08016BF4;

typedef struct GenObj08016BF4 {
    u8 _pad0[4];
    M08016BF4 *unk4;
} GenObj08016BF4;

void func_08016BF4(GenObj08016BF4 *arg0) {
    register Vt08016BF4 *vt __asm__("r1");
    register u32 off __asm__("r2");
    register void (*fn)(void) __asm__("r1");
    H08016BF4 *h;

    h = *(H08016BF4 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x100;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_08016C10 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt08016C10 {
    u8 _pad0[0x104];
    void (*unk0x104)(void);
} Vt08016C10;

typedef struct H08016C10 {
    Vt08016C10 *unk0;
} H08016C10;

typedef struct M08016C10 {
    u8 _pad0[0xA8];
    H08016C10 *unkA8;
} M08016C10;

typedef struct GenObj08016C10 {
    u8 _pad0[4];
    M08016C10 *unk4;
} GenObj08016C10;

void func_08016C10(GenObj08016C10 *arg0) {
    register Vt08016C10 *vt __asm__("r1");
    register u32 off __asm__("r2");
    register void (*fn)(void) __asm__("r1");
    H08016C10 *h;

    h = *(H08016C10 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x104;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_080142B8 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt080142B8 {
    u8 _pad0[0x118];
    void (*unk0x118)(void);
} Vt080142B8;

typedef struct H080142B8 {
    Vt080142B8 *unk0;
} H080142B8;

typedef struct M080142B8 {
    u8 _pad0[0xA8];
    H080142B8 *unkA8;
} M080142B8;

typedef struct GenObj080142B8 {
    u8 _pad0[4];
    M080142B8 *unk4;
} GenObj080142B8;

void func_080142B8(GenObj080142B8 *arg0) {
    register Vt080142B8 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H080142B8 *h;

    h = *(H080142B8 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x118;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_08016BC0 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt08016BC0 {
    u8 _pad0[0x110];
    void (*unk0x110)(void);
} Vt08016BC0;

typedef struct H08016BC0 {
    Vt08016BC0 *unk0;
} H08016BC0;

typedef struct M08016BC0 {
    u8 _pad0[0xA8];
    H08016BC0 *unkA8;
} M08016BC0;

typedef struct GenObj08016BC0 {
    u8 _pad0[4];
    M08016BC0 *unk4;
} GenObj08016BC0;

void func_08016BC0(GenObj08016BC0 *arg0) {
    register Vt08016BC0 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H08016BC0 *h;

    h = *(H08016BC0 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x110;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_08016EF0 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt08016EF0 {
    u8 _pad0[0x164];
    void (*unk0x164)(void);
} Vt08016EF0;

typedef struct H08016EF0 {
    Vt08016EF0 *unk0;
} H08016EF0;

typedef struct M08016EF0 {
    u8 _pad0[0xA8];
    H08016EF0 *unkA8;
} M08016EF0;

typedef struct GenObj08016EF0 {
    u8 _pad0[4];
    M08016EF0 *unk4;
} GenObj08016EF0;

void func_08016EF0(GenObj08016EF0 *arg0) {
    register Vt08016EF0 *vt __asm__("r2");
    register u32 off __asm__("r3");
    register void (*fn)(void) __asm__("r2");
    H08016EF0 *h;

    h = *(H08016EF0 **)((u8 *)arg0->unk4 + 0xA8);
    vt = h->unk0;
    off = 0x164;
    __asm__ volatile("" : "+r"(off));
    fn = *(void (**)(void))((u8 *)vt + off);
    fn();
}

// DECOMP-MATCHED func_0801238C (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Vt0801238C {
    u8 _pad0[0x24];
    void (*unk24)(void);
} Vt0801238C;

typedef struct H0801238C {
    Vt0801238C *unk0;
} H0801238C;

typedef struct M0801238C {
    u8 _pad0[0xA8];
    H0801238C *unkA8;
} M0801238C;

typedef struct G0801238C {
    u8 _pad0[4];
    M0801238C *unk4;
} G0801238C;

void func_0801238C(G0801238C *arg0) {
    register Vt0801238C *vt __asm__("r4");
    register void (*fn)(void) __asm__("r4");

    vt = arg0->unk4->unkA8->unk0;
    fn = vt->unk24;
    fn();
}
