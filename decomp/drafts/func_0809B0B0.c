typedef struct GenObj {
    u8 _pad0[252];
    s32 unkFC;
    u8 _pad100[40];
    s32 unk128;
} GenObj;
s32 func_0809B0B0(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 0xFC;
    s32 n = *(s32 *)p;
    s32 off = (n - 1) * 8 + 4;
    s32 v;
    s32 lim;
    s32 *q;
    p += off;
    v = arg0->unk128;
    lim = *(s32 *)p;
    q = (s32 *)p;
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk128;
    }
    return *q;
}
