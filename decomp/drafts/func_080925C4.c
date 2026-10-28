s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7DC8;

typedef struct Vtbl {
    void *unk0;
    void *unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct Inner {
    s32 unk0;
    Vtbl *unk4;
} Inner;
typedef struct GenObj {
    void *unk0;
    Inner *unk4;
    struct GenObj *unk8;
} GenObj;
typedef struct Obj {
    Vtbl *unk0;
    struct Obj *unk4;
} Obj;
void func_080925C4(GenObj *arg0, s32 arg1) {
    Obj *temp_r1;
    Inner *temp_r1_2;
    Vtbl *v;

    arg0->unk0 = &vtable_unk_080E7DC8;
    temp_r1 = (Obj *) arg0->unk8;
    if (temp_r1 != 0) {
        temp_r1->unk0->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk4;
    if (temp_r1_2 != 0) {
        v = temp_r1_2->unk4;
        v->unk8(temp_r1_2, 3);
    }
    func_080007EC(arg0, arg1);
}
