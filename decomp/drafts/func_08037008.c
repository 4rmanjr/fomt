s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32, s32, s32); /* extern */
extern ? vtable_unk_080E7328;

void *func_08037008(void *arg0, ? arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r1;

    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, arg2, 2, arg3);
    arg0->unk14 = &vtable_unk_080E7328;
    arg0->unk30 = arg2;
    temp_r1 = arg0 + 0x34;
    arg0->unk34 = 0;
    temp_r1->unk2 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk6 = 0;
    arg0->unk3C = (s16) arg4;
    arg0->unk3E = 0;
    temp_r1->unkC = 1;
    return arg0;
}
