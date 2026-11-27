typedef struct GenObj {
    u8 _pad0[0x3C];
    u8 unk3C;
    u8 _pad3D[1];
    u8 unk3E;
    u8 _pad3F[0x67];
    u16 unkA6;
} GenObj;

void func_08024C74(GenObj *arg0) {
    arg0->unk3C = 0;
    arg0->unk3E = 0;
    arg0->unkA6 = 0;
}
