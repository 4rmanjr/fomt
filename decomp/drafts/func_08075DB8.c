s32 func_08075C88(void *, s16);                       /* extern */

typedef struct GenObj {
    u8 _pad0[6];
    s32 unk6;
    s32 unkA;
} GenObj;
void func_08075DB8(GenObj *arg0, s16 arg1) {
    arg0->unk6 = 0xFFFF;
    arg0->unkA = -1;
    func_08075C88(arg0, arg1);
}
