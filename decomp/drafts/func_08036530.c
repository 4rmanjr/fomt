s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F3010;
extern s32 vtable_unk_080E6CD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036530(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F3010, (0xC8 << 2), (0xC8 << 2) + 4, 0x3E6);
    arg0->unk14 = &vtable_unk_080E6CD8;
    return arg0;
}
