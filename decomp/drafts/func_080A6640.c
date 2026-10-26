s32 func_080A5760();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[180];
    s32 unkB4;
    s32 unkB8;
} GenObj;
void func_080A6640(GenObj *arg0) {
    func_080A5760();
    arg0->unkB4 = 0;
    (arg0 + 0xB4)->unk1 = 0;
    arg0->unkB8 = 0;
    (arg0 + 0xB8)->unk1 = 0;
}
