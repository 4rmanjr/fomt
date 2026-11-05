// DECOMP-MATCHED func_08076BE0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
typedef struct Inner76BE0 { u8 _pad0[1424]; s16 unk590; } Inner76BE0;
typedef struct GenObj {
    u8 _pad0[8];
    Inner76BE0 *unk8;
} GenObj;
void func_08076BE0(GenObj *arg0, s16 arg1) {
    arg0->unk8->unk590 = arg1;
}
