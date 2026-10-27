s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F61FC;
extern s32 vtable_unk_080E6DD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080362C0(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F61FC, 0x8B8, 0x8BC, 0x3FB);
    arg0->unk14 = &vtable_unk_080E6DD8;
    return arg0;
}
