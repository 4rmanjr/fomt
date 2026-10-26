extern s32 gUnk_0811788C;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[100];
    struct GenObj *unk78;
    struct GenObj *unk7C;
} GenObj;
s32 func_080CDCD0(GenObj *arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r2;
    GenObj *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r7;

    temp_r1 = arg0->unk0;
    temp_r7 = temp_r1->unk78;
    temp_r6 = temp_r7->unk298;
    arg0->unkC = temp_r6;
    temp_r1_2 = temp_r1->unk7C;
    temp_r4 = temp_r1_2->unk298 + 9;
    arg0->unk10 = temp_r4;
    temp_r3 = arg0->unk4;
    temp_r1_3 = &gUnk_0811788C + 0xC;
    var_r2 = *((temp_r3 * 0x10) + temp_r1_3);
    if (var_r2 <= 8) {
        if (var_r2 == 0) {
            if (temp_r7->unk27C == 0) {
                var_r2 = 9;
            }
        } else if (var_r2 > temp_r6) {
            if (temp_r3 == 0x11) {
                var_r2 = 1;
            } else {
loop_8:
                if (var_r2 <= 8) {
                    var_r2 = *((var_r2 * 0x10) + temp_r1_3);
                    goto loop_8;
                }
            }
        }
    } else if (var_r2 == 9) {
        if (temp_r1_2->unk27C == 0) {
            var_r2 = 0;
        }
    } else if (var_r2 > temp_r4) {
        if (temp_r4 <= 0xD) {
            var_r2 = 1;
        } else {
loop_17:
            if (var_r2 > 8) {
                var_r2 = *((var_r2 * 0x10) + temp_r1_3);
                goto loop_17;
            }
        }
    }
    if ((var_r2 == 0xA) && (arg0->unk8 == 0xE)) {
        var_r2 = 0xE;
    }
    if (var_r2 != temp_r3) {
        arg0->unk8 = temp_r3;
        arg0->unk4 = var_r2;
    }
    return var_r2;
}
