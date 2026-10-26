s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F29C0;
extern s32 vtable_unk_080E6918;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
    u8 _pad18[48];
    s32 unk48;
} GenObj;
void *func_08036E2C(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F29C0, 0x267, 0x26F, 0x3E3);
    arg0->unk14 = &vtable_unk_080E6918;
    arg0->unk48 = 0;
    return arg0;
}
