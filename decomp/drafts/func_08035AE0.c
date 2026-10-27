typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad6[8];
    s16 unkE;
} GenObj;
s32 func_08035AE0(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 == 0x1D) && ((s32) arg0->unkE <= 0x37)) {
        var_r2 = 1;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk4 u16 (ldrh), unkE s16 (ldrsh). */
