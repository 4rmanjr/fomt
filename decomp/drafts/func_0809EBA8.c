typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
    s32 unk15;
} GenObj;
void func_0809EBA8(GenObj *arg0, s32 arg1) {
    arg0->unk14 = (u8) ((((-0x10 & arg0->unk14) | (arg1 & 0xF)) & ~0x70) | 0x30 | 0x80);
    arg0->unk15 = (u8) (-2 & arg0->unk15);
}
