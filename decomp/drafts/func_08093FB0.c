typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[16];
    s32 unk14;
    u8 _pad18[32];
    s32 unk38;
} GenObj;
void func_08093FB0(GenObj *arg0) {
    ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, *arg0->unk14, 0);
}
