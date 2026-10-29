typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    s32 unk8;
    u8 _padC[240];
    s32 unkFC;
    u8 _pad100[32];
    s32 unk120;
    s32 unk124;
    s32 unk128;
    s32 unk12C;
} GenObj;
s32 func_0809B05C(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    s32 n = arg0->unk8;
    s32 off = (n - 1) * 8 + 4;
    s32 v;
    s32 lim;
    s32 *q;
    p += off;
    v = arg0->unk120;
    lim = *(s32 *)p;
    q = (s32 *)p;
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk120;
    }
    return *q;
}
