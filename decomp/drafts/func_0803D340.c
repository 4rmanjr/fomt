s32 memcpy(void *, void *, s32);                      /* extern */
s32 __udivsi3(s32, s32);                             /* extern */
s32 __umodsi3(s32, s32);                             /* extern */
extern s32 gUnk_0875A440;

void func_0803D340(void **arg0, u32 arg1) {
    void *temp_r7;
    s32 q;
    s32 r;
    u8 *base;
    u8 *dst2;

    temp_r7 = *arg0;
    q = __udivsi3(arg1, 10);
    r = __umodsi3(arg1, 10);
    q <<= 5;
    base = (u8 *)&gUnk_0875A440;
    q += (s32)base;
    memcpy((u8 *)temp_r7 + (0x92 << 2), (void *)q, 0x20);
    dst2 = (u8 *)temp_r7 + (0xAC << 2);
    *dst2 = 1;
    r <<= 5;
    r += (s32)base;
    memcpy((u8 *)temp_r7 + (0x9A << 2), (void *)r, 0x20);
    *dst2 = 1;
}

/* ATTEMPT-NOTE opencode: strb di tengah via dst2-var (2x); base live lintas call -> r8? */
