typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[8];
    s32 unkC;
    u8 _pad10[40];
    s32 unk38;
} GenObj;
void func_080940E4(GenObj *arg0) {
    if (arg0->unkC != 0) {
        ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 0, 1);
        return;
    }
    ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 1, 1);
}
