s32 GetLocation__C3Npc(void *);                       /* extern */
s32 func_080A0030(s32, s32);                        /* extern */
s32 memcpy(void *, ? *, s32);                         /* extern */

void *func_080A03B8(void *arg0, s32 arg1, s32 arg2) {
s32 sp0;

    if (func_080A0030(arg1, arg2) != 0) {
        GetLocation__C3Npc(arg0);
    } else {
        sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | 2);
        sp0.unk1 = (u8) (3 & sp0.unk1);
        sp0.unk2 = (u16) (0xFFFFFC00 & sp0.unk2);
        sp0.unk3 = (u8) (3 & sp0.unk3);
        sp0.unk4 = (u16) (0xFFFFFC00 & sp0.unk4);
        memcpy(arg0, &sp0, 6);
        arg0->unk6 = 0;
    }
    return arg0;
}
