typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    s32 unkC;
} GenObj;
void sub_08080440(GenObj *arg3) {
    ((void (*)(void *,...))(arg3->unk8->unkC))(arg3, 3);
}
