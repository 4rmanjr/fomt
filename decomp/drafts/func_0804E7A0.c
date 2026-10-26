s32 CpuFastSet(s32 *, s32, s32);                        /* extern */

void func_0804E7A0(u16 arg0, ? arg1, s32 arg2) {
    s32 sp0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;

    temp_r3 = 0xF & arg2;
    temp_r3_2 = temp_r3 | (temp_r3 * 0x10);
    temp_r3_3 = temp_r3_2 | (temp_r3_2 << 8);
    sp0 = temp_r3_3 | (temp_r3_3 << 0x10);
    CpuFastSet(&sp0, arg1, (((u32) (((arg0 >> 0x10) << 5) * arg0) >> 2) & 0x1FFFFF) | 0x01000000);
}
