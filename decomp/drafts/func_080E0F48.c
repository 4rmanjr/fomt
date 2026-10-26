s32 func_08009094(void *, void *);                    /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;
s32 func_080E0F48(GenObj *arg0) {
    s32 *temp_r5;
    s32 temp_r1;
    s32 var_r0;
    void *temp_r0;
    void *temp_r4;
    void *var_r1;

    temp_r5 = arg0->unkC;
    var_r0 = 0;
    temp_r1 = *temp_r5;
    if (temp_r1 == 0) {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        temp_r4 = temp_r5 + 4;
        func_08009094(temp_r4, temp_r4 + (temp_r1 * 0x10));
        temp_r0 = temp_r5 + ((*temp_r5 * 0x10) + 4);
        var_r1 = temp_r4;
        if (var_r1 != temp_r0) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r0);
        }
        *temp_r5 -= (s32) (temp_r0 - temp_r4) >> 4;
    }
    return 0;
}
