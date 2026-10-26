s32 func_08005B68(void ***, s32);                     /* extern */

typedef struct Vtbl {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct Obj {
    Vtbl *vtbl;
} Obj;
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void ***func_080070D4(void ***arg0, GenObj *arg1) {
    Obj *sp0;
    void ***sp4;
    void **sp8;

    func_08005B68(&sp0, arg1->unk4);
    sp4 = &sp0;
    sp8 = sp0;
    sp0 = 0;
    *arg0 = sp0;
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->vtbl->unk8))(sp0, 3);
    }
    return arg0;
}
