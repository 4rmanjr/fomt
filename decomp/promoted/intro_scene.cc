
// DECOMP-MATCHED func_080036F8 (dari intro_scene.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                               /* extern */
s32 func_08000914();                                /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080036F8(GenObj *arg0) {
    arg0->unk0 = &vtable_unk_080E5A18;
    __builtin_new(0x6D34);
    arg0->unk4 = func_08000914();
    return arg0;
}

// DECOMP-MATCHED func_0800371C (dari intro_scene.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
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

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
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
