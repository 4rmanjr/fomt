void *func_0805E760(void *arg0, void *arg1, u32 arg2) {
    void *temp_r0;

    if (arg2 < (u32) arg1->unk20) {
        temp_r0 = arg1->unk4 + (arg2 * 4);
        arg0->unk0 = (s32) ((temp_r0->unk2 * 4) + arg1->unk1C);
        arg0->unk4 = (u16) temp_r0->unk0;
    } else {
        arg0->unk0 = 0;
        arg0->unk4 = 0U;
    }
    return arg0;
}
