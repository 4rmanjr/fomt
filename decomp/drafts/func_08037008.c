s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E7328;

typedef struct GenObj {
    u8 _pad0[0x14];
    void *unk14;
    u8 _pad18[0x18];
    s32 unk30;
    u16 unk34;
    u16 unk36;
    u16 unk38;
    u16 unk3A;
    u16 unk3C;
    u16 unk3E;
    u8 unk40;
} GenObj;

void *func_08037008(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u16 *p;

    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, arg2, 2, arg3);
    arg0->unk14 = &vtable_unk_080E7328;
    arg0->unk30 = arg2;
    p = (u16 *) ((u8 *) arg0 + 0x34);
    arg0->unk34 = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    arg0->unk3C = (u16) arg4;
    arg0->unk3E = 0;
    p += 6;
    *(u8 *) p = 1;
    return arg0;
}
