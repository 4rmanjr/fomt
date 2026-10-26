s32 func_08014164(void *arg0, s32 arg1, u8 arg2) {
    void **temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0);
    temp_r0_2->unk14->unk5C(temp_r0_2, arg1, arg2);
    temp_r4->unk9C = 0x19;
    return 1;
}
