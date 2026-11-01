typedef struct GenObj {
    void *unk0;
    void *unk4;
} GenObj;
void func_08009968(GenObj *arg0, GenObj *arg1) {
    void **temp_r2;
    void *temp_r0;

    (void)arg0;
    temp_r2 = (void **)arg1->unk0;
    if (temp_r2 != 0) {
        temp_r0 = arg1->unk4;
        *temp_r2 = temp_r0;
        *(void **)arg1->unk4 = (void *)temp_r2;
        arg1->unk0 = 0;
        arg1->unk4 = 0;
    }
}
