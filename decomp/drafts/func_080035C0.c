s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_0805E860(s32, s32);                          /* extern */
s32 func_0805E99C(s32, s32, u16, s32 *);                /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
    u8 _pad1C[27492];
    s32 unk6B80;
    s32 unk6B84;
} GenObj;
void func_080035C0(GenObj *arg0, s16 arg1, s16 arg2, s32 arg3) {
s32 sp0;
    s32 spC;
    s32 sp14;
    GenObj *sp1C;
    GenObj *sp24;
    GenObj *sp2C;
    GenObj *sp34;
GenObj sp3C;
    s32 temp_r3;
    s32 var_r2;
    u16 var_r2_2;
    void **temp_r1;
    void *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r4;
    GenObj *var_r0;

    sp0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    sp1C = 0;
    sp1C.unk4 = 0U;
    sp24 = 0;
    sp24.unk4 = 0;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    switch (arg3) {                                 /* irregular */
    case 0:
        func_0805E860((GenObj *)((u8 *)arg0 + 0x6B80), 0x91A);
        var_r2 = 0x6CD0;
block_9:
        var_r0 = arg0 + var_r2;
block_10:
        sp0.unk6 = func_08007D4C(var_r0, var_r0->unk4);
        break;
    case 1:
        func_0805E860((GenObj *)((u8 *)arg0 + 0x6B80), 0x91B);
        var_r0 = (GenObj *)((u8 *)arg0 + 0x6CD8);
        goto block_10;
    case 2:
        func_0805E860((GenObj *)((u8 *)arg0 + 0x6B80), 0x91C);
        var_r2 = 0x6CE0;
        goto block_9;
    }
    temp_r1 = arg0->unk6B80;
    (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unk6B84 + (((GenObj *)((u8 *)arg0 + 0x6B80))->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r4 = &(GenObj *)((u8 *)sp3C + 0xC);
    sp1C.unk0 = sp3C;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r0 = &(GenObj *)((u8 *)sp1C + 0xC);
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r0->unk4 = (s32) temp_r4->unk4;
    temp_r0->unk8 = (s32) temp_r4->unk8;
    temp_r0->unkC = (s32) temp_r4->unkC;
    ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4 + 0xC))->unk4;
    sp0 = arg1;
    sp0.unk2 = arg2;
    sp0.unk8 = 0;
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x6CE8);
    sp0.unk4 = func_080074C0(temp_r0_2, temp_r0_2->unk4);
    sp0.unk18 = 1;
    temp_r3 = func_08008920(arg0);
    var_r2_2 = 0;
    if (sp1C != 0) {
        var_r2_2 = sp1C.unk4;
    }
    func_0805E99C(temp_r3, sp1C, var_r2_2, &sp0);
}
