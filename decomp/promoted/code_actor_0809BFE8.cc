
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

// DECOMP-MATCHED func_0809C0BC (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
void func_0809C0BC(GenObj *arg0, s32 *arg1) {
    arg0->unk10 = (s32) *arg1;
    arg0->unkC = 3;
}

// DECOMP-MATCHED func_0809C0C8 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
void func_0809C0C8(GenObj *arg0, s32 *arg1) {
    arg0->unk10 = (s32) *arg1;
    arg0->unkC = 4;
}

// DECOMP-MATCHED func_0809C444 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(s32);                              /* extern */

u8 func_0809C444(s32 arg0) {
    s32 temp_r0;
    u8 var_r5;

    var_r5 = 0;
    temp_r0 = func_0809C22C();
    if ((*((u8 *)arg0 + temp_r0) != 0) && ((temp_r0 == 0) || (temp_r0 == 3))) {
        var_r5 = func_0809C3E0(arg0);
    }
    return var_r5;
}

// DECOMP-MATCHED func_0809C474 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(s32, s32);                         /* extern */
s32 func_0809C420(s32, s32);                          /* extern */

u8 func_0809C474(s32 arg0) {
    s32 temp_r0;
    u8 var_r6;

    temp_r0 = func_0809C22C();
    var_r6 = 0;
    if (*((u8 *)arg0 + temp_r0) != 0) {
        if ((temp_r0 == 1) || (temp_r0 == 4)) {
            var_r6 = func_0809C3E0(arg0, temp_r0);
        }
        if ((temp_r0 == 0) || (temp_r0 == 3)) {
            func_0809C420(arg0, temp_r0);
        }
    }
    return var_r6;
}

// DECOMP-MATCHED func_0809C4B4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(s32);                              /* extern */

u8 func_0809C4B4(s32 arg0) {
    s32 temp_r0;
    u8 var_r2;

    temp_r0 = func_0809C22C();
    var_r2 = 0;
    if ((*((u8 *)arg0 + temp_r0) != 0) && ((temp_r0 == 5) || (temp_r0 == 2))) {
        var_r2 = func_0809C3E0(arg0);
    }
    return var_r2;
}

// DECOMP-MATCHED func_0809CE7C (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern s32 gUnk_08103A18;

s32 func_0809CE7C(s32 arg0, s32 arg1) {
    s32 *temp_r0 = &gUnk_08103A18;

    return temp_r0[arg1];
}

// DECOMP-MATCHED func_0809CE24 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
s32 func_0809CE24(s32 arg0, s32 arg1) {
    s32 off = arg1 * 8;
    arg0 += 4;
    return *(s32 *)(arg0 + off);
}

/* ATTEMPT-NOTE opencode: off terpisah agar urutan lsls/adds-r0/adds/ldr-[r0,#0]; lipat +4 ke offset load salah urutan. */
