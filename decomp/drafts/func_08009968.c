// DECOMP-MATCHED func_08009968 (dari hardware.s; cek manusia sebelum ke src/)
typedef struct GenObj__func_08009968 {
    void *unk0;
    void *unk4;
} GenObj__func_08009968;
void func_08009968(GenObj__func_08009968 *arg0, GenObj__func_08009968 *arg1) {
    void **temp_r2;
    void *temp_r0;

    (void)arg0;
    temp_r2 = (void **)arg1->unk0;
    if (temp_r2 != 0) {
        temp_r0 = (void *)(arg1->unk4);
        *temp_r2 = temp_r0;
        *(void **)arg1->unk4 = (void *)temp_r2;
        arg1->unk0 = 0;
        arg1->unk4 = 0;
    }
}
