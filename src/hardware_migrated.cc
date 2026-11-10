#include "prelude.h"

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[12];
    i32 unkC;
    i32 unk10;
} GenObj;
typedef struct GenObj__func_080099B0 {
    u8 _pad0[12];
    void *unkC;
    void *unk10;
} GenObj__func_080099B0;
typedef struct GenObj__func_08009834 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} GenObj__func_08009834;
typedef struct GenObj__func_080098AC {
    struct GenObj__func_080098AC *unk0;
    struct GenObj__func_080098AC *unk4;
    void *unk8;
} GenObj__func_080098AC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08009968 {
    void *unk0;
    void *unk4;
} GenObj__func_08009968;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08009940 {
    void *unk0;
    void *unk4;
    u8 _pad8[8];
    void *unk10;
} GenObj__func_08009940;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08009908 {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
} GenObj__func_08009908;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080098DC {
    u8 _pad0[8];
    void *unk8;
} GenObj__func_080098DC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Entry {
    i32 unk0;
    u16 unk4;
    u16 unk6;
} Entry;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08009744 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} GenObj__func_08009744;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080096F0 {
    u8 _pad0[84];
    u16 unk54;
} GenObj__func_080096F0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080096B0 {
    i32 unk0;
    u8 _pad4[28];
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u8 _pad28[8];
    u16 unk30;
    u16 unk32;
    u16 unk34;
    u16 unk36;
} GenObj__func_080096B0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct S959C {
    u8 _pad0[8];
    void *unk8;
} S959C;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_0800956C (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080004F4();                                  /* extern */
i32 func_08000528(i32);                             /* extern */
void func_08009984(GenObj *arg0);                             /* extern */
void func_0800956C(void *arg0) {
    register volatile u16 *q __asm__("r1");
    i32 t;
    volatile u16 sp0;
    volatile u16 *p;

    p = &sp0;
    t = 1;
    t &= func_08000528(1);
    *p = (u16) t;
    func_08009984((GenObj *) arg0);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
}

// DECOMP-MATCHED func_0800959C (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void func_0800956C(void *arg0);                             /* extern */
void func_080098DC(GenObj__func_080098DC *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E5B90;

void func_0800959C(void *arg0, i32 arg1) {
    ((S959C *) arg0)->unk8 = &vtable_unk_080E5B90;
    func_0800956C(arg0);
    func_080098DC((GenObj__func_080098DC *) arg0, arg1);
}
}

// DECOMP-MATCHED func_080095C0 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080004F4();                                  /* extern */
i32 func_08000528(i32);                             /* extern */
void func_08009940(GenObj__func_08009940 *arg0, GenObj__func_08009940 *arg1);                             /* extern */
void func_080095C0(i32 arg0, i32 arg1) {
    register i32 a1 __asm__("r8");
    register volatile u16 *q __asm__("r1");
    i32 t;
    volatile u16 sp0;
    volatile u16 *p;

    a1 = arg1;
    p = &sp0;
    t = 1;
    t &= func_08000528(1);
    *p = (u16) t;
    func_08009940((GenObj__func_08009940 *) arg0, (GenObj__func_08009940 *) a1);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
}

// DECOMP-MATCHED func_080095FC (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080004F4();                                  /* extern */
i32 func_08000528(i32);                             /* extern */
void func_08009968(GenObj__func_08009968 *arg0, GenObj__func_08009968 *arg1);                             /* extern */
void func_080095FC(i32 arg0, i32 arg1) {
    register i32 a1 __asm__("r8");
    register volatile u16 *q __asm__("r1");
    i32 t;
    volatile u16 sp0;
    volatile u16 *p;

    a1 = arg1;
    p = &sp0;
    t = 1;
    t &= func_08000528(1);
    *p = (u16) t;
    func_08009968((GenObj__func_08009968 *) arg0, (GenObj__func_08009968 *) a1);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
}

// DECOMP-MATCHED func_08009638 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080004F4();                                  /* extern */
i32 func_08000528(i32);                             /* extern */
void func_080099B0(GenObj__func_080099B0 *arg0, GenObj__func_080099B0 *arg1);                             /* extern */
void func_08009638(i32 arg0, i32 arg1) {
    register i32 a1 __asm__("r8");
    register volatile u16 *q __asm__("r1");
    i32 t;
    volatile u16 sp0;
    volatile u16 *p;

    a1 = arg1;
    p = &sp0;
    t = 1;
    t &= func_08000528(1);
    *p = (u16) t;
    func_080099B0((GenObj__func_080099B0 *) arg0, (GenObj__func_080099B0 *) a1);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
}

// DECOMP-MATCHED func_08009674 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080004F4();                                  /* extern */
i32 func_08000528(i32);                             /* extern */
void func_080099D4(GenObj *arg0, GenObj *arg1);                             /* extern */
void func_08009674(i32 arg0, i32 arg1) {
    register i32 a1 __asm__("r8");
    register volatile u16 *q __asm__("r1");
    i32 t;
    volatile u16 sp0;
    volatile u16 *p;

    a1 = arg1;
    p = &sp0;
    t = 1;
    t &= func_08000528(1);
    *p = (u16) t;
    func_080099D4((GenObj *) arg0, (GenObj *) a1);
    q = &sp0;
    if (*q != 0) {
        func_080004F4();
    }
}
}

