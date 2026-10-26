s32 func_080D6EEC(s32);                               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
} GenObj;
void func_08007EA8(GenObj *arg0) {
    func_080D6EEC(arg0 + 4);
    func_080D6EEC(arg0 + 0x80);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}
