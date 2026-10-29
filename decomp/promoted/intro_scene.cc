
// DECOMP-MATCHED func_080036F8 (dari intro_scene.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                               /* extern */
s32 func_08000914();                                /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct O6B O6B;
typedef struct Sub Sub;
typedef struct CellW CellW;
typedef struct Blk Blk;
typedef struct GenObj GenObj;
struct Sub {
    s32 unk0;
    s32 unk4;
};
struct CellW {
    u16 v;
    u16 _p;
};
struct Blk {
    O6B *p;
    CellW *arr;
    u8 _x[4];
    u16 idx;
};
struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[0x6B80 - 0xC];
    Blk blk;
    u8 _padX[0x6CD0 - 0x6B90];
    Sub k0;
    Sub k1;
    Sub k2;
    Sub k3;
};
void *func_080036F8(GenObj *arg0) {
    arg0->unk0 = &vtable_unk_080E5A18;
    __builtin_new(0x6D34);
    arg0->unk4 = (GenObj *)func_08000914();
    return arg0;
}

// DECOMP-MATCHED func_0800371C (dari intro_scene.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct O6B O6B;
typedef struct Sub Sub;
typedef struct CellW CellW;
typedef struct Blk Blk;
typedef struct GenObj GenObj;
struct Sub {
    s32 unk0;
    s32 unk4;
};
struct CellW {
    u16 v;
    u16 _p;
};
struct Blk {
    O6B *p;
    CellW *arr;
    u8 _x[4];
    u16 idx;
};
struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[0x6B80 - 0xC];
    Blk blk;
    u8 _padX[0x6CD0 - 0x6B90];
    Sub k0;
    Sub k1;
    Sub k2;
    Sub k3;
};
void func_0800371C(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E5A18;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_0800374C (dari intro_scene.s; cek manusia sebelum ke src/)
typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct {
    Vtbl *vtbl;
} Obj;
void func_08000D64(void *, s32);                     /* extern */

typedef struct O6B O6B;
typedef struct Sub Sub;
typedef struct CellW CellW;
typedef struct Blk Blk;
typedef struct GenObj GenObj;
struct Sub {
    s32 unk0;
    s32 unk4;
};
struct CellW {
    u16 v;
    u16 _p;
};
struct Blk {
    O6B *p;
    CellW *arr;
    u8 _x[4];
    u16 idx;
};
struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[0x6B80 - 0xC];
    Blk blk;
    u8 _padX[0x6CD0 - 0x6B90];
    Sub k0;
    Sub k1;
    Sub k2;
    Sub k3;
};
Obj **func_0800374C(Obj **arg0, GenObj *arg1) {
    /* Frame 12 byte: sp0 volatile (reload paksa utk null-check, krn
       *arg0 boleh alias sp0), sp4 volatile (store tidak dilipat),
       sp8 nilai tersimpan. tmp di r2; salinan alamat r0->r1 via
       copy register + barrier asm (tanpa itu agbcc melipat jadi
       `str [sp]` atau reload `ldr`). Pola sama dgn func_08005A00. */
    struct { Obj *volatile sp0; Obj **volatile sp4; Obj *sp8; } fr;
    register Obj *tmp __asm__("r2");
    register Obj **q __asm__("r0");
    register Obj **sp4r __asm__("r1");
    Obj *c;

    func_08000D64((void *)&fr.sp0, (s32)arg1->unk4);
    tmp = fr.sp0;
    q = (Obj **)&fr.sp0;
    fr.sp4 = q;
    fr.sp8 = tmp;
    sp4r = q;
    __asm__ volatile ("" : "+r" (sp4r) : : "memory");
    *sp4r = 0;
    *arg0 = tmp;
    if ((c = fr.sp0) != 0) {
        c->vtbl->unk8(c, 3);
    }
    return arg0;
}

// DECOMP-MATCHED func_080035C0 (dari intro_scene.s; cek manusia sebelum ke src/)
s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_0805E860(void *, s32);                     /* extern */
s32 func_0805E99C(s32, void *, u16, void *);        /* extern */
s32 memcpy(s32 *, s32 *, s32);                      /* extern */

typedef struct O6B O6B;
typedef struct V6B V6B;
typedef struct Sub Sub;
typedef struct Sp0 Sp0;
typedef struct S20 S20;
typedef struct CellW CellW;
typedef struct Blk Blk;
typedef struct GenObj GenObj;

