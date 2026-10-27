typedef struct GenObj {
    u8 _pad0[37];
    u8 unk25;
} GenObj;
u8 func_08038108(GenObj *arg0) {
    return arg0->unk25;
}

/* ATTEMPT-NOTE opencode: member+return u8 (ldrb, tanpa lsls/lsrs). */
