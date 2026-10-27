s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F66C4;
extern s32 vtable_unk_080E6F98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035F10(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F66C4, (0x8D << 4), (0x8D << 4) + 4, 0x3FD);
    arg0->unk14 = &vtable_unk_080E6F98;
    return arg0;
}