struct V6B {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void (*m)(S20 *, O6B *, u16);
};
struct O6B {
    V6B *v;
};
struct Sub {
    s32 unk0;
    s32 unk4;
};
struct CellW {
    u16 v;
    u16 _p;
};
struct Blk {
    O6B *p;
    CellW *arr;
    u8 _x[4];
    u16 idx;
};
struct Sp0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 _padA;
    s32 unkC;
    u8 unk10;
    u8 unk11;
    u8 _pad12[2];
    s32 unk14;
    u8 unk18;
    u8 _pad19[3];
};
typedef struct {
    void *p;
    s16 h;
    s16 _pad;
} Cell;
struct S20 {
    Cell c0;
    Cell c1;
    Cell c2;
    Cell c3;
};
struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[0x6B80 - 0xC];
    Blk blk;
    u8 _padX[0x6CD0 - 0x6B90];
    Sub k0;
    Sub k1;
    Sub k2;
    Sub k3;
};
void func_080035C0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Sp0 sp;
    S20 mid;
    S20 tmp;
    Blk *b;
    Sub *s;
    Cell *c0;
    Cell *c1;
    Cell *c2;
    Cell *c3;
    O6B *o;
    V6B *v;
    u16 idx;
    u16 h;
    CellW **pp;
    CellW *arr;
    S20 *q;
    register s32 i asm("r2");
    register s32 t asm("r3");
    register void *p0 asm("r0");
    register void *p1 asm("r1");
    register S20 *r0v asm("r0");

    sp.unk0 = 0;
    sp.unk2 = 0;
    sp.unk4 = 0;
    sp.unk6 = 0;
    sp.unk8 = 0;
    sp.unkC = 0;
    sp.unk10 = 0;
    sp.unk11 = 0;
    sp.unk14 = 0;
    sp.unk18 = 0;
    c0 = &mid.c0;
    c0->p = 0;
    c0->h = 0;
    c1 = &mid.c1;
    c1->p = 0;
    c1->h = 0;
    c2 = &mid.c2;
    c2->p = 0;
    c2->h = 0;
    c3 = &mid.c3;
    c3->p = 0;
    c3->h = 0;
    switch (arg3) {
    case 0:
        func_0805E860(&arg0->blk, 0x91A);
        s = &arg0->k0;
        sp.unk6 = func_08007D4C(s, s->unk4);
        break;
    case 1:
        func_0805E860(&arg0->blk, 0x91B);
        s = &arg0->k1;
        sp.unk6 = func_08007D4C(s, s->unk4);
        break;
    case 2:
        func_0805E860(&arg0->blk, 0x91C);
        s = &arg0->k2;
        sp.unk6 = func_08007D4C(s, s->unk4);
        break;
    }
    b = &arg0->blk;
    o = b->p;
    v = o->v;
    i = b->idx;
    pp = (CellW **)((u8 *)arg0 + 0x6B84);
    i <<= 2;
    arr = *pp;
    idx = *(u16 *)((u8 *)arr + i);
    /* &tmp langsung ke r0 via insn eksplisit: bila ditulis &tmp biasa,
       agbcc berbagi perhitungan alamat dgn pemakaian pasca-call (r4),
       menghasilkan 'add r4,sp; adds r0,r4' (2 insn, dif 1 byte).
       Insn di bawah opaque bagi optimizer sehingga 'q = &tmp'
       dihitung ulang pasca-call ('add r4,sp') seperti ref. */
    __asm__ volatile ("add %0, sp, #0x3c" : "=r" (r0v) : "r" (idx));
    v->m(r0v, o, idx);
    q = &tmp;
    memcpy((s32 *)q, (s32 *)q, 0x20);
    mid = *q;
    sp.unk0 = arg1;
    sp.unk2 = arg2;
    sp.unk8 = 0;
    s = &arg0->k3;
    sp.unk4 = func_080074C0(s, s->unk4);
    sp.unk18 = 1;
    t = func_08008920(arg0);
    p0 = mid.c0.p;
    __asm__ volatile ("" : "+r" (p0) : : "memory");
    p1 = p0;
    __asm__ volatile ("" : "+r" (p1) : : "memory");
    h = 0;
    if (p1 != 0)
        h = mid.c0.h;
    func_0805E99C(t, p1, h, &sp);
}
