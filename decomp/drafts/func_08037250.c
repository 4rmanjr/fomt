typedef struct Pair_08037250 {
    u32 a;
    u32 b;
} Pair_08037250;

void func_08037250(u8 *arg0) {
    u32 v[2];
    u16 *h;

    h = (u16 *)v;
    h[0] = 0;
    h[1] = 0;
    h[2] = 0;
    h[3] = 0;
    *(Pair_08037250 *)(arg0 + 0x34) = *(Pair_08037250 *)v;
}
