// DECOMP-MATCHED func_080140F4 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid140F4 { u8 _pad0[168]; void **unkA8; } Mid140F4;
typedef struct GenObj { u8 _pad0[4]; Mid140F4 *unk4; } GenObj;
void func_080140F4(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x80);
    fn();
}
