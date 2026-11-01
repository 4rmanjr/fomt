typedef struct GenObj__func_08009908 {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
} GenObj__func_08009908;
s32 func_08009908(GenObj__func_08009908 *arg0) {
    GenObj__func_08009908 *temp_r4;
    register GenObj__func_08009908 *var_r5 asm("r5");
    GenObj__func_08009908 *temp_r7;

    var_r5 = (GenObj__func_08009908 *)arg0->unkC;
    temp_r7 = (GenObj__func_08009908 *)((u8 *)arg0 + 0x10);
loop_1:
    if (var_r5 != temp_r7) {
        temp_r4 = var_r5;
        var_r5 = (GenObj__func_08009908 *)var_r5->unk4;
        if ((((s32 (*)(GenObj__func_08009908 *))(*(void **)((u8 *)temp_r4->unk8 + 8)))(temp_r4) << 0x18) == 0) {
            ((void (*)(GenObj__func_08009908 *, GenObj__func_08009908 *))(*(void **)((u8 *)arg0->unk8 + 0x14)))(arg0, temp_r4);
        }
        goto loop_1;
    }
    return 1;
}
