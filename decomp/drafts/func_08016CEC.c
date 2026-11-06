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

void func_08016CEC(GenObj *arg0, s32 arg1) {
    GenObj **slot;
    GenObj *x;

    slot = (GenObj **) ((u8 *) arg0->unk4 + 0xA8);
    ((s32 (*)(GenObj *, s32)) (((GenObj *) *(void **) *slot)->unk38))(*slot, arg1);
    x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) *slot)->unk40))(*slot, arg1);
    if (x != 0) {
        if (((u8) ((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x28))(x)) == 0) {
            ((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x20))(x);
        }
    }
}
