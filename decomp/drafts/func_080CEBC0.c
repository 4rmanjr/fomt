s32 func_080CE510(void *, s32, s32, s32, s32, s32);   /* extern */

typedef struct GenObj {
    u8 _pad0[188];
    s32 unkBC;
} GenObj;
s32 func_080CEBC0(GenObj *arg0) {
    s32 *p = &arg0->unkBC;
    s32 temp = *p;
    if (temp != 0) {
        temp -= 1;
    } else {
        temp = 7;
    }
    *p = temp;
    func_080CE510(arg0, arg0->unkBC + 1, 0x0600F0F6, 0x20, 0, 0x20);
    return arg0->unkBC;
}
