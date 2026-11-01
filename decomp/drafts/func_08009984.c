typedef struct GenObj {
    u8 _pad0[12];
    void *unkC;
    void *unk10;
} GenObj;
void func_08009984(GenObj *arg0) {
    u8 *temp_r0;
    u8 *temp_r0_2;
    u8 *temp_r3;
    u8 *var_r1;

    var_r1 = (u8 *)arg0->unkC;
    temp_r3 = (u8 *)arg0 + 0x10;
    if (var_r1 != temp_r3) {
        do {
            temp_r0 = var_r1;
            var_r1 = *(u8 **)(void *)(var_r1 + 4);
            *(u32 *)(void *)temp_r0 = 0;
            *(u32 *)(void *)(temp_r0 + 4) = 0;
        } while (var_r1 != temp_r3);
    }
    temp_r0_2 = (u8 *)arg0 + 0x10;
    arg0->unkC = (void *)temp_r0_2;
    arg0->unk10 = (void *)(temp_r0_2 - 4);
}
