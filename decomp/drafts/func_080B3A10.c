extern s32 gUnk_081078A0;

typedef struct GenObj {
    u8 _pad0[2356];
    s32 unk934;
} GenObj;
u16 func_080B3A10(GenObj *arg0) {
    s32 t = arg0->unk934 + 0x934;

    return *(u16 *)((u8 *)&gUnk_081078A0 + (t * 2));
}

/* ATTEMPT-NOTE opencode: t-var + base inline. */

/* ATTEMPT-NOTE opencode: off/base/t var & inline dicoba; sisa alokasi off/base (r1/r2 vs r2/r1). */
