
// DECOMP-MATCHED func_08005254 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_08008724();                                  /* extern */

void func_08005254(void) {
    func_08008724();
}

// DECOMP-MATCHED func_08004B58 (dari new_game.s; cek manusia sebelum ke src/)
s32 **__builtin_new(s32);                             /* extern */
s32 func_080041DC(s32 **, s32, s32 ***);                /* extern */
extern s32 vtable_unk_080E5A3C;
extern s32 vtable_unk_080E5A68;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_08004B58(GenObj *arg0) {
    s32 **sp0;
    s32 **temp_r0;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r0 = __builtin_new(4);
    *temp_r0 = &vtable_unk_080E5A3C;
    sp0 = temp_r0;
    arg0->unk4 = func_080041DC(__builtin_new(0x1A0), 0, &sp0);
    return arg0;
}

// DECOMP-MATCHED func_08004BDC (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A68;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_08004BDC(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_08004C48 (dari new_game.s; cek manusia sebelum ke src/)
extern s32 vtable_unk_080E5A88;

void func_08004C48(s32 **arg0) {
    *arg0 = &vtable_unk_080E5A88;
}

// DECOMP-MATCHED func_080050C8 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5A98;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[6692];
    s32 unk1A2C;
} GenObj;
void func_080050C8(GenObj *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk4 = &vtable_unk_080E5A98;
    temp_r0 = arg0->unk1A2C;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}

// DECOMP-MATCHED func_080059D0 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5AA4;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080059D0(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E5AA4;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_08005B38 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5AB4;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[17904];
    s32 unk45F8;
} GenObj;
void func_08005B38(GenObj *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk4 = &vtable_unk_080E5AB4;
    temp_r0 = arg0->unk45F8;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}

// DECOMP-MATCHED func_08007078 (dari new_game.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_08005A58(s32, s32, s32);                   /* extern */
extern s32 vtable_unk_080E5AC0;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_08007078(GenObj *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &vtable_unk_080E5AC0;
    arg0->unk4 = func_08005A58(__builtin_new(0x4640), arg1, arg2);
    return arg0;
}

// DECOMP-MATCHED func_080070A4 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5AC0;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080070A4(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E5AC0;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_08004B94 (dari new_game.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                             /* extern */
s32 func_080041DC(s32, s32, void ***);                 /* extern */
extern s32 vtable_unk_080E5A68;

typedef struct Vtbl {
    void *unk0;
    void *unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct Obj {
    Vtbl *vtbl;
    struct Obj *unk4;
} Obj;
typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_08004B94(GenObj *arg0, s32 arg1, Obj ***arg2) {
    Obj **sp0;
    Obj **temp_r1;
    Obj *temp_r4;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r1 = *arg2;
    *arg2 = 0;
    sp0 = temp_r1;
    arg0->unk4 = func_080041DC(__builtin_new(0x1A0), arg1, &sp0);
    temp_r4 = (Obj *)*arg2;
    if (temp_r4 != 0) {
        temp_r4->vtbl->unk8(temp_r4, 3);
    }
    return arg0;
}

// DECOMP-MATCHED func_08004C54 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A88;

typedef struct GenObj {
    void *unk0;
} GenObj;
void func_08004C54(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E5A88;
    func_080007EC(arg0, arg1);
}

// DECOMP-MATCHED func_08005260 (dari new_game.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[0x1A74];
    u8 unk1A74;
    u8 unk1A75;
} GenObj;
void func_08005260(GenObj *arg0) {
    arg0->unk1A75 = 0;
    arg0->unk1A74 = 0;
}

// DECOMP-MATCHED func_08006334 (dari new_game.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[17920];
    s32 unk4600;
    u8 unk4604;
    u8 unk4605;
    u8 _pad4606[10];
    u8 unk4610;
    u8 _pad4611[37];
    u8 unk4636;
    u8 unk4637;
    u8 unk4638;
    u8 unk4639;
    u8 _pad463A[2];
    s32 unk463C;
} GenObj;
void func_08006334(GenObj *arg0) {
    arg0->unk4639 = 0;
    arg0->unk4638 = 0;
    arg0->unk4636 = 0;
    arg0->unk4637 = 0;
    arg0->unk4605 = 0;
    arg0->unk4604 = 0;
    arg0->unk4600 = 0;
    arg0->unk4610 = 0;
    arg0->unk463C = 0;
}

