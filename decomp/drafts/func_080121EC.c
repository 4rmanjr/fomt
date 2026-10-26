s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */

void func_080121EC(void *arg0, s32 arg2) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if ((temp_r0 != 0) && (temp_r0->unk22 != arg2)) {
        SetAnim__12AActorEntityUi(temp_r0, arg2);
    }
}
