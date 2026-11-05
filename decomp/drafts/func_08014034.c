// DECOMP-MATCHED func_08014034 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid14034 { u8 _pad0[168]; void **unkA8; } Mid14034;
typedef struct GenObj { u8 _pad0[4]; Mid14034 *unk4; } GenObj;
void func_08014034(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x84);
    fn();
}
