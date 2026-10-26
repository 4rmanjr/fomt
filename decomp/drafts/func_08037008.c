s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E7328;

typedef struct GenObj {
    u8 _pad0[2];
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    u8 _padA[2];
    struct GenObj *unkC;
    u8 _pad10[4];
    void *unk14;
    u8 _pad18[24];
    s32 unk30;
    s32 unk34;
    u8 _pad38[4];
    s32 unk3C;
    s32 unk3E;
} GenObj;
void *func_08037008(GenObj *arg0, ? arg1, s32 arg2, s32 arg3, s32 arg4) {
    GenObj *temp_r1;

    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, arg2, 2, arg3);
    arg0->unk14 = &vtable_unk_080E7328;
    arg0->unk30 = arg2;
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x34);
    arg0->unk34 = 0;
    temp_r1->unk2 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk6 = 0;
    arg0->unk3C = (s16) arg4;
    arg0->unk3E = 0;
    temp_r1->unkC = 1;
    return arg0;
}
