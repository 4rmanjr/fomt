s32 func_080AC388(void *, void *, s32, void *, s32, s32); /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[28];
    s32 unk24;
} GenObj;
void func_080ABBC4(GenObj *arg0) {
    arg0->unk4 = (s32) (0 - arg0->unk24);
    func_080AC388(arg0 + 0x10, arg0 + 0x1C, 0, arg0 + 4, 0, 0);
}
