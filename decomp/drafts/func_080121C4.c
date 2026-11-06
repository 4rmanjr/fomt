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
void func_080121C4(GenObj *arg0, s32 arg1) {
    GenObj *t;
    GenObj *o;
    GenObj *x;

    t = arg0->unk4;
    o = *(GenObj **) ((u8 *) t + 0xA8);
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) o)->unk40))(o, arg1);
    *(s32 *) ((u8 *) t + 0xE4) = (s32) x;
    if (x != 0) {
        t->unk9C = 0x16;
    }
}
