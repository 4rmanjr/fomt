
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
typedef struct GenObj__func_0803BDE4 {
    u16 unk0;
    u16 unk2;
} GenObj__func_0803BDE4;
void func_0803BDE4(GenObj__func_0803BDE4 *arg0, s32 arg1, s32 arg2);  /* extern */

void func_0803BEFC(GenObj__func_0803BDE4 **arg0, s32 arg1, s32 arg2) {
    func_0803BDE4(*arg0, arg1, arg2);
}

// DECOMP-MATCHED func_0803C7A0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 __builtin_delete(void *);                          /* extern */
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
typedef struct GenObj__func_0803BDEC {
    u16 unk0;
    u16 unk2;
} GenObj__func_0803BDEC;
void func_0803BDEC(GenObj__func_0803BDEC *arg0, s32 arg1, s32 arg2);  /* extern */

void func_0803BF08(GenObj__func_0803BDEC **arg0, s32 arg1, s32 arg2) {
    func_0803BDEC(*arg0, arg1, arg2);
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
void func_0803BEBC(s32 *arg0);                            /* extern */

typedef struct GenObj__func_0803C518 {
    u8 _pad0[13];
    u8 unkD;
    u8 _padE;
    u8 unkF;
} GenObj__func_0803C518;
void func_0803C518(GenObj__func_0803C518 *arg0) {
    func_0803BEBC((s32 *)arg0);
    arg0->unkD = 1;
    arg0->unkF = 1;
}

// DECOMP-MATCHED func_0803C52C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
void func_0803BEC8(s32 *arg0);                            /* extern */

typedef struct GenObj__func_0803C52C {
    u8 _pad0[13];
    u8 unkD;
    u8 _padE;
    u8 unkF;
} GenObj__func_0803C52C;
void func_0803C52C(GenObj__func_0803C52C *arg0) {
    func_0803BEC8((s32 *)arg0);
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
void func_0803BDE4(GenObj *arg0, s32 arg1, s32 arg2) {
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
void func_0803BE50(struct GenObj__func_0803BE50 *arg0, s32 arg1);  /* extern */
void func_0803C7A0(s32 *arg0, s32 arg1);                      /* extern */
extern s32 vtable_unk_080E77E0;

typedef struct GenObj__func_0803C588 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0803C588;
void func_0803C588(GenObj__func_0803C588 *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E77E0;
    func_0803C7A0((s32 *)((u8 *)arg0 + 8), 2);
    func_0803BE50((struct GenObj__func_0803BE50 *)arg0, arg1);
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

// DECOMP-MATCHED func_0803ECC0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                              /* extern */
u32 func_0809EB68(void *);                              /* extern */
s32 func_0809EB70(void *);                              /* extern */
u32 func_0809EB8C(void *);                              /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);                  /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
typedef struct {
    u8 pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;

s32 func_0803ECC0(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    s32 v3;
    s32 v8;
    void *p4;
    u32 t;

    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 5;
    }
    v8 = arg0->unk8;
    p4 = (u8 *)arg0 + 0x1F64;
    if ((func_0809EB68(p4) != 0) && ((func_0809EB70(p4) << 0x18) == 0) && ((func_0809EB8C(p4) << 0x18) == 0) && ((u32)(v8 - 3) > 1u)) {
        t = func_0809EB68(p4);
        switch (t) {
        case 1:
            switch ((u32)GetUpgradeLevel__C9FarmHouse((s32)((u8 *)arg0 + (0xFA << 1)))) {
            case 0:
                return 6;
            case 1:
                return 7;
            case 2:
                return 0xD;
            default:
                break;
            }
            break;
        case 2:
            return 8;
        case 3:
            return 9;
        case 4:
            return 0xE;
        case 5:
        case 6:
        case 7:
            return 0xA;
        case 8:
        case 9:
        case 10:
            return 0xB;
        case 11:
        case 12:
        case 13:
            return 0xC;
        case 0:
        default:
            break;
        }
    }
    switch (v3) {
    default:
        return 1;
    case 4:
    case 5:
        return 2;
    case 6:
        return 3;
    case 0:
        return 4;
    }
}

// DECOMP-MATCHED func_0803C54C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BDFC(void *, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_0803C5B0(void *);                            /* extern */
extern s32 vtable_unk_080E77E0;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void *func_0803C54C(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0803BDFC(arg0, 0x80, 0x88, 0x70, 0x18, arg1, arg2, arg3, arg4);
    arg0->unk4 = &vtable_unk_080E77E0;
    func_0803C5B0((u8 *)arg0 + 8);
    return arg0;
}

// DECOMP-MATCHED func_0803EC44 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                        /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_0809ECD8(void *);                          /* extern */
s32 func_0809ECE0(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
typedef struct {
    u8 pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;

s32 func_0803EC44(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    u8 v3;
    void *p4;

    if ((s32)(((u8 *)arg0)[0x21CA] << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 4;
    }
    p4 = (void *)((u8 *)arg0 + 0x1DAC);
    if ((func_0809ECD8(p4) != 0) && ((func_0809ECE0(p4) << 0x18) == 0)) {
        return 5;
    }
    if (v3 == 4) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}

// DECOMP-MATCHED func_0803EB9C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                        /* extern */
s32 func_0803D644(s32, s32);                        /* extern */
u32 GetRivalEventCount__C12Bachelorette(s32);       /* extern */

typedef struct GenObj__func_0803EB9C {
    u8 _pad0[8];
    s32 unk8;
} GenObj__func_0803EB9C;
typedef struct {
    u8 pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;

s32 func_0803EB9C(GenObj__func_0803EB9C *arg0) {
    Buf4 sp0;
    register u32 v1 asm("r6");
    u8 v2;
    u8 v3;
    u32 t;

    if ((s32)(((u8 *)arg0)[0x21CA] << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    t = GetRivalEventCount__C12Bachelorette((s32)((u8 *)arg0 + 0x1E28));
    if (t > 4U) {
        if ((func_0803D644(v1, v2) << 0x18) != 0) {
            return 9;
        }
        if (v3 == 4) {
            if (arg0->unk8 == 0) {
                return 6;
            }
            return 7;
        }
        return 5;
    }
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 8;
    }
    if (t != 0) {
        if (v3 == 1) {
            return 3;
        }
        if (v3 == 4) {
            return 4;
        }
        return 2;
    } else {
        return 1;
    }
}

// DECOMP-MATCHED func_0803EB40 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(s32, s32);                            /* extern */

s32 func_0803EB40(u8 *arg0) {
    u8 sp0[4];
    u8 *bp;
    u8 a1;
    u8 a2;

    if (((s32)(arg0[0x21CA] << 0x1C)) >= 0) {
        bp = sp0;
        func_0803D52C((s32 *)sp0, (s32)(arg0 + 0x10));
        a1 = bp[1];
        a2 = bp[2];
        bp = (u8 *)bp[3];
        if (a1 == 1) {
            if ((func_0803D644(1, a2) << 0x18) != 0) {
                return 4;
            }
            if ((u32)bp == 0) {
                if (*(s32 *)(arg0 + 8) == 0) {
                    return 2;
                }
                return 3;
            }
            return 1;
        }
    }
    return 0;
}

// DECOMP-MATCHED func_0803EADC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(s32, s32);                            /* extern */

s32 func_0803EADC(u8 *arg0) {
    u8 sp0[4];
    u8 *bp;
    u8 a1;
    u8 a2;

    if ((arg0[0x21CA] & 0x7C) != 0) {
        return 0;
    }
    bp = sp0;
    func_0803D52C((s32 *)sp0, (s32)(arg0 + 0x10));
    a1 = bp[1];
    a2 = bp[2];
    bp = (u8 *)bp[3];
    if ((a1 == 2) && (a2 == 3)) {
        return 9;
    }
    if ((func_0803D644(a1, a2) << 0x18) != 0) {
        return 8;
    }
    if (((u32)bp == 1) || ((u32)bp == 3) || (*(s32 *)(arg0 + 8) != 0)) {
        return 1;
    }
    return 2;
}

// DECOMP-MATCHED func_0803BEF4 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct Inner3BEF4 { u8 _pad0[2]; s16 unk2; } Inner3BEF4;
s16 func_0803BEF4(Inner3BEF4 **arg0) {
    return (*arg0)->unk2;
}

// DECOMP-MATCHED func_0803BFC8 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BE50(void *, s32);                       /* extern */
s32 func_080E0C38(s32, s32);                          /* extern */
extern s32 vtable_unk_080E77A4;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
} GenObj;
void func_0803BFC8(GenObj *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk4 = &vtable_unk_080E77A4;
    temp_r0 = arg0->unk8;
    if (temp_r0 != 0) {
        func_080E0C38(temp_r0, 3);
    }
    func_0803BE50(arg0, arg1);
}

// DECOMP-MATCHED func_0803DECC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

s32 func_0803DECC(s32 arg0) {
    struct { u8 _pad0; u8 unk1; u8 unk2; u8 _pad3; } sp0;

    func_0803D52C((s32 *)&sp0, arg0 + 0x10);
    if ((func_0803D644(sp0.unk1, sp0.unk2) << 0x18) != 0) {
        return 2;
    }
    return 1;
}

// DECOMP-MATCHED func_0803B4B0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
extern s32 vtable_unk_080E76E8;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_0803B4B0(GenObj *arg0, s32 arg1) {
    s32 var_r1;
    s8 *var_r0;

    arg0->unk0 = &vtable_unk_080E76E8;
    arg0->unk4 = arg1;
    var_r0 = (s8 *)arg0 + 8;
    var_r1 = 3;
    do {
        *var_r0 = 0;
        var_r0 += 0x18;
        var_r1 -= 1;
    } while (var_r1 != -1);
    return arg0;
}

// DECOMP-MATCHED func_0803D440 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[753];
    u8 unk2F1;
    u8 _pad2F2[66];
    u8 unk334;
} GenObj;
void func_0803D440(void **arg0) {
    GenObj *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1->unk2F1 != 0) {
        temp_r1->unk2F1 = 0U;
        temp_r1->unk334 = 1;
    }
}

// DECOMP-MATCHED func_0803D3A0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[716];
    u8 unk2CC;
    u8 _pad2CD[35];
    u8 unk2F0;
} GenObj;
void func_0803D3A0(void **arg0, u32 arg1) {
    u8 var_r0;
    GenObj *temp_r2;

    temp_r2 = *arg0;
    var_r0 = temp_r2->unk2CC;
    switch (arg1) {
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    case 3:
        var_r0 = 3;
        break;
    case 4:
        var_r0 = 4;
        break;
    }
    if (var_r0 != temp_r2->unk2CC) {
        temp_r2->unk2CC = var_r0;
        temp_r2->unk2F0 = 1;
    }
}

// DECOMP-MATCHED func_0803E40C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct SP0803E40C {
    u8 _pad0[3];
    u8 unk3;
} SP0803E40C;
typedef struct GenObj {
    u8 _pad0[0x2187];
    u8 unk2187;
} GenObj;
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803E40C(GenObj *arg0) {
SP0803E40C sp0;
SP0803E40C *p_sp;
u32 c1;
u8 c2;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    c2 = *(u8 *)((u8 *)p_sp + 3);
    c1 = ((u32) (arg0->unk2187 << 0x1B) >> 0x1E);
    if (c1 == 2 && c2 == 0) {
        return 1;
    }
    return 0;
}

// DECOMP-MATCHED func_0803EA5C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
typedef struct SP0803EA5C {
    u8 _pad0[3];
    u8 unk3;
} SP0803EA5C;
typedef struct GenObj {
    u8 _pad0[0x2186];
    u8 unk2186;
} GenObj;
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803EA5C(GenObj *arg0) {
SP0803EA5C sp0;
SP0803EA5C *p_sp;
u32 c1;
u8 c2;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    c2 = *(u8 *)((u8 *)p_sp + 3);
    c1 = ((u32) (arg0->unk2186 << 0x19) >> 0x1E);
    if (c1 == 2 && c2 == 3) {
        return 1;
    }
    return 0;
}

// DECOMP-MATCHED func_0803DEF8 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803DEF8 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803DEF8;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8638];
    u8 unk21CA;
} GenObj;
s32 func_0803DEF8(GenObj *arg0) {
SP0803DEF8 sp0;
SP0803DEF8 *p_sp;
u8 t1;
u8 t2;
u8 t3;
    if ((s32) (arg0->unk21CA << 0x1A) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 4;
    }
    if (t3 == 3) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}

// DECOMP-MATCHED func_0803E1A4 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E1A4 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E1A4;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8638];
    u8 unk21CA;
} GenObj;
s32 func_0803E1A4(GenObj *arg0) {
SP0803E1A4 sp0;
SP0803E1A4 *p_sp;
u8 t1;
u8 t2;
u8 t3;
    if ((s32) (arg0->unk21CA << 0x1D) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 4;
    }
    if (arg0->unk8 == 0) {
        if (t3 == 2) {
            return 3;
        }
        return 1;
    }
    return 2;
}

// DECOMP-MATCHED func_0803E448 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E448 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E448;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8638];
    u8 unk21CA;
} GenObj;
s32 func_0803E448(GenObj *arg0) {
SP0803E448 sp0;
SP0803E448 *p_sp;
u8 t1;
u8 t2;
u8 t3;
    if ((s32) (arg0->unk21CA << 0x1B) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 4;
    }
    if (t3 == 1) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}

