s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 __5ActorRC5Actor(s32 *, void *);                    /* extern */
s32 __builtin_delete();                               /* extern */
s32 **__builtin_new(s32);                             /* extern */
s32 func_08020038(void *, s32, s32 *, s32);             /* extern */
s32 func_08020080(void *, s32);                       /* extern */
s32 func_08039D4C(void *, s32);                     /* extern */
s32 func_08039D5C(void *, s32);                     /* extern */
extern s32 vtable_unk_080E748C;
extern s32 vtable_unk_080E749C;
extern s32 vtable_unk_080E74AC;
extern s32 vtable_unk_080E74BC;
extern s32 vtable_unk_080E74CC;
extern s32 vtable_unk_080E74DC;

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[4];
    void *unk14;
    u8 _pad18[8];
    s32 unk20;
    s32 unk22;
    u8 _pad26[14];
    void *unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
} GenObj;
void *func_080398A4(GenObj *arg0, s32 arg1, void *arg2) {
s32 sp0;
    s32 **temp_r0;
    s32 **temp_r0_2;
    s32 **temp_r0_3;
    s32 **temp_r0_4;
    s32 **temp_r0_5;
    s32 *var_r1;
    s32 temp_r0_7;
    s32 var_r0;
    void **temp_r0_6;

    __5ActorRC5Actor(&sp0, arg2);
    func_08020038(arg0, arg1, &sp0, 0x9C7);
    arg0->unk14 = &vtable_unk_080E74DC;
    arg0->unk34 = arg2;
    var_r1 = arg0 + 0x38;
    var_r0 = 4;
    do {
        *var_r1 = 0;
        var_r1 += 4;
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r0 = __builtin_new(4);
    *temp_r0 = &vtable_unk_080E74CC;
    if (temp_r0 != arg0->unk38) {
        __builtin_delete();
    }
    arg0->unk38 = temp_r0;
    temp_r0_2 = __builtin_new(4);
    *temp_r0_2 = &vtable_unk_080E74BC;
    if (temp_r0_2 != arg0->unk3C) {
        __builtin_delete();
    }
    arg0->unk3C = temp_r0_2;
    temp_r0_3 = __builtin_new(4);
    *temp_r0_3 = &vtable_unk_080E74AC;
    if (temp_r0_3 != arg0->unk40) {
        __builtin_delete();
    }
    arg0->unk40 = temp_r0_3;
    temp_r0_4 = __builtin_new(4);
    *temp_r0_4 = &vtable_unk_080E749C;
    if (temp_r0_4 != arg0->unk44) {
        __builtin_delete();
    }
    arg0->unk44 = temp_r0_4;
    temp_r0_5 = __builtin_new(4);
    *temp_r0_5 = &vtable_unk_080E748C;
    if (temp_r0_5 != arg0->unk48) {
        __builtin_delete();
    }
    arg0->unk48 = temp_r0_5;
    temp_r0_6 = ((arg0->unk34->unkC * 4) + arg0)->unk38;
    temp_r0_7 = (*temp_r0_6)->unkC(temp_r0_6, arg0);
    func_08020080(arg0, func_08039D5C(arg0, temp_r0_7));
    if (arg0->unk22 != func_08039D4C(arg0, temp_r0_7)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    arg0->unk4C = temp_r0_7;
    arg0->unk50 = (s32) arg0->unk20;
    return arg0;
}
