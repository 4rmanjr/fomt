s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32 *, s32, s32); /* extern */
s32 func_0800E924(s32 *, s32);                          /* extern */
extern s32 vtable_unk_080E676C;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_0802B908(GenObj *arg0, s32 arg1, s32 arg2) {
s32 sp4;

    func_0800E924(&sp4, arg2 + 0x1BD8);
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, &sp4, 2, 0x192);
    arg0->unk14 = &vtable_unk_080E676C;
    return arg0;
}