// DECOMP-MATCHED func_0803E620 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E620 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E620;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8638];
    u8 unk21CA;
} GenObj;
s32 func_0803E620(GenObj *arg0) {
SP0803E620 sp0;
SP0803E620 *p_sp;
u8 t1;
u8 t2;
u8 t3;
    if ((s32) (arg0->unk21CA << 0x1B) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 5;
    }
    if (t3 == 1) {
        if (arg0->unk8 == 0) {
            return 3;
        }
        return 4;
    }
    if (arg0->unk8 == 0) {
        return 1;
    }
    return 2;
}

// DECOMP-MATCHED func_0803E970 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E970 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E970;
typedef struct GenObj {
    u8 _pad0[0x2174];
    s32 unk2174;
    u8 _pad2178[82];
    u8 unk21CA;
} GenObj;
s32 func_0803E970(GenObj *arg0) {
SP0803E970 sp0;
SP0803E970 *p_sp;
u8 t1;
u8 t2;
u8 t3;
u8 t6;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    t6 = t3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 5;
    }
    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    if ((arg0->unk2174 & 0x61000) == 0x41000) {
        if (t3 == 6) {
            return 4;
        }
        return 3;
    }
    if (t6 == 6) {
        return 2;
    }
    return 1;
}

// DECOMP-MATCHED func_0803E9E4 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E9E4 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E9E4;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8552];
    s32 unk2174;
    u8 _pad2178[82];
    u8 unk21CA;
} GenObj;
s32 func_0803E9E4(GenObj *arg0) {
SP0803E9E4 sp0;
SP0803E9E4 *p_sp;
u8 t1;
u8 t2;
u8 t6;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t6 = p_sp->unk3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 5;
    }
    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    if (arg0->unk8 == 0) {
        if (t6 == 6) {
            if ((arg0->unk2174 & 0x61000) == 0x41000) {
                return 4;
            }
            return 3;
        }
        return 1;
    }
    return 2;
}

