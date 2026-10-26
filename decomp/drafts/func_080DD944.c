typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    u8 _pad10[64];
    s32 unk50;
    s32 unk54;
    s32 unk56;
    u8 _pad5A[30];
    s32 unk78;
    s32 unk79;
} GenObj;
void func_080DD944(GenObj *arg0, GenObj *arg1) {
    arg1->unk0 = (u8) ((-0x10 & arg1->unk0) | 6);
    arg1->unk4 = (s32) arg0->unk50;
    arg1->unk8 = (u16) arg0->unk54;
    arg1->unkA = (u16) arg0->unk56;
    arg1->unkC = (u8) ((((-0x10 & arg1->unkC) | (0xF & arg0->unk78)) & 0xF) | (arg0->unk79 * 0x10));
}
