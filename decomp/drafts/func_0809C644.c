s32 func_080E3E28(s32, void *, s16 *);              /* extern */
s32 memmove(s32, s32, s32);                           /* extern */

void func_0809C644(s32 *arg0, s16 arg1) {
    s16 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    void *temp_r0_3;
    void *temp_r4;

    sp0 = arg1;
    temp_r4 = arg0 + ((*arg0 * 2) + 4);
    temp_r0 = func_080E3E28(arg0 + 4, temp_r4, &sp0);
    if (temp_r0 != temp_r4) {
        temp_r0_2 = *arg0;
        if (temp_r0_2 != 0) {
            temp_r0_3 = arg0 + ((temp_r0_2 * 2) + 4);
            temp_r1 = temp_r0 + 2;
            if ((temp_r1 != temp_r0_3) && (temp_r0_3 != temp_r1)) {
                memmove(temp_r0, temp_r1, temp_r0_3 - temp_r1);
            }
            *arg0 -= 1;
        }
    }
}
