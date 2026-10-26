s32 __7AEntityP10GameObjectRC8Location(void *);       /* extern */
extern s32 vtable_unk_080E7380;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    u8 _pad8[12];
    void *unk14;
    s32 unk18;
} GenObj;
void *func_08038740(GenObj *arg0, s32 arg2) {
s32 sp0;

    sp0 = (u16) ((0xFFFFFC00 & sp0) | 8);
    sp0.unk1 = (u8) (3 & sp0.unk1);
    sp0.unk2 = (u16) (0xFFFFFC00 & sp0.unk2);
    sp0.unk3 = (u8) (3 & sp0.unk3);
    sp0.unk4 = (u16) (0xFFFFFC00 & sp0.unk4);
    __7AEntityP10GameObjectRC8Location(arg0);
    arg0->unk14 = &vtable_unk_080E7380;
    arg0->unk18 = arg2;
    return arg0;
}
