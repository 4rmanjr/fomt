typedef struct GenObj {
    u8 _pad0[124];
    s32 unk7C;
    s32 unk80;
    s32 unk84;
} GenObj;
void func_080CECD0(GenObj *arg0) {
    arg0->unk84 = 0;
    *((arg0 + 0x84) - 0x1C) = 0;
    arg0->unk7C = 0x12;
    arg0->unk80 = 0;
}
