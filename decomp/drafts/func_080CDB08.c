extern s32 gUnk_0811788C;
extern s32 gUnk_08117890;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[100];
    struct GenObj *unk78;
    struct GenObj *unk7C;
    u8 _pad80[536];
    struct GenObj *unk298;
} GenObj;
s32 func_080CDB08(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 var_r1;
    u32 var_r0;
    GenObj *temp_r1;

    temp_r1 = arg0->unk0;
    arg0->unkC = (s32) temp_r1->unk78->unk298;
    arg0->unk10 = (s32) (temp_r1->unk7C->unk298 + 9);
    temp_r2 = arg0->unk4;
    var_r1 = *((temp_r2 * 0x10) + (&gUnk_0811788C + 4));
    if (temp_r2 == 0) {
        temp_r2_2 = arg0->unk8;
        if (temp_r2_2 != 9) {
            var_r0 = temp_r2_2 - 1;
            goto block_6;
        }
    } else if (temp_r2 == 9) {
        temp_r2_3 = arg0->unk8;
        if (temp_r2_3 != 0) {
            var_r0 = temp_r2_3 - 0xA;
block_6:
            var_r1 = arg0->unk8 - 4;
            if (var_r0 <= 3U) {
                var_r1 = arg0->unk8;
            }
        }
    }
    if (var_r1 <= 8) {
        temp_r2_4 = arg0->unk4;
        if ((var_r1 == 0) && (arg0->unk0->unk78->unk27C == 0)) {
            var_r1 = temp_r2_4 - 4;
        }
        temp_r0 = arg0->unkC;
        if (var_r1 > temp_r0) {
            do {
                var_r1 = *((var_r1 * 0x10) + &gUnk_08117890);
                if ((var_r1 == 0) && (arg0->unk0->unk78->unk27C == 0)) {
                    var_r1 = temp_r2_4;
                }
            } while (var_r1 > temp_r0);
        }
    } else {
        temp_r2_5 = arg0->unk4;
        if ((var_r1 == 9) && (arg0->unk0->unk7C->unk27C == 0)) {
            var_r1 = temp_r2_5 - 4;
        }
        temp_r0_2 = arg0->unk10;
        if (var_r1 > temp_r0_2) {
            do {
                var_r1 = *((var_r1 * 0x10) + &gUnk_08117890);
                if ((var_r1 == 9) && (arg0->unk0->unk7C->unk27C == 0)) {
                    var_r1 = temp_r2_5;
                }
            } while (var_r1 > temp_r0_2);
        }
    }
    if (var_r1 != arg0->unk4) {
        arg0->unk8 = arg0->unk4;
        arg0->unk4 = var_r1;
    }
    return var_r1;
}
