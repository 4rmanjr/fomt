// DECOMP-MATCHED func_08014094 (dari game_state.s; cek manusia sebelum ke src/)
typedef struct Mid94 { u8 _pad0[168]; void **unkA8; } Mid94;
typedef struct GenObj { u8 _pad0[4]; Mid94 *unk4; } GenObj;
void func_08014094(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x94);
    fn();
}
