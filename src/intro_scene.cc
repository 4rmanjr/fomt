#include "prelude.h"

// DECOMP-MATCHED func_0800374C (dari intro_scene.s; cek manusia sebelum ke src/)
extern "C" {
typedef struct {
    i32 unk0;
    i32 unk4;
    void (*unk8)(void *, i32);
} Vtbl;
typedef struct {
    Vtbl *vtbl;
} Obj;
void func_08000D64(void *, i32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    i32 unk4;
} GenObj;
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

    func_08000D64((void *)&fr.sp0, arg1->unk4);
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
}
