s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F81BC;
extern s32 vtable_unk_080E7098;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035D70(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F81BC, 0x9E7, 0x9EB, 0x405);
    arg0->unk14 = &vtable_unk_080E7098;
    return arg0;
}
