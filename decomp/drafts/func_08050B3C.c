typedef struct GenObj {
    u8 _pad0[476];
    u8 unk1DC;
} GenObj;
void func_08050B3C(GenObj *arg0) {
    register s32 v asm("r2");
    v = (u8)arg0->unk1DC;
    arg0->unk1DC = (u8)(-2 & v);
}
