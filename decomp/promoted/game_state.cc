
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
