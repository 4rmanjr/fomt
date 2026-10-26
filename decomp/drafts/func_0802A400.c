s32 GetFatigueGain__C4Food(s32);                    /* extern */
u16 GetIconId__C4Food(s32);                         /* extern */
s32 GetStaminaGain__C4Food(s32);                    /* extern */
s32 IsDrink__C4Food(s32);                           /* extern */
s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */
s32 func_0805E850(void *, s32, u16);                  /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk1;
    s32 unk4;
    s32 unk8;
    u8 _padC[4];
    s32 unk10;
    s32 unk14;
    u8 _pad18[76];
    struct GenObj *unk64;
    u8 _pad68[60];
    s32 unkA4;
    u8 _padA8[24];
    s32 unkC0;
    u8 _padC4[4];
    struct GenObj *unkC8;
} GenObj;
void func_0802A400(GenObj *arg0, s32 arg1) {
    s32 temp_r4_2;
    s8 *var_r1;
    s8 var_r0;
    u16 temp_r4;
    void *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r5;
    GenObj *temp_r5_2;

    arg0->unkA4 = 1;
    temp_r0 = ((GenObj *)((u8 *)arg0 + 0xA4)) - 0x1C;
    temp_r0->unk0 = 1;
    temp_r0->unk1 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unk14 = 0x150000;
    temp_r5 = arg0->unk10;
    if (temp_r5 != 0) {
        temp_r4 = GetIconId__C4Food(arg1);
        func_0805E850((GenObj *)((u8 *)temp_r5 + 0xB4), (**temp_r5->unk0)->unk64(), temp_r4);
        temp_r0_2 = (GenObj *)((u8 *)temp_r5 + 0xC8);
        temp_r5->unkC8 = 1;
        temp_r0_2->unk2 = 0;
        (temp_r0_2 + 2)->unk1 = 1;
    }
    temp_r5_2 = arg0->unk14;
    temp_r4_2 = GetStaminaGain__C4Food(arg1);
    temp_r5_2->unk64(arg0, temp_r4_2, GetFatigueGain__C4Food(arg1));
    if (IsDrink__C4Food(arg1) == 0) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0x3C);
        var_r0 = 0x36;
    } else {
        var_r1 = (GenObj *)((u8 *)arg0 + 0x3C);
        var_r0 = 0x37;
    }
    *var_r1 = var_r0;
    arg0->unkC0 = 1;
    SetAnim__12AActorEntityUi(arg0, 0x146);
}
