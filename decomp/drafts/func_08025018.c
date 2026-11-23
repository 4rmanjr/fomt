void func_0802F0EC(u8 *, s32, s32);                    /* extern */
u16 func_0802D158(u8 *);                               /* extern */
s32 SetAnim__12AActorEntityUi(void *, u16);               /* extern */
void func_0803242C(u8 *, s32);                         /* extern */

void func_08025018(u8 *arg0, s32 arg1) {
    u16 v;

    *(u8 *) (arg0 + 0xC1) = 0;
    if (*(u8 *) (arg0 + 0xC2) == 0) {
        if (*(u8 *) (arg0 + 0xC0) != 0) {
            func_0802F0EC(arg0, 0, 0);
            v = func_0802D158(arg0);
            if (*(u16 *) (arg0 + 0x22) != v) {
                SetAnim__12AActorEntityUi((void *) arg0, v);
            }
        }
        func_0803242C(arg0, arg1);
    }
}
