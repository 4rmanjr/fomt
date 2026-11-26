s32 func_080CADF0(void *, s32);                       /* extern */
extern s32 vtable_unk_080E85BC;

typedef struct Elem {
    u8 _pad0[0xC];
} Elem;

typedef struct GenObj {
    u8 _pad0[0x210];
    void *unk210;
    s32 unk214;
} GenObj;

void func_080CD950(GenObj *arg0, s32 arg1) {
    s32 *base;
    Elem *p;
    Elem *end;

    arg0->unk210 = &vtable_unk_080E85BC;
    base = &arg0->unk214;
    end = (Elem *)((u8 *)base + (arg0->unk214 * 0xC + 4));
    p = (Elem *)((u8 *)arg0 + 0x218);
    while (p != end) {
        p = p + 1;
    }
    func_080CADF0(arg0, arg1);
}
