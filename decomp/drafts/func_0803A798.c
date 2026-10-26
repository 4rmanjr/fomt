s32 __7AEntityP10GameObjectRC8Location(void *, s32, s32 *); /* extern */
void *__builtin_new(s32);                           /* extern */
extern s32 vtable_unk_080E7568;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    u8 _pad8[12];
    void *unk14;
    s32 unk18;
    s32 unk1C;
} GenObj;
void *func_0803A798(s32 arg0, s32 arg1) {
s32 sp0;
    GenObj *temp_r5;

    temp_r5 = __builtin_new(0x20);
    sp0 = (u16) (0xFFFFFC00 & sp0);
    sp0.unk1 = (u8) (3 & sp0.unk1);
    sp0.unk2 = (u16) (0xFFFFFC00 & sp0.unk2);
    sp0.unk3 = (u8) (3 & sp0.unk3);
    sp0.unk4 = (u16) (0xFFFFFC00 & sp0.unk4);
    __7AEntityP10GameObjectRC8Location(temp_r5, arg0, &sp0);
    temp_r5->unk14 = &vtable_unk_080E7568;
    temp_r5->unk18 = arg1;
    temp_r5->unk1C = 1;
    return temp_r5;
}
