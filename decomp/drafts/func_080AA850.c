s32 func_0800E324(s32);                              /* extern */
s32 func_0809C510(s32 *, s32, s32, s32);              /* extern */
s32 func_080A5BD8(void *, s32 *, s32, s32);           /* extern */

typedef struct GenObj {
    u8 _pad29[0x29];
    u8 unk29;
    u8 _pad2A[0x94 - 0x2A];
    s32 unk94;
} GenObj;

void func_080AA850(GenObj *arg0, s32 arg1) {
    s32 buf[3];
    s32 *p;
    s32 a;
    s32 addr;
    s32 flag;

    p = &arg0->unk94;
    a = func_0800E324(*p + 0x10);
    addr = *p + 0x34D8;
    flag = (a == 3) ? 1 : 0;
    func_0809C510(buf, addr, arg1, flag);
    func_080A5BD8(arg0, (s32 *) buf[0], buf[1], buf[2]);
    arg0->unk29 = 1;
}
