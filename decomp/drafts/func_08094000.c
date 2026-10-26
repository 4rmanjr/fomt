typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[8];
    void *unk14;
    u8 _pad18[32];
    s32 unk38;
    u8 _pad3C[16];
    s32 unk4C;
    s32 unk50;
} GenObj;
void func_08094000(GenObj *arg0) {
    arg0->unk14->unk8 = ((void (*)(void *,...))(arg0->unk0->unk4C))(arg0);
    if ((((void (*)(void *,...))(arg0->unk0->unk50))(arg0) << 0x18) != 0) {
        ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 0, 0);
        return;
    }
    ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 1, 0);
}
