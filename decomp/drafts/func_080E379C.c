extern u32 gUnk_081005EC;
void func_08050D8C(u8 *, s32 *);
s32 func_08050E50();

void func_080E379C(u8 *arg0) {
    *(u32 *)(arg0 + 0x3D8) = 0;
    *(u32 *)(arg0 + 0x3DC) = 0;
    func_08050D8C(arg0 + 0x1C8, (s32 *)&gUnk_081005EC);
    func_08050E50(arg0 + 0x1C8, 0x3A);
    *(u32 *)(arg0 + 0x1D4) = 4;
}
