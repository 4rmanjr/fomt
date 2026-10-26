s32 func_08008BE0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_08012454(GenObj *arg0) {
    func_08008BE0(arg0->unk4 + 0xBC);
}