// DECOMP-MATCHED func_0803E6EC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E6EC {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E6EC;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8556];
    s32 unk2178;
} GenObj;
s32 func_0803E6EC(GenObj *arg0) {
SP0803E6EC sp0;
SP0803E6EC *p_sp;
u8 t1;
u8 t2;
u8 t3;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((t1 == 3) && (t2 == 2) && ((arg0->unk2178 & 0x43000) == 0x2000)) {
        if (((u32) (((u8 *)&arg0->unk2178)[2] << 0x1B) >> 0x1E) != 2) {
            return 7;
        }
        return 0;
    }
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 6;
    }
    if (t3 == 6) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    } else if (t3 == 0) {
        if (arg0->unk8 == 0) {
            return 4;
        }
        return 5;
    }
    return 1;
}

// DECOMP-MATCHED func_0803DF50 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803DF50 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 _pad3;
} SP0803DF50;
typedef struct GenObj {
    u8 _pad0[8650];
    u8 unk21CA;
} GenObj;
s32 func_0803DF50(GenObj *arg0) {
SP0803DF50 sp0;
SP0803DF50 *p_sp;
    if ((s32) (arg0->unk21CA << 0x1A) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    if ((func_0803D644(p_sp->unk1, p_sp->unk2) << 0x18) != 0) {
        return 2;
    }
    return 1;
}

// DECOMP-MATCHED func_0803DF94 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803DF94 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803DF94;
typedef struct GenObj {
    u8 _pad0[8650];
    u8 unk21CA;
} GenObj;
s32 func_0803DF94(GenObj *arg0) {
SP0803DF94 sp0;
SP0803DF94 *p_sp;
u8 t1;
u8 t2;
u8 t3;
    if ((s32) (arg0->unk21CA << 0x1D) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 4;
    }
    if (t3 == 2) {
        return 2;
    } else if (t3 == 0) {
        return 3;
    }
    return 1;
}

// DECOMP-MATCHED func_0803E1FC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_080A0490(void *);                          /* extern */

typedef struct SP0803E1FC {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 _pad3;
} SP0803E1FC;
typedef struct GenObj {
    u8 _pad0[8650];
    u8 unk21CA;
} GenObj;
s32 func_0803E1FC(GenObj *arg0) {
SP0803E1FC sp0;
SP0803E1FC *p_sp;
s32 temp_r0;
u8 t1;
u8 t2;
    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 2;
    }
    temp_r0 = func_080A0490((void *)((u8 *)arg0 + 0x1CD4));
    if ((t1 == 2) && (t2 == 5) && (temp_r0 != 0x19)) {
        return 3;
    }
    return 1;
}

