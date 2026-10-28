typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    s32 unk8;
    u8 _padC[240];
    s32 unkFC;
    u8 _pad100[36];
    s32 unk124;
    s32 unk128;
    s32 unk12C;
} GenObj;
s32 func_0809B084(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    s32 n = arg0->unk8;
    s32 off = (n - 1) * 8 + 4;
    s32 v;
    s32 lim;
    s32 *q;
    p += off;
    v = arg0->unk124;
    lim = *(s32 *)(p + 4);
    q = (s32 *)(p + 4);
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk124;
    }
    return *q;
}
