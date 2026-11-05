// DECOMP-MATCHED func_080D0C10 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj { u8 _pad0[52]; s32 unk34; s32 unk38; } GenObj;
extern GenObj *gUnk_03000420;
s32 func_080D0C10(void) {
    s32 var_r2;

    var_r2 = 0;
    if (gUnk_03000420->unk34 == gUnk_03000420->unk38) {
        var_r2 = 1;
    }
    return var_r2;
}
