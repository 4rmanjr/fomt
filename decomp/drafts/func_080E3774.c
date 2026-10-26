s32 func_08050D8C(s32, s32 *);                          /* extern */
s32 func_08050E50(s32, s32);                          /* extern */
extern s32 gUnk_081005D8;

void func_080E3774(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 + 0x1C8;
    func_08050D8C(temp_r4, &gUnk_081005D8);
    func_08050E50(temp_r4, 0x38);
}
