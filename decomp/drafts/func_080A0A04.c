typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
void *func_080A0A04(GenObj *arg0) {
    GenObj *t = arg0;
    void *var_r2;
    s32 sh = t->unk3 << 0x1E;

    var_r2 = 0;
    if (sh >= 0) {
    } else {
        var_r2 = (u8 *)t + 4;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: sama A0384. */