// DECOMP-MATCHED func_0803EA98 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803EA98 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 _pad3;
} SP0803EA98;
typedef struct GenObj {
    u8 _pad0[8650];
    u8 unk21CA;
} GenObj;
s32 func_0803EA98(GenObj *arg0) {
SP0803EA98 sp0;
SP0803EA98 *p_sp;
    if ((s32) (arg0->unk21CA << 0x1A) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    if ((func_0803D644(p_sp->unk1, p_sp->unk2) << 0x18) != 0) {
        return 2;
    }
    return 1;
}

// DECOMP-MATCHED func_0803BF78 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                               /* extern */
s32 func_0803BDFC(void *, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_080E0A94();                                /* extern */
extern s32 vtable_unk_080E77A4;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
} GenObj;
void *func_0803BF78(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_0803BDFC(arg0, 0, 0x88, 0xF0, 0x18, arg1, arg2, arg3, arg4);
    arg0->unk4 = &vtable_unk_080E77A4;
    __builtin_new(0x41C);
    arg0->unk8 = func_080E0A94();
    arg0->unkC = (u8) arg5;
    arg0->unkD = 0;
    arg0->unkE = 1;
    arg0->unkF = 1;
    return arg0;
}

// DECOMP-MATCHED func_0803BD60 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803BCF8(s32);                                  /* extern */

typedef struct GenObj__func_0803BD60 {
    u8 _pad0[11];
    u8 unkB;
    u8 unkC;
    u8 unkD;
} GenObj__func_0803BD60;
void func_0803BD60(GenObj__func_0803BD60 *arg0) {
register s32 neg __asm__("r0");
u8 b;
u8 c;
    func_0803BCF8((s32)arg0);
    b = arg0->unkB;
    arg0->unkB = (u8) (b | 0x80);
    c = arg0->unkC;
    neg = -0x80;
    __asm__ volatile ("" : "+r" (neg));
    neg &= c;
    neg |= 1;
    arg0->unkC = (u8) neg;
    arg0->unkD = 9;
}

// DECOMP-MATCHED func_0803C00C (dari code_0803A8A4.s; cek manusia sebelum ke src/)
void func_0803C028(s32, s32, s32, s32, s32, s32, s32); /* extern */

s32 func_0803C00C(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    func_0803C028(a0, a1, a2, a3, a4, a5, a6);
}

// DECOMP-MATCHED func_0803D2E8 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 memcpy(void *, void *, s32);                      /* extern */
s32 memset(void *, s32, s32);                          /* extern */
extern s32 gUnk_0875A440;

void func_0803D2E8(s32 *arg0, s32 arg1) {
u8 sp0[32];
s32 temp_r4;
s32 shifted;
s8 *var_r1;
u8 *gbase;

    shifted = arg1 << 0x18;
    temp_r4 = *arg0;
    if (shifted != 0) {
        u8 *src;
        gbase = (u8 *)&gUnk_0875A440;
        src = gbase + 0x140;
        memcpy((void *)(temp_r4 + 0x228), src, 0x20);
        var_r1 = (s8 *)(temp_r4 + 0x2B0);
    } else {
        memset(sp0, 0, 0x20);
        memcpy((void *)(temp_r4 + 0x228), sp0, 0x20);
        var_r1 = (s8 *)(temp_r4 + 0x2B0);
    }
    *var_r1 = 1;
}

// DECOMP-MATCHED func_0803E8E8 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(s32, s32);                        /* extern */

typedef struct SP0803E8E8 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E8E8;
typedef struct GenObjE8E8 {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8526];
    u8 unk215A;
    u8 _pad215B[71];
    u8 unk21A2;
    u8 _pad21A3[39];
    u8 unk21CA;
} GenObjE8E8;
s32 func_0803E8E8(GenObjE8E8 *arg0) {
    SP0803E8E8 sp0;
    SP0803E8E8 *p_sp;
    register GenObjE8E8 *r5 __asm__("r5") = arg0;
    register u32 t1 __asm__("r2");
    register u32 t2 __asm__("r1");
    register u32 t6 __asm__("r4");
    register u32 off21A2 __asm__("r3");
    if ((s32) (r5->unk21CA << 0x1A) < 0) goto ret0;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)r5 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t6 = p_sp->unk3;
    if ((t1 == 2) && (t2 == 0x1E)) {
        register u32 addr __asm__("r0");
        off21A2 = 0x21A2;
        __asm__ volatile("" : "+r"(off21A2));
        addr = (u32)r5 + off21A2;
        if (((*(u8 *)addr) >> 6) != 2) {
            return 5;
        }
    }
    if ((((s32 (*)(u8))func_0803D644)((u8)t1) << 0x18) != 0) {
        return 4;
    }
    if ((s32) (r5->unk215A << 0x1C) >= 0) goto chk_t6;
ret0:
    return 0;
chk_t6:
    if ((t6 == 1) || (t6 == 3)) {
        return 3;
    }
    if (r5->unk8 == 0) {
        return 1;
    }
    return 2;
}
