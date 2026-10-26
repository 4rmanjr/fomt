extern s32 gUnk_0810827C;

typedef struct GenObj {
    u8 _pad0[2436];
    s32 unk984;
} GenObj;
u16 func_080C7B64(GenObj *arg0) {
    return *((arg0->unk984 * 2) + &gUnk_0810827C);
}
