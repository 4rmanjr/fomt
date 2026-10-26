s32 __builtin_new(s32);                             /* extern */
s32 func_0803AB30(s32, void *);                     /* extern */
s32 func_0803AC78(s32, s32);                          /* extern */
s32 func_080A56DC(void *, s32 *, s32, s32, s32);        /* extern */
s32 func_080AAFC8(s32, void *, s32);                /* extern */
s32 func_080AB2E4(s32, s32);                          /* extern */
s32 func_080AC674(s32, void **);                      /* extern */
s32 func_080AD49C(void *, u32);                       /* extern */
extern s32 vtable_unk_080E8344;
extern s32 vtable_unk_080E8440;

typedef struct GenObj {
    void *unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    void *unk4;
    s32 unk8;
    u8 _padC[132];
    struct GenObj *unk90;
    u8 _pad94[3984];
    s32 unk1024;
    s32 unk1028;
} GenObj;
void *func_080AC9EC(GenObj *arg0, void **arg1) {
    void *sp4;
s32 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    u32 var_r4;
    GenObj *temp_r1;
    void *temp_r2;

    arg0->unk0 = &vtable_unk_080E8440;
    arg0->unk0 = &vtable_unk_080E8344;
    temp_r2 = *arg1;
    *arg1 = 0;
    sp4 = temp_r2;
    func_080AC674((GenObj *)((u8 *)arg0 + 4), &sp4);
    sp8 = (u16) ((0xFFFFFC00 & sp8) | 0x30);
    sp8.unk1 = (u8) (3 & sp8.unk1);
    sp8.unk2 = (u16) (0xFFFFFC00 & sp8.unk2);
    sp8.unk3 = (u8) (3 & sp8.unk3);
    sp8.unk4 = (u16) (0xFFFFFC00 & sp8.unk4);
    func_080A56DC(arg0->unk4, &sp8, 0, 0, 0x1E);
    temp_r0 = func_0803AB30(__builtin_new(0xA0), arg0);
    temp_r0_2 = arg0->unk1024;
    if ((temp_r0 != temp_r0_2) && (temp_r0_2 != 0)) {
        func_0803AC78(temp_r0_2, 3);
    }
    arg0->unk1024 = temp_r0;
    temp_r0_3 = arg0->unk1028;
    if ((temp_r0_3 != 0) && (temp_r0_3 != 0)) {
        func_080AB2E4(temp_r0_3, 3);
    }
    arg0->unk1028 = 0;
    temp_r0_4 = func_080AAFC8(__builtin_new(4), arg0, arg0->unk4->unk4);
    temp_r0_5 = arg0->unk1028;
    if ((temp_r0_4 != temp_r0_5) && (temp_r0_5 != 0)) {
        func_080AB2E4(temp_r0_5, 3);
    }
    arg0->unk1028 = temp_r0_4;
    var_r4 = 0;
    do {
        func_080AD49C(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 <= 0x63U);
    temp_r1 = *arg1;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk90->unk8))(temp_r1, 3);
    }
    return arg0;
}
