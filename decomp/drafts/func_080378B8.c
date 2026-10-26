s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, s32 *); /* extern */
s32 func_080378EC(void *, s32);                     /* extern */
s32 func_080A198C(s32 *);                               /* extern */

typedef struct GenObj {
    u8 _pad0[34];
    s32 unk22;
} GenObj;
void func_080378B8(GenObj *arg0) {
s32 sp0;

    func_080A198C(&sp0);
    SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp0);
    if (arg0->unk22 != func_080378EC(arg0, 0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
}
