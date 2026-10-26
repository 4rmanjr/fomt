s32 func_0805E850(void *, s32, s32);                  /* extern */

void func_0802A4C0(void *arg0, s32 arg1, s8 arg2) {
    void *temp_r0;
    void *temp_r4;

    arg0->unk88 = 1;
    if ((arg2 == 1) || (arg2 == 0)) {
        (arg0 + 0x88)->unk1 = arg2;
    }
    temp_r4 = arg0->unk10;
    if (temp_r4 != 0) {
        func_0805E850(temp_r4 + 0xB4, (**temp_r4->unk0)->unk64(), arg1);
        temp_r0 = temp_r4 + 0xC8;
        temp_r4->unkC8 = 1;
        temp_r0->unk2 = 0;
        (temp_r0 + 2)->unk1 = 1;
    }
}
