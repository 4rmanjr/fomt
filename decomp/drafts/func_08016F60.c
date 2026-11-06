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
    GenObj *t;
    GenObj *o;
    GenObj *x;
    s32 i;

    i = 0x2E;
    o = *(GenObj **) ((u8 *) arg0->unk4 + 0xA8);
    while (i <= 0x45) {
        x = ((GenObj *(*)(GenObj *, s32)) (((GenObj *) *(void **) o)->unk40))(o, i);
        if (x != 0) {
            if (((u8) ((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x5C))(x)) != 0) {
                ((s32 (*)(GenObj *)) *(void **) (*(s32 *) ((u8 *) x + 0x14) + 0x7C))(x);
            }
        }
        i++;
    }
}
