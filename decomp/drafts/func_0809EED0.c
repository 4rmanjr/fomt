s32 func_0809EED0(void *arg0) {
    u8 temp_r0;

    temp_r0 = arg0->unk16;
    if (temp_r0 == 0xA) {
        return 0;
    }
    arg0->unk16 = (u8) (temp_r0 + 1);
    return 1;
}
