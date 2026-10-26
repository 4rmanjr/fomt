s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_0805E99C(s32, s32, u16, s32 *);                /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
    u8 _pad1C[540];
    s32 unk238;
    s32 unk23C;
    u8 _pad240[12];
    s32 unk24C;
    u8 _pad250[272];
    s32 unk360;
    s32 unk362;
} GenObj;
void func_0809A3E0(GenObj *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    GenObj *sp1C;
    GenObj *sp24;
    GenObj *sp2C;
    GenObj *sp34;
GenObj sp3C;
    s32 temp_r3;
    u16 var_r2;
    void **temp_r1;
    void *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    void *temp_r1_2;
    GenObj *temp_r4;
    void *temp_r4_2;

    sp0 = 0U;
    sp0.unk2 = 0U;
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
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x238);
    func_0805E8F0(temp_r4);
    temp_r1 = arg0->unk238;
    (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unk23C + (temp_r4->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r4_2 = &(GenObj *)((u8 *)sp3C + 0xC);
    sp1C.unk0 = sp3C;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r0 = &(GenObj *)((u8 *)sp1C + 0xC);
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r0->unk4 = (s32) temp_r4_2->unk4;
    temp_r0->unk8 = (s32) temp_r4_2->unk8;
    temp_r0->unkC = (s32) temp_r4_2->unkC;
    ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4_2 + 0xC))->unk4;
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x24C);
    temp_r0_3 = (GenObj *)((u8 *)temp_r0_2 + 0xC);
    sp0 = (s32) arg0->unk24C;
    sp0.unk4 = (s32) temp_r0_2->unk4;
    sp0.unk8 = (s32) temp_r0_2->unk8;
    temp_r1_2 = &(GenObj *)((u8 *)sp0 + 0xC);
    sp0.unkC = (s32) temp_r0_2->unkC;
    temp_r1_2->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_2->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_2->unkC = (s32) temp_r0_3->unkC;
    sp0 = (u16) arg0->unk360;
    sp0.unk2 = (u16) arg0->unk362;
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x2F0);
    sp0.unk6 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
    temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x2F8);
    sp0.unk4 = func_080074C0(temp_r0_5, temp_r0_5->unk4);
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    temp_r3 = func_08008920(arg0);
    var_r2 = 0;
    if (sp1C != 0) {
        var_r2 = sp1C.unk4;
    }
    func_0805E99C(temp_r3, sp1C, var_r2, &sp0);
}
