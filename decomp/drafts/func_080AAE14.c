s32 func_080DC57C(void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080AAE14(GenObj *arg0, s32 arg1, s32 arg2) {
    void *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r4;

    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    temp_r4 = (GenObj *)((u8 *)arg0 + 8);
    if (temp_r4->unk8 != 0) {
        func_080DC57C(temp_r4, temp_r4->unk4->unk4);
        temp_r0 = temp_r4->unk4;
        temp_r0->unk8 = temp_r0;
        temp_r4->unk4->unk4 = 0;
        temp_r0_2 = temp_r4->unk4;
        temp_r0_2->unkC = temp_r0_2;
        temp_r4->unk8 = 0;
    }
}
