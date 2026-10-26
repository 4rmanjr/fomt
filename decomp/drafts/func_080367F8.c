s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F42F0;
extern s32 vtable_unk_080E6BD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080367F8(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F42F0, 0x7B2, 0x7B6, 0x3F2);
    arg0->unk14 = &vtable_unk_080E6BD8;
    return arg0;
}
