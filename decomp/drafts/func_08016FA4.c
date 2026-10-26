s32 SetLocation__12AActorEntityRC13ActorLocation(void *, ? *); /* extern */
s32 SetLocation__7AEntityUiii(void *, u32, s16, s16); /* extern */
s32 func_0800EECC(s32);                               /* extern */
s32 func_080A0A90(s32);                               /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_08016FA4(void *arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5) {
s32 sp0;
s32 sp8;
    s32 sp10;
    void *sp14;
    s32 var_r1;
    u8 temp_r4;
    u8 temp_r6;
    void **temp_r0_2;
    void **temp_r0_4;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_5;

    sp10 = arg1;
    temp_r0 = arg0->unk4;
    sp14 = temp_r0;
    if (arg1 <= 0x49) {
        temp_r0_2 = temp_r0->unkA8;
        temp_r0_3 = (*temp_r0_2)->unk40(temp_r0_2, sp10);
        if (temp_r0_3 == 0) {

        } else {
            sp8.unk0 = (u16) ((0xFFFFFC00 & sp8.unk0) | (arg2 & 0x3FF));
            sp8.unk1 = (u8) ((3 & sp8.unk1) | ((arg3 & 0x3F) * 4));
            sp8.unk2 = (u16) ((0xFFFFFC00 & sp8.unk2) | (((u32) (arg3 << 0x10) >> 0x16) & 0x3FF));
            sp8.unk3 = (u8) ((3 & sp8.unk3) | (((u16) arg4 & 0x3F) * 4));
            sp8.unk4 = (u16) ((0xFFFFFC00 & sp8.unk4) | (((u32) (arg4 << 0x10) >> 0x16) & 0x3FF));
            memcpy(&sp0, &sp8, 6);
            sp0.unk6 = (s8) arg5;
            SetLocation__12AActorEntityRC13ActorLocation(temp_r0_3, &sp0);
            temp_r0_3->unk14->unk20(temp_r0_3);
        }
    } else {
        temp_r0_4 = sp14->unkA8;
        temp_r0_5 = (*temp_r0_4)->unk40(temp_r0_4, sp10);
        if (temp_r0_5 != 0) {
            sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | (arg2 & 0x3FF));
            temp_r6 = (3 & sp0.unk1) | ((arg3 & 0x3F) * 4);
            sp0.unk1 = temp_r6;
            sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | (((u32) (arg3 << 0x10) >> 0x16) & 0x3FF));
            temp_r4 = (3 & sp0.unk3) | (((u16) arg4 & 0x3F) * 4);
            sp0.unk3 = temp_r4;
            sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | (((u32) (arg4 << 0x10) >> 0x16) & 0x3FF));
            SetLocation__7AEntityUiii(temp_r0_5, (u32) (sp0.unk0 << 0x16) >> 0x16, (s16) (((sp0.unk2 & 0x3FF) << 6) | (temp_r6 >> 2)), (s16) (((sp0.unk4 & 0x3FF) << 6) | (temp_r4 >> 2)));
            temp_r0_5->unk14->unk20(temp_r0_5);
        }
    }
    if (sp10 == 0) {
        if (arg2 == 0x19) {
            func_080A0A90(sp14->unk8C + 0x1CD4);
        }
        var_r1 = 0;
        if ((u32) (arg2 - 0x35) <= 0xFEU) {
            var_r1 = arg2 - 0x34;
        } else if ((u32) (arg2 + 0xFFFFFECB) <= 0xFEU) {
            var_r1 = arg2 + 0xFFFFFECC;
        }
        if (var_r1 > 0) {
            func_0800EECC(sp14->unk8C + 0x1BD8);
        }
    }
}
