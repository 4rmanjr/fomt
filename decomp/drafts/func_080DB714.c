s32 func_0800080C(void *, s32);                       /* extern */

typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;

typedef struct {
    Vtbl *vtbl;
} Obj;

typedef struct {
    s32 unk0;
    Obj *unk4;
} UnkStruct;

void func_080DB714(UnkStruct *arg0, s32 arg1) {
    Obj *temp_r1;

    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        temp_r1->vtbl->unk8(temp_r1, 3);
    }
    func_0800080C(arg0, arg1);
}