// DECOMP-MATCHED func_080096B0 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
i32 CpuSet(i16 *, void *, i32);                       /* extern */

void *func_080096B0(GenObj__func_080096B0 *arg0) {
    i16 sp0;
    i16 *p = &sp0;

    sp0 = 0;
    CpuSet(p, arg0, 0x0100002B);
    arg0->unk0 = 0x80;
    arg0->unk20 = 0x100;
    arg0->unk22 = 0;
    arg0->unk24 = 0;
    arg0->unk26 = 0x100;
    arg0->unk30 = 0x100;
    arg0->unk32 = 0;
    arg0->unk34 = 0;
    arg0->unk36 = 0x100;
    return arg0;
}
}

// DECOMP-MATCHED func_080096F0 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008E64(i32, i32, i32);                  /* extern */

void func_080096F0(GenObj__func_080096F0 *arg0) {
    func_08008E64((i32)arg0, 0x04000000, 0x54);
    *(u16 *)0x04000054 = arg0->unk54;
}
}
// ekor tak-bermarker dari hardware.s (verbatim, jangan diubah)
asm(
".L08009710:\n"
"    .byte 0x10, 0xB5, 0x04, 0x1C, 0x80, 0x21, 0xC9, 0x04, 0x10, 0x22, 0xCA, 0xF0, 0x17, 0xF8, 0x20, 0x1C\n"
"    .byte 0x40, 0x30, 0x05, 0x49, 0x05, 0x4A, 0xCA, 0xF0, 0x13, 0xF8, 0x05, 0x49, 0xA0, 0x8A, 0x08, 0x80\n"
"    .byte 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0x40, 0x00, 0x00, 0x04, 0x05, 0x00, 0x00, 0x04\n"
"    .byte 0x14, 0x00, 0x00, 0x04\n"
);

// DECOMP-MATCHED func_08009744 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void *func_08009744(GenObj__func_08009744 *arg0, u8 arg1, u8 arg2) {
    u8 *p;
    u8 *end;

    arg0->unk1 = arg1 & 0x7F;
    arg0->unk0 = arg1 & 0x7F;
    arg0->unk3 = arg2 & 0x1F;
    arg0->unk2 = arg2 & 0x1F;
    p = (u8 *)arg0 + 4;
    end = (u8 *)arg0 + 0x404;
    do {
        p[1] = 2;
        p += 8;
    } while (p != end);
    return arg0;
}
}

