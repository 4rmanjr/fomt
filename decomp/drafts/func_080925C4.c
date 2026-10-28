s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7DC8;

typedef struct GenObj {
    Vtbl *vtbl;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
typedef struct {
    s32 unk0;
    GenObj *unk4;
} Inner;
void func_080925C4(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;
    Inner *temp_r1_2;

    arg0->vtbl = (Vtbl *)&vtable_unk_080E7DC8;
    temp_r1 = arg0->unk8;
    if (temp_r1 != 0) {
        temp_r1->vtbl->unk8(temp_r1, 3);
    }
    temp_r1_2 = (Inner *)arg0->unk4;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk4->vtbl->unk8(temp_r1_2->unk4, 3);
    }
    func_080007EC(arg0, arg1);
}
