s32 SetLocation__5ActorRC13ActorLocation(void *, ? *); /* extern */
s32 func_0809C098(void *, ? *);                       /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_0809C0D4(void *arg0) {
s32 sp0;
s32 sp8;
s32 sp10;

    sp8.unk0 = (u16) ((0xFFFFFC00 & sp8.unk0) | 0x234);
    sp8.unk1 = (u8) (3 & sp8.unk1);
    sp8.unk2 = (u16) (0xFFFFFC00 & sp8.unk2);
    sp8.unk3 = (u8) (3 & sp8.unk3);
    sp8.unk4 = (u16) (0xFFFFFC00 & sp8.unk4);
    memcpy(&sp0, &sp8, 6);
    sp0.unk6 = 0;
    SetLocation__5ActorRC13ActorLocation(arg0, &sp0);
    func_0809C098(arg0, &sp10);
    arg0->unk8 = (u8) ((-0x80 & arg0->unk8) | 0x64);
}
