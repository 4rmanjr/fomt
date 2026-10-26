s32 func_0805E6CC(s32 **, s32 *);                         /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 gUnk_0852D984;
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
} GenObj;
s32 func_080ADCA4(void **arg0, ? arg1) {
GenObj sp0;
    s32 *sp20;
    u16 *sp50;
    GenObj *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r4;
    GenObj *temp_r4_2;

    temp_r4 = *arg0;
    func_0805E6CC(&sp20, &gUnk_0852D984);
    sp20->unkC(&sp50, &sp20, arg1);
    sp20->unk10(&sp0, &sp20, *sp50);
    sp20 = &vtable_unk_080E5A28;
    memcpy(&sp0, &sp0, 0x20);
    temp_r0_2 = &(GenObj *)((u8 *)sp0 + 0xC);
    temp_r4->unk0 = (s32) sp0;
    temp_r4->unk4 = (s32) sp0.unk4;
    temp_r4->unk8 = (s32) sp0.unk8;
    temp_r4_2 = (GenObj *)((u8 *)temp_r4 + 0xC);
    temp_r0 = (GenObj *)((u8 *)temp_r0_2 + 0xC);
    temp_r4->unkC = (s32) sp0.unkC;
    temp_r4_2->unk4 = (s32) temp_r0_2->unk4;
    temp_r4_2->unk8 = (s32) temp_r0_2->unk8;
    temp_r4_2->unkC = (s32) temp_r0_2->unkC;
    ((GenObj *)((u8 *)temp_r4_2 + 0xC))->unk4 = (s32) temp_r0->unk4;
    return (GenObj *)((u8 *)temp_r0 + 8);
}
