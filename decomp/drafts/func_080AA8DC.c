typedef struct GenObj {
    s32 unk0;
    u8 _pad4[148];
    s32 unk98;
} GenObj;
void func_080AA8DC(GenObj *arg0) {
    if (arg0->unk0 == 0x1D) {
        arg0->unk98 = 1;
    }
}
