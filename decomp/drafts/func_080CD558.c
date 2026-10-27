extern s32 gUnk_08117838;

void func_080CD558(s32 *arg0) {
    s32 t;
    u8 b;

    t = gUnk_08117838;
    b = t + 0x78;
    *arg0 = (t & 0xFFFFFF00) | b;
}

/* ATTEMPT-NOTE opencode: gUnk sekali-load ke var; zero-extend via u8. */
