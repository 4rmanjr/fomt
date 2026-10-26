typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_08007110(GenObj *arg0) {
    return arg0->unk4 + 0x461C;
}
