s32 func_080D6ECC(s32);                               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
} GenObj;
void func_080D6EEC(GenObj *arg0) {
    func_080D6ECC(arg0 + 4);
    func_080D6ECC(arg0 + 0x40);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}
