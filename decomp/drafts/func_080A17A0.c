s32 memcpy(void *, s32 *, s32);                         /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
} GenObj;
void *func_080A17A0(GenObj *arg0, u32 arg1) {
s32 sp0;
    s32 var_r1;

    switch (arg1) {                                 /* irregular */
    default:
        sp0 = (u16) ((0xFFFFFC00 & sp0) | 7);
        sp0.unk1 = (u8) ((3 & sp0.unk1) | 0x20);
        sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | 6);
        sp0.unk3 = (u8) ((3 & sp0.unk3) | 0x60);
        var_r1 = 5;
block_6:
        sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | var_r1);
        break;
    case 1:
        sp0 = (u16) ((0xFFFFFC00 & sp0) | 7);
        sp0.unk1 = (u8) ((3 & sp0.unk1) | 0xE0);
        sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | 5);
        sp0.unk3 = (u8) ((3 & sp0.unk3) | 0xA0);
        sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | 4);
        break;
    case 2:
        sp0 = (u16) ((0xFFFFFC00 & sp0) | 7);
        sp0.unk1 = (u8) ((3 & sp0.unk1) | 0x20);
        sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | 6);
        sp0.unk3 = (u8) ((3 & sp0.unk3) | 0xE0);
        var_r1 = 3;
        goto block_6;
    }
    memcpy(arg0, &sp0, 6);
    arg0->unk6 = 0;
    return arg0;
}
