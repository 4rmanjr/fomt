typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[16];
    void *unk54;
    u8 _pad58[80];
    struct GenObj *unkA8;
} GenObj;
void func_08014214(GenObj *arg0) {
    GenObj *t;
    GenObj *m;
    GenObj *x;
    t = arg0->unk4->unkA8;
    m = (GenObj *)(t->unk0);
    x = ((GenObj *(*)(GenObj *, s32))(m->unk40))(t, 0);
    ((void (*)(GenObj *))(x->unk14->unk54))(x);
}
