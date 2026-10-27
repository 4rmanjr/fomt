s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
extern s32 gUnk_08100558;

void func_080E3678(void *arg0) {
    void *temp_r4;

    *((s32 *)((u8 *)arg0 + (0xF6 << 2))) = 0;
    *((s32 *)((u8 *)arg0 + (0xF7 << 2))) = 0;
    temp_r4 = (u8 *)arg0 + (0xE4 << 1);
    func_08050DC8(temp_r4, &gUnk_08100558, 0, 0);
    func_08050E50(temp_r4, 0x3A);
}

/* ATTEMPT-NOTE opencode: offset via shift (bukan literal); tanpa struct. */
