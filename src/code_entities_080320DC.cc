#include "prelude.h"

// === MIGRATED TYPES (auto-managed by migrate.py) ===
/* GENOBJ-UNIFIED (i-spelling): sama dgn blok promoted func_08034940 dkk
   setelah translate_types s->i; definisi penuh view-34940 di-seed agar
   src tetap kompilasi sebelum migrasi. */
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
    i16 x;
    i16 y;
} XY08034940;
typedef struct GenObj {
    union {
        Obj08034940 *unk0o;  /* +0x00: view func_08034940 */
        u16 unk0;            /* +0x00: view fungsi lain */
    } u0;
    union {
        u16 unk4s;           /* +0x04: view func_08034940 */
        struct GenObj *unk4; /* +0x04: view fungsi lain */
    } u4;
    u8 _pad8[2];             /* +0x08 */
    union {
        i16 unkAs;           /* +0x0A: view func_08034940 (ldrsh) */
        u16 unkA;            /* +0x0A: view fungsi lain (ldrh) */
    } __attribute__((packed)) uA;
    u8 _padC[0x24];          /* +0x0C */
    u8 unk30;                /* +0x30 */
    u8 _pad31[3];            /* +0x31 */
    i32 unk34;               /* +0x34 */
    i32 unk38;               /* +0x38 */
    u8 _pad3C[5];            /* +0x3C */
    u8 unk41;                /* +0x41 */
    u8 _pad42[0x86];         /* +0x42 */
    u8 unkC8;                /* +0xC8 */
    u8 _padC9;               /* +0xC9 */
    u8 unkCA;                /* +0xCA */
    u8 unkCB;                /* +0xCB */
    i16 unkCC;               /* +0xCC */
    i16 unkCE;               /* +0xCE */
    i16 unkD0;               /* +0xD0 */
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl {
    u8 _pad0[0x68];
    i32 (*unk68)(void *arg0);
} Vtbl;
typedef struct Obj {
    Vtbl *unk0;
} Obj;
typedef struct Arg1 {
    Obj *unk0;
    u8 _pad4[0x2C];
    u8 unk30;
} Arg1;
struct Stk {
    i32 a, b, c;
};
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct {
    i32 (*unk0)(i32 arg0);
    i32 unk4;
    GenObj **unk8;
} UnkF29C0;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_08034940 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern "C" {
i32 SetLocation__7AEntityUiii(void *, i32, i32, i32); /* extern */
i32 func_08034180(void *, i32, i32, i32);             /* extern */
i32 func_0809E994(i32, i32);                           /* extern */
i32 method_0809E7FC__13HarvestSprite(i32, i32 *);       /* extern */
i32 smethod_08009ADC__4Farm(i32 *);                     /* extern */
i32 smethod_08009AE8__4Farm(i32 *);                     /* extern */

/* GENOBJ-UNIFIED: gabungan view func_08034940 (u0.unk0o/u4.unk4s/unk34/unk38)
   + view fungsi lain (u0.unk0/u4.unk4/unk41/unkC8..unkD0); union bernama
   (agbcc menolak anonymous union); offset/size identik di semua view. */

i32 func_08034940(GenObj *arg0) {
    XY08034940 a;
    XY08034940 b;
    i32 tmp;
    i32 y;
    Ret08034940 *r;
    u16 t;
    u32 lo;
    i32 v;

    r = arg0->u0.unk0o->unk0->unk144(arg0->u0.unk0o);
    t = r->unkA;
    lo = ((u32)t << 27) >> 27;
    if ((lo <= 5U) || (u32)(((lo - 6) * 0x3C) + (((u32)t << 21) >> 26)) >= (u32)(arg0->unk30 + 0x385)) {
        i32 x = arg0->u4.unk4s;
        if (x == 17) {
            goto L17;
        }
        if (x <= 17) {
            goto Lend;
        }
        if (x != 37) {
            goto Lend;
        }
        smethod_08009ADC__4Farm((i32 *)&a);
        SetLocation__7AEntityUiii(arg0, 2, a.x, a.y);
        goto Lend;
L17:
        smethod_08009AE8__4Farm((i32 *)&b);
        SetLocation__7AEntityUiii(arg0, 2, b.x, b.y);
Lend:
        func_0809E994(arg0->unk38, arg0->unk30);
        method_0809E7FC__13HarvestSprite(arg0->unk34, &tmp);
        y = arg0->uA.unkAs;
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
}

// DECOMP-MATCHED func_08034A14 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080324BC(void *, void *, i32, i32); /* extern */
i32 func_080A4A00(void *, i32, u16, void *); /* extern */
extern i32 gUnk_080F14B8[];
extern u16 gUnk_080F14F0[];
extern i32 vtable_unk_080E6904;

/* ATTEMPT-NOTE worker-34a1:fp ke registri eksplisit (r4=x, r5=p) agar alokasi
   cocok; volatile u8 + struct Stk membentuk store stack persis pola ref
   (str,str,str,add+strb); prototype 4-arg meniru idiom func_08035B38. */
void *func_08034A14(GenObj *arg0, Arg1 *arg1) {
    register Arg1 *x asm("r4") = arg1;
    i32 *b = gUnk_080F14B8;
    register u8 *p asm("r5") = &x->unk30;
    i32 v1 = b[*p];
    i32 zero;
    Obj *o;
    i32 temp;
    u16 *hbase;
    u8 idx2;
    u16 h;
    Obj *o2;
    i32 *v2p;
    void *dst;
    volatile u8 *bptr;
    struct Stk w;
    volatile u8 flag;
    zero = 0;
    w.a = zero; w.b = 4; w.c = zero; flag = zero;
    func_080324BC(arg0, arg1, 3, v1);
    arg0->u4.unk4 = (GenObj *)&vtable_unk_080E6904;
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
}
// ekor tak-bermarker dari code_entities_080320DC.s (verbatim, jangan diubah)
asm(
".L08034AA0:\n"
"    .byte 0x10, 0xB5, 0x04, 0x1C, 0xFD, 0xF7, 0xB2, 0xFD, 0x20, 0x1C, 0xD0, 0x30, 0x00, 0x88, 0x00, 0x28\n"
"    .byte 0x16, 0xD0, 0x21, 0x1C, 0xCB, 0x31, 0x08, 0x78, 0x00, 0x28, 0x0A, 0xD1, 0x20, 0x1C, 0xB4, 0x30\n"
"    .byte 0x29, 0xF0, 0x16, 0xFF, 0x80, 0x07, 0x00, 0x28, 0x05, 0xDA, 0x21, 0x1C, 0xC8, 0x31, 0x01, 0x20\n"
"    .byte 0x00, 0xE0, 0x00, 0x20, 0x08, 0x70, 0x21, 0x1C, 0xD0, 0x31, 0x08, 0x88, 0x01, 0x38, 0x08, 0x80\n"
"    .byte 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0xF0, 0xB5, 0x57, 0x46, 0x4E, 0x46, 0x45, 0x46\n"
"    .byte 0xE0, 0xB4, 0x8F, 0xB0, 0x05, 0x1C, 0x0C, 0x1C, 0xFD, 0xF7, 0xCA, 0xFD, 0x28, 0x1C, 0xD0, 0x30\n"
"    .byte 0x00, 0x88, 0x00, 0x28, 0x71, 0xD0, 0x0D, 0xAB, 0x20, 0x68, 0xA1, 0x68, 0x0D, 0x90, 0x59, 0x60\n"
"    .byte 0x28, 0x1C, 0xCC, 0x30, 0x00, 0x22, 0x81, 0x5E, 0x02, 0x30, 0x00, 0x26, 0x82, 0x5F, 0x0C, 0x26\n"
"    .byte 0xA0, 0x5F, 0x09, 0x1A, 0x89, 0x46, 0x0E, 0x21, 0x60, 0x5E, 0x10, 0x1A, 0x80, 0x46, 0x80, 0x20\n"
"    .byte 0x00, 0x02, 0x84, 0x1A, 0x2E, 0x1C, 0x8C, 0x36, 0x9A, 0x46, 0x28, 0x1C, 0xB4, 0x30, 0x01, 0x68\n"
"    .byte 0x0B, 0x68, 0x82, 0x89, 0x04, 0x30, 0x92, 0x00, 0x00, 0x68, 0x80, 0x18, 0x02, 0x88, 0x05, 0xA8\n"
"    .byte 0x1B, 0x69, 0x9E, 0xF0, 0xE1, 0xFE, 0x05, 0xAF, 0x52, 0x46, 0x53, 0x68, 0x32, 0x68, 0x28, 0x1C\n"
"    .byte 0x90, 0x30, 0x41, 0x68, 0x48, 0x42, 0x08, 0x43, 0x00, 0x28, 0x13, 0xDA, 0xB0, 0x89, 0x29, 0x1C\n"
"    .byte 0x9C, 0x31, 0x00, 0x94, 0x3C, 0x1C, 0x01, 0x94, 0x02, 0x92, 0x03, 0x90, 0x04, 0x91, 0x18, 0x1C\n"
"    .byte 0x49, 0x46, 0x42, 0x46, 0x55, 0x23, 0x02, 0x4C, 0x9E, 0xF0, 0xC8, 0xFE, 0x03, 0xE0, 0x00, 0x00\n"
"    .byte 0xDC, 0x04, 0x00, 0x03, 0x00, 0x20, 0x00, 0x28, 0x27, 0xD0, 0x30, 0x1C, 0x3C, 0x30, 0x01, 0x78\n"
"    .byte 0x05, 0x1C, 0x00, 0x29, 0x21, 0xD0, 0x50, 0x46, 0x01, 0x68, 0x3A, 0x1C, 0x08, 0x32, 0x30, 0x1C\n"
"    .byte 0x6F, 0xF0, 0x2C, 0xFE, 0x30, 0x1C, 0x3D, 0x30, 0x00, 0x78, 0x00, 0x28, 0x06, 0xD0, 0x39, 0x1C\n"
"    .byte 0x10, 0x31, 0x30, 0x1C, 0x01, 0x22, 0x6F, 0xF0, 0xBD, 0xFE, 0x0C, 0xE0, 0x34, 0x1C, 0x3E, 0x34\n"
"    .byte 0x20, 0x78, 0x00, 0x28, 0x07, 0xD1, 0x39, 0x1C, 0x10, 0x31, 0x30, 0x1C, 0x01, 0x22, 0x6F, 0xF0\n"
"    .byte 0xB1, 0xFE, 0x01, 0x20, 0x20, 0x70, 0x00, 0x20, 0x28, 0x70, 0x0F, 0xB0, 0x38, 0xBC, 0x98, 0x46\n"
"    .byte 0xA1, 0x46, 0xAA, 0x46, 0xF0, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_08034BFC (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805E860(void *, u16);                        /* extern */
extern u16 gUnk_080F14F0[];

void func_08034BFC(GenObj *arg0, i32 arg1, i32 arg2, i32 arg3) {
    u16 v = gUnk_080F14F0[arg1];
    func_0805E860((u8 *)arg0 + 0xB4, v);
    arg0->unkC8 = 1;
    arg0->unkCA = 0;
    arg0->unkCB = 1;
    arg0->unkCC = arg2;
    arg0->unkCE = arg3;
    arg0->unkD0 = 0x3C;
}
}
// ekor tak-bermarker dari code_entities_080320DC.s (verbatim, jangan diubah)
asm(
".L08034C40:\n"
"    .byte 0x30, 0x30, 0x00, 0x78, 0x70, 0x47, 0x00, 0x00, 0x00, 0x69, 0x70, 0x47, 0x10, 0xB5, 0x0C, 0x1C\n"
"    .byte 0x13, 0x1C, 0x01, 0x1C, 0x30, 0x31, 0x09, 0x78, 0x22, 0x1C, 0xFE, 0xF7, 0x93, 0xFF, 0x10, 0xBC\n"
"    .byte 0x01, 0xBC, 0x00, 0x47\n"
"    @ 34c40:       3030            adds    r0, #48 @ 0x30\n"
"    @ 34c42:       7800            ldrb    r0, [r0, #0]\n"
"    @ 34c44:       4770            bx      lr\n"
"    @ 34c46:       0000            movs    r0, r0\n"
"    @ 34c48:       6900            ldr     r0, [r0, #16]\n"
"    @ 34c4a:       4770            bx      lr\n"
"    @ 34c4c:       b510            push    {r4, lr}\n"
"    @ 34c4e:       1c0c            adds    r4, r1, #0\n"
"    @ 34c50:       1c13            adds    r3, r2, #0\n"
"    @ 34c52:       1c01            adds    r1, r0, #0\n"
"    @ 34c54:       3130            adds    r1, #48 @ 0x30\n"
"    @ 34c56:       7809            ldrb    r1, [r1, #0]\n"
"    @ 34c58:       1c22            adds    r2, r4, #0\n"
"    @ 34c5a:       f7fe ff93       bl      func_08033B84\n"
"    @ 34c5e:       bc10            pop     {r4}\n"
"    @ 34c60:       bc01            pop     {r0}\n"
"    @ 34c62:       4700            bx      r0\n"
);

// DECOMP-MATCHED func_08034C64 (dari code_entities_080320DC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D7ECC(i32, i32, i32 *, i32, i32);       /* extern */

extern UnkF29C0 gUnk_080F29C0;

u32 func_08034C64(i32 arg0, u16 *arg1) {
    i32 sp4;
    i32 temp_r4;
    GenObj *temp_r5;
    i32 var_r2;
    u32 temp_r1_2;
    i32 temp_r0;
    GenObj *temp_r0_2;
    i32 temp_r1;

    temp_r5 = gUnk_080F29C0.unk8[gUnk_080F29C0.unk0(arg0)];
    if (temp_r5 != 0) {
        temp_r1_2 = *arg1;
        var_r2 = ((u32) (temp_r1_2 << 0x1B) >> 0x1B) - 6;
        if (var_r2 < 0) {
            var_r2 += 0x18;
        }
        sp4 = (var_r2 * 0x3C) + ((u32) (temp_r1_2 << 0x15) >> 0x1A);
        temp_r4 = (i32) temp_r5->u4.unk4;
        temp_r0 = ((func_080D7ECC(temp_r4, temp_r4 + ((i32) temp_r5->u0.unk0 * 8), &sp4, 0, 0) - temp_r4) >> 3) - 1;
        if (temp_r0 < (u32) temp_r5->u0.unk0) {
            temp_r0_2 = ((GenObj *) ((i32) temp_r5->u4.unk4 + (temp_r0 * 8)))->u4.unk4;
            if (temp_r0_2 != 0) {
                temp_r1 = ((u32) (temp_r0_2->uA.unkA << 0x16) >> 0x16) ^ 0x1D;
                return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            }
        }
        goto block_6;
    }
block_6:
    return 0U;
}
}
