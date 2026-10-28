
// DECOMP-MATCHED func_0803BEBC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BCF8(s32);                               /* extern */

void func_0803BEBC(s32 *arg0) {
    func_0803BCF8(*arg0);
}

// DECOMP-MATCHED func_0803BEC8 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BD60(s32);                               /* extern */

void func_0803BEC8(s32 *arg0) {
    func_0803BD60(*arg0);
}

// DECOMP-MATCHED func_0803BED4 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BD88(s32);                               /* extern */

void func_0803BED4(s32 *arg0) {
    func_0803BD88(*arg0);
}

// DECOMP-MATCHED func_0803BEE0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BDB8(s32);                               /* extern */

void func_0803BEE0(s32 *arg0) {
    func_0803BDB8(*arg0);
}

// DECOMP-MATCHED func_0803BEEC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s16 func_0803BEEC(s16 **arg0) {
    return **arg0;
}

// DECOMP-MATCHED func_0803BEFC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BDE4(s32);                               /* extern */

void func_0803BEFC(s32 *arg0) {
    func_0803BDE4(*arg0);
}

// DECOMP-MATCHED func_0803C7A0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 __builtin_delete(s32 *);                          /* extern */
s32 func_080E0D70(s32, s32);                          /* extern */

void func_0803C7A0(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_080E0D70(temp_r0, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

// DECOMP-MATCHED func_0803BE50 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 __builtin_delete(void *);                         /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
s32 func_080098DC(s32, s32);                          /* extern */
extern s32 vtable_unk_080E7778;

typedef struct GenObj {
    s32 unk0;
    void *unk4;
} GenObj;
void func_0803BE50(GenObj *arg0, s32 arg1) {
    void *temp_r4;

    arg0->unk4 = &vtable_unk_080E7778;
    temp_r4 = arg0->unk0;
    if (temp_r4 != 0) {
        func_080098AC(temp_r4 + 0x44, 2);
        func_080098AC(temp_r4 + 0x2C, 2);
        func_080098DC(temp_r4 + 0x10, 2);
        __builtin_delete(temp_r4);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

// DECOMP-MATCHED func_0803C540 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
} GenObj;
u8 func_0803C540(GenObj *arg0) {
    return arg0->unkC;
}

// DECOMP-MATCHED func_0803D7E4 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D688(s32, s32 *, s32);                     /* extern */
s32 func_080A0A04(s32);                             /* extern */
extern s32 ScheduleInfo_Unk_080F1A80;
extern s32 gUnk_080F1FC0;
extern s32 gUnk_080F280C;
extern s32 gUnk_080F29C0;
extern s32 gUnk_080F2AF8;
extern s32 gUnk_080F2DC0;
extern s32 gUnk_080F3010;
extern s32 gUnk_080F33B8;
extern s32 gUnk_080F3408;
extern s32 gUnk_080F35E4;
extern s32 gUnk_080F3FD8;
extern s32 gUnk_080F42F0;
extern s32 gUnk_080F43DC;
extern s32 gUnk_080F4974;
extern s32 gUnk_080F49C0;
extern s32 gUnk_080F4D74;
extern s32 gUnk_080F5540;
extern s32 gUnk_080F597C;
extern s32 gUnk_080F59CC;
extern s32 gUnk_080F5D94;
extern s32 gUnk_080F61FC;
extern s32 gUnk_080F6370;
extern s32 gUnk_080F66C4;
extern s32 gUnk_080F6B10;
extern s32 gUnk_080F6B4C;
extern s32 gUnk_080F6DE8;
extern s32 gUnk_080F6FF8;
extern s32 gUnk_080F7294;
extern s32 gUnk_080F77FC;
extern s32 gUnk_080F7B40;
extern s32 gUnk_080F81BC;
extern s32 gUnk_080F8678;

void func_0803D7E4(s32 arg0, s32 arg1) {
    s32 temp_r0;

    func_0803D688(arg0 + 0x70, &gUnk_080F280C, arg1);
    func_0803D688(arg0 + 0x84, &ScheduleInfo_Unk_080F1A80, arg1);
    func_0803D688(arg0 + 0x98, &gUnk_080F1FC0, arg1);
    func_0803D688(arg0 + 0xB0, &gUnk_080F8678, arg1);
    func_0803D688(arg0 + 0xC4, &gUnk_080F81BC, arg1);
    func_0803D688(arg0 + 0xD8, &gUnk_080F77FC, arg1);
    func_0803D688(arg0 + 0xF0, &gUnk_080F7294, arg1);
    func_0803D688(arg0 + 0x104, &gUnk_080F6370, arg1);
    func_0803D688(arg0 + 0x118, &gUnk_080F66C4, arg1);
    func_0803D688(arg0 + 0x12C, &gUnk_080F49C0, arg1);
    func_0803D688(arg0 + 0x140, &gUnk_080F5540, arg1);
    func_0803D688(arg0 + 0x154, &gUnk_080F4D74, arg1);
    func_0803D688(arg0 + 0x16C, &gUnk_080F59CC, arg1);
    func_0803D688(arg0 + 0x180, &gUnk_080F6B4C, arg1);
    func_0803D688(arg0 + 0x194, &gUnk_080F33B8, arg1);
    func_0803D688(arg0 + 0x1A8, &gUnk_080F61FC, arg1);
    func_0803D688(arg0 + 0x1BC, &gUnk_080F3408, arg1);
    func_0803D688(arg0 + 0x1D0, &gUnk_080F3FD8, arg1);
    func_0803D688(arg0 + 0x1E4, &gUnk_080F35E4, arg1);
    func_0803D688(arg0 + 0x1FC, &gUnk_080F3010, arg1);
    func_0803D688(arg0 + 0x210, &gUnk_080F5D94, arg1);
    func_0803D688(arg0 + 0x228, &gUnk_080F6DE8, arg1);
    func_0803D688(arg0 + 0x23C, &gUnk_080F2AF8, arg1);
    func_0803D688(arg0 + 0x250, &gUnk_080F42F0, arg1);
    func_0803D688(arg0 + 0x264, &gUnk_080F43DC, arg1);
    func_0803D688(arg0 + 0x27C, &gUnk_080F6FF8, arg1);
    func_0803D688(arg0 + 0x290, &gUnk_080F7B40, arg1);
    func_0803D688(arg0 + 0x2A8, &gUnk_080F2DC0, arg1);
    func_0803D688(arg0 + 0x2BC, &gUnk_080F597C, arg1);
    func_0803D688(arg0 + 0x310, &gUnk_080F6B10, arg1);
    func_0803D688(arg0 + 0x328, &gUnk_080F4974, arg1);
    temp_r0 = func_080A0A04(arg0);
    if (temp_r0 != 0) {
        func_0803D688(temp_r0, &gUnk_080F29C0, arg1);
    }
}

// DECOMP-MATCHED func_0803BF08 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BDEC(s32);                               /* extern */

void func_0803BF08(s32 *arg0) {
    func_0803BDEC(*arg0);
}

// DECOMP-MATCHED func_0803D404 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
void func_0803D404(void **arg0, s32 arg1) {
    void *temp_r2;
    s32 off1 = 0x2F1;
    s32 off2 = 0x2F2;

    temp_r2 = *arg0;
    if ((*(u8 *)((u8 *)temp_r2 + off1) == 0) || (arg1 != *(u16 *)((u8 *)temp_r2 + off2))) {
        *(u8 *)((u8 *)temp_r2 + off1) = 1;
        *(u16 *)((u8 *)temp_r2 + 0x2F2) = arg1;
        *((u8 *)temp_r2 + (0xCD << 2)) = 1;
    }
}

/* ATTEMPT-NOTE opencode: off2 literal di store agar ldr-pool 2x (reuse var hanya 1x load); arg1 s32 (tanpa zero-extend). */

// DECOMP-MATCHED func_0803D340 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 memcpy(void *, void *, s32);                      /* extern */
s32 __udivsi3(s32, s32);                             /* extern */
s32 __umodsi3(s32, s32);                             /* extern */
extern s32 gUnk_0875A440;

void func_0803D340(void **arg0, u32 arg1) {
    void *temp_r7;
    s32 q;
    s32 r;
    u8 *base;
    u8 *dst2;

    temp_r7 = *arg0;
    q = __udivsi3(arg1, 10);
    r = __umodsi3(arg1, 10);
    q <<= 5;
    base = (u8 *)&gUnk_0875A440;
    q += (s32)base;
    memcpy((u8 *)temp_r7 + (0x92 << 2), (void *)q, 0x20);
    dst2 = (u8 *)temp_r7 + (0xAC << 2);
    *dst2 = 1;
    r <<= 5;
    r += (s32)base;
    memcpy((u8 *)temp_r7 + (0x9A << 2), (void *)r, 0x20);
    *dst2 = 1;
}

/* ATTEMPT-NOTE opencode: strb di tengah via dst2-var (2x); base live lintas call -> r8? */

// DECOMP-MATCHED func_0803BE9C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[11];
    u8 unkB;
    u8 unkC;
} GenObj;
s32 func_0803BE9C(GenObj **arg0) {
    GenObj *t = *arg0;
    s32 hi = t->unkB >> 7;
    s32 c = t->unkC;
    s32 mask = 0x7F;
    s32 lo = (c & mask) * 2;

    return (lo | hi);
}

/* ATTEMPT-NOTE opencode: unkB-unkC u8 + hi-var; sisa alokasi hi r1 vs ref r2. */

// DECOMP-MATCHED func_0803C518 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BEBC();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[13];
    u8 unkD;
    u8 _padE;
    u8 unkF;
} GenObj;
void func_0803C518(GenObj *arg0) {
    func_0803BEBC();
    arg0->unkD = 1;
    arg0->unkF = 1;
}

// DECOMP-MATCHED func_0803C52C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BEC8();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[13];
    u8 unkD;
    u8 _padE;
    u8 unkF;
} GenObj;
void func_0803C52C(GenObj *arg0) {
    func_0803BEC8();
    arg0->unkD = 1;
    arg0->unkF = 1;
}

