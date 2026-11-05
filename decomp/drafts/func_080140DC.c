// DECOMP-MATCHED func_080140DC (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid140DC { u8 _pad0[168]; void **unkA8; } Mid140DC;
typedef struct GenObj { u8 _pad0[4]; Mid140DC *unk4; } GenObj;
void func_080140DC(GenObj *arg0) {
    register void *p asm("r2") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r2");
    fn = *(void (**)(void))((u8 *)p + 0xA0);
    fn();
}
