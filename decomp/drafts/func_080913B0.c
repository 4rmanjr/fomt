s32 GetId__C4Tool(s8 *);

s32 func_080913B0(void *arg0, s8 arg1) {
    s8 sp0;

    (void)arg0;
    sp0 = arg1;
    if (GetId__C4Tool(&sp0) <= 0x2F) {
        if ((7 & GetId__C4Tool(&sp0)) == 5) {
            return 1;
        }
    }
    return 0;
}
