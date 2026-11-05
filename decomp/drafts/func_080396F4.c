// DECOMP-MATCHED func_080396F4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct Inner396F4 {
    u8 _pad0[18];
    u8 unk12;
} Inner396F4;
typedef struct GenObj {
    u8 _pad0[18];
    s32 unk12;
    u8 _pad16[28];
    Inner396F4 *unk34;
} GenObj;
s32 func_080396F4(void *dummy, GenObj *arg1) {
    Inner396F4 *p = arg1->unk34;
    s32 var_r1 = (p->unk12 != 0) ? 3 : 0;
    return var_r1;
}
