typedef struct Vtbl {
    void *unk0;
    void *unk4;
    void (*unk8)(void *, s32);
    void (*unkC)(void *, void *);
} Vtbl;
typedef struct Obj {
    Vtbl *unk0;
} Obj;

void func_0800082C(Obj **arg0) {
    Obj *volatile sp0;
    Obj *volatile sp4;
    Obj *volatile sp8;
    Obj **volatile spC;
    Obj *volatile sp10;
    Obj **volatile sp14;
    Obj *volatile sp18;
    Obj *volatile *pA;
    Obj *volatile *pB;
    register Obj **pp __asm__("r5") = arg0;
    register Obj *var_r5 __asm__("r4");
    register Obj *u __asm__("r3");
    register Vtbl *vtA __asm__("r2");
    register Vtbl *vtB __asm__("r1");
    register Obj *w __asm__("r0");
    Obj *t;
    Obj *z;

    if (*pp == 0) {
        goto done;
    }
    pA = &sp4;
    pB = &sp8;
loop:
    t = *pp;
    vtA = t->unk0;
    w = (Obj *)pA;
    vtA->unkC(w, t);
    t = sp4;
    spC = pA;
    sp10 = t;
    *pA = 0;
    sp0 = t;
    t = sp4;
    if (t != 0) {
        t->unk0->unk8(t, 3);
    }
    var_r5 = 0;
    t = *pp;
    if ((var_r5 != t) && (t != 0)) {
        t->unk0->unk8(t, 3);
    }
    *pp = var_r5;
    u = sp0;
    if (u == 0) {
        goto done;
    }
    vtB = u->unk0;
    w = (Obj *)pB;
    vtB->unkC(w, u);
    w = sp8;
    sp14 = pB;
    sp18 = w;
    z = 0;
    *pB = z;
    sp4 = w;
    t = sp8;
    if (t != 0) {
        t->unk0->unk8(t, 3);
    }
    w = sp4;
    sp4 = z;
    var_r5 = w;
    t = *pp;
    if ((var_r5 != t) && (t != 0)) {
        t->unk0->unk8(t, 3);
    }
    *pp = var_r5;
    t = sp4;
    if (t != 0) {
        t->unk0->unk8(t, 3);
    }
    t = sp0;
    if (t != 0) {
        t->unk0->unk8(t, 3);
    }
    if (*pp != 0) {
        goto loop;
    }
done:
    t = *pp;
    if (t != 0) {
        t->unk0->unk8(t, 3);
    }
}
