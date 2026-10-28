typedef struct GenObj {
    u8 _pad0[496];
    u8 unk1F0;
} GenObj;
void func_08050C18(GenObj *arg0) {
    register s32 v asm("r2");
    v = (u8)arg0->unk1F0;
    arg0->unk1F0 = (u8)(-2 & v);
}
