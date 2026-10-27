s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6DE8;
extern s32 vtable_unk_080E6C58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080366CC(GenObj *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6DE8, 0x8EC, 0x8F0, (0x80 << 3));
    arg0->unk14 = &vtable_unk_080E6C58;
    return arg0;
}
