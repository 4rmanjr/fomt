s32 func_080AC388(void *, void *, s32, s32, s32, void *); /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[20];
    s32 unk24;
} GenObj;
void func_080ABC14(GenObj *arg0) {
    arg0->unkC = (s32) arg0->unk24;
    func_080AC388(arg0 + 0x10, arg0 + 0x1C, 0, 0, 0, arg0 + 0xC);
}
