u32 GetAffection__C6Animal(void *);                 /* extern */

u32 func_0807B8F4(s32 arg0, void *arg1) {
    u32 st[2];
    u32 *pq;
    u32 *p;
    u32 t;
    st[0] = 10;
    st[1] = GetAffection__C6Animal(arg1) / 25;
    pq = &st[1];
    t = st[0];
    p = &st[0];
    if (t > st[1]) {
        p = pq;
    }
    return *p;
}
