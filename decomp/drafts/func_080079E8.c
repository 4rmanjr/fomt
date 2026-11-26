void *__builtin_delete(void *);                        /* extern */
extern void *gUnk_03000408;

void func_080079E8(void *arg0, s32 arg1) {
    void *p;
    s32 *cnt;
    s32 v;

    p = gUnk_03000408;
    cnt = (s32 *) ((u8 *) p + 0x924);
    v = *cnt - 1;
    *cnt = v;
    if (v == 0) {
        if (p != 0) {
            __builtin_delete(p);
        }
        gUnk_03000408 = (void *) 0;
    }
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
