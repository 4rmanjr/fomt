typedef struct GenObj {
    u8 a : 4;
    u8 b : 4;
    u8 _pad1[3];
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u8 _padC[0x44];
    s32 unk50;
    u16 unk54;
    u16 unk56;
} GenObj;

void func_080DDC24(GenObj *arg0, GenObj *arg1) {
    arg1->a = 5;
    arg1->unk4 = arg0->unk50;
    arg1->unk8 = arg0->unk54;
    arg1->unkA = arg0->unk56;
}
