s32 func_080D6F0C(s32);                               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
} GenObj;
void func_080D6F1C(GenObj *arg0) {
    func_080D6F0C(arg0 + 0x10);
    func_080D6F0C(arg0 + 4);
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}
