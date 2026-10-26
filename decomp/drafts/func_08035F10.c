s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F66C4;
extern s32 vtable_unk_080E6F98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035F10(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F66C4, 0x8D0, 0x8D4, 0x3FD);
    arg0->unk14 = &vtable_unk_080E6F98;
    return arg0;
}
