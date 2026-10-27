s32 func_080E3E28(s32, void *, s16 *);              /* extern */
s32 memmove(s32, s32, s32);                           /* extern */

void func_0809C644(s32 *arg0, s16 arg1) {
    s16 sp0;
    void *temp_r4;
    s32 temp_r3;
    s32 temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;

    u8 *a4;

    sp0 = arg1;
    a4 = (u8 *)arg0 + 4;
    temp_r4 = (u8 *)arg0 + ((*arg0 * 2) + 4);
    temp_r3 = func_080E3E28((s32)a4, temp_r4, &sp0);
    if (temp_r3 != (s32)temp_r4) {
        temp_r0_2 = *arg0;
        if (temp_r0_2 != 0) {
            temp_r0_3 = (u8 *)arg0 + ((temp_r0_2 * 2) + 4);
            temp_r1 = (u8 *)temp_r3 + 2;
            if (temp_r1 != temp_r0_3) {
                if (temp_r0_3 != temp_r1) {
                    memmove(temp_r3, (s32)temp_r1, (s32)temp_r0_3 - (s32)temp_r1);
                }
            }
            *arg0 -= 1;
        }
    }
}

/* ATTEMPT-NOTE opencode: pointer byte-arith via (u8*); sp0 stack-u16. */

/* ATTEMPT-NOTE opencode: nested-if (bukan &&) agar dua compare terpisah; a4-var utk urutan adds; byte-arith (u8*). */