// DECOMP-MATCHED func_0803B6FC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
extern s32 vtable_unk_080E7748;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
GenObj *func_0803B6FC(GenObj *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r4;

    arg0->unk0 = &vtable_unk_080E7748;
    temp_r4 = *arg1;
    *arg1 = 0;
    arg0->unk4 = temp_r4;
    arg0->unk8 = arg2;
    return arg0;
}

// DECOMP-MATCHED func_0803C544 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[15];
    u8 unkF;
} GenObj;
void func_0803C544(GenObj *arg0) {
    arg0->unkF = 0;
}

// DECOMP-MATCHED func_0803BEB0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BAAC(s32);

s32 func_0803BEB0(s32 *arg0) {
    return func_0803BAAC(*arg0);
}

// DECOMP-MATCHED func_0803BDE4 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u16 unk0;
    u16 unk2;
} GenObj;
void func_0803BDE4(GenObj *arg0, s16 arg1, s16 arg2) {
    arg0->unk0 = arg1;
    arg0->unk2 = arg2;
}

// DECOMP-MATCHED func_0803BDEC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u16 unk0;
    u16 unk2;
} GenObj;
void func_0803BDEC(GenObj *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = (u16) (arg0->unk0 + arg1);
    arg0->unk2 = (u16) (arg0->unk2 + arg2);
}

