typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
} GenObj;
void func_0809C0AC(GenObj *arg0, GenObj *arg1) {
    s32 b = arg1->unk4;
    s32 a = arg1->unk0;
    arg0->unk10 = a;
    arg0->unk14 = b;
    arg0->unkC = 2;
}
