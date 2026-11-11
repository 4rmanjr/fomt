s32 func_080E3E9C(u8 *, u8 *, s32);

s32 func_0809E968(u8 *arg0, s32 arg1) {
    u8 *p = arg0 + 0x38;

    return (u32) func_080E3E9C(arg0, p, arg1) != (u32) p;
}
