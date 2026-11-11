/* note sesi: 5 judge. Sisa 1 instruksi: ref `adds r1, r0, #0` sebelum
   `movs r0,#0; str r0,[r1]`, draf selalu `str r0, [sp]` karena agbcc tahu
   p == sp. Variasi yang dicoba: p=(void**)&sp, p[0]=0, *sp.sp4=0, p=(void*)+cast.
   Pola ref muncul kalau pointer tidak bisa dilipat ke sp; tidak ditemukan bentuk
   C yang menghalangi pelipatan. Parkir (POLA-DIFF 22). */
s32 sub_080D8178(void **, s32);

typedef struct Vt {
    u8 _pad0[8];
    void *fn8;
} Vt;

typedef struct SP3 {
    void *sp0;
    void **sp4;
    void *sp8;
} SP3;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;

void ***func_08012028(void ***arg0, GenObj *arg1) {
    register void *tmp __asm__("r2");
    SP3 sp;
    void *p;
    void *q;

    sub_080D8178((void **) &sp.sp0, arg1->unk4);
    tmp = sp.sp0;
    p = (void *) &sp.sp0;
    sp.sp4 = (void **) p;
    sp.sp8 = tmp;
    *(void **) p = 0;
    *arg0 = tmp;
    q = *(void *volatile *) &sp.sp0;
    if (q != 0) {
        ((void (*)(void *, s32)) ((Vt *) *(void **) q)->fn8)(q, 3);
    }
    return arg0;
}
