s32 func_08050D0C(s32, s32);                          /* extern */

void func_080125EC(void *arg0) {
    s32 temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r1 = temp_r4->unkB4;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    temp_r4->unkB4 = 0;
    temp_r1_2 = temp_r4->unkB8;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        temp_r1_2->unk4->unk8(temp_r1_2, 3);
    }
    temp_r4->unkB8 = 0;
    temp_r0 = temp_r4->unkAC;
    if ((temp_r0 != 0) && (temp_r0 != 0)) {
        func_08050D0C(temp_r0, 3);
    }
    temp_r4->unkAC = 0;
    temp_r4->unk10 = (u16) (0xFEFF & temp_r4->unk10);
}
