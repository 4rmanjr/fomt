extern s32 gUnk_08108268;

typedef struct GenObj {
    u8 _pad0[2236];
    s32 unk8BC;
    u8 _pad8C0[192];
    s32 unk980;
} GenObj;
u16 func_080C7B38(GenObj *arg0) {
    return (u16) ((arg0->unk980 * 0x54) + *((arg0->unk8BC * 2) + &gUnk_08108268));
}
