s32 __builtin_delete(void *);                         /* extern */
extern ? __vt_7AEntity;

void func_080E4510(void *arg0, s32 arg1) {
    void *temp_r1;

    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