// DECOMP-MATCHED func_0800598C (dari new_game.s; cek manusia sebelum ke src/)
void *__builtin_new(s32);                             /* extern */
s32 func_08004EFC(void *, s32, s32, s32, s32);          /* extern */
extern s32 vtable_unk_080E5AA4;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
GenObj *func_0800598C(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *nn;

    arg0->unk0 = &vtable_unk_080E5AA4;
    nn = __builtin_new(0x1A78);
    arg0->unk4 = func_08004EFC(nn, arg1, arg2, arg3, arg4);
    return arg0;
}

// DECOMP-MATCHED func_08005A3C (dari new_game.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    s32 unk0;
    void *unk4;
} GenObj;
u8 func_08005A3C(GenObj *arg0) {
    return *(u8 *)((u8 *)arg0->unk4 + 0x1A76);
}

// DECOMP-MATCHED func_08007110 (dari new_game.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} GenObj;
s32 func_08007110(GenObj *arg0) {
    return arg0->unk4 + 0x461C;
}

// DECOMP-MATCHED func_08003C28 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080088DC();                                /* extern */
s32 func_08008918(s32);                             /* extern */
s32 func_08008920(s32);                             /* extern */
s32 func_08008940(s32);                             /* extern */
s32 func_0800894C(s32);                             /* extern */
s32 func_08050D3C(s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_08003C28(s32 arg0) {
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;

    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4b;
    temp_sb = func_080088DC();
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r5 = func_08008940(arg0);
    temp_r0 = func_0800894C(arg0);
    temp_r1 = arg0 + 0x10;
    temp_r4b = arg0 + 0x14;
    func_08050D3C(temp_r1, temp_sb, temp_r8, temp_r6, temp_r5, temp_r0, temp_r4b);
}

// DECOMP-MATCHED func_08005A00 (dari new_game.s; cek manusia sebelum ke src/)
void func_080050F8(void *, s32);                     /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} GenObj;
GenObj *func_08005A00(GenObj *arg0, GenObj *arg1) {
    /* Frame 12 byte: sp0 volatile (reload paksa utk null-check, krn
       *sp4 alias sp0), sp4 volatile (store tidak dilipat),
       sp8 nilai tersimpan. tmp di r2; salinan alamat r0->r1 via
       copy register + barrier asm (tanpa itu agbcc melipat jadi
       `str [sp]` atau reload `ldr`). Pola sama dgn func_0800374C. */
    struct { GenObj *volatile sp0; GenObj **volatile sp4; GenObj *sp8; } fr;
    register GenObj *tmp __asm__("r2");
    register GenObj **q __asm__("r0");
    register GenObj **sp4r __asm__("r1");
    GenObj *c;

    func_080050F8((void *)&fr.sp0, arg1->unk4);
    tmp = fr.sp0;
    q = (GenObj **)&fr.sp0;
    fr.sp4 = q;
    fr.sp8 = tmp;
    sp4r = q;
    __asm__ volatile ("" : "+r" (sp4r) : : "memory");
    *sp4r = 0;
    arg0->unk0 = tmp;
    if ((c = fr.sp0) != 0) {
        ((GenObj *)c->unk0)->unk8(c, 3);
    }
    return arg0;
}

