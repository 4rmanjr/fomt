extern s32 gRandState;

s32 rand(void) {
    gRandState = gRandState * 1103515245 + 12345;
    return gRandState & 0x7fffffff;
}
