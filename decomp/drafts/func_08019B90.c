void *GetMapData(s32);                              /* extern */
s32 func_0801A13C(void *, u32, u32, s32);             /* extern */

void func_08019B90(void *arg0) {
    s32 temp_r2_2;
    u8 temp_r2;
    void *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r2 = arg0->unk104C;
    temp_r0->unk90->unk14(temp_r0, arg0->unk1048, temp_r2, 0x1E - temp_r2);
    if (GetMapData(arg0->unk4->unk4)->unk24 == 0) {
        temp_r2_2 = *arg0->unk1040;
        func_0801A13C(arg0, (u32) (temp_r2_2 << 0xB) >> 0x1B, (u32) (temp_r2_2 << 5) >> 0x1A, 1);
    }
}
