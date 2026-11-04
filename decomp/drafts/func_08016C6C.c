s32 func_080387EC();                                  /* extern */

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[56];
    void *unk40;
    u8 _pad44[100];
    struct GenObj *unkA8;
} GenObj;
void func_08016C6C(GenObj *arg0) {
    GenObj *t;
    GenObj *m;
    GenObj *(*fn)(GenObj *, s32);
    t = arg0->unk4->unkA8;
    m = (GenObj *)(t->unk0);
    fn = (GenObj *(*)(GenObj *, s32))(m->unk40);
    fn(t, 0x5D);
    func_080387EC();
}
