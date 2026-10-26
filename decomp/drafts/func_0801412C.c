s32 func_0801412C(void *arg0) {
    void **temp_r0;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    if (((*temp_r0)->unk40(temp_r0, 0)->unk14->unk48() << 0x18) != 0) {
        temp_r4->unk9C = 0x19;
        return 1;
    }
    return 0;
}
