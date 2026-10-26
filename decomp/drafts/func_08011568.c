void func_08011568(void *arg0) {
    u8 temp_r0;

    if ((arg0->unk0 != 0x10) && (arg0->unk4 != 0x10)) {
        temp_r0 = arg0->unk8;
        if (temp_r0 != 0) {
            arg0->unk8 = (u8) (temp_r0 - 1);
        }
    }
}
