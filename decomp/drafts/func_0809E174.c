typedef struct GenObj {
    u8 _pad0[1572];
    u8 unk624;
} GenObj;
u32 func_0809E174(GenObj *arg0) {
    return (u32) (arg0->unk624 << 0x1F) >> 0x1F;
}
