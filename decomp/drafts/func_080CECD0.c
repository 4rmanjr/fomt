typedef struct GenObj {
    u8 _pad0[124];
    s32 unk7C;
} GenObj;
void func_080CECD0(GenObj *arg0) {
    register s32 zero __asm__("r1");
    GenObj *o;
    u8 *p;

    zero = 0;
    o = arg0;
    p = (u8 *) arg0 + 0x84;
    *p = (u8) zero;
    p -= 0x1C;
    *p = (u8) zero;
    o->unk7C = 0x12;
    *(s32 *) ((u8 *) o + 0x80) = zero;
}
