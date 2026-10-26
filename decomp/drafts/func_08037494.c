s32 SetAnimFacing__12AActorEntityUi(void *);          /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08037098(void *, s32);                       /* extern */
s32 func_08037618(void *, s32);                     /* extern */
s32 func_08037628(void *, s32);                     /* extern */
s32 func_080AB788(s32);                             /* extern */
s32 func_080AB7A4(u8);                              /* extern */
s32 func_080AB82C(void *, s32);                     /* extern */
extern ? gUnk_080F1538;

s32 func_08037494(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 var_r1;
    void *temp_r4;
    void *temp_r4_2;

    var_r1 = 0;
    if ((u32) (((u32) ((*arg0->unk0)->unk144()->unkA << 0x1B) >> 0x1B) - 6) > 0xEU) {
        var_r1 = 1;
    }
    temp_r4 = (var_r1 * 0x14) + &gUnk_080F1538;
    temp_r0 = func_080AB82C(temp_r4, 5);
    temp_r4_2 = temp_r4 + (temp_r0 * 4);
    temp_r5 = (0x3C * temp_r4_2->unk1) + func_080AB788(0x3C * temp_r4_2->unk2);
    temp_r0_2 = func_080AB788(4);
    if ((temp_r0_2 != 0) && (temp_r0_2 != 3) && (arg0->unk20 != func_080AB7A4(arg0->unk20))) {
        SetAnimFacing__12AActorEntityUi(arg0);
    }
    func_08037098(arg0, func_08037628(arg0, temp_r0));
    if (arg0->unk22 != func_08037618(arg0, temp_r0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    return temp_r5;
}
