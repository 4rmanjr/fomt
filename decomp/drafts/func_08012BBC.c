s32 __builtin_new(s32);                             /* extern */

extern u32 vtable_unk_080E5E74[];
extern u32 vtable_unk_080E5E34[];

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;

typedef struct S12 {
    u32 kind;
    u32 a;
    u32 b;
} S12;

typedef struct A14 {
    void *vt;       /* 0x0 */
    void *unk4;     /* 0x4 */
    S12 s;          /* 0x8 */
} A14;

typedef struct B0C {
    void *vt;       /* 0x0 */
    void *a;        /* 0x4 */
    void *b;        /* 0x8 */
} B0C;

void func_08012BBC(GenObj *arg0) {
    u8 *base;
    S12 x;
    S12 t;
    A14 *p;
    B0C *q;

    base = (u8 *) arg0->unk4;
    x.kind = 0xa;
    p = (A14 *) __builtin_new(0x14);
    p->vt = (void *) vtable_unk_080E5E74;
    p->unk4 = *(void **) (base + 0x8C);
    t = x;
    p->s = t;
    q = (B0C *) __builtin_new(0xC);
    q->vt = (void *) vtable_unk_080E5E34;
    q->a = p;
    q->b = *(void **) (base + 0x8C);
    p = 0;
    *(B0C **) (base + 0x98) = q;
    *(u32 *) (base + 0x9C) = 0x18;
}
