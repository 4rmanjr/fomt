/* func_080087C8 (240B, hardware.s) - draf mengikuti bentuk sumber
 * func_08008980 (MATCH, src/hardware_migrated.cc): objek 16B diakses lewat
 * pointer variabel hasil `(u8 *) base + N`, vt container vtable_unk_080E5BB4,
 * sentinel dengan vt vtable_unk_080E5BD8, dan vt sentinel ditulis dua kali
 * (vtable_unk_080E5BE8 lalu vtable_unk_080E5BD8) persis seperti 08980 menulis
 * vtable_unk_080E5BB4 lalu vtable_unk_080E5B90 pada container-nya.
 *
 * 08980 membuktikan agbcc MEMPERTAHANKAN store vt yang ditimpa bila pointernya
 * variabel (bukan alamat lokal yang diketahui gcc); itu yang gagal di semua
 * draf sebelumnya (POLA-DIFF 70b-70d).
 */
typedef struct GenObj GenObj;
struct GenObj {          /* node 16B: {next, prev, vt, data} */
    GenObj *unk0;
    GenObj *unk4;
    GenObj *unk8;
    GenObj *unkC;
};

typedef struct Cont Cont;
struct Cont {            /* container 28B: 4 field + sentinel 12B di +0x10 */
    GenObj *unk0;
    GenObj *unk4;
    GenObj *unk8;
    GenObj *unkC;
    GenObj *unk10;
    GenObj *unk14;
    GenObj *unk18;
};

typedef struct Frame Frame;
struct Frame {           /* 76B = 0x4c, persis `sub sp, #0x4c` */
    GenObj a;
    GenObj b;
    GenObj c;
    Cont d;
};

void *func_08008AE0(s32);
s32 func_08008AF0(s32);
s32 func_080098AC(void *, s32);
s32 func_080098DC(void *, s32);
s32 func_08009940(void *, void *);
extern s32 vtable_unk_080E5AD0;
extern s32 vtable_unk_080E5AE0;
extern s32 vtable_unk_080E5AF0;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;
extern s32 vtable_unk_080E5BE8;

void func_080087C8(s32 *arg0) {
    Frame f;
    GenObj *pe;
    GenObj *pb;
    GenObj *pc;
    Cont *pd;
    s32 base;
    u8 *q;
    void *obj;
    u32 *vt;

    base = *arg0;
    pb = (GenObj *) ((u8 *) &f + 0x10);
    pc = (GenObj *) ((u8 *) &f + 0x20);
    pd = (Cont *) ((u8 *) &f + 0x30);
    pe = (GenObj *) ((u8 *) pd + 0x10);
    q = (u8 *) (base + 0x34);

    f.a.unk0 = 0;
    f.a.unk4 = 0;
    f.a.unk8 = (GenObj *) &vtable_unk_080E5AF0;
    f.a.unkC = (GenObj *) q;
    q += 0x58;
    pb->unk0 = 0;
    pb->unk4 = 0;
    pb->unk8 = (GenObj *) &vtable_unk_080E5AE0;
    pb->unkC = (GenObj *) q;
    q -= 0x68;
    pc->unk0 = 0;
    pc->unk4 = 0;
    pc->unk8 = (GenObj *) &vtable_unk_080E5AD0;
    pc->unkC = (GenObj *) q;

    pd->unk0 = 0;
    pd->unk4 = 0;
    pd->unk8 = (GenObj *) &vtable_unk_080E5BB4;
    pd->unkC = pe;
    pe->unk8 = (GenObj *) &vtable_unk_080E5BE8;
    pe->unk0 = 0;
    pe->unk4 = 0;
    pe->unk8 = (GenObj *) &vtable_unk_080E5BD8;
    pd->unk10 = (GenObj *) ((u8 *) pd + 0xC);   /* &pd->unkC */
    pd->unk14 = pe;

    func_08009940(pd, (void *) (base + 0x494));
    func_08009940(pd, &f.a);
    func_08009940(pd, pc);
    func_08009940(pd, pb);

    base += 0x490;
    obj = func_08008AE0(base);
    vt = (u32 *) *((u32 *) obj + 2);
    ((void (*)(void *, void *)) vt[4])(obj, pd);
    func_08008AF0(base);
    obj = func_08008AE0(base);
    vt = (u32 *) *((u32 *) obj + 2);
    ((void (*)(void *, void *)) vt[5])(obj, pd);
    func_080098DC(pd, 2);
    func_080098AC(pc, 2);
    func_080098AC(pb, 2);
    func_080098AC(&f.a, 2);
}