// DECOMP-MATCHED func_0800977C (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008E64(i32, i32, i32);                     /* extern */

void func_0800977C(i32 arg0) {
    func_08008E64(arg0 + 4, 0x07000000, 0x400);
}
}
// ekor tak-bermarker dari hardware.s (verbatim, jangan diubah)
asm(
".L08009790:\n"
"    .byte 0x00, 0xB5, 0x04, 0x30, 0xE0, 0x21, 0xC9, 0x04, 0x80, 0x22, 0x52, 0x00, 0xC9, 0xF0, 0xD6, 0xFF\n"
"    .byte 0x01, 0xBC, 0x00, 0x47\n"
);

// DECOMP-MATCHED func_080097A4 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_080097A4(u8 *arg0) {
    u16 temp_r2;
    u32 var_r5;
    Entry *temp_r6;
    Entry *var_r1;
    Entry *var_r3;
    Entry *var_r4;

    var_r3 = (Entry *)(arg0 + 4);
    var_r4 = (Entry *)0x07000000;
    temp_r6 = (Entry *)(arg0 + ((*arg0 * 8) + 4));
    var_r5 = 0;
    do {
        var_r1 = (Entry *)(arg0 + 4);
        if (var_r1 != temp_r6) {
            do {
                temp_r2 = var_r1->unk4;
                if ((temp_r2 & 0xC00) == var_r5) {
                    var_r4->unk0 = var_r1->unk0;
                    var_r4->unk4 = temp_r2;
                    var_r4->unk6 = var_r3->unk6;
                    var_r3 += 1;
                    var_r4 += 1;
                }
                var_r1 += 1;
            } while (var_r1 != temp_r6);
        }
        var_r5 += 0x400;
    } while (var_r5 <= 0xFFFU);
    if (var_r4 != (Entry *)0x07000400) {
        do {
            var_r4->unk0 = 0x200;
            var_r4->unk6 = var_r3->unk6;
            var_r3 += 1;
            var_r4 += 1;
        } while (var_r4 != (Entry *)0x07000400);
    }
}
}

// DECOMP-MATCHED func_08009834 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_08009834(GenObj__func_08009834 *arg0) {
    u8 temp_r3;
    u8 temp_r4;
    u8 *var_r1;
    u8 *end;

    temp_r4 = arg0->unk0;
    temp_r3 = arg0->unk1;
    if (temp_r4 > temp_r3) {
        var_r1 = (u8 *)arg0 + ((temp_r3 * 8) + 4);
        end = (u8 *)arg0 + ((temp_r4 * 8) + 4);
        do {
            var_r1[1] = 2;
            var_r1 += 8;
        } while (var_r1 != end);
    }
    arg0->unk0 = temp_r3;
    arg0->unk2 = arg0->unk3;
}
}

// DECOMP-MATCHED func_08009864 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void func_0800977C(i32 arg0);                             /* extern */
void func_08009834(GenObj__func_08009834 *arg0);                             /* extern */
void func_08009864(i32 arg0) {
    func_0800977C(arg0);
    func_08009834((GenObj__func_08009834 *)(arg0));
}
}
// ekor tak-bermarker dari hardware.s (verbatim, jangan diubah)
asm(
".L08009878:\n"
"    .byte 0x10, 0xB5, 0x04, 0x1C, 0x20, 0x1D, 0xE0, 0x21\n"
"    .byte 0xC9, 0x04, 0x80, 0x22, 0x52, 0x00, 0xC9, 0xF0, 0x61, 0xFF, 0x20, 0x1C, 0xFF, 0xF7, 0xD2, 0xFF\n"
"    .byte 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0x10, 0xB5, 0x04, 0x1C, 0xFF, 0xF7, 0x82, 0xFF\n"
"    .byte 0x20, 0x1C, 0xFF, 0xF7, 0xC7, 0xFF, 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47\n"
);

// DECOMP-MATCHED func_080098AC (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void __builtin_delete(void *);                             /* extern */
extern i32 vtable_unk_080E5BE8;

