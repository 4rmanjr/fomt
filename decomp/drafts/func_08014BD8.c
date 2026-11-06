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

void func_08014BD8(GenObj *arg0) {
    GenObj **slot;
    GenObj *x;
    s32 i;

    slot = (GenObj **) ((u8 *) arg0->unk4 + 0xA8);
    for (i = 1; i <= 0x23; i++) {
        x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) *slot)->unk40))(*slot, i);
        if (x != 0) {
            ((s32 (*)(GenObj *, s32)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x3C))(x, 3);
        }
    }
}
