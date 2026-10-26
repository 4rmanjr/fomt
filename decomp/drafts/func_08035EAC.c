s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F6370;
extern s32 vtable_unk_080E6FD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035EAC(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F6370, 0x8C0, 0x8C4, 0x3FC);
    arg0->unk14 = &vtable_unk_080E6FD8;
    return arg0;
}
