s32 func_08050E50(s32, s32);

void func_08012760(u8 *arg0, s32 arg1) {
    u8 *b;
    u32 obj;

    b = *(u8 **)(arg0 + 4);
    obj = *(u32 *)(b + 0xAC);
    if (obj != 0) {
        if ((s32)(*(u8 *)(*(u32 *)(b + 0x8C) + 0x2210) << 29) < 0) {
            func_08050E50(obj, arg1);
        }
    }
}
