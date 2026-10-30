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

// DECOMP-MATCHED func_08007078 (dari new_game.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08005A58(i32, i32, i32);                   /* extern */
extern i32 vtable_unk_080E5AC0;

void *func_08007078(GenObj__func_08007078 *arg0, i32 arg1, i32 arg2) {
    arg0->unk0 = &vtable_unk_080E5AC0;
    arg0->unk4 = func_08005A58(__builtin_new(0x4640), arg1, arg2);
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
