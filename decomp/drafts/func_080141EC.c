typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[12];
    void *unk50;
    u8 _pad54[72];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_080141EC(GenObj *arg0) {
    GenObj *temp_r4;
    GenObj *t;
    GenObj *m;
    GenObj *x;
    temp_r4 = arg0->unk4;
    t = temp_r4->unkA8;
    m = (GenObj *)(t->unk0);
    x = ((GenObj *(*)(GenObj *, s32))(m->unk40))(t, 0);
    ((void (*)(GenObj *))(x->unk14->unk50))(x);
    temp_r4->unk9C = 0x19;
}
