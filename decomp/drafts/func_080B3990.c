extern s32 gUnk_08107882;

typedef struct GenObj {
    u8 _pad0[2116];
    s32 unk844;
    u8 _pad848[232];
    s32 unk930;
} GenObj;
u16 func_080B3990(GenObj *arg0) {
    return (u16) ((arg0->unk930 * 0x54) + *((arg0->unk844 * 2) + &gUnk_08107882));
}
