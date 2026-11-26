typedef struct GenObj {
    u8 a : 4;
    u8 b : 4;
    u8 _pad1[3];
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u8 c : 4;
    u8 d : 4;
    u8 _padD[0x43];
    s32 unk50;
    u16 unk54;
    u16 unk56;
    u8 _pad58[0x20];
    u8 unk78;
    u8 unk79;
} GenObj;

void func_080DD944(GenObj *arg0, GenObj *arg1) {
    arg1->a = 6;
    arg1->unk4 = arg0->unk50;
    arg1->unk8 = arg0->unk54;
    arg1->unkA = arg0->unk56;
    arg1->c = arg0->unk78 & 0xF;
    arg1->d = arg0->unk79;
}
