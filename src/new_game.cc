#include "prelude.h"

typedef struct GenObj {
    struct GenObj *unk0;
    i32 unk4;
    void (*unk8)(void *, i32);
} GenObj;

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08007078 {
    void *unk0;
    i32 unk4;
} GenObj__func_08007078;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08004BDC {
    void *unk0;
    struct GenObj__func_08004BDC *unk4;
    struct GenObj__func_08004BDC *unk8;
} GenObj__func_08004BDC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08004C54 {
    void *unk0;
} GenObj__func_08004C54;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080050C8 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[6692];
    i32 unk1A2C;
} GenObj__func_080050C8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08005260 {
    u8 _pad0[0x1A74];
    u8 unk1A74;
    u8 unk1A75;
} GenObj__func_08005260;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080059D0 {
    void *unk0;
    struct GenObj__func_080059D0 *unk4;
    struct GenObj__func_080059D0 *unk8;
} GenObj__func_080059D0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08005A3C {
    i32 unk0;
    void *unk4;
} GenObj__func_08005A3C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08005B38 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[17904];
    i32 unk45F8;
} GenObj__func_08005B38;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08006334 {
    u8 _pad0[17920];
    i32 unk4600;
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
    i32 unk463C;
} GenObj__func_08006334;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08004B58 {
    void *unk0;
    i32 unk4;
} GenObj__func_08004B58;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_08003C28 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080088DC();                                /* extern */
i32 func_08008918(i32);                             /* extern */
i32 func_08008920(i32);                             /* extern */
i32 func_08008940(i32);                             /* extern */
i32 func_0800894C(i32);                             /* extern */
i32 func_08050D3C(i32, i32, i32, i32, i32, i32, i32); /* extern */

__attribute__((section(".text.new_game.08003C28")))
void func_08003C28(i32 arg0) {
    i32 temp_r5;
    i32 temp_r6;
    i32 temp_r8;
    i32 temp_sb;

    i32 temp_r0;
    i32 temp_r1;
    i32 temp_r4b;
    temp_sb = func_080088DC();
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r5 = func_08008940(arg0);
    temp_r0 = func_0800894C(arg0);
    temp_r1 = arg0 + 0x10;
    temp_r4b = arg0 + 0x14;
    func_08050D3C(temp_r1, temp_sb, temp_r8, temp_r6, temp_r5, temp_r0, temp_r4b);
}
}

// DECOMP-MATCHED func_08004B58 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080041DC(i32 **, i32, i32 ***);                /* extern */
extern i32 vtable_unk_080E5A3C;
extern i32 vtable_unk_080E5A68;

__attribute__((section(".text.new_game.08004B58")))
void *func_08004B58(GenObj__func_08004B58 *arg0) {
    i32 **sp0;
    i32 **temp_r0;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r0 = (i32 **)__builtin_new(4);
    *temp_r0 = &vtable_unk_080E5A3C;
    sp0 = temp_r0;
    arg0->unk4 = func_080041DC((i32 **)__builtin_new(0x1A0), 0, &sp0);
    return arg0;
}
}

// DECOMP-MATCHED func_08004BDC (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E5A68;

__attribute__((section(".text.new_game.08004BDC")))
void func_08004BDC(GenObj__func_08004BDC *arg0, i32 arg1) {
    GenObj__func_08004BDC *temp_r1;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08004C48 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 vtable_unk_080E5A88;

__attribute__((section(".text.new_game.08004C48")))
void func_08004C48(i32 **arg0) {
    *arg0 = &vtable_unk_080E5A88;
}
}

// DECOMP-MATCHED func_08004C54 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E5A88;

__attribute__((section(".text.new_game.08004C54")))
void func_08004C54(GenObj__func_08004C54 *arg0, i32 arg1) {
    arg0->unk0 = &vtable_unk_080E5A88;
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_080050C8 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080086BC(void *, i32);                       /* extern */
i32 func_08050D0C(i32, i32);                          /* extern */
extern i32 vtable_unk_080E5A98;

__attribute__((section(".text.new_game.080050C8")))
void func_080050C8(GenObj__func_080050C8 *arg0, i32 arg1) {
    i32 temp_r0;

    arg0->unk4 = &vtable_unk_080E5A98;
    temp_r0 = arg0->unk1A2C;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08005254 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008724();                                  /* extern */

__attribute__((section(".text.new_game.08005254")))
void func_08005254(void) {
    func_08008724();
}
}

// DECOMP-MATCHED func_08005260 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.new_game.08005260")))
void func_08005260(GenObj__func_08005260 *arg0) {
    arg0->unk1A75 = 0;
    arg0->unk1A74 = 0;
}
}

// DECOMP-MATCHED func_080059D0 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E5AA4;

__attribute__((section(".text.new_game.080059D0")))
void func_080059D0(GenObj__func_080059D0 *arg0, i32 arg1) {
    GenObj__func_080059D0 *temp_r1;

    arg0->unk0 = &vtable_unk_080E5AA4;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08005A00 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
void func_080050F8(void *, i32);                     /* extern */

__attribute__((section(".text.new_game.08005A00")))
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
}

// DECOMP-MATCHED func_08005A3C (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.new_game.08005A3C")))
u8 func_08005A3C(GenObj__func_08005A3C *arg0) {
    return *(u8 *)((u8 *)arg0->unk4 + 0x1A76);
}
}

// DECOMP-MATCHED func_08005B38 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080086BC(void *, i32);                       /* extern */
i32 func_08050D0C(i32, i32);                          /* extern */
extern i32 vtable_unk_080E5AB4;

__attribute__((section(".text.new_game.08005B38")))
void func_08005B38(GenObj__func_08005B38 *arg0, i32 arg1) {
    i32 temp_r0;

    arg0->unk4 = &vtable_unk_080E5AB4;
    temp_r0 = arg0->unk45F8;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08006334 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.new_game.08006334")))
void func_08006334(GenObj__func_08006334 *arg0) {
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
}

// DECOMP-MATCHED func_08007078 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_08005A58(i32, i32, i32);                   /* extern */
extern i32 vtable_unk_080E5AC0;

void *func_08007078(GenObj__func_08007078 *arg0, i32 arg1, i32 arg2) {
    arg0->unk0 = &vtable_unk_080E5AC0;
    arg0->unk4 = func_08005A58((i32)__builtin_new(0x4640), arg1, arg2);
    return arg0;
}
}

// DECOMP-MATCHED func_080070A4 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E5AC0;

void func_080070A4(GenObj *arg0, i32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = (GenObj *)&vtable_unk_080E5AC0;
    temp_r1 = (GenObj *)arg0->unk4;
    if (temp_r1 != 0) {
        ((GenObj *)temp_r1->unk4)->unk8(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_080070D4 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
void func_08005B68(void *, i32);                     /* extern */

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
}

// DECOMP-MATCHED func_08007110 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_08007110(GenObj *arg0) {
    return arg0->unk4 + 0x461C;
}
}
// ekor tak-bermarker dari new_game.s (verbatim, jangan diubah)
asm(
"    .byte 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x1C, 0x46, 0x00, 0x00\n"
);
