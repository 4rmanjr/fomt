// DECOMP-MATCHED func_080140AC (dari game_state.s; cek manusia sebelum ke src/)
typedef struct MidAC { u8 _pad0[168]; void **unkA8; } MidAC;
typedef struct GenObj { u8 _pad0[4]; MidAC *unk4; } GenObj;
void func_080140AC(GenObj *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0x98);
    fn();
}
