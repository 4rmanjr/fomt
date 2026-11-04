typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[160];
    struct GenObj *unkA8;
} GenObj;
void func_080142B8(GenObj *arg0) {
    GenObj *t;
    register GenObj *m __asm__("r2");
    u8 *pa;
    void (*fn)(GenObj *);
    s32 off;
    t = arg0->unk4->unkA8;
    m = (GenObj *)(t->unk0);
    off = 0x118;
    pa = (u8 *)m + off;
    fn = *(void (**)(GenObj *))pa;
    fn(t);
}
