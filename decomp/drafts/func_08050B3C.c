typedef struct GenObj {
    u8 _pad0[476];
    s32 unk1DC;
} GenObj;
void func_08050B3C(GenObj *arg0) {
    arg0->unk1DC = (u8) (-2 & arg0->unk1DC);
}