void func_080098AC(GenObj__func_080098AC *arg0, i32 arg1) {
    GenObj__func_080098AC *t2;
    arg0->unk8 = &vtable_unk_080E5BE8;
    t2 = (GenObj__func_080098AC *)(arg0->unk0);
    if (t2 != 0) {
        t2->unk0 = (struct GenObj__func_080098AC *)(arg0->unk4);
        arg0->unk4->unk0 = t2;
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}
// ekor tak-bermarker dari hardware.s (verbatim, jangan diubah)
asm(
".L080098D8:\n"
"    .byte 0x01, 0x20, 0x70, 0x47\n"
);

// DECOMP-MATCHED func_080098DC (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void func_080098AC(GenObj__func_080098AC *arg0, i32 arg1);                             /* extern */
void func_08009984(GenObj *arg0);                     /* extern */
extern i32 vtable_unk_080E5BB4;

void func_080098DC(GenObj__func_080098DC *arg0, i32 arg1) {
    arg0->unk8 = &vtable_unk_080E5BB4;
    func_08009984((GenObj *)arg0);
    func_080098AC((GenObj__func_080098AC *)((u8 *)arg0 + 0x10), 2);
    func_080098AC((GenObj__func_080098AC *)(arg0), arg1);
}
}

// DECOMP-MATCHED func_08009908 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_08009908(GenObj__func_08009908 *arg0) {
    GenObj__func_08009908 *temp_r4;
    register GenObj__func_08009908 *var_r5 asm("r5");
    GenObj__func_08009908 *temp_r7;

    var_r5 = (GenObj__func_08009908 *)arg0->unkC;
    temp_r7 = (GenObj__func_08009908 *)((u8 *)arg0 + 0x10);
loop_1:
    if (var_r5 != temp_r7) {
        temp_r4 = var_r5;
        var_r5 = (GenObj__func_08009908 *)var_r5->unk4;
        if ((((i32 (*)(GenObj__func_08009908 *))(*(void **)((u8 *)temp_r4->unk8 + 8)))(temp_r4) << 0x18) == 0) {
            ((void (*)(GenObj__func_08009908 *, GenObj__func_08009908 *))(*(void **)((u8 *)arg0->unk8 + 0x14)))(arg0, temp_r4);
        }
        goto loop_1;
    }
    return 1;
}
}

// DECOMP-MATCHED func_08009940 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_08009940(GenObj__func_08009940 *arg0, GenObj__func_08009940 *arg1) {
    void **temp_r2;
    void *temp_r0;
    void **temp_r0_2;
    u8 *temp_r1;
    u8 *temp_r1_2;

    temp_r2 = (void **)arg1->unk0;
    if (temp_r2 != 0) {
        temp_r0 = (void *)(arg1->unk4);
        *temp_r2 = temp_r0;
        *(void **)arg1->unk4 = (void *)temp_r2;
    }
    temp_r0_2 = (void **)arg0->unk10;
    *temp_r0_2 = (void *)arg1;
    arg1->unk0 = (void *)temp_r0_2;
    temp_r1 = (u8 *)arg0 + 0x10;
    arg1->unk4 = (void *)temp_r1;
    temp_r1_2 = (u8 *)arg1 + 4;
    arg0->unk10 = (void *)temp_r1_2;
}
}

// DECOMP-MATCHED func_08009968 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_08009968(GenObj__func_08009968 *arg0, GenObj__func_08009968 *arg1) {
    void **temp_r2;
    void *temp_r0;

    (void)arg0;
    temp_r2 = (void **)arg1->unk0;
    if (temp_r2 != 0) {
        temp_r0 = (void *)(arg1->unk4);
        *temp_r2 = temp_r0;
        *(void **)arg1->unk4 = (void *)temp_r2;
        arg1->unk0 = 0;
        arg1->unk4 = 0;
    }
}
}

