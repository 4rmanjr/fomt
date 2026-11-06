s32 func_080AC388(void *, void *, void *, s32, s32, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad0[0x1c];
    s32 unk24;
} GenObj;

void func_080ABBC4(GenObj *arg0) {
    GenObj *t = arg0;
    t->unk4 = -t->unk24;
    func_080AC388((u8 *)t + 0x10, (u8 *)t + 0x1C, 0, (s32)((u8 *)t + 4), 0, 0);
}
