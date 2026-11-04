s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E82A8;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    void *unk8;
} GenObj;
void func_080A3C8C(GenObj *arg0, s32 arg1) {
    GenObj *t1;

    arg0->unk0 = &vtable_unk_080E82A8;
    t1 = arg0->unk4;
    if (t1 != 0) {
        ((s32 (*)(void *, ...))(((GenObj *)(t1->unk0))->unk8))(t1, 3);
    }
    func_080007EC(arg0, arg1);
}
