s32 func_0809DA00(s32, u32, s32);                   /* extern */

s32 func_0809D9B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *ent;
    u8 b;
    s32 t;
    u16 v;
    s32 res;

    res = 0;
    ent = (u8 *) arg0 + (arg1 * 2 + arg2 * 0x38);
    b = ent[4];
    if ((u8) (((u32) b << 0x1C) >> 0x1C) == 4) {
        v = *(u16 *) (ent + 4);
        res = func_0809DA00(arg0, (u32) (((u32) v << 0x16) >> 0x1A), arg3);
        ent[4] = -0x10 & ent[4];
        *(u16 *) (ent + 4) &= 0xFC0F;
    }
    return res;
}
