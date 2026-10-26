s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F280C;
extern s32 vtable_unk_080E7198;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035AFC(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F280C, 0x25F, 0x263, 0x3E2);
    arg0->unk14 = &vtable_unk_080E7198;
    return arg0;
}
