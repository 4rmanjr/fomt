u32 GetAffection__C6Animal(void *);                    /* extern */
u32 GetCapacity__C4Barn(s32);                       /* extern */
u32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__C4CoopUi(s32, u32);                 /* extern */
s32 GetCow__C4BarnUi(s32, u32);                     /* extern */
s32 GetHorse__C4Farm(s32);                          /* extern */
s32 GetSheep__C4BarnUi(s32, u32);                   /* extern */

s32 func_08010E68(s32 arg0) {
    s32 temp_r5;
    s32 var_r7;
    u32 var_r4;
    s32 t;
    register s32 sav __asm__("r6") = arg0;

    var_r7 = 1;
    if (GetAffection__C6Animal((void *)(sav + 0x1C70)) <= 0xC7U) {
        var_r7 = 0;
    }
    t = GetHorse__C4Farm(sav + 0x14);
    if ((t != 0) && (GetAffection__C6Animal((void *)t) <= 0xC7U)) {
        var_r7 = 0;
    }
    temp_r5 = sav + 0x410;
    for (var_r4 = 0; var_r4 < GetCapacity__C4Coop(temp_r5); var_r4++) {
        t = GetChicken__C4CoopUi(temp_r5, var_r4);
        if ((t != 0) && (GetAffection__C6Animal((void *)t) <= 0xC7U)) {
            var_r7 = 0;
        }
    }
    temp_r5 = sav + 0x5F0;
    for (var_r4 = 0; var_r4 < GetCapacity__C4Barn(temp_r5); var_r4++) {
        if ((((t = GetCow__C4BarnUi(temp_r5, var_r4)) != 0) || ((t = GetSheep__C4BarnUi(temp_r5, var_r4)) != 0)) && (GetAffection__C6Animal((void *)t) <= 0xC7U)) {
            var_r7 = 0;
        }
    }
    return var_r7;
}
