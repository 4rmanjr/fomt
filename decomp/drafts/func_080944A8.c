typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[8];
    void *unk14;
    s32 unk18;
    u8 _pad1C[28];
    s32 unk38;
    u8 _pad3C[20];
    s32 unk50;
} GenObj;
void func_080944A8(GenObj *arg0) {
    arg0->unk14->unk8 = (s32) arg0->unk18;
    if ((((void (*)(void *,...))(arg0->unk0->unk50))(arg0) << 0x18) != 0) {
        ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 0, 0);
        return;
    }
    ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 1, 0);
}
