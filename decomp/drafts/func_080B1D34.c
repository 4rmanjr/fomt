s32 func_080087C8(void *);                            /* extern */
s16 *func_08008918();                               /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_080AF814(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[2104];
    s32 unk838;
} GenObj;
void func_080B1D34(GenObj *arg0) {
    s16 sp0;
    s16 *temp_r0;
    s32 var_r6;

    var_r6 = 0;
    temp_r0 = func_08008918();
    sp0 = 0x1640;
    *temp_r0 = 0x1640;
    func_080AF814(arg0);
    func_08008B6C(arg0 + 0x814, 0xBB);
    if (arg0->unk838 == 2) {
        do {
            func_080087C8(arg0);
            func_080AF814(arg0);
            var_r6 += 1;
            if (var_r6 > 0x78) {
                arg0->unk838 = 3;
            }
        } while (arg0->unk838 == 2);
    }
}
