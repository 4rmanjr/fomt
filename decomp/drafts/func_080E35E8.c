s32 func_08050DC8(s32, s32 *, s32, s32);                /* extern */
s32 func_08050E50(s32, s32);                          /* extern */
extern s32 gUnk_081004E0;

void func_080E35E8(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 + 0x1C8;
    func_08050DC8(temp_r4, &gUnk_081004E0, 0, 0);
    func_08050E50(temp_r4, 0x39);
}
