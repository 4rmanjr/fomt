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
