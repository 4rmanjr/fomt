extern s32 gUnk_03000450;

s32 func_080D100C(s32 arg0, s32 arg1) {
    register u8 *p asm("r2") = (u8 *)&gUnk_03000450;
    s32 t;

    arg0 <<= 2;
    p += arg0;
    t = *(s32 *)p;
    *(s32 *)p = arg1;
    return t;
}

/* ATTEMPT-NOTE hermes6: register-asm r2 (30+ varian natural selalu
   memberi adds r2,r0,r2; hanya explicit-reg yg memberi r2,r2,r0). */
