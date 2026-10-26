s32 func_080AC388(void *, void *, s32, s32, void *, s32); /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[24];
    s32 unk24;
} GenObj;
void func_080ABBEC(GenObj *arg0) {
    arg0->unk8 = (s32) (0 - arg0->unk24);
    func_080AC388(arg0 + 0x10, arg0 + 0x1C, 0, 0, arg0 + 8, 0);
}
