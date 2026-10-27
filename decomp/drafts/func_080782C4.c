typedef struct GenObj {
    u8 _pad0[16];
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
} GenObj;
s32 func_080782C4(s32 dummy, u32 arg1, u32 arg2, GenObj *arg3) {
    s32 var_r4;

    var_r4 = 0;
    if (((u32) arg3->unk10 <= arg1) && (arg1 <= (u32) arg3->unk12) && ((u32) arg3->unk11 <= arg2) && (arg2 <= (u32) arg3->unk13)) {
        var_r4 = 1;
    }
    return var_r4;
}

/* ATTEMPT-NOTE opencode: struct di r3 via s32 dummy (arg1=r1, arg2=r2); 4 member u8. */
