s32 RemoveHorse__4Farm(s32);                          /* extern */

void func_08014D30(void *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    if (arg1 == 0) {
        temp_r0 = temp_r4->unkA8;
        (*temp_r0)->unk3C(temp_r0, 0x2C);
        RemoveHorse__4Farm(temp_r4->unk8C + 0x14);
    }
}
