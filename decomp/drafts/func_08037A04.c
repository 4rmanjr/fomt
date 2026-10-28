s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, s32 *); /* extern */
s32 func_08037A38(void *, s32);                     /* extern */
s32 func_080A19EC(s32 *);                               /* extern */

typedef struct GenObj {
    u8 _pad0[34];
    u16 unk22;
} GenObj;
void func_08037A04(GenObj *arg0) {
    s32 sp[2];
    s32 t;

    func_080A19EC(&sp[0]);
    SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp[0]);
    t = func_08037A38(arg0, 0);
    if (arg0->unk22 != t) {
        SetAnim__12AActorEntityUi(arg0, t);
    }
}

/* ATTEMPT-NOTE opencode: pola 378B8 (sp-array + t-var); sisa adds-copy. */