// DECOMP-MATCHED func_080070D4 (dari new_game.s; cek manusia sebelum ke src/)
void func_08005B68(void *, s32);                     /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} GenObj;
GenObj *func_080070D4(GenObj *arg0, GenObj *arg1) {
    /* Frame 12 byte: sp0 volatile (reload paksa utk null-check, krn
       *sp4 alias sp0), sp4 volatile (store tidak dilipat),
       sp8 nilai tersimpan. tmp di r2; salinan alamat r0->r1 via
       copy register + barrier asm (tanpa itu agbcc melipat jadi
       `str [sp]` atau reload `ldr`). Pola sama dgn func_08005A00. */
    struct { GenObj *volatile sp0; GenObj **volatile sp4; GenObj *sp8; } fr;
    register GenObj *tmp __asm__("r2");
    register GenObj **q __asm__("r0");
    register GenObj **sp4r __asm__("r1");
    GenObj *c;

    func_08005B68((void *)&fr.sp0, arg1->unk4);
    tmp = fr.sp0;
    q = (GenObj **)&fr.sp0;
    fr.sp4 = q;
    fr.sp8 = tmp;
    sp4r = q;
    __asm__ volatile ("" : "+r" (sp4r) : : "memory");
    *sp4r = 0;
    arg0->unk0 = tmp;
    if ((c = fr.sp0) != 0) {
        ((GenObj *)c->unk0)->unk8(c, 3);
    }
    return arg0;
}

// DECOMP-MATCHED func_08003E88 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_08008920(s32);                             /* extern */

typedef struct Obj3E88 {
    u8 _pad0[0x34];
    u32 unk34;
    u16 unk38;
} Obj3E88;

void func_08003E88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    register s32 var_r4 __asm__("r4");
    register s32 t1 __asm__("r1");
    register s32 t2 __asm__("r0");
    register u32 masked __asm__("r2");
    register u32 maskA __asm__("r0");
    u32 st[2];
    u16 *p1;
    Obj3E88 *temp_r0;

    var_r4 = arg1;
    if (var_r4 == 1) {
        var_r4 = 0;
    }
    st[0] = arg2;
    st[1] = arg3;
    t1 = *(u8 *) st;
    t1 += 8;
    t2 = ((var_r4 * 2) + 1) * 8;
    t1 += t2;
    t1 = (u8) t1;
    maskA = 0xFFFFFF00;
    __asm__ volatile("" : "+m" (st[0]));
    masked = st[0];
    masked &= maskA;
    masked |= t1;
    t1 = (masked << 7) >> 0x17;
    t1 += 0x10;
    t1 &= 0x1FF;
    t1 <<= 0x10;
    st[0] = (masked & 0xFE00FFFF) | t1;
    temp_r0 = (Obj3E88 *) func_08008920(arg0);
    p1 = (u16 *) st;
    __asm__ volatile("" : "+r" (p1));
    temp_r0->unk34 = st[0];
    temp_r0->unk38 = p1[2];
}

// DECOMP-MATCHED func_08003BB4 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_080087C8(s32);                             /* extern */
s32 func_08008918(s32);                             /* extern */
s32 func_08008940(s32);                             /* extern */
s32 func_08009300(void *, ...);                     /* extern */
void func_08009378(void *, s16, s32, s32);          /* extern */
typedef struct GenObj__func_080098AC GenObj__func_080098AC;
void func_080094B8(GenObj__func_080098AC *, void *); /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct Obj3BB4 {
    u8 _pad0[0x50];
    u16 unk50;
} Obj3BB4;

typedef struct Vt3BB4 {
    u8 _pad0[0x10];
    void (*unk10)(void *, void *);
} Vt3BB4;

typedef struct Obj8_3BB4 {
    u8 _pad0[8];
    Vt3BB4 *unk8;
} Obj8_3BB4;

typedef struct St3BB4 {
    s16 unk0;
    s16 _pad2;
    s32 unk4;
    s32 unk8;
    s32 *unkC;
    s32 unk10;
} St3BB4;

