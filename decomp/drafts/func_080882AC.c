s32 func_080CE19C(void *);
s32 GetFridge__9FarmHouse(void *);
extern u32 vtable_unk_080E7D4C;

void *func_080882AC(u8 *arg0) {
    u32 z;
    u8 *base;

    func_080CE19C(arg0);
    *(u32 **)(arg0 + 4) = &vtable_unk_080E7D4C;
    z = 0;
    *(u8 *)(arg0 + 0x98) = (u8)z;
    base = *(u8 **)(arg0 + 8);
    *(u32 *)(arg0 + 0xFC) = (u32)(base + 0x1C2C);
    *(u32 *)(arg0 + 0x100) = (u32)(base + 0x1C38);
    *(u32 *)(arg0 + 0x104) = GetFridge__9FarmHouse(base + 0x1F4);
    *(u32 *)(arg0 + 0x108) = z;
    return arg0;
}
