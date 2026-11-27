s32 func_0806A1F4(s32 *, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;

typedef struct Guard12 {
    void *p;        /* 0x0 */
    void *self;     /* 0x4 */
    void *v;        /* 0x8 */
} Guard12;

typedef struct Vt0806D948 {
    u8 _pad0[8];
    s32 (*fn8)(void *, s32);
} Vt0806D948;

void **func_0806D948(void ***arg0, GenObj *arg1) {
    volatile Guard12 h;
    void **res;
    void **bp;
    void **p;
    register void **q __asm__("r1");
    Vt0806D948 *vt;

    func_0806A1F4((s32 *) &h.p, arg1->unk4);
    res = (void **) h.p;
    bp = (void **) &h.p;
    h.self = (void *) bp;
    h.v = res;
    q = bp;
    __asm__ volatile ("" : "+r" (q));
    *q = 0;
    *arg0 = res;
    p = (void **) h.p;
    if (p != 0) {
        vt = (Vt0806D948 *) *p;
        vt->fn8((void *) p, 3);
    }
    return (void **) arg0;
}
