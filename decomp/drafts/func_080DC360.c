s32 func_080D7F9C(void *, s32, s32, s32, s32, s32);       /* extern */

typedef struct GenObj {
    u8 _pad0[168];
    s32 unkA8;
} GenObj;
void func_080DC360(GenObj *arg0, ? arg1, ? arg2, s32 arg3, s32 arg4) {
    func_080D7F9C(arg0, arg1, (*arg0->unkA8)->unk14(), arg2, arg3, arg4);
}
