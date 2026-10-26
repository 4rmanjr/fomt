u32 GetAffection__C6Animal(s32);                    /* extern */
u32 GetCapacity__C4Barn(s32);                       /* extern */
u32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__C4CoopUi(s32, u32);                 /* extern */
s32 GetCow__C4BarnUi(s32, u32);                     /* extern */
s32 GetHorse__C4Farm(s32);                          /* extern */
s32 GetSheep__C4BarnUi(s32, u32);                   /* extern */

s32 func_08010E68(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r7;
    u32 var_r4;
    u32 var_r4_2;

    var_r7 = 1;
    if (GetAffection__C6Animal(arg0 + 0x1C70) <= 0xC7U) {
        var_r7 = 0;
    }
    if ((GetHorse__C4Farm(arg0 + 0x14) != 0) && (GetAffection__C6Animal() <= 0xC7U)) {
        var_r7 = 0;
    }
    var_r4 = 0;
    temp_r5 = arg0 + 0x410;
loop_10:
    if (var_r4 < GetCapacity__C4Coop(temp_r5)) {
        if ((GetChicken__C4CoopUi(temp_r5, var_r4) != 0) && (GetAffection__C6Animal() <= 0xC7U)) {
            var_r7 = 0;
        }
        var_r4 += 1;
        goto loop_10;
    }
    var_r4_2 = 0;
    temp_r5_2 = arg0 + 0x5F0;
loop_17:
    if (var_r4_2 < GetCapacity__C4Barn(temp_r5_2)) {
        if (((GetCow__C4BarnUi(temp_r5_2, var_r4_2) != 0) || (GetSheep__C4BarnUi(temp_r5_2, var_r4_2) != 0)) && (GetAffection__C6Animal() <= 0xC7U)) {
            var_r7 = 0;
        }
        var_r4_2 += 1;
        goto loop_17;
    }
    return var_r7;
}
