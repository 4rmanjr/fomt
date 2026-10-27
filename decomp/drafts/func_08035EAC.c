s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6370;
extern s32 vtable_unk_080E6FD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035EAC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6370, (0x8C << 4), (0x8C << 4) + 4, (0xFF << 2));
    arg0->unk14 = &vtable_unk_080E6FD8;
    return arg0;
}
