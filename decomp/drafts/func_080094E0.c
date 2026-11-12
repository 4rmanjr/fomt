s32 func_080094A4(void *, s32);                     /* extern */

s32 func_080094E0(void *arg0, s32 arg1) {
    s32 v;

    v = (s16) func_080094A4((u8 *) arg0 + 0xC, arg1);
    return (u32) (((u32) -v) | (u32) v) >> 0x1F;
}
