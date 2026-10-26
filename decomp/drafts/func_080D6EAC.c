s32 func_080D6E98(s32);                               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
} GenObj;
void func_080D6EAC(GenObj *arg0) {
    func_080D6E98(arg0 + 4);
    func_080D6E98(arg0 + 0x10);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}
