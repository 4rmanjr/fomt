s32 func_080D0EBC(s32 *, s32, s32, s32);              /* extern */

void func_08008EB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 temp_r3;
    s32 var_r2;

    sp0 = arg0;
    if (arg1 != 0) {
        if ((arg2 != 0) && (temp_r3 = arg1 | arg2, ((1 & temp_r3) == 0))) {
            if (!(temp_r3 & 3)) {
                var_r2 = ((u32) (arg2 << 0xE) >> 0x10) | 0x84000000;
            } else {
                var_r2 = ((u32) (arg2 << 0xF) >> 0x10) | 0x80000000;
            }
        } else {
            var_r2 = 0;
        }
        func_080D0EBC(&sp0, arg1, var_r2 | 0x01000000, 0x040000D4);
    }
}
