typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
} GenObj;
void func_0809C0AC(GenObj *arg0, GenObj *arg1) {
    arg0->unk10 = (s32) arg1->unk0;
    arg0->unk14 = (s32) arg1->unk4;
    arg0->unkC = 2;
}
