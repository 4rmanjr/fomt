s32 SetLocation__3NpcRC13ActorLocation(void *, ? *);  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_0803D688(void *arg0, void *arg1, s32 arg2) {
s32 sp0;
s32 sp8;
s32 sp10;
    s16 temp_r0_2;
    s16 temp_r6;
    s32 temp_r1;
    s32 temp_sl;
    u32 temp_r4;
    void *temp_r0;
    void *temp_r1_2;
    void *var_ip;

    temp_sl = arg1->unk0(arg2);
    var_ip = 0;
    temp_r1 = arg1->unk8;
    if (temp_r1 != 0) {
        temp_r1_2 = *((temp_sl * 4) + temp_r1);
        if ((temp_r1_2 != 0) && (temp_r1_2->unk0 != 0)) {
            temp_r0 = temp_r1_2->unk4;
            if (temp_r0 != 0) {
                var_ip = temp_r0->unk4;
            }
        }
    }
    if (var_ip != 0) {
        temp_r6 = var_ip->unk6;
        temp_r0_2 = var_ip->unk8;
        sp8.unk0 = (u16) ((0xFFFFFC00 & sp8.unk0) | ((u32) (var_ip->unkA << 0x16) >> 0x16));
        sp8.unk1 = (u8) ((3 & sp8.unk1) | (((u16) temp_r6 & 0x3F) * 4));
        sp8.unk2 = (u16) ((0xFFFFFC00 & sp8.unk2) | ((u32) (temp_r6 << 0x10) >> 0x16));
        sp8.unk3 = (u8) ((3 & sp8.unk3) | (((u16) temp_r0_2 & 0x3F) * 4));
        sp8.unk4 = (u16) ((0xFFFFFC00 & sp8.unk4) | ((u32) (temp_r0_2 << 0x10) >> 0x16));
        temp_r4 = (u32) (var_ip->unkB << 0x1C) >> 0x1E;
        memcpy(&sp0, &sp8, 6);
        sp0.unk6 = (s8) temp_r4;
    } else {
        sp10.unk0 = (u16) ((0xFFFFFC00 & sp10.unk0) | 0x234);
        sp10.unk1 = (u8) (3 & sp10.unk1);
        sp10.unk2 = (u16) (0xFFFFFC00 & sp10.unk2);
        sp10.unk3 = (u8) (3 & sp10.unk3);
        sp10.unk4 = (u16) (0xFFFFFC00 & sp10.unk4);
        memcpy(&sp0, &sp10, 6);
        sp0.unk6 = 0;
    }
    SetLocation__3NpcRC13ActorLocation(arg0, &sp0);
    arg0->unkC = (u8) ((-0x20 & arg0->unkC) | (temp_sl & 0x1F));
    arg0->unkC = (s16) (0xFFFFFC1F & (u16) arg0->unkC);
    arg0->unkD = (u8) (-0x7D & arg0->unkD);
    arg0->unkC = (s32) ((s32) arg0->unkC & 0xFE007FFF);
}
