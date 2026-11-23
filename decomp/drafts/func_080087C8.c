typedef struct Node Node;
struct Node {
    void *next;
    void *prev;
    void *vt;
    void *data;
};

typedef struct Cont Cont;
struct Cont {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void *f10;
    void *f14;
    void *f18;
};

void *func_08008AE0(s32);
s32 func_08008AF0(s32);
s32 func_080098AC(void *, s32);
s32 func_080098DC(void *, s32);
s32 func_08009940(void *, void *);
extern s32 vtable_unk_080E5AD0;
extern s32 vtable_unk_080E5AE0;
extern s32 vtable_unk_080E5AF0;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;
extern s32 vtable_unk_080E5BE8;

void func_080087C8(s32 *arg0) {
    Node a;
    Node b;
    Node c;
    Cont d;
    register void *pb __asm__("r8");
    register void *pc __asm__("r6");
    register Cont *pd __asm__("r4");
    s32 base;
    u8 *q;
    void *obj;
    u32 *vt;

    base = *arg0;
    pb = &b;
    pc = &c;
    pd = &d;
    q = (u8 *) (base + 0x34);
    a.next = 0;
    a.prev = 0;
    a.vt = &vtable_unk_080E5AF0;
    a.data = q;
    q += 0x58;
    ((Node *) pb)->next = 0;
    ((Node *) pb)->prev = 0;
    ((Node *) pb)->vt = &vtable_unk_080E5AE0;
    ((Node *) pb)->data = q;
    q -= 0x68;
    ((Node *) pc)->next = 0;
    ((Node *) pc)->prev = 0;
    ((Node *) pc)->vt = &vtable_unk_080E5AD0;
    ((Node *) pc)->data = q;
    pd->f0 = 0;
    pd->f4 = 0;
    pd->f8 = &vtable_unk_080E5BB4;
    pd->fC = &pd->f10;
    pd->f18 = &vtable_unk_080E5BE8;
    pd->f10 = 0;
    pd->f14 = 0;
    pd->f18 = &vtable_unk_080E5BD8;
    pd->f10 = &pd->fC;
    pd->f14 = &pd->f10;

    func_08009940(pd, (void *) (base + 0x494));
    func_08009940(pd, &a);
    func_08009940(pd, pc);
    func_08009940(pd, pb);

    base += 0x490;
    obj = func_08008AE0(base);
    vt = (u32 *) *((u32 *) obj + 2);
    ((void (*)(void *, void *)) vt[4])(obj, pd);
    func_08008AF0(base);
    obj = func_08008AE0(base);
    vt = (u32 *) *((u32 *) obj + 2);
    ((void (*)(void *, void *)) vt[5])(obj, pd);
    func_080098DC(pd, 2);
    func_080098AC(pc, 2);
    func_080098AC(pb, 2);
    func_080098AC(&a, 2);
}
