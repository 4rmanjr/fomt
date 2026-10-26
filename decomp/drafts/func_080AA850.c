s32 func_0800E324(s32);                             /* extern */
s32 func_0809C510(s32 *, s32, s32, s32);              /* extern */
s32 func_080A5BD8(void *, s32, s32, s32);             /* extern */

typedef struct GenObj {
    u8 _pad0[41];
    s32 unk29;
    u8 _pad2D[103];
    s32 unk94;
} GenObj;
void func_080AA850(GenObj *arg0, s32 arg1) {
    s32 sp0;
    s32 var_r3;

    var_r3 = 0;
    if (func_0800E324(arg0->unk94 + 0x10) == 3) {
        var_r3 = 1;
    }
    func_0809C510(&sp0, arg0->unk94 + 0x34D8, arg1, var_r3);
    func_080A5BD8(arg0, sp0, sp4, sp8);
    arg0->unk29 = 1;
}
