s32 func_080D0EBC(s32 *, s32, s32, s32);

void func_08008FE4(s32 *arg0, s32 *arg1) {
    s32 sp0;
    s32 dma;
    s32 *temp_r3;
    s32 *var_r4;

    dma = 0x040000D4;
    var_r4 = arg0;
    if (var_r4 != arg1) {
        do {
            temp_r3 = (s32 *) var_r4[1];
            if (var_r4[0] == 1) {
                sp0 = (s32) temp_r3;
                temp_r3 = &sp0;
            }
            func_080D0EBC(temp_r3, var_r4[2], var_r4[3], dma);
            var_r4 += 4;
        } while (var_r4 != arg1);
    }
}
