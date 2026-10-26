extern s32 gUnk_081078A0;

typedef struct GenObj {
    u8 _pad0[2356];
    s32 unk934;
} GenObj;
u16 func_080B3A10(GenObj *arg0) {
    return *((arg0->unk934 * 2) + &gUnk_081078A0);
}
