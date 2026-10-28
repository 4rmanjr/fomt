typedef struct GenObj {
    u8 _pad0[12];
    void *unkC;
    void *unk10;
} GenObj;
void func_080099B0(GenObj *arg0, GenObj *arg1) {
    void **temp_r2;
    void **temp_r2_2;
    u8 *temp_r0;
    u8 *temp_r1;

    temp_r2 = (void **)arg0->unk10;
    *temp_r2 = arg1->unkC;
    *(void **)arg1->unkC = (void *)temp_r2;
    temp_r2_2 = (void **)arg1->unk10;
    temp_r1 = (u8 *)arg0 + 0x10;
    *temp_r2_2 = (void *)temp_r1;
    arg0->unk10 = (void *)temp_r2_2;
    temp_r0 = (u8 *)arg1 + 0x10;
    arg1->unkC = (void *)temp_r0;
    temp_r0 -= 4;
    arg1->unk10 = (void *)temp_r0;
}
