typedef struct GenObj {
    u8 _pad0[40];
    s32 unk28;
    u8 _pad2C[2];
    u8 unk2E;
    u8 _pad2F[5];
    struct GenObj *unk34;
} GenObj;

s32 func_08023378(GenObj *arg0) {
    s32 temp_r1;
    s32 var_r1;
    GenObj *temp_r0;

    temp_r0 = arg0->unk34;
    temp_r1 = temp_r0->unk28;
    if (temp_r1 != 1) {
        if (temp_r1 <= 1) {
            if (temp_r1 != 0) {
                return 0;
            }
            return temp_r0->unk2E;
        }
        if (temp_r1 > 3) {
            return 0;
        }
        return 1;
    }
    var_r1 = 1;
    if (0x7F & temp_r0->unk2E) {
        var_r1 = 6;
    }
    return var_r1;
}
