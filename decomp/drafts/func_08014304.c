// DECOMP-MATCHED func_08014304 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Inner14304 { u8 _pad0[140]; void *unk8C; } Inner14304;
typedef struct GenObj {
    u8 _pad0[4];
    Inner14304 *unk4;
} GenObj;
void func_08014304(GenObj *arg0) {
    ((u8 *)arg0->unk4->unk8C)[0x34C4] = 0;
}
