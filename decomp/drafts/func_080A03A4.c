typedef struct GenObj {
    u8 _pad0[3];
    s32 unk3;
} GenObj;
void func_080A03A4(GenObj *arg0, s32 arg1) {
    arg0->unk3 = (u8) ((-0x1D & arg0->unk3) | ((arg1 & 7) * 4));
}
