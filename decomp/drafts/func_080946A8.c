typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[9];
    s32 unkD;
    u8 _pad11[27];
    s32 unk2C;
} GenObj;
void func_080946A8(GenObj *arg0) {
    arg0->unkD = 1;
    ((void (*)(void *,...))(arg0->unk0->unk2C))();
}
