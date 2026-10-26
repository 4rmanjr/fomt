s32 **__builtin_new(s32, s32, s32);                   /* extern */
extern s32 vtable_unk_080E5C74;
extern s32 vtable_unk_080E5E74;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[128];
    struct GenObj *unk8C;
    u8 _pad90[12];
    struct GenObj *unk9C;
} GenObj;
void func_08013B38(GenObj *arg0, s32 arg1) {
    s32 **sp0;
    s32 **spC;
    s32 **sp10;
    s32 **temp_r0;
    s32 **temp_r0_2;
    s32 **temp_r1;
    s32 **temp_r2;
    s32 **temp_r4;
    void *temp_r5;
    GenObj *temp_r7;

    temp_r7 = arg0->unk4;
    sp0 = (s32 **)0x23;
    temp_r0 = __builtin_new(0x14);
    temp_r5 = (GenObj *)((u8 *)temp_r7 + 0x8C);
    sp10.unk0 = sp0.unk0;
    sp10.unk4 = (s32) sp0.unk4;
    sp10.unk8 = (s32) sp0.unk8;
    temp_r0->unk0 = &vtable_unk_080E5E74;
    temp_r0->unk4 = (s32) temp_r7->unk8C;
    temp_r2 = temp_r0 + 8;
    temp_r0->unk8 = (s32 **) sp10.unk0;
    temp_r2->unk4 = (s32) sp10.unk4;
    temp_r2->unk8 = (s32) sp10.unk8;
    spC = temp_r0;
    temp_r0_2 = __builtin_new(0x10, &sp10 + 0xC, (GenObj *)((u8 *)temp_r2 + 0xC));
    temp_r4 = spC;
    spC = 0;
    sp10 = temp_r4;
    temp_r0_2->unk0 = &vtable_unk_080E5C74;
    sp10 = 0;
    temp_r0_2->unk4 = temp_r4;
    temp_r0_2->unk8 = (s32) temp_r7->unk8C;
    temp_r0_2->unkC = arg1;
    temp_r1 = temp_r5->unk18;
    if ((temp_r0_2 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r5->unk18 = temp_r0_2;
    temp_r7->unk9C = 0x18;
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
}
