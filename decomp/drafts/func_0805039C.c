// DECOMP-MATCHED func_0805039C (dari code_0803EE94.s; cek manusia sebelum ke src/)
s32 func_08009940(void *, void *);                    /* extern */
s32 func_0804F0E0(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    u8 unkC;
} GenObj;
void func_0805039C(GenObj *arg0) {
    register u8 *temp_r5 asm("r5");
    register s32 temp_r6 asm("r6");
    s32 t;

    temp_r6 = arg0->unk8;
    if (temp_r6 == 0) {
        func_0804F0E0((u8 *)arg0 + 0xD0);
        t = arg0->unk4;
        temp_r5 = (u8 *)arg0 + 0x20;
        if (t != 1) {
            func_08009940(temp_r5, (u8 *)arg0 + (0x98 << 1));
        }
        func_08009940(temp_r5, (u8 *)arg0 + (0xA4 << 1));
        arg0->unkC = temp_r6;
    }
    {
        s32 t2 = arg0->unk8;
        if (t2 >= 0) {
            if (t2 <= 2) {
                arg0->unk8 = 1;
            }
        }
    }
}
