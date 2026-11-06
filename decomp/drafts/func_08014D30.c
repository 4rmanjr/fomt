s32 RemoveHorse__4Farm(void *);                       /* extern */

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x34];
    void *unk3C;
    u8 _pad40[0x4C];
    void *unk8C;
    u8 _pad90[0x18];
    struct GenObj *unkA8;
} GenObj;
void func_08014D30(GenObj *arg0, s32 arg1) {
    GenObj *t;
    GenObj *a;

    t = arg0->unk4;
    if (arg1 == 0) {
        a = *(GenObj **) ((u8 *) t + 0xA8);
        ((s32 (*)(GenObj *, s32)) (((GenObj *) *(void **) a)->unk3C))(a, 0x2C);
        RemoveHorse__4Farm((u8 *) t->unk8C + 0x14);
    }
}
