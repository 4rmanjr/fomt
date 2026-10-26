s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6DE8;
extern s32 vtable_unk_080E6C58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080366CC(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F6DE8, 0x8EC, 0x8F0, 0x400);
    arg0->unk14 = &vtable_unk_080E6C58;
    return arg0;
}
