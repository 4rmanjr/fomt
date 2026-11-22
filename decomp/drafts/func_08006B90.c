extern s32 gUnk_080E89B6;

void func_08006B90(void *arg0) {
    volatile u8 sp0;
    u8 *fb;
    u8 *p;
    u8 *base;
    s32 a;
    s32 b;
    s32 idx;
    u8 cnt;
    u8 *q;
    u8 v;

    p = (u8 *) arg0;
    fb = (u8 *) &sp0;
    base = (u8 *) &gUnk_080E89B6;
    a = (s32) *(s8 *) (p + 0x4604);
    idx = a << 1;
    b = (s32) *(s8 *) (p + 0x4605);
    idx = idx + (b * 0x20 - b);
    idx = idx + *(s32 *) (p + 0x4600) * 0xBA;
    v = base[idx];
    *fb = v;
    cnt = *(u8 *) (p + 0x4610);
    q = p + 0x461C + cnt;
    if (*q == v) {
        cnt = cnt + 1;
    } else {
        *q = v;
        cnt = *(u8 *) (p + 0x4610) + 1;
    }
    *(u8 *) (p + 0x4610) = cnt;
    if (*(u8 *) (p + 0x4610) > 0xB) {
        *(s8 *) (p + 0x4604) = 0xC;
        *(s8 *) (p + 0x4605) = 6;
        *(u8 *) (p + 0x4610) = 0xB;
    }
}
