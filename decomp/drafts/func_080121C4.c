void func_080121C4(void *arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = (*temp_r4->unkA8)->unk40();
    temp_r4->unkE4 = temp_r0;
    if (temp_r0 != 0) {
        *((temp_r4 + 0xE4) - 0x48) = 0x16;
    }
}
