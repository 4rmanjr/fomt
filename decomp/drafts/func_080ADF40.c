typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u16 unk6;
} GenObj;

s32 func_080ADF40(GenObj *arg0) {
    register GenObj *p __asm__("r2");
    register s32 old __asm__("r5");
    register s32 sum __asm__("r1");
    register s32 sum2 __asm__("r4");
    register s32 v __asm__("r3");

    p = arg0;
    old = p->unk6;
    sum = old + p->unk4;
    sum2 = sum;
    v = 0;
    if (sum & 0xFF) {
        v = sum;
    }
    p->unk6 = (u16) v;
    return (sum2 >> 8) - (old >> 8);
}
