typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080D6E98(GenObj *arg0) {
    arg0->unk4 = -1;
    arg0->unk8 = -1;
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}
