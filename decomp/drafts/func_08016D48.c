extern s32 gUnk_0300040C;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x30];
    void *unk38;
    u8 _pad3C[4];
    void *unk40;
    u8 _pad44[0x58];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;

void func_08016D48(GenObj *arg0) {
    GenObj *t;
    GenObj *a;
    GenObj *x;
    s32 *g;
    s32 *q;
    u16 tmp;

    t = arg0->unk4;
    a = *(GenObj **) ((u8 *) t + 0xA8);
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) a)->unk40))(a, 0);
    g = (s32 *) (gUnk_0300040C + 0x36C);
    tmp = *(u16 *) ((u8 *) x + 4);
    q = *(s32 **) ((u8 *) t + 0x8C);
    *(u8 *) g = 1;
    g[1] = tmp;
    *(u16 *) ((u8 *) g + 8) = *(u16 *) ((u8 *) q + 0x12);
}
