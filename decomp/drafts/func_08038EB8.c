/* Kunci MATCH: `zero` harus VARIABEL (bukan literal) dan dibandingkan sebagai
   `zero != v` di if bersarang. Dengan literal `v != 0 && v != zero` agbcc
   melipat kedua tes jadi satu `cmp r4,#0` (16 instruksi, 34B vs ref 40B);
   sebagai variabel, ref mempertahankan `movs r6,#0` + `cmp r6,r4` (register)
   lalu `cmp r4,#0` (immediate), dan 0 yang sama dipakai ulang untuk
   `str r6,[r5]`. Pointer `slot` tetap memberi `adds r5,r0,#0; adds r5,#0xc`. */
s32 func_080A47B4(void *, s32);
void __builtin_delete(void *);

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;

void func_08038EB8(GenObj *arg0) {
    s32 *slot = &arg0->unkC;
    s32 zero = 0;
    s32 v = arg0->unkC;

    if (zero != v) {
        if (v != 0) {
            func_080A47B4((void *) v, 2);
            __builtin_delete((void *) v);
        }
    }
    *slot = zero;
}
