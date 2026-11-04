s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7D04;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_08083AEC(GenObj *arg0, s32 arg1) {
    GenObj *t1;
    GenObj *t2;

    arg0->unk0 = &vtable_unk_080E7D04;
    t1 = arg0->unk8;
    if (t1 != 0) {
        ((s32 (*)(void *, ...))(((GenObj *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = arg0->unk4;
    if (t2 != 0) {
        ((s32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
