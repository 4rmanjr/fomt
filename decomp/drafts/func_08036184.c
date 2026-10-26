s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F59CC;
extern s32 vtable_unk_080E6E98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036184(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F59CC, 0x85F, 0x863, 0x3F9);
    arg0->unk14 = &vtable_unk_080E6E98;
    return arg0;
}
