s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6B4C;
extern s32 vtable_unk_080E6E58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080361EC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6B4C, 0x8E4, 0x8E8, 0x3FF);
    arg0->unk14 = &vtable_unk_080E6E58;
    return arg0;
}
