void func_08000D64(void *, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
Obj **func_0800374C(Obj **arg0, GenObj *arg1) {
    /* Frame 12 byte: sp0 volatile (reload paksa utk null-check, krn
       *arg0 boleh alias sp0), sp4 non-volatile (salinan alamat via
       `adds`, bukan reload), sp8 nilai tersimpan. Pola sama dgn
       func_08005A00. */
    struct { Obj *volatile sp0; Obj **volatile sp4; Obj *sp8; } fr;
    register Obj *tmp __asm__("r2");
    register Obj **q __asm__("r0");
    register Obj **sp4r __asm__("r1");
    Obj *c;

    func_08000D64(&fr.sp0, arg1->unk4);
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
