s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_0803AC78(s32, s32);                          /* extern */
s32 func_080AB2E4(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[8];
    struct GenObj *unk14;
    u8 _pad18[12];
    struct GenObj *unk24;
    u8 _pad28[104];
    struct GenObj *unk90;
    u8 _pad94[3356];
    void *unkDB0;
    u8 _padDB4[44];
    void *unkDE0;
    u8 _padDE4[44];
    void *unkE10;
    u8 _padE14[44];
    void *unkE40;
    u8 _padE44[44];
    void *unkE70;
    u8 _padE74[44];
    void *unkEA0;
    u8 _padEA4[44];
    void *unkED0;
    u8 _padED4[44];
    void *unkF00;
    u8 _padF04[44];
    void *unkF30;
    u8 _padF34[44];
    void *unkF60;
    u8 _padF64[44];
    void *unkF90;
    u8 _padF94[44];
    void *unkFC0;
    u8 _padFC4[44];
    void *unkFF0;
    u8 _padFF4[44];
    s32 unk1020;
    s32 unk1024;
    s32 unk1028;
} GenObj;
void func_080AC85C(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    u32 var_r6;
    void **var_r4;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    void *temp_r6;
    GenObj *var_r4_2;

    var_r6 = 0;
    var_r4 = (GenObj *)((u8 *)arg0 + 4);
    do {
        temp_r1 = *var_r4;
        if (temp_r1 != 0) {
            ((void (*)(void *,...))(temp_r1->unk14->unk8))(temp_r1, 3);
        }
        var_r4 += 4;
        var_r6 += 1;
    } while (var_r6 <= 0x63U);
    temp_r1_2 = arg0->unk1028;
    if (temp_r1_2 != 0) {
        ((void (*)(void *,...))(temp_r1_2->unk24->unk8))(temp_r1_2, 3);
    }
    temp_r0 = arg0->unk1024;
    if (temp_r0 != 0) {
        func_080AB2E4(temp_r0, 3);
    }
    temp_r0_2 = arg0->unk1020;
    if (temp_r0_2 != 0) {
        func_0803AC78(temp_r0_2, 3);
    }
    arg0->unkFF0 = &vtable_unk_080E5A28;
    arg0->unkFC0 = &vtable_unk_080E5A28;
    arg0->unkF90 = &vtable_unk_080E5A28;
    arg0->unkF60 = &vtable_unk_080E5A28;
    arg0->unkF30 = &vtable_unk_080E5A28;
    arg0->unkF00 = &vtable_unk_080E5A28;
    arg0->unkED0 = &vtable_unk_080E5A28;
    arg0->unkEA0 = &vtable_unk_080E5A28;
    arg0->unkE70 = &vtable_unk_080E5A28;
    arg0->unkE40 = &vtable_unk_080E5A28;
    arg0->unkE10 = &vtable_unk_080E5A28;
    arg0->unkDE0 = &vtable_unk_080E5A28;
    arg0->unkDB0 = &vtable_unk_080E5A28;
    temp_r6 = (GenObj *)((u8 *)arg0 + 0xD10);
    if (temp_r6 != 0) {
        var_r4_2 = (GenObj *)((u8 *)arg0 + 0xDAC);
        if (temp_r6 != var_r4_2) {
            do {
                var_r4_2 -= 0xC;
                func_080073E0(var_r4_2, var_r4_2->unk4);
                func_08007184(var_r4_2, 2);
            } while (temp_r6 != var_r4_2);
        }
    }
    temp_r1_3 = arg0->unk0;
    if (temp_r1_3 != 0) {
        ((void (*)(void *,...))(temp_r1_3->unk90->unk8))(temp_r1_3, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
