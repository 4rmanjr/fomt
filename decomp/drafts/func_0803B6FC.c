extern s32 vtable_unk_080E7748;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void func_0803B6FC(GenObj *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r4;

    arg0->unk0 = &vtable_unk_080E7748;
    temp_r4 = *arg1;
    *arg1 = 0;
    arg0->unk4 = temp_r4;
    arg0->unk8 = arg2;
}
