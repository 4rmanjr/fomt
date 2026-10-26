s32 func_080AC388(void *, void *, s32, s32);          /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[32];
    s32 unk24;
} GenObj;
void func_080ABBA0(GenObj *arg0) {
    arg0->unk0 = (s32) arg0->unk24;
    func_080AC388(arg0 + 0x10, arg0 + 0x1C, 0, 0);
}
