s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, void *, s32, s32); /* extern */
extern s32 vtable_unk_080E6828;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8];
    void *unk14;
    u8 _pad18[24];
    s32 unk30;
} GenObj;
void *func_08032934(GenObj *arg0, ? arg1, GenObj *arg2) {
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, arg2, 2, (s32) arg2->unk8);
    arg0->unk14 = &vtable_unk_080E6828;
    arg0->unk30 = arg2;
    return arg0;
}
