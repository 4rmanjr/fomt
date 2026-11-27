void *__builtin_new(s32);                           /* extern */
void **func_0807EE14(s32, s32 *, s32);              /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;

typedef struct Guard {
    void *p;        /* 0x0 */
    s32 old;        /* 0x4 */
    void *self;     /* 0x8 */
    void *v;        /* 0xC */
} Guard;

typedef struct Vt080DBFF8 {
    u8 _pad0[8];
    s32 (*fn8)(void *, s32);
} Vt080DBFF8;

void ***func_080DBFF8(void ***arg0, GenObj *arg1) {
    volatile Guard h;
    s32 t;
    void **res;
    void **p;
    register void **q __asm__("r1");
    Vt080DBFF8 *vt;

    t = arg1->unk4;
    arg1->unk4 = 0;
    h.old = t;
    res = func_0807EE14((s32) __builtin_new(0xC), (s32 *) &h.old, arg1->unk8);
    h.p = res;
    q = (void **) &h.p;
    h.self = (void *) q;
    h.v = res;
    __asm__ volatile ("" : "+r" (q));
    *q = 0;
    *arg0 = res;
    p = (void **) h.p;
    if (p != 0) {
        vt = (Vt080DBFF8 *) *p;
        vt->fn8((void *) p, 3);
    }
    return arg0;
}
