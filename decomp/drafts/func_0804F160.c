typedef struct GenObj {
    u8 _pad0[4];
    u8 unk4;
} GenObj;
u8 func_0804F160(GenObj *arg0) {
    u8 temp_r0;
    u8 var_r1;

    temp_r0 = arg0->unk4;
    var_r1 = temp_r0;
    if (temp_r0 != 0) {
        var_r1 = 1;
    }
    return var_r1;
}

/* ATTEMPT-NOTE opencode: unk4/return u8; copy temp->var (adds). */
