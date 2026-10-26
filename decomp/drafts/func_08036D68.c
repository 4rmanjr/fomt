s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E6998;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036D68(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, 0, 0x7FE, 0x7FE, 0);
    arg0->unk14 = &vtable_unk_080E6998;
    return arg0;
}
