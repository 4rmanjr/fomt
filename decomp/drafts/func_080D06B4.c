// DECOMP-MATCHED func_080D06B4 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj { u8 _pad0[20]; s32 unk14; } GenObj;
extern GenObj *gUnk_03000420;
s32 func_080D06B4(void) {
    s32 var_r1;

    var_r1 = 0;
    if (gUnk_03000420->unk14 == 0) {
        var_r1 = 1;
    }
    return var_r1;
}
