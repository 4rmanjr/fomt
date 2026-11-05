// DECOMP-MATCHED func_080522D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
} GenObj;
void func_080522D8(s32 arg0, GenObj *arg1, s32 arg2) {
    u8 *temp_r0;

    temp_r0 = (u8 *)arg0 + (arg2 * 4);
    arg1->unk0 = (u8) temp_r0[0];
    arg1->unk2 = (u16) *(u16 *)(temp_r0 + 2);
}
