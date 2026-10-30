
// DECOMP-MATCHED func_08032900 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_08032900(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 2) {
        if (((u32) (arg1 + 0xFFFFFEF0) <= 0x2AFU) && (arg2 > 0xAF) && (arg2 <= 0x24F)) {
            return 1;
        }
        return 2;
    }
    return 0;
}

// DECOMP-MATCHED func_080324B8 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_080324B8(void) {
    return 0;
}

// DECOMP-MATCHED func_08033B7C (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
} GenObj;
void func_08033B7C(GenObj *arg0) {
    arg0->unk41 = 0;
}

/* ATTEMPT-NOTE opencode: member u8 (strb). */

// DECOMP-MATCHED func_08033914 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_08033914(s32 arg0) {
    u32 m = 0x18000;
    return ((m * (arg0 + 1)) >> 8) + 0x8000;
}

/* ATTEMPT-NOTE opencode: konstanta di u32 var agar muls (movs/lsl) bukan shift-add; u32 agar lsrs bukan asrs. */

// DECOMP-MATCHED func_08034248 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern s32 gUnk_080F1450;

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
} GenObj;
u16 func_08034248(GenObj *arg0, s32 arg1) {
    u8 *base = (u8 *)&gUnk_080F1450;
    s32 t = arg0->unk30;

    return *(u16 *)(base + ((t * 5 + arg1) * 2));
}

/* ATTEMPT-NOTE opencode: unk30 u8; base (u8*) di var agar ldr-pc dulu + byte-arith (lsl#1) bukan s32-scale (lsl#3). */

// DECOMP-MATCHED func_080338F0 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
u32 func_080AB788(s32);

s32 func_080338F0(s32 arg0) {
    return func_080AB788(0x200) < (u32)(arg0 + 0x100);
}

// DECOMP-MATCHED func_08034C64 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_080D7ECC(s32, s32, s32 *, s32, s32);       /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
} GenObj;

typedef struct {
    s32 (*unk0)(s32 arg0);
    s32 unk4;
    GenObj **unk8;
} UnkF29C0;

extern UnkF29C0 gUnk_080F29C0;

u32 func_08034C64(s32 arg0, u16 *arg1) {
    s32 sp4;
    s32 temp_r4;
    GenObj *temp_r5;
    s32 var_r2;
    u32 temp_r1_2;
    s32 temp_r0;
    GenObj *temp_r0_2;
    s32 temp_r1;

    temp_r5 = gUnk_080F29C0.unk8[gUnk_080F29C0.unk0(arg0)];
    if (temp_r5 != 0) {
        temp_r1_2 = *arg1;
        var_r2 = ((u32) (temp_r1_2 << 0x1B) >> 0x1B) - 6;
        if (var_r2 < 0) {
            var_r2 += 0x18;
        }
        sp4 = (var_r2 * 0x3C) + ((u32) (temp_r1_2 << 0x15) >> 0x1A);
        temp_r4 = (s32) temp_r5->unk4;
        temp_r0 = ((func_080D7ECC(temp_r4, temp_r4 + ((s32) temp_r5->unk0 * 8), &sp4, 0, 0) - temp_r4) >> 3) - 1;
        if (temp_r0 < (u32) temp_r5->unk0) {
            temp_r0_2 = ((GenObj *) ((s32) temp_r5->unk4 + (temp_r0 * 8)))->unk4;
            if (temp_r0_2 != 0) {
                temp_r1 = ((u32) (temp_r0_2->unkA << 0x16) >> 0x16) ^ 0x1D;
                return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            }
        }
        goto block_6;
    }
block_6:
    return 0U;
}

// DECOMP-MATCHED func_08034BFC (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_0805E860(void *, u16);                        /* extern */
extern u16 gUnk_080F14F0[];

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
} GenObj;
void func_08034BFC(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 v = gUnk_080F14F0[arg1];
    func_0805E860((u8 *)arg0 + 0xB4, v);
    arg0->unkC8 = 1;
    arg0->unkCA = 0;
    arg0->unkCB = 1;
    arg0->unkCC = arg2;
    arg0->unkCE = arg3;
    arg0->unkD0 = 0x3C;
}

// DECOMP-MATCHED func_08034A14 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 func_080324BC(void *, void *, s32, s32); /* extern */
s32 func_080A4A00(void *, s32, u16, void *); /* extern */
extern s32 gUnk_080F14B8[];
extern u16 gUnk_080F14F0[];
extern s32 vtable_unk_080E6904;

typedef struct Vtbl {
    u8 _pad0[0x68];
    s32 (*unk68)(void *arg0);
} Vtbl;

typedef struct Obj {
    Vtbl *unk0;
} Obj;

