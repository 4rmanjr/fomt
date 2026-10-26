s32 func_08008FE4(s32, s32);                          /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
} GenObj;
s32 func_080D782C(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r2;
    GenObj *temp_r4;

    temp_r4 = arg0->unkC;
    var_r2 = 0;
    temp_r0 = temp_r4->unk0;
    temp_r1 = temp_r4->unk4;
    if (temp_r0 == temp_r1) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        func_08008FE4(temp_r0, temp_r0 + (((s32) (temp_r1 - temp_r0) >> 4) * 0x10));
        var_r0 = temp_r4->unk0;
        temp_r2 = var_r0;
        temp_r1_2 = temp_r4->unk4;
        if (temp_r2 != temp_r1_2) {
            do {
                var_r0 += 0x10;
            } while (var_r0 != temp_r1_2);
        }
        temp_r4->unk4 = temp_r2;
    }
    return 0;
}
