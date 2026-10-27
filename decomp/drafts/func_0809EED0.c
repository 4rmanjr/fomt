typedef struct GenObj {
    u8 _pad0[22];
    u8 unk16;
} GenObj;
s32 func_0809EED0(GenObj *arg0) {
    u8 temp_r0;

    u8 t = arg0->unk16;

    if (t != 0xA) {
        arg0->unk16 = t + 1;
        return 1;
    }
    return 0;
}

/* ATTEMPT-NOTE opencode: unk16 u8; inc langsung di r0? */

/* ATTEMPT-NOTE opencode: unk16 u8; cabang negatif dulu (bne + return0-depan). */