typedef struct Arg1 {
    Obj *unk0;
    u8 _pad4[0x2C];
    u8 unk30;
} Arg1;

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
} GenObj;

struct Stk {
    s32 a, b, c;
};

/* ATTEMPT-NOTE worker-34a1:fp ke registri eksplisit (r4=x, r5=p) agar alokasi
   cocok; volatile u8 + struct Stk membentuk store stack persis pola ref
   (str,str,str,add+strb); prototype 4-arg meniru idiom func_08035B38. */
void *func_08034A14(GenObj *arg0, Arg1 *arg1) {
    register Arg1 *x asm("r4") = arg1;
    s32 *b = gUnk_080F14B8;
    register u8 *p asm("r5") = &x->unk30;
    s32 v1 = b[*p];
    s32 zero;
    Obj *o;
    s32 temp;
    u16 *hbase;
    u8 idx2;
    u16 h;
    Obj *o2;
    s32 *v2p;
    void *dst;
    volatile u8 *bptr;
    struct Stk w;
    volatile u8 flag;
    zero = 0;
    w.a = zero; w.b = 4; w.c = zero; flag = zero;
    func_080324BC(arg0, arg1, 3, v1);
    arg0->unk4 = (GenObj *)&vtable_unk_080E6904;
    o = x->unk0;
    temp = o->unk0->unk68(o);
    hbase = gUnk_080F14F0;
    idx2 = *p;
    h = hbase[idx2];
    o2 = x->unk0;
    v2p = &b[idx2];
    dst = (u8 *)arg0 + 0x8C;
    w.a = 2; w.b = *v2p;
    bptr = (volatile u8 *)&w.c;
    *bptr = zero;
    func_080A4A00(dst, temp, h, o2);
    arg0->unkD0 = 0;
    return arg0;
}

// DECOMP-MATCHED func_08034940 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
s32 SetLocation__7AEntityUiii(void *, s32, s32, s32); /* extern */
s32 func_08034180(void *, s32, s32, s32);             /* extern */
s32 func_0809E994(s32, s32);                           /* extern */
s32 method_0809E7FC__13HarvestSprite(s32, s32 *);       /* extern */
s32 smethod_08009ADC__4Farm(s32 *);                     /* extern */
s32 smethod_08009AE8__4Farm(s32 *);                     /* extern */

typedef struct Ret08034940 {
    u8 _pad0[10];
    u16 unkA;
} Ret08034940;

typedef struct Vtbl08034940 {
    u8 _pad0[0x144];
    Ret08034940 *(*unk144)(void *arg0);
} Vtbl08034940;

typedef struct Obj08034940 {
    Vtbl08034940 *unk0;
} Obj08034940;

typedef struct XY08034940 {
    s16 x;
    s16 y;
} XY08034940;

typedef struct GenObj {
    Obj08034940 *unk0;   /* +0x00 */
    u16 unk4;            /* +0x04 */
    u8 _pad6[4];         /* +0x06 */
    s16 unkA;            /* +0x0A */
    u8 _padC[0x24];      /* +0x0C */
    u8 unk30;            /* +0x30 */
    u8 _pad31[3];        /* +0x31 */
    s32 unk34;           /* +0x34 */
    s32 unk38;           /* +0x38 */
} GenObj;

s32 func_08034940(GenObj *arg0) {
    XY08034940 a;
    XY08034940 b;
    s32 tmp;
    s32 y;
    Ret08034940 *r;
    u16 t;
    u32 lo;
    s32 v;

    r = arg0->unk0->unk0->unk144(arg0->unk0);
    t = r->unkA;
    lo = ((u32)t << 27) >> 27;
    if ((lo <= 5U) || (u32)(((lo - 6) * 0x3C) + (((u32)t << 21) >> 26)) >= (u32)(arg0->unk30 + 0x385)) {
        s32 x = arg0->unk4;
        if (x == 17) {
            goto L17;
        }
        if (x <= 17) {
            goto Lend;
        }
        if (x != 37) {
            goto Lend;
        }
        smethod_08009ADC__4Farm((s32 *)&a);
        SetLocation__7AEntityUiii(arg0, 2, a.x, a.y);
        goto Lend;
L17:
        smethod_08009AE8__4Farm((s32 *)&b);
        SetLocation__7AEntityUiii(arg0, 2, b.x, b.y);
Lend:
        func_0809E994(arg0->unk38, arg0->unk30);
        method_0809E7FC__13HarvestSprite(arg0->unk34, &tmp);
        y = arg0->unkA;
        if (y == 0x168) {
            v = 1;
        } else if (y <= 0x167) {
            v = 3;
        } else {
            v = 2;
        }
        func_08034180(arg0, 1, v, 0x8000);
        return 1;
    }
    return 0;
}
