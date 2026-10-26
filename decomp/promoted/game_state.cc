
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
