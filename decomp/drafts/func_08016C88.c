s32 func_080387FC();                                  /* extern */

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x58];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_08016C88(GenObj *arg0) {
    GenObj *t;
    GenObj *o;

    t = arg0->unk4;
    o = *(GenObj **) ((u8 *) t + 0xA8);
    ((void (*)(GenObj *, s32)) (((GenObj *) *(void **) o)->unk40))(o, 0x5D);
    func_080387FC();
    t->unk9C = 0x1B;
}
