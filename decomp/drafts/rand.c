u32 rand(void) {
    s32 *temp_r1;
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0_2 = M2C_ERROR(/* Read from unset register $pc */) + 0x10;
    temp_r1 = M2C_ERROR(/* Read from unset register $pc */)->unk10;
    temp_r0 = (temp_r0_2->unk4 * *temp_r1) + temp_r0_2->unk8;
    *temp_r1 = temp_r0;
    return (u32) (temp_r0 * 2) >> 1;
}
