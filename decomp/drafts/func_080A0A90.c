void func_080A0A90(void *arg0) {
    u32 sp0;
    u32 sp4;
    s32 temp_r4;
    u32 *var_r1;
    u32 temp_r0;

    if ((s32) (arg0->unk2 << 0x1A) >= 0) {
        temp_r4 = arg0->unk0;
        temp_r0 = ((u32) (temp_r4 << 0xB) >> 0x18) + 1;
        sp0 = temp_r0;
        sp4 = 0xFF;
        var_r1 = &sp0;
        if (temp_r0 > 0xFFU) {
            var_r1 = &sp4;
        }
        arg0->unk0 = (s32) ((0xFFE01FFF & temp_r4) | ((u8) *var_r1 << 0xD));
        arg0->unk2 = (u8) (arg0->unk2 | 0x20);
    }
}
