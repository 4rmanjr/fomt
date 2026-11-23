extern u32 gRandState;

u32 rand(void) {
    u32 v;

    gRandState = gRandState * 1103515245U + 12345U;
    v = gRandState;
    return (v << 1) >> 1;
}
