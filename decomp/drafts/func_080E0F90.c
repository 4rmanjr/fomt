s32 CpuFastSet(s32, s32, s32);                        /* extern */
s32 func_08007D4C(void *);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
    u8 _pad10[9];
    struct GenObj *unk19;
    struct GenObj *unk1A;
} GenObj;
s32 func_080E0F90(GenObj *arg0) {
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r1;
    s32 var_r7;
    GenObj *temp_r2;
    void *temp_r5;
    GenObj *temp_r8;

    temp_r8 = arg0->unkC;
    var_r1 = 0;
    do {
        var_r7 = 0;
loop_2:
        temp_r5 = ((var_r1 * 4) + temp_r8)->unk8 + (var_r7 * 0x10);
        if (temp_r5->unkC != 0) {
            temp_r2 = (GenObj *)((u8 *)temp_r5 + 4);
            temp_r1 = temp_r2->unk4;
            if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
                temp_r4 = temp_r5->unk0 + 4;
                CpuFastSet(temp_r4, (func_08007D4C(temp_r2) << 5) + 0x06010000, 0x40);
            }
            temp_r5->unkC = 0U;
        }
        var_r7 += 1;
        if (var_r7 <= 6) {
            goto loop_2;
        }
        var_r1 += 1;
    } while (var_r1 <= 2);
    if (temp_r8->unk19 != 0) {
        temp_r8->unk19 = 0U;
    }
    if (temp_r8->unk1A != 0) {
        temp_r8->unk1A = 0U;
    }
    return 0;
}
