extern s32 gUnk_03000430;

u16 func_080D101C(s32 arg0, u16 arg1) {
    register u8 *p asm("r2") = (u8 *)&gUnk_03000430;
    u16 t;

    arg0 <<= 1;
    p += arg0;
    t = *(u16 *)p;
    *(u16 *)p = arg1;
    return t;
}

/* ATTEMPT-NOTE hermes6: register-asm r2 spt D100C (adds r2,r2,r0). */
