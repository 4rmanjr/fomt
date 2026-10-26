s32 func_080E3DB4(s32, void *, u16 *);              /* extern */

void func_0809C600(u32 *arg0, u16 arg1) {
    u16 sp0;
    u16 *temp_r1;
    u32 temp_r0;
    void *temp_r4;

    sp0 = arg1;
    temp_r4 = arg0 + ((*arg0 * 2) + 4);
    if (func_080E3DB4(arg0 + 4, temp_r4, &sp0) == temp_r4) {
        temp_r0 = *arg0;
        if (temp_r0 <= 2U) {
            temp_r1 = arg0 + ((temp_r0 * 2) + 4);
            if (temp_r1 != 0) {
                *temp_r1 = sp0;
            }
            *arg0 = temp_r0 + 1;
        }
    }
}
