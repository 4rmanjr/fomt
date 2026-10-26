typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[16];
    s32 unk14;
    u8 _pad18[28];
    s32 unk34;
} GenObj;
void func_0809444C(GenObj *arg0) {
    ((void (*)(void *,...))(arg0->unk0->unk34))(arg0, arg0->unk14, 8, arg0 + 0x18, 8);
}
