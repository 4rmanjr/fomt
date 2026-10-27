s32 func_080D0644(s32, u8);                           /* extern */

void func_080E3A5C(s32 dummy, s32 arg1, u8 arg2) {
    func_080D0644(arg1, arg2);
}

/* ATTEMPT-NOTE opencode: dummy agar arg1=r1, arg2=r2 (lsls/lsrs u8). */
