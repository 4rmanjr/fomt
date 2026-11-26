typedef struct Cell_9D8D4 {
    u8 _pad0[4];
    u8 f : 4;
    u8 g : 4;
} Cell_9D8D4;

u32 func_0809D8D4(u8 *arg0, s32 arg1, s32 arg2) {
    s32 off;

    off = arg1 * 2 + arg2 * 0x38;
    return ((Cell_9D8D4 *) (arg0 + off))->f;
}
