// DECOMP-MATCHED func_08014064 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid64 { u8 _pad0[168]; void **unkA8; } Mid64;
typedef struct GenObj { u8 _pad0[4]; Mid64 *unk4; } GenObj;
void func_08014064(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x8C);
    fn();
}
