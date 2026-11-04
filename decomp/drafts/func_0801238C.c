typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[28];
    void *unk24;
    u8 _pad28[128];
    struct GenObj *unkA8;
} GenObj;
void func_0801238C(GenObj *arg0) {
    GenObj *t;
    GenObj *m;
    register void (*fn)(GenObj *) __asm__("r4");
    t = *(GenObj **)(arg0->unk4->unkA8);
    m = *(GenObj **)t;
    fn = (void (*)(GenObj *))(m->unk24);
    fn(t);
}
