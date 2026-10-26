s32 memcpy(void *, void *, s32);                      /* extern */
extern ? gUnk_0875A440;

void func_0803D340(void **arg0, u32 arg1) {
    void *temp_r7;

    temp_r7 = *arg0;
    memcpy(temp_r7 + 0x248, ((arg1 / 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
    memcpy(temp_r7 + 0x268, ((arg1 % 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
}
