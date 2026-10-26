u32 GetCapacity__C4Barn(s32);                       /* extern */
s32 GetCow__C4BarnUi(s32, u32);                     /* extern */
u32 GetGrowthStage__C3Cow();                        /* extern */
s32 HasBeenMilked__C3Cow(s32);                      /* extern */
s32 IsPregnant__C10BarnAnimal(s32);                 /* extern */
s32 func_08062E9C(void *, s32, ?, s32, ? *);            /* extern */
s32 func_08063EB8(void *, u32, s32, ? *, ? *);        /* extern */
s32 func_08075E24(s32, s16);                          /* extern */
extern ? gUnk_080FB894;
extern ? gUnk_08751B4C;
extern ? gUnk_08751BCC;
extern ? gUnk_08751BEC;
extern ? gUnk_08751C6C;
extern ? gUnk_08751C8C;
extern ? gUnk_08751D0C;
extern ? gUnk_08751D2C;
extern ? gUnk_08751DAC;
extern ? gUnk_08751DCC;
extern ? gUnk_08751E4C;
extern ? vtable_unk_080E7A48;

void *func_080643DC(void *arg0, ? arg1, ? arg2) {
    ? *var_r5;
    ? *var_r6;
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 var_r8;
    u32 var_sb;

    func_08062E9C(arg0, arg1, arg2, 0x55, &gUnk_080FB894);
    arg0->unk5B4 = &vtable_unk_080E7A48;
    var_r8 = 0;
    var_sb = 0;
    temp_r0 = GetCapacity__C4Barn(arg0->unk58C + 0x5F0);
    if (temp_r0 > 0U) {
        do {
            temp_r0_2 = GetCow__C4BarnUi(arg0->unk58C + 0x5F0, var_sb);
            if (temp_r0_2 != 0) {
                temp_r0_3 = GetGrowthStage__C3Cow();
                switch (temp_r0_3) {                /* irregular */
                case 2:
                    var_r6 = &gUnk_08751B4C;
                    var_r5 = &gUnk_08751BCC;
                    if ((IsPregnant__C10BarnAnimal(temp_r0_2) << 0x18) != 0) {
                        var_r6 = &gUnk_08751C8C;
                        var_r5 = &gUnk_08751D0C;
                    } else if ((HasBeenMilked__C3Cow(temp_r0_2) << 0x18) != 0) {
                        var_r6 = &gUnk_08751DCC;
                        var_r5 = &gUnk_08751E4C;
                    }
                    break;
                case 1:
                    var_r6 = &gUnk_08751BEC;
                    var_r5 = &gUnk_08751C6C;
                    break;
                default:
                    var_r6 = &gUnk_08751D2C;
                    var_r5 = &gUnk_08751DAC;
                    break;
                }
                func_08063EB8(arg0, var_r8, temp_r0_2, var_r6, var_r5);
                var_r8 += 1;
            }
            var_sb += 1;
        } while (var_sb < temp_r0);
    }
    func_08075E24(arg0->unk4, (s16) (((var_r8 * 5) + 5) * 8));
    return arg0;
}
