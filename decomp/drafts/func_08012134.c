typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[56];
    void *unk40;
    u8 _pad44[100];
    struct GenObj *unkA8;
} GenObj;
u16 func_08012134(GenObj *arg0) {
    GenObj *t;
    register GenObj *m __asm__("r2");
    GenObj *x;
    register GenObj *(*fn)(GenObj *) __asm__("r2");
    u16 r;
    t = arg0->unk4->unkA8;
    m = (GenObj *)(t->unk0);
    fn = (GenObj *(*)(GenObj *))(m->unk40);
    x = fn(t);
    r = 0x234;
    if (x != 0) {
        r = *(u16 *)((u8 *)x + 4);
    }
    return r;
}
