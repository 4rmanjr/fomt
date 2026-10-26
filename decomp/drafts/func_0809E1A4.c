typedef struct GenObj {
    u8 _pad0[1573];
    s32 unk625;
} GenObj;
u32 func_0809E1A4(GenObj *arg0) {
    return (u32) (arg0->unk625 << 0x1B) >> 0x1F;
}
