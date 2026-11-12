extern s32 gUnk_08100A36;

void func_08094A00(void *arg0, u8 *arg1, u8 *arg2) {
    register s32 i __asm__("r3");
    u32 idx;
    u8 c;
    u8 *tbl;

    i = 0;
    c = *arg2;
    if (c != 0) {
        idx = c - 1;
        if (idx <= 0x60U) {
            tbl = (u8 *) &gUnk_08100A36;
            do {
                *arg1 = *((u8 *) (idx + (u32) tbl));
                arg1 += 1;
                i += 1;
                if (i > 0xB) {
                    break;
                }
                c = arg2[i];
                if (c == 0) {
                    break;
                }
                idx = c - 1;
            } while (idx <= 0x60U);
        }
    }
    *arg1 = 0;
}
