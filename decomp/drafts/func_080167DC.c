s32 func_080A05E8(s32, s32);                          /* extern */

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x30];
    void *unk38;
    u8 _pad3C[4];
    void *unk40;
} GenObj;

void func_080167DC(GenObj *arg0) {
    GenObj *t;
    GenObj **pa;
    GenObj *x;
    s32 g;

    t = arg0->unk4;
    g = *(s32 *) ((u8 *) t + 0x8C);
    func_080A05E8(g + 0x1CD4, g + 0x11);
    pa = (GenObj **) ((u8 *) t + 0xA8);
    ((s32 (*)(GenObj *, s32)) ((GenObj *) (*pa)->unk0)->unk38)(*pa, 0x23);
    x = ((GenObj *(*)(GenObj *, s32)) ((GenObj *) (*pa)->unk0)->unk40)(*pa, 0x23);
    if (x != 0) {
        if ((((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x28))(x) << 0x18) == 0) {
            ((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x20))(x);
        }
    }
}
