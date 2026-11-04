typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[60];
    void *unk80;
    u8 _pad84[24];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_080158CC(GenObj *arg0) {
    GenObj *temp_r4;
    GenObj *t;
    GenObj *m;
    GenObj *x;
    temp_r4 = arg0->unk4;
    t = temp_r4->unkA8;
    m = (GenObj *)(t->unk0);
    x = ((GenObj *(*)(GenObj *, s32))(m->unk40))(t, 0);
    ((void (*)(GenObj *))(x->unk14->unk80))(x);
    temp_r4->unk9C = 0x19;
}
