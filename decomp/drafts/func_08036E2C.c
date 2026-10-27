s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F29C0;
extern s32 vtable_unk_080E6918;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036E2C(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F29C0, 0x267, 0x26F, 0x3E3);
    arg0->unk14 = &vtable_unk_080E6918;
    ((u16 *)arg0)[0x24] = 0;
    return arg0;
}
