s32 __builtin_new(s32);                             /* extern */
s32 func_0800082C(void *);                          /* extern */
s32 func_08008980(void *);                          /* extern */
s32 func_08008A68(void *, s32);                     /* extern */
void *func_08011DC4(void *, s32, void *);           /* extern */

typedef struct Vtbl {
    void *unk0;
    void *unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct Obj {
    Vtbl *unk0;
} Obj;
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[0x35C];
    u8 unk364;
} GenObj;
typedef struct Flag12 {
    s32 a;
    s32 b;
    s32 c;
} Flag12;
typedef struct Pair {
    Flag12 *p;
    s32 q;
} Pair;

s32 *func_0801004C(s32 *arg0, GenObj *arg1) {
    struct { void *sp0; Obj *volatile sp4; Flag12 flag; Pair pr; } fr;
    register GenObj *a1 __asm__("r5") = arg1;
    Flag12 *p;
    Flag12 *q;
    Obj *c;
    Obj *t2;
    Obj *c2;
    Obj *c3;
    Pair *pp;

    func_08008980(&fr.sp0);
    fr.sp4 = 0;
    if (a1->unk364 != 0) {
        p = &fr.flag;
        fr.flag.a = 0;
    } else {
        p = &fr.flag;
        fr.flag.a = 1;
    }
    a1 = (GenObj *)func_08011DC4((void *)__builtin_new(8), a1->unk4, p);
    c = fr.sp4;
    q = p;
    if ((((Obj *)a1) != c) && (c != 0)) {
        c->unk0->unk8(c, 3);
    }
    fr.sp4 = (Obj *)a1;
    t2 = fr.sp4;
    fr.sp4 = 0;
    fr.flag.a = (s32)t2;
    func_0800082C(q);
    fr.flag.a = 0;
    pp = &fr.pr;
    fr.pr.p = q;
    pp->q = 0;
    q->a = 0;
    *arg0 = 0;
    c2 = (Obj *)(void *)fr.flag.a;
    if (c2 != 0) {
        c2->unk0->unk8(c2, 3);
    }
    c3 = fr.sp4;
    if (c3 != 0) {
        c3->unk0->unk8(c3, 3);
    }
    func_08008A68(&fr.sp0, 2);
    return arg0;
}
