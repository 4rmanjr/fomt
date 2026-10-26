
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