void func_08003BB4(s32 arg0) {
    St3BB4 st;
    register s32 *p __asm__("r4");
    register s32 a5 __asm__("r5");
    s32 *buf;
    register s32 zero __asm__("r0");
    register s32 c889 __asm__("r1");
    Obj3BB4 *temp_r0;
    void *temp_r1;
    Obj8_3BB4 *temp_r0_2;
    void (*fn)(void *, void *);

    a5 = arg0;
    temp_r0 = (Obj3BB4 *) func_08008918(arg0);
    st.unk0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = (void *) func_08008918(a5);
    p = &st.unk4;
    zero = 0;
    st.unk4 = zero;
    p[1] = zero;
    st.unkC = &vtable_unk_080E5B80;
    __asm__ volatile ("add %0, sp, #0x10" : "=r" (buf));
    func_08009300(buf, temp_r1);
    c889 = 0x889;
    __asm__ volatile ("add %0, sp, #0x10" : "=r" (buf));
    func_08009378(buf, (s16) c889, 1, 1);
    temp_r0_2 = (Obj8_3BB4 *) func_08008940(a5);
    fn = temp_r0_2->unk8->unk10;
    fn(temp_r0_2, p);
    while (((0 - st.unk4) | st.unk4) < 0) {
        func_080087C8(a5);
    }
    func_080094B8((GenObj__func_080098AC *) p, (void *) 2);
}

// DECOMP-MATCHED func_08006C60 (dari new_game.s; cek manusia sebelum ke src/)
s32 strcpy(s32, s32);                                 /* extern */

u32 func_08006C60(s32 arg0) {
    register u8 *rp4 __asm__("r4");
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    register s32 rp5 __asm__("r5");
    register s32 rp6 __asm__("r6");
    u8 *temp_r1;
    u8 temp_r0;
    u8 *base;
    u8 *endp;

    rp6 = 0;
    rp5 = 0;
    rp4 = (u8 *) (arg0 + 0x4629);
    strcpy((s32) rp4, arg0 + 0x461C);
    var_r1 = 0;
    do {
        temp_r0 = rp4[var_r1];
        if (temp_r0 == 0x5F) {
            rp5 += 1;
            var_r0 = var_r1 + 1;
        } else {
            if (temp_r0 == 0x20) {
                rp5 += 1;
            }
            rp6 = var_r1 + 1;
            var_r0 = rp6;
        }
        var_r1 = var_r0;
    } while (var_r1 <= 0xB);
    if (rp5 == 0xC) {
        rp6 = 0;
    } else {
        for (var_r2 = 0; var_r2 < rp6; var_r2 += 1) {
            base = (u8 *) (arg0 + 0x4629);
            temp_r1 = base + var_r2;
            if (*temp_r1 == 0x5F) {
                *temp_r1 = 0x20;
            }
        }
    }
    endp = (u8 *) (arg0 + 0x4629);
    endp[rp6] = 0;
    return (u32) ((0 - rp6) | rp6) >> 0x1F;
}


// DECOMP-MATCHED func_08006858 (dari new_game.s; cek manusia sebelum ke src/)
s32 func_08008920(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[0x4608];
    s32 unk4608;
    u16 unk460C;
    u8 _pad460E[6];
    s32 unk4614;
    u16 unk4618;
    u8 _pad461A[34];
    s32 unk463C;
} GenObj;

typedef struct Entry {
    s32 unk0;
    u16 unk4;
} Entry;

void func_08006858(GenObj *arg0) {
    register u8 *p __asm__("r3");
    register Entry *e __asm__("r0");
    register s32 *s __asm__("r1");
    u32 i;
    s32 r;

    if (arg0->unk463C == 0) {
        r = func_08008920((s32)arg0);
        p = (u8 *)r;
        s = (s32 *)((u8 *)arg0 + 0x4608);
        i = *p;
        if (i <= 0x7FU) {
            e = (Entry *)(p + (i * 8 + 4));
            e->unk0 = *s;
            e->unk4 = arg0->unk460C;
            *p = i + 1;
        }
    }
    r = func_08008920((s32)arg0);
    p = (u8 *)r;
    s = (s32 *)((u8 *)arg0 + 0x4614);
    i = *p;
    if (i <= 0x7FU) {
        e = (Entry *)(p + (i * 8 + 4));
        e->unk0 = *s;
        e->unk4 = arg0->unk4618;
        *p = i + 1;
    }
}
