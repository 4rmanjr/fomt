typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[148];
    s32 unk9C;
    u8 _padA0[64];
    u16 unkE0;
} GenObj;
void func_08012BAC(GenObj *arg0, s16 arg1) {
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r0->unkE0 = arg1;
    temp_r0->unk9C = 0x15;
}

/* ATTEMPT-NOTE opencode: unkE0 u16 (strh). */
