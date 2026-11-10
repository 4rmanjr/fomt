typedef struct Vt {
    u8 _pad0[0x40];
    void *fn40;
} Vt;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x58];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;

void func_08016F60(GenObj *arg0) {
    GenObj **slot;
    GenObj *base;
    GenObj *x;
    u32 i;

    base = arg0->unk4;
    i = 0x2E;
    slot = (GenObj **) ((u8 *) base + 0xA8);
    while (i <= 0x45) {
        x = ((GenObj *(*)(GenObj *, s32)) ((Vt *) *(void **) *slot)->fn40)(*slot, i);
        if (x != 0) {
            if ((((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x5C))(x) << 0x18) != 0) {
                ((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x7C))(x);
            }
        }
        i++;
    }
}
