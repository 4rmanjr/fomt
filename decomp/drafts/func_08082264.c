s32 func_0805E6CC(s32 **, s32);                         /* extern */
s32 func_0805E824(void ***, s32 **, s32, s32);          /* extern */
s32 func_0805E860(void ***, s32);                       /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    u8 _pad1C[4];
    s32 unk20;
} GenObj;
void func_08082264(GenObj *arg0, ? arg1, s32 arg2, s16 arg3, s32 arg4) {
s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 *sp10;
s32 sp40;
    void **sp44;
s32 sp58;
    s8 sp74;
    GenObj *sp78;
s32 sp80;
s32 sp88;
s32 sp90;
GenObj sp98;
    u32 temp_r0;
    GenObj *temp_r0_2;
    void *temp_r4;
    void *temp_r5;

    sp4 = arg2;
    sp0 = arg3;
    func_0805E6CC(&sp10, arg4);
    sp40 = 0;
    sp40.unk2 = 0;
    func_0805E824(&sp44, &sp10, 0, 0x100);
    sp58 = 0;
    sp58.unk2 = 0;
    sp58.unk4 = 0;
    sp58.unk6 = 0;
    sp58.unk8 = 0;
    sp58.unkC = 0;
    sp58.unk10 = 0;
    sp58.unk11 = 0;
    sp58.unk14 = 0;
    sp58.unk18 = 0;
    sp74 = 0;
    sp78 = 0;
    sp78.unk4 = 0;
    sp80 = 0;
    sp80.unk4 = 0;
    sp88 = 0;
    sp88.unk4 = 0;
    sp90 = 0;
    sp90.unk4 = 0;
    func_0805E860(&sp44, arg1);
    (*sp44)->unk10(&sp98, sp44, *((u8 *)sp48 + (sp44.unkC * 4)));
    memcpy(&sp98, &sp98, 0x20);
    temp_r4 = &(GenObj *)((u8 *)sp98 + 0xC);
    sp78.unk0 = sp98;
    sp78.unk4 = (s32) sp98.unk4;
    sp78.unk8 = (s32) sp98.unk8;
    temp_r5 = &(GenObj *)((u8 *)sp78 + 0xC);
    sp78.unkC = (s32) sp98.unkC;
    temp_r5->unk4 = (s32) temp_r4->unk4;
    temp_r5->unk8 = (s32) temp_r4->unk8;
    temp_r5->unkC = (s32) temp_r4->unkC;
    ((GenObj *)((u8 *)temp_r5 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4 + 0xC))->unk4;
    sp8 = sp80;
    spC = sp88;
    temp_r0 = arg0->unk20;
    if (temp_r0 <= 0x27U) {
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x20) + ((temp_r0 * 0x10) + 4);
        if (temp_r0_2 != 0) {
            temp_r0_2->unk0 = (s32) sp0;
            temp_r0_2->unk4 = (s32) sp0.unk4;
            temp_r0_2->unk8 = (s32) sp0.unk8;
            temp_r0_2->unkC = (s32) sp0.unkC;
        }
        arg0->unk20 = (u32) (arg0->unk20 + 1);
    }
    sp10 = &vtable_unk_080E5A28;
}
