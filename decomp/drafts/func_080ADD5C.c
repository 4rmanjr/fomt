typedef struct GenObj {
    s32 unk0;
    u8 _pad4[2];
    u16 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 unk14;
} GenObj;
void func_080ADD5C(GenObj *arg0, s32 arg1, s32 arg2) {
    arg0->unk8 = arg1;
    arg0->unkC = arg2;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk0 = (u32) ((u32) ((0 - arg1) | arg1) >> 0x1F);
    arg0->unk6 = 0;
}
