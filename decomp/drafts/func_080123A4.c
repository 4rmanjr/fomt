typedef struct Vt {
    u8 _pad0[0x28];
    s32 (*unk28)(void **);
} Vt;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    u8 _pad8[0x94];
    s32 unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_080123A4(GenObj *arg0) {
    GenObj *t;
    void **slot;

    t = arg0->unk4;
    slot = *(void ***) ((u8 *) t + 0xA8);
    if (((u8) ((Vt *) *slot)->unk28(slot)) == 0) {
        t->unk9C = 0x17;
    }
}
