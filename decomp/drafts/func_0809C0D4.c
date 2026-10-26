s32 SetLocation__5ActorRC13ActorLocation(void *, s32 *); /* extern */
s32 func_0809C098(void *, s32 *);                       /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    s32 unk8;
} GenObj;
void func_0809C0D4(GenObj *arg0) {
s32 sp0;
s32 sp8;
s32 sp10;

    sp8 = (u16) ((0xFFFFFC00 & sp8) | 0x234);
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
