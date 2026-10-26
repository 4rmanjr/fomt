s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F5D94;
extern s32 vtable_unk_080E6C98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036590(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F5D94, 0x884, 0x888, 0x3FA);
    arg0->unk14 = &vtable_unk_080E6C98;
    return arg0;
}
