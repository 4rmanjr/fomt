s32 **__builtin_new(s32);                             /* extern */
s32 func_0800598C(s32 **, s32 **, s8, s32 **);              /* extern */
s32 func_080059D0(s32 **, s32);                         /* extern */
s32 func_08005A00(void ***, s32 **);                    /* extern */
u8 func_08005A3C(s32 **);                             /* extern */
s32 func_08007078(s32 **, s32 *, s32 **);                   /* extern */
s32 func_080070A4(s32 **, s32);                         /* extern */
s32 func_080070D4(void ***, s32 **);                    /* extern */
s32 **func_08007110(s32 **);                            /* extern */
s32 func_08008980(s32 *);                               /* extern */
s32 func_08008A68(s32 *, s32);                          /* extern */
s32 func_08008DB8(s32);                               /* extern */
s32 func_0806E9D8(s32 **, s8);                          /* extern */
s32 func_0806EA00(s32 **, s32);                         /* extern */
s32 func_0806EA30(void ***, s32 **);                    /* extern */
s8 func_0806EA6C(s32 **);                             /* extern */
s32 memcpy(s32 **, s32 **, u32);                          /* extern */
u32 strlen(s32 **);                                   /* extern */
extern s32 __vt_13AUnk_0800080C;
extern s32 gUnk_080E8934;
extern s32 gUnk_080E893C;
extern s32 gUnk_080E8944;
extern s32 vtable_unk_080E5A78;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    void (*unk8)(void *, s32);
    u8 _padC[24];
    s32 unk24;
} GenObj;

s32 ***func_08004C68(s32 ***arg0) {
    s32 *sp0;
s32 sp4;
    s32 *sp8;
    s32 *sp18;
    s32 *sp28;
    GenObj *sp38;
    void **sp40;
    s32 **sp44;
    s32 ***sp4C;
    s32 **sp50;
    s32 **sp54;
    GenObj *sp58;
    s32 **temp_r0;
    s32 **temp_r5;
    s32 **temp_r5_2;
    s32 **temp_r5_3;
    GenObj *temp_r5_4;
    GenObj *temp_r5_5;
    GenObj *temp_r5_6;
    GenObj *temp_r6;
    s8 var_r8;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u8 temp_r4;

    sp4C = arg0;
    func_08008980(&sp4);
    func_08008DB8(0x23);
    sp8 = 0;
    sp18 = 0;
    sp28 = 0;
    var_r8 = -4 & saved_reg_r8 & ~0x7C;
    temp_r0 = &sp0 + 0x38;
    sp54 = temp_r0;
    sp58 = (GenObj *)(&sp0 + 0x44);
loop_1:
    func_08007078(temp_r0, &gUnk_080E8934, &sp8);
    func_080070D4(&sp40, temp_r0);
    if (sp40 != 0) {
        (*sp40)->unk8(sp40, 3);
    }
    temp_r5 = func_08007110(temp_r0);
    var_r4 = strlen();
    if (var_r4 > 0xCU) {
        var_r4 = 0xC;
    }
    memcpy(&sp8, temp_r5, var_r4);
    *(&sp8 + var_r4) = 0;
    func_080070A4(temp_r0, 2);
    func_0806E9D8(temp_r0, var_r8);
    func_0806EA30(&sp40, temp_r0);
    if (sp40 != 0) {
        (*sp40)->unk8(sp40, 3);
    }
    var_r8 = func_0806EA6C(temp_r0);
    func_0806EA00(temp_r0, 2);
    func_08007078(temp_r0, &gUnk_080E893C, &sp18);
    func_080070D4(&sp40, temp_r0);
    if (sp40 != 0) {
        (*sp40)->unk8(sp40, 3);
    }
    temp_r5_2 = func_08007110(temp_r0);
    var_r4_2 = strlen();
    if (var_r4_2 > 0xCU) {
        var_r4_2 = 0xC;
    }
    memcpy(&sp18, temp_r5_2, var_r4_2);
    *(&sp18 + var_r4_2) = 0;
    func_080070A4(temp_r0, 2);
    func_08007078(temp_r0, &gUnk_080E8944, &sp28);
    func_080070D4(&sp40, temp_r0);
    if (sp40 != 0) {
        (*sp40)->unk8(sp40, 3);
    }
    temp_r5_3 = func_08007110(temp_r0);
    var_r4_3 = strlen();
    if (var_r4_3 > 0xCU) {
        var_r4_3 = 0xC;
    }
    memcpy(&sp28, temp_r5_3, var_r4_3);
    (&sp0 + var_r4_3)->unk28 = 0;
    func_080070A4(temp_r0, 2);
    sp0 = &sp28;
    func_0800598C(temp_r0, &sp8, var_r8, &sp18);
    func_08005A00(&sp40, temp_r0);
    if (sp40 != 0) {
        (*sp40)->unk8(sp40, 3);
    }
    temp_r4 = func_08005A3C(temp_r0);
    func_080059D0(temp_r0, 2);
    if (temp_r4 == 0) {
        goto loop_1;
    }
    temp_r6 = __builtin_new(0x38);
    sp50 = &sp0 + 0x28;
    temp_r6->unk0 = &__vt_13AUnk_0800080C;
    temp_r6->unk0 = &vtable_unk_080E5A78;
    temp_r5_4 = (GenObj *)((u8 *)temp_r6 + 4);
    var_r4_4 = strlen(&sp18);
    if (var_r4_4 > 0xCU) {
        var_r4_4 = 0xC;
    }
    memcpy((s32 **)temp_r5_4, &sp18, var_r4_4);
    *((u8 *)temp_r5_4 + var_r4_4) = 0;
    temp_r5_5 = (GenObj *)((u8 *)temp_r6 + 0x14);
    var_r4_5 = strlen(&sp8);
    if (var_r4_5 > 0xCU) {
        var_r4_5 = 0xC;
    }
    memcpy((s32 **) temp_r5_5, &sp8, var_r4_5);
    *((u8 *)temp_r5_5 + var_r4_5) = 0;
    temp_r6->unk24 = var_r8;
    temp_r5_6 = (GenObj *)((u8 *)temp_r6 + 0x28);
    var_r4_6 = strlen(sp50);
    if (var_r4_6 > 0xCU) {
        var_r4_6 = 0xC;
    }
    memcpy((s32 **) temp_r5_6, &sp28, var_r4_6);
    *((u8 *)temp_r5_6 + var_r4_6) = 0;
    sp38 = temp_r6;
    sp44 = sp54;
    sp58->unk4 = temp_r6;
    *sp54 = 0;
    *sp4C = temp_r6;
    if (sp38 != 0) {
        ((void (*)(void *,...))(sp38->unk0->unk8))(sp38, 3);
    }
    func_08008A68(&sp4, 2);
    return sp4C;
}
