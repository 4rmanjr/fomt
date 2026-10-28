extern u16 gUnk_081078A0[];

typedef struct GenObj {
    u8 _pad0[2356];
    s32 unk934;
} GenObj;
u16 func_080B3A10(GenObj *arg0) {
    return gUnk_081078A0[arg0->unk934];
}
