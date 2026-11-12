s32 func_080DC57C(void *, s32);                       /* extern */

typedef struct Node {
    u8 _pad0[4];
    struct Node *unk4;
    struct Node *unk8;
    struct Node *unkC;
} Node;

typedef struct List {
    u8 _pad0[4];
    Node *unk4;
    u32 unk8;
} List;

void func_080AAE14(u32 *arg0, u32 arg1, u32 arg2) {
    List *l;
    Node *n;

    arg0[0] = arg1;
    arg0[1] = arg2;
    l = (List *) (arg0 + 2);
    if (l->unk8 != 0) {
        func_080DC57C(l, l->unk4->unk4);
        n = l->unk4;
        n->unk8 = n;
        n = l->unk4;
        n->unk4 = 0;
        n = l->unk4;
        n->unkC = n;
        l->unk8 = 0;
    }
}
