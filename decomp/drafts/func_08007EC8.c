s32 func_080D6F5C(s32);                               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
} GenObj;
void func_08007EC8(GenObj *arg0) {
    func_080D6F5C(arg0 + 0x80);
    func_080D6F5C(arg0 + 4);
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}
