typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _2[2];
    u32 unk4;
    u32 unk8;
} GenObj;
void func_080D6F0C(GenObj *arg0) {
    arg0->unk8 = 0;
    arg0->unk4 = 0;
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}
