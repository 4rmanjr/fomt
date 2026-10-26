s32 BeginIncubation__4CoopUi(s32, s32);               /* extern */

void func_080146CC(void *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    BeginIncubation__4CoopUi(temp_r4->unk8C + 0x410, arg1);
    temp_r0 = temp_r4->unkA8;
    (*temp_r0)->unkAC(temp_r0, arg1);
}
