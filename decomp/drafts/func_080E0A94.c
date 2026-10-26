s32 __builtin_delete(void *);                         /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
s32 func_0805E6CC(void *, s32 *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
extern s32 gUnk_080F19CC;
extern s32 gUnk_0871E7A8;
extern s32 vtable_unk_080E77D0;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    u8 _pad18[32];
    s32 unk38;
    u8 _pad3C[20];
    s32 unk50;
} GenObj;
void *func_080E0A94(GenObj *arg0) {
    s32 *var_r1;
    s32 *var_r5_2;
    s32 temp_r5_2;
    s32 var_r0;
    s32 var_r2;
    s32 var_r5;
    u32 var_r6;
    u32 var_r8;
    void **temp_r2;
    void **var_sb;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r1;
    GenObj *temp_r4;
    void *temp_r4_2;
    GenObj *temp_r5;
    GenObj *temp_r5_3;
    void *var_r0_2;
    GenObj *var_r4;

    func_0805E6CC(arg0, &gUnk_0871E7A8);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x30);
    func_08007128(temp_r4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x38);
    arg0->unk38 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = &vtable_unk_080E77D0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk14 = 0;
    temp_r5 = __builtin_new(0x34);
    func_08007874();
    temp_r5->unk4 = func_08007B54(temp_r5, 2);
    temp_r0_2 = (GenObj *)((u8 *)temp_r5 + 8);
    temp_r5->unk8 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk8 = &vtable_unk_080E77D0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk14 = 0;
    func_0805E824((GenObj *)((u8 *)temp_r0_2 + 0x18), arg0, 7, 0x100);
    arg0->unk50 = temp_r5;
    var_r1 = (GenObj *)((u8 *)arg0 + 0x54);
    var_r0 = 6;
    do {
        *var_r1 = 0;
        var_r1 += 4;
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x70);
    var_r4 = (GenObj *)((u8 *)arg0 + 0x374);
    var_r5 = 2;
    do {
        func_08007874(var_r4);
        var_r4->unk4 = 0;
        var_r4 += 8;
        var_r5 -= 1;
    } while (var_r5 != -1);
    var_r0_2 = temp_r0_3 + 0x31C;
    var_r2 = 5;
    do {
        var_r0_2->unk0 = 0;
        var_r0_2->unk4 = 0;
        var_r0_2->unk8 = &vtable_unk_080E77D0;
        var_r0_2->unkC = 0;
        var_r0_2->unk10 = 0;
        var_r0_2->unk14 = 0;
        var_r0_2 += 0x18;
        var_r2 -= 1;
    } while (var_r2 != -1);
    var_r6 = 0;
    var_r5_2 = temp_r0_3 + 0x308;
    do {
        temp_r4_2 = (var_r6 * 8) + temp_r0_3 + 0x304;
        func_08007C28(temp_r4_2, *var_r5_2);
        *var_r5_2 = func_08007B54(temp_r4_2, 3);
        var_r5_2 += 8;
        var_r6 += 1;
    } while (var_r6 <= 2U);
    var_r8 = 0;
    var_sb = (GenObj *)((u8 *)arg0 + 0x54);
    do {
        temp_r0_4 = __builtin_new(0x34);
        temp_r5_2 = *((var_r8 * 4) + &gUnk_080F19CC);
        func_08007874(temp_r0_4);
        temp_r0_4->unk4 = func_08007B54(temp_r0_4, 2);
        temp_r1 = (GenObj *)((u8 *)temp_r0_4 + 8);
        temp_r0_4->unk8 = 0;
        temp_r1->unk4 = 0;
        temp_r1->unk8 = &vtable_unk_080E77D0;
        temp_r1->unkC = 0;
        temp_r1->unk10 = 0;
        temp_r1->unk14 = 0;
        func_0805E824((GenObj *)((u8 *)temp_r0_4 + 0x20), arg0, temp_r5_2, 0x100);
        temp_r5_3 = *var_sb;
        if ((temp_r0_4 != temp_r5_3) && (temp_r5_3 != 0)) {
            func_080098AC((GenObj *)((u8 *)temp_r5_3 + 8), 2);
            func_08007C28(temp_r5_3, temp_r5_3->unk4);
            func_080079E8(temp_r5_3, 2);
            __builtin_delete(temp_r5_3);
        }
        temp_r2 = var_sb + 4;
        var_sb = temp_r2;
        *(temp_r2 - 4) = temp_r0_4;
        var_r8 += 1;
    } while (var_r8 <= 6U);
    return arg0;
}
