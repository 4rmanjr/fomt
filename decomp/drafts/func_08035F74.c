s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F49C0;
extern s32 vtable_unk_080E6F58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035F74(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F49C0, 0x80B, 0x80F, 0x3F5);
    arg0->unk14 = &vtable_unk_080E6F58;
    return arg0;
}
