s32 func_080C12C4(s32 *, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;

typedef struct Guard12 {
    void *p;        /* 0x0 */
    void *self;     /* 0x4 */
    void *v;        /* 0x8 */
} Guard12;

typedef struct Vt080C7F1C {
    u8 _pad0[8];
    s32 (*fn8)(void *, s32);
} Vt080C7F1C;

void **func_080C7F1C(void ***arg0, GenObj *arg1) {
    volatile Guard12 h;
    void **res;
    register void **bp __asm__("r0");
    void **p;
    register void **q __asm__("r1");
    Vt080C7F1C *vt;

    func_080C12C4((s32 *) &h.p, arg1->unk4);
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
        vt = (Vt080C7F1C *) *p;
        vt->fn8((void *) p, 3);
    }
    return (void **) arg0;
}
