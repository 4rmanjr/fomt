s32 func_080AE4E4(void **, s32);                     /* extern */

typedef struct Vt {
    u8 _pad0[8];
    void *unk8;
} Vt;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;

void **func_080B3C3C(void **arg0, GenObj *arg1) {
    struct {
        void *volatile p;
        void **volatile q;
        void *volatile r;
    } sp;
    register void *r __asm__("r2");
    register void *p2 __asm__("r1");
    register void **zp __asm__("r1");
    Vt *vt;

    func_080AE4E4((void **) &sp.p, arg1->unk4);
    sp.q = (void **) &sp.p;
    r = (void *) sp.p;
    sp.r = r;
    zp = (void **) &sp.p;
    *zp = 0;
    *arg0 = r;
    p2 = (void *) sp.p;
    if (p2 != 0) {
        vt = *(Vt **) p2;
        ((s32 (*)(void *, s32)) vt->unk8)(p2, 3);
    }
    return arg0;
}
