s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    u16 unk10;
    u8 _pad12[2];
    s32 unk14;
    s32 unk18;
} GenObj;
void func_0803B474(GenObj *arg0, s32 arg1, s32 arg2) {
    u32 m;
    s32 r;
    arg0->unk14 = (s32) ((arg1 + (rand() % 240)) << 0x10);
    arg0->unk18 = (s32) ((arg2 + (rand() % 160)) << 0x10);
    r = rand();
    m = 0x90;
    arg0->unk10 = (s16) ((r & m) + 0x60);
}
