typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[100];
    struct GenObj *unkA8;
} GenObj;
s32 func_08015990(GenObj *arg0) {
    GenObj *t;
    GenObj *m;
    GenObj *x;
    t = arg0->unk4->unkA8;
    m = (GenObj *)(t->unk0);
    x = ((GenObj *(*)(GenObj *, s32))(m->unk40))(t, 0);
    return ((s32 (*)(GenObj *)) *(void **) ((u8 *) x->unk14 + 0x8c))(x);
}
