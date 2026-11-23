void *func_080E2354(void *);                          /* extern */
void *func_080E2B28(void *);                          /* extern */

typedef struct Node {
    u32 unk0;
    struct Node *unk4;
    struct Node *unk8;
    struct Node *unkC;
    u32 unk10;
} Node;

typedef struct Tree {
    u8 _pad0[4];
    Node *unk4;
    u32 unk8;
} Tree;

void **func_080E54F0(void **, Tree *, Node *, Node *, u32 *, Node *);
void func_080E55B0(Node **, Tree *, u32 *);

u32 **func_080E5664(u32 **arg0, Tree *arg1, Node **arg2, u32 *arg3) {
    Node *slot[4];  /* slot[3] tak pernah disentuh: ia hanya membuat frame 0x18 seperti ref */
    register u32 ** a0 __asm__("r7");
    register Tree * a1 __asm__("r6");
    register Node ** a2 __asm__("r8");
    register u32 * a3 __asm__("r4");
    register s32 fl __asm__("r9");
    s32 ip;
    s32 t;
    Node *hdr;
    Node *n;
    Node *p;
    Node *q;
    u32 k;
    u32 kv;

    a0 = arg0; __asm__ volatile("" : "+r"(a0));
    a1 = arg1; __asm__ volatile("" : "+r"(a1));
    a2 = arg2; __asm__ volatile("" : "+r"(a2));
    a3 = arg3; __asm__ volatile("" : "+r"(a3));
    __asm__ volatile("" : "+r"(fl));
    hdr = a1->unk4;
    a0 = a0;
    {
        register Node *nn __asm__("r2");

        nn = *arg2;
        __asm__ volatile("" : "+r"(nn));
        n = nn;
    }
    if (n != hdr->unk8) {
        goto L56F4;
    }
    if (a1->unk8 != 0) {
        goto L5694;
    }
    func_080E55B0(&slot[0], a1, a3);
    *a0 = (u32 *) slot[0];
    goto L580A;
L5694:
    t = 0;
    k = n->unk10;
    p = n;
    kv = *a3;
    if (kv < k) {
        t = 1;
    }
    fl = t;
    __asm__ volatile("" : "+r"(fl));
    if (t != 0) {
        goto L5768;
    }
    t = 0;
    if (k < kv) {
        t = 1;
    }
    if (t == 0) {
        *a0 = (u32 *) p;
        goto L580A;
    }
    slot[0] = p;
    n = func_080E2B28(p);
    slot[0] = n;
    if (n != a1->unk4) {
        goto L56D0;
    }
    p = *a2;
    goto L57CE;
L56D0:
    t = 0;
    kv = *a3;
    k = n->unk10;
    q = n;
    if (kv < k) {
        t = 1;
    }
    if (t == 0) {
        goto L57FC;
    }
    p = *a2;
    if (p->unkC == 0) {
        goto L57CE;
    }
    func_080E54F0(a0, a1, q, q, a3, (u32) fl);
    goto L580A;
L56F4:
    if (n != hdr) {
        goto L571E;
    }
    p = n->unkC;
    t = 0;
    k = p->unk10;
    kv = *a3;
    if (k < kv) {
        t = 1;
    }
    q = t;
    if (q == 0) {
        goto L5710;
    }
    func_080E54F0(a0, a1, 0, n, a3, n);
    goto L580A;
L5710:
    func_080E55B0(&slot[0], a1, a3);
    *a0 = (u32 *) slot[0];
    goto L580A;
L571E:
    slot[0] = n;
    n = func_080E2354(n);
    slot[0] = n;
    p = *a2;
    q = 0;
    kv = *a3;
    k = p->unk10;
    if (kv < k) {
        q = 1;
    }
    fl = q;
    __asm__ volatile("" : "+r"(fl));
    if (q == 0) {
        goto L577A;
    }
    ip = 0;
    k = n->unk10;
    q = n;
    if (k < kv) {
        ip = 1;
    }
    if (ip == 0) {
        goto L577A;
    }
    if (q->unkC != 0) {
        goto L5768;
    }
    func_080E54F0(a0, a1, 0, q, a3, q);
    goto L580A;
L5768:
    func_080E54F0(a0, a1, p, p, a3, 0);
    goto L580A;
L577A:
    slot[1] = *a2;
    ip = func_080E2B28(slot[1]);
    slot[1] = ip;
    k = 1 ^ fl;
    if (fl != 0) {
        goto L57F2;
    }
    p = *a2;
    q = 0;
    k = p->unk10;
    kv = *a3;
    if (k < kv) {
        q = 1;
    }
    k = q;
    if (k == 0) {
        goto L57F2;
    }
    q = ip;
    if (q != a1->unk4) {
        ip = 0;
        if (kv < q->unk10) {
            ip = 1;
        }
        if (ip == 0) {
            goto L57F2;
        }
    }
    if (p->unkC != 0) {
        goto L57DE;
    }
L57CE:
    func_080E54F0(a0, a1, 0, p, a3, p);
    goto L580A;
L57DE:
    func_080E54F0(a0, a1, q, q, a3, 0);
    goto L580A;
L57F2:
    if (fl != k) {
        goto L57FC;
    }
    *a0 = (u32 *) *a2;
    goto L580A;
L57FC:
    func_080E55B0(&slot[2], a1, a3);
    *a0 = (u32 *) slot[2];
L580A:
    return a0;
}
