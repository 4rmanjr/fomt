
// DECOMP-MATCHED func_0809C5B4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
void func_0809C5B4(s32 *arg0, u32 arg1) {
    if (arg1 <= 0xDU) {
        *arg0 |= 1 << (0x1F & arg1);
    }
}

// DECOMP-MATCHED func_0809C5D0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
void func_0809C5D0(s32 *arg0, u32 arg1) {
    if (arg1 <= 0xDU) {
        *arg0 &= ~(1 << (0x1F & arg1));
    }
}

// DECOMP-MATCHED func_0809D8A0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809D8A0(s32 *arg0) {
    return *arg0;
}

// DECOMP-MATCHED func_0809C5EC (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
void func_0809C5EC(s32 *arg0) {
    *arg0 = 0;
}

// DECOMP-MATCHED func_0809D8A4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809D8A4(s32 *arg0) {
    s32 var_r1;

    var_r1 = 0xD;
    if (*arg0 == 1) {
        var_r1 = 0x1C;
    }
    return var_r1;
}

// DECOMP-MATCHED func_0809C5F4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
u32 func_0809C5F4(s32 *arg0) {
    s32 temp_r1;

    temp_r1 = *arg0;
    return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
}

// DECOMP-MATCHED func_0809D8B8 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809D8B8(s32 *arg0) {
    s32 temp_r0;
    s32 var_r1;

    var_r1 = 6;
    temp_r0 = *arg0;
    if (temp_r0 == 1) {
        var_r1 = 0x1C;
    } else if (temp_r0 == 2) {
        var_r1 = 0xE;
    }
    return var_r1;
}

// DECOMP-MATCHED func_0809C0A0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
void func_0809C0A0(GenObj *arg0, s32 *arg1) {
    arg0->unk10 = (s32) *arg1;
    arg0->unkC = 1;
}
