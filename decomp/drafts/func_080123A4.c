typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x20];
    void *unk28;
    u8 _pad2C[0x68];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_080123A4(GenObj *arg0) {
    GenObj *t;
    GenObj **slot;

    t = arg0->unk4;
    slot = (GenObj **) ((u8 *) arg0->unk4 + 0xA8);
    if (((u8) ((s32 (*)(GenObj *)) *(void **) (((GenObj *) *(void **) *slot)->unk28))(*slot)) == 0) {
        t->unk9C = 0x17;
    }
}
