u32 GetAffection__C6Animal(void *);
u32 func_08063E64(void *arg0) {
    u32 st[2];
    u32 *pq;
    u32 *p;
    u32 t;
    st[0] = 10;
    st[1] = GetAffection__C6Animal(arg0) / 25;
    pq = &st[1];
    t = st[0];
    p = &st[0];
    if (t > st[1]) {
        p = pq;
    }
    return *p;
}
