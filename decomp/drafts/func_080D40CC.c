s32 memcpy(void *, s32 *, s32);                         /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
} GenObj;
void *func_080D40CC(GenObj *arg0) {
s32 sp0;

    sp0 = (u16) ((0xFFFFFC00 & sp0) | 0x234);
    sp0.unk1 = (u8) (3 & sp0.unk1);
    sp0.unk2 = (u16) (0xFFFFFC00 & sp0.unk2);
    sp0.unk3 = (u8) (3 & sp0.unk3);
    sp0.unk4 = (u16) (0xFFFFFC00 & sp0.unk4);
    memcpy(arg0, &sp0, 6);
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unkA = 0;
    return arg0;
}
