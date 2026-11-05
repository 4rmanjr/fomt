// DECOMP-MATCHED func_08016BDC (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid08016BDC { u8 _pad0[168]; void **unkA8; } Mid08016BDC;
typedef struct GenObj { u8 _pad0[4]; Mid08016BDC *unk4; } GenObj;
void func_08016BDC(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0xFC);
    fn();
}
