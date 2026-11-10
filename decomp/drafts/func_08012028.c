s32 sub_080D8178(void **, s32);

typedef struct Vt {
    u8 _pad0[8];
    void *fn8;
} Vt;

typedef struct SP3 {
    void *sp0;
    void **sp4;
    void *sp8;
} SP3;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;

void ***func_08012028(void ***arg0, GenObj *arg1) {
    register void *tmp __asm__("r2");
    register void **q __asm__("r1");
    SP3 sp;
    void *p;

    sub_080D8178((void **) &sp.sp0, arg1->unk4);
    tmp = sp.sp0;
    sp.sp4 = &sp.sp0;
    sp.sp8 = tmp;
    q = (void **) ((u8 *) &sp + 0);
    *q = 0;
    *arg0 = tmp;
    p = *(void *volatile *) &sp.sp0;
    if (p != 0) {
        ((void (*)(void *, s32)) ((Vt *) *(void **) p)->fn8)(p, 3);
    }
    return arg0;
}
