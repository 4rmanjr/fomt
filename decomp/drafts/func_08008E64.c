s32 func_080D0EBC(s32, s32, s32, s32);                /* extern */

void func_08008E64(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r2;

    if ((arg0 != 0) && (arg1 != 0)) {
        if ((arg2 != 0) && (temp_r3 = arg0 | arg1 | arg2, ((1 & temp_r3) == 0))) {
            if (!(temp_r3 & 3)) {
                var_r2 = ((u32) (arg2 << 0xE) >> 0x10) | 0x84000000;
            } else {
                var_r2 = ((u32) (arg2 << 0xF) >> 0x10) | 0x80000000;
            }
        } else {
            var_r2 = 0;
        }
        func_080D0EBC(arg0, arg1, var_r2, 0x040000D4);
    }
}