// DECOMP-MATCHED func_0803B6B8 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 memcpy(s32 *, s32, u32);                            /* extern */
s32 strcpy(s32, s32 *);                                 /* extern */
u32 strlen(s32);                                    /* extern */

void func_0803B6B8(s32 arg0, s32 arg1, s32 arg2) {
u8 sp0[0x18];
    u32 var_r4;

    var_r4 = strlen(arg2);
    if (var_r4 > 0x16U) {
        var_r4 = 0x16;
    }
    memcpy(&sp0, arg2, var_r4);
    sp0[var_r4] = 0;
    strcpy((arg1 * 0x18) + arg0 + 8, &sp0);
}

// DECOMP-MATCHED func_0803B474 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    u16 unk10;
    u8 _pad12[2];
    s32 unk14;
    s32 unk18;
} GenObj;
void func_0803B474(GenObj *arg0, s32 arg1, s32 arg2) {
    u32 m;
    s32 r;
    arg0->unk14 = (s32) ((arg1 + (rand() % 240)) << 0x10);
    arg0->unk18 = (s32) ((arg2 + (rand() % 160)) << 0x10);
    r = rand();
    m = 0x90;
    arg0->unk10 = (s16) ((r & m) + 0x60);
}

// DECOMP-MATCHED func_0803D644 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
u8 *func_080E0E80(s32 *, void *, u32 *, s32, s32);    /* extern */
extern s32 gUnk_080F1A66;

