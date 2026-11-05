// DECOMP-MATCHED func_08009940 (dari hardware.s; cek manusia sebelum ke src/)
typedef struct GenObj__func_08009940 {
    void *unk0;
    void *unk4;
    u8 _pad8[8];
    void *unk10;
} GenObj__func_08009940;
void func_08009940(GenObj__func_08009940 *arg0, GenObj__func_08009940 *arg1) {
    void **temp_r2;
    void *temp_r0;
    void **temp_r0_2;
    u8 *temp_r1;
    u8 *temp_r1_2;

    temp_r2 = (void **)arg1->unk0;
    if (temp_r2 != 0) {
        temp_r0 = (void *)(arg1->unk4);
        *temp_r2 = temp_r0;
        *(void **)arg1->unk4 = (void *)temp_r2;
    }
    temp_r0_2 = (void **)arg0->unk10;
    *temp_r0_2 = (void *)arg1;
    arg1->unk0 = (void *)temp_r0_2;
    temp_r1 = (u8 *)arg0 + 0x10;
    arg1->unk4 = (void *)temp_r1;
    temp_r1_2 = (u8 *)arg1 + 4;
    arg0->unk10 = (void *)temp_r1_2;
}
