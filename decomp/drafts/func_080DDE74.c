typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkA;
    u8 _padE[66];
    s32 unk50;
    s32 unk54;
    s32 unk56;
} GenObj;
void func_080DDE74(GenObj *arg0, GenObj *arg1) {
    arg1->unk0 = (u8) ((-0x10 & arg1->unk0) | 4);
    arg1->unk4 = (s32) arg0->unk50;
    arg1->unk8 = (u16) arg0->unk54;
    arg1->unkA = (u16) arg0->unk56;
}
