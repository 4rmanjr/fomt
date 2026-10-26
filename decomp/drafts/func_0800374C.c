s32 func_08000D64(Obj **, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
Obj **func_0800374C(Obj **arg0, GenObj *arg1) {
    Obj *sp0;
    Obj **sp4;
    Obj *sp8;

    func_08000D64(&sp0, arg1->unk4);
    sp4 = &sp0;
    sp8 = sp0;
    *sp4 = 0;
    *arg0 = sp8;
    if (sp0 != 0) {
        sp0->vtbl->unk8(sp0, 3);
    }
    return arg0;
}
