typedef struct {
    s32 unk0;
    s32 *unk4;
    s32 *unk8;
    u32 unkC;
} T;

s32 CpuFastSet(s32 *, s32 *, s32);
s32 CpuSet(s32 *, s32 *, s32);

void func_0800901C(T *arg0) {
    s32 sp0;
    s32 *var_r4;
    s32 *var_r7;
    u32 var_r6;
    u32 var_r5;
    u32 temp_r3;
    u32 temp_r1;

    var_r4 = arg0->unk4;
    if (arg0->unk0 == 1) {
        sp0 = (s32) var_r4;
        var_r4 = &sp0;
    }
    var_r6 = arg0->unkC;
    var_r7 = arg0->unk8;
    if ((var_r6 & 0x04000000) != 0) {
        var_r5 = var_r6 & 0xFFFF;
        temp_r3 = var_r5 & 7;
        var_r5 -= temp_r3;
        if ((var_r5 != 0) || (temp_r3 == 0)) {
            CpuFastSet(var_r4, var_r7, var_r6 - temp_r3);
            temp_r1 = var_r5 * 4;
            var_r7 = (s32 *) ((u8 *) var_r7 + temp_r1);
            if ((var_r6 & 0x01000000) == 0) {
                var_r4 = (s32 *) ((u8 *) var_r4 + temp_r1);
            }
            if (temp_r3 == 0) {
                goto done;
            }
        }
        CpuSet(var_r4, var_r7, var_r6 - var_r5);
    } else {
        CpuSet(var_r4, var_r7, var_r6);
    }
done:
    return;
}
