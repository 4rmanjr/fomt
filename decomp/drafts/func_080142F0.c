// DECOMP-MATCHED func_080142F0 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Inner142F0 { u8 _pad0[140]; void *unk8C; } Inner142F0;
typedef struct GenObj {
    u8 _pad0[4];
    Inner142F0 *unk4;
} GenObj;
void func_080142F0(GenObj *arg0) {
    ((u8 *)arg0->unk4->unk8C)[0x34C4] = 1;
}
