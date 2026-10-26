s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F35E4;
extern s32 vtable_unk_080E6D18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080363F8(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F35E4, 0x691, 0x695, 0x3F0);
    arg0->unk14 = &vtable_unk_080E6D18;
    return arg0;
}
