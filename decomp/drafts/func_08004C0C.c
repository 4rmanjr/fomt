s32 func_08004570(Obj **, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;

typedef struct Local4C0C {
    Obj *p0;
    Obj **p4;
    Obj *p8;
} Local4C0C;

Obj **func_08004C0C(Obj **arg0, GenObj *arg1) {
    Local4C0C l;
    Obj *b;
    Obj **q;

    func_08004570(&l.p0, arg1->unk4);
    b = l.p0;
    l.p4 = &l.p0;
    l.p8 = b;
    q = l.p4;
    __asm__ volatile("" : "+r"(q) : : "memory");
    *q = 0;
    *arg0 = b;
    if (l.p0 != 0) {
        l.p0->vtbl->unk8(l.p0, 3);
    }
    return arg0;
}
