typedef struct GenObj {
    u8 _pad0[11];
    u8 unkB;
    u8 unkC;
} GenObj;
s32 func_0803BE9C(GenObj **arg0) {
    GenObj *t = *arg0;
    s32 hi = t->unkB >> 7;
    s32 c = t->unkC;
    s32 mask = 0x7F;
    s32 lo = (c & mask) * 2;

    return (lo | hi);
}

/* ATTEMPT-NOTE opencode: unkB-unkC u8 + hi-var; sisa alokasi hi r1 vs ref r2. */
