u8 GetAdequacy__C3Pet(s32);                         /* extern */
s8 GetAffection__C6Animal(s32);                     /* extern */
s32 rand();                                         /* extern */
extern ? gUnk_080FA99E;

void func_0805C80C(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 var_r2;
    s32 var_r4;
    s32 var_r5;
    s8 *var_r0;
    void *var_r6;
    void *var_r7;

    var_r6 = arg0 + 0x142C;
    if (arg0->unk140E == 1) {
        arg0->unk14A4 = 0x80;
        arg0->unk14A1 = GetAdequacy__C3Pet(arg0->unk14DC);
        arg0->unk14A2 = GetAffection__C6Animal(arg0->unk14DC);
        temp_r0 = 0xFA - arg0->unk14A1;
        temp_r4 = (s32) (temp_r0 * temp_r0) / 1000;
        arg0->unk14AC = (s16) (temp_r4 + ((rand() & 3) + 1));
    }
    var_r5 = 0;
    do {
        temp_r0_2 = (s32) ((var_r6->unk1D * 0xC49) + 0x580000) / 60;
        var_r6->unk0 = temp_r0_2;
        temp_r0_3 = ((s32) ((var_r6->unk1E * 0xC49) + 0xC0000) / 60) + temp_r0_2;
        var_r6->unk4 = temp_r0_3;
        var_r6->unk8 = (s32) ((s32) (temp_r0_3 - temp_r0_2) / 60);
        var_r6->unkC = 0;
        var_r6->unk18 = 0xC;
        var_r6->unk1A = 0xFF;
        var_r6->unk1C = 0;
        var_r6->unk10 = temp_r0_2;
        var_r6->unk14 = 0x06B80000;
        var_r6->unk1F = 0xFF;
        var_r6->unk22 = 0;
        var_r6->unk2A = 0;
        var_r4 = var_r5 + 1;
        var_r7 = var_r6 + 0x2C;
        if (arg0->unk1424 == 0) {
            if ((arg0->unk140E == 1) && (var_r5 == 2)) {
                var_r0 = var_r6 + 0x27;
                do {
                    *var_r0 = 0;
                    var_r0 -= 1;
                } while ((s32) var_r0 >= (s32) (var_r6 + 0x24));
            } else {
                var_r2 = 0;
                var_r4 = var_r5 + 1;
                var_r7 = var_r6 + 0x2C;
                do {
                    *(var_r6 + 0x24 + var_r2) = *(var_r2 + (var_r6->unk20 * 4) + &gUnk_080FA99E);
                    var_r2 += 1;
                } while (var_r2 <= 3);
            }
        }
        var_r5 = var_r4;
        var_r6 = var_r7;
    } while (var_r5 <= 3);
}
