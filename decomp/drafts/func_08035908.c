s32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */

void func_08035908(void *arg0, u16 arg1) {
    u16 temp_r0;
    u16 temp_r6;

    temp_r6 = arg0->unk44;
    if (arg1 != temp_r6) {
        arg0->unk44 = arg1;
        if ((arg0->unk14->unk28(arg0) << 0x18) == 0) {
            temp_r0 = arg0->unk22;
            if ((temp_r0 == temp_r6) && (temp_r0 != arg1)) {
                SetAnim__12AActorEntityUi(arg0, arg1);
            }
        }
    }
}
