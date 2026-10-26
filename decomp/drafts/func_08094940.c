s32 func_08094A00(void *, s32, s32);                    /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
void func_08094940(GenObj *arg0, ? arg1) {
    func_08094A00(arg0, arg1, arg0->unk8);
}
