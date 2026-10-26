s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F4D74;
extern s32 vtable_unk_080E6ED8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036048(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F4D74, 0x813, 0x817, 0x3F6);
    arg0->unk14 = &vtable_unk_080E6ED8;
    return arg0;
}
