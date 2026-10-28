s32 func_08009158();                                /* extern */

typedef struct GenObj {
    u16 unk0;
    u16 _pad2;
    u16 unk4;
} GenObj;
s32 func_08009190(GenObj *arg0) {
    register s32 temp_r5 asm("r5");
    s32 res;

    temp_r5 = arg0->unk0;
    res = func_08009158() & ~temp_r5;
    arg0->unk4 = res;
    return res;
}

/* ATTEMPT-NOTE opencode: unk u16; bic via & ~. */

/* ATTEMPT-NOTE opencode: unk u16; sisa alokasi arg-copy (r4 vs r5). */