s32 func_0803D644(s32 arg0, s32 arg1) {
    u32 sp4;
    s32 var_r2;
    u8 *temp_r0;
    u8 *temp_r4;
    s32 t;
    s32 *p;

    t = (((arg0 << 4) - arg0) << 1) - 1;
    sp4 = t + arg1;
    p = &gUnk_080F1A66;
    temp_r4 = (u8 *)p + 0xE;
    temp_r0 = func_080E0E80(p, temp_r4, &sp4, 0, 0);
    var_r2 = 0;
    if ((temp_r0 != temp_r4) && (sp4 >= (u32) *temp_r0)) {
        var_r2 = 1;
    }
    return var_r2;
}

// DECOMP-MATCHED func_0803EE50 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                              /* extern */

s32 func_0803EE50(u8 *arg0) {
    u8 sp0[4];
    u8 *bp = sp0;
    u8 a1, a2;

    func_0803D52C((s32 *)sp0, (s32)(arg0 + 0x10));
    a1 = bp[1];
    a2 = bp[2];
    bp = (u8 *)bp[3];
    if ((func_0803D644(a1, a2) << 0x18) != 0) {
        return 4;
    }
    if ((u32)bp == 1) {
        if (*(s32 *)(arg0 + 8) == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}

// DECOMP-MATCHED func_0803EDCC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[0x215A - 0xC];
    u8 unk215A;
    u8 _pad215B[0x21A2 - 0x215B];
    u8 unk21A2;
} GenObj;
typedef struct {
    u8 pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;

s32 func_0803EDCC(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    u8 v3;

    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 5;
    }
    if ((v1 == 2) && (v2 == 0x1E) && ((((u32)(arg0->unk21A2 << 0x1A)) >> 0x1E) != 2)) {
        return 6;
    }
    if (((s32)(arg0->unk215A << 0x1C)) < 0) {
        return 0;
    }
    if (arg0->unk8 == 0) {
        if (v3 == 1) {
            return 1;
        }
        if (v3 == 3) {
            return 2;
        }
        return 3;
    } else {
        return 4;
    }
}

// DECOMP-MATCHED func_0803C588 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BE50(void *, s32);                       /* extern */
s32 func_0803C7A0(void *, s32);                       /* extern */
extern s32 vtable_unk_080E77E0;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_0803C588(GenObj *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E77E0;
    func_0803C7A0((u8 *)arg0 + 8, 2);
    func_0803BE50(arg0, arg1);
}

// DECOMP-MATCHED func_0803DA24 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                              /* extern */

s32 func_0803DA24(u8 *arg0) {
    u8 sp0[4];
    u8 *bp;
    u8 a1, a2;

    if ((arg0[0x21CA] & 0xC) != 0) {
        return 0;
    }
    bp = sp0;
    func_0803D52C((s32 *)sp0, (s32)(arg0 + 0x10));
    a1 = bp[1];
    a2 = bp[2];
    bp = (u8 *)bp[3];
    if ((func_0803D644(a1, a2) << 0x18) != 0) {
        return 4;
    }
    if (*(s32 *)(arg0 + 8) == 0) {
        if ((u32)bp == 2) {
            return 3;
        }
        return 1;
    }
    return 2;
}
