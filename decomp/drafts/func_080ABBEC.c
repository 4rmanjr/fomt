s32 func_080AC388(void *, void *, void *, s32, s32, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 _pad0[0x18];
    s32 unk24;
} GenObj;

void func_080ABBEC(GenObj *arg0) {
    GenObj *t = arg0;
    t->unk8 = -t->unk24;
    func_080AC388((u8 *)t + 0x10, (u8 *)t + 0x1C, 0, 0, (s32)((u8 *)t + 8), 0);
}