// DECOMP-MATCHED func_08009984 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_08009984(GenObj *arg0) {
    u8 *temp_r0;
    u8 *temp_r0_2;
    u8 *temp_r3;
    u8 *var_r1;

    var_r1 = (u8 *)arg0->unkC;
    temp_r3 = (u8 *)arg0 + 0x10;
    if (var_r1 != temp_r3) {
        do {
            temp_r0 = var_r1;
            var_r1 = *(u8 **)(void *)(var_r1 + 4);
            *(u32 *)(void *)temp_r0 = 0;
            *(u32 *)(void *)(temp_r0 + 4) = 0;
        } while (var_r1 != temp_r3);
    }
    temp_r0_2 = (u8 *)arg0 + 0x10;
    arg0->unkC = (i32)temp_r0_2;
    arg0->unk10 = (i32)(temp_r0_2 - 4);
}
}

// DECOMP-MATCHED func_080099B0 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_080099B0(GenObj__func_080099B0 *arg0, GenObj__func_080099B0 *arg1) {
    void **temp_r2;
    void **temp_r2_2;
    u8 *temp_r0;
    u8 *temp_r1;

    temp_r2 = (void **)arg0->unk10;
    *temp_r2 = arg1->unkC;
    *(void **)arg1->unkC = (void *)temp_r2;
    temp_r2_2 = (void **)arg1->unk10;
    temp_r1 = (u8 *)arg0 + 0x10;
    *temp_r2_2 = (void *)temp_r1;
    arg0->unk10 = (void *)temp_r2_2;
    temp_r0 = (u8 *)arg1 + 0x10;
    arg1->unkC = (void *)temp_r0;
    temp_r0 -= 4;
    arg1->unk10 = (void *)temp_r0;
}
}

// DECOMP-MATCHED func_080099D4 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_080099D4(GenObj *arg0, GenObj *arg1) {
    i32 *temp_r1;
    i32 *temp_r2;
    i32 temp_r3;
    i32 temp_r3_2;

    temp_r3 = arg0->unkC;
    arg0->unkC = (i32) arg1->unkC;
    arg1->unkC = temp_r3;
    temp_r2 = (i32 *)arg0->unk10;
    temp_r1 = (i32 *)arg1->unk10;
    temp_r3_2 = *temp_r2;
    *temp_r2 = *temp_r1;
    *temp_r1 = temp_r3_2;
}
}
// ekor tak-bermarker dari hardware.s (verbatim, jangan diubah)
asm(
"    .align 2, 0\n"
".L080099EC:\n"
"    .byte 0x00, 0xB5, 0x00, 0x22\n"
"    .byte 0x01, 0x1C, 0x10, 0x31, 0xC0, 0x68, 0x88, 0x42, 0x00, 0xD1, 0x01, 0x22, 0x10, 0x1C, 0x02, 0xBC\n"
"    .byte 0x08, 0x47, 0x00, 0x00, 0x00, 0x23, 0x03, 0x60, 0x43, 0x60, 0x06, 0x49, 0x81, 0x60, 0x02, 0x1C\n"
"    .byte 0x10, 0x32, 0xC2, 0x60, 0x53, 0x60, 0x04, 0x49, 0x91, 0x60, 0x01, 0x1C, 0x0C, 0x31, 0x01, 0x61\n"
"    .byte 0x42, 0x61, 0x70, 0x47, 0xB4, 0x5B, 0x0E, 0x08, 0xD8, 0x5B, 0x0E, 0x08, 0x01, 0x68, 0x48, 0x42\n"
"    .byte 0x08, 0x43, 0xC0, 0x0F, 0x70, 0x47, 0x00, 0x00, 0x02, 0x49, 0x81, 0x60, 0x00, 0x21, 0x01, 0x60\n"
"    .byte 0x41, 0x60, 0x70, 0x47, 0xE8, 0x5B, 0x0E, 0x08\n"
);
