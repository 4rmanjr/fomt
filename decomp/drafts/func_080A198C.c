s32 memcpy(void *, s32 *, s32);                         /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
} GenObj;
void *func_080A198C(GenObj *arg0) {
s32 sp0;

    sp0 = (u16) ((0xFFFFFC00 & sp0) | 0x29);
    sp0.unk1 = (u8) ((3 & sp0.unk1) | 0xE0);
    sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | 2);
    sp0.unk3 = (u8) ((3 & sp0.unk3) | 0x20);
    sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | 1);
    memcpy(arg0, &sp0, 6);
    arg0->unk6 = 0;
    return arg0;
}
