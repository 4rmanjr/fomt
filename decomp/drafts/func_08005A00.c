void func_080050F8(void *, void *);                     /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} GenObj;
GenObj *func_08005A00(GenObj *arg0, GenObj *arg1) {
    struct { GenObj *volatile sp0; void *sp4; void *sp8; } fr;
    GenObj *c;
    GenObj *tmp;
    s32 *q;

    func_080050F8(&fr.sp0, (void *)arg1->unk4);
    tmp = fr.sp0;
    q = fr.sp4 = &fr.sp0;
    fr.sp8 = tmp;
    arg0->unk0 = tmp;
    *q = 0;
    if ((c = fr.sp0) != 0) {
        ((void (*)(void *,...))((GenObj *)c->unk0)->unk8)(c, 3);
    }
    return arg0;
}
