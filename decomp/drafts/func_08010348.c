s32 rand();                                         /* extern */

s32 func_08010348(void) {
    s32 r;
    do {
        r = rand();
    } while (r == 0);
    return r;
}
