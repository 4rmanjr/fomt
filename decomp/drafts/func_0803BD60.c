s32 func_0803BCF8();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[11];
    s32 unkB;
    s32 unkC;
    s32 unkD;
} GenObj;
void func_0803BD60(GenObj *arg0) {
    func_0803BCF8();
    arg0->unkB = (u8) (arg0->unkB | 0x80);
    arg0->unkC = (u8) ((-0x80 & arg0->unkC) | 1);
    arg0->unkD = 9;
}
