s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_0800745C(void *, s32);                     /* extern */
s32 func_08007510(void *, s32);                     /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[8];
    s32 unk10;
} GenObj;
void *func_08007770(GenObj *arg0, void **arg1) {
    s32 temp_r0;
    s32 var_r0;
    GenObj *temp_r1;
    GenObj *var_r6;
    GenObj *temp_r5;
    void *temp_sb;
    GenObj *var_r4;

    temp_r1 = *arg1;
    if (temp_r1 == 0) {
        goto block_BE;
    }
    var_r6 = temp_r1;
    temp_r0 = var_r6->unk4;
    var_r4 = var_r6->unk10;
    if (var_r4 == temp_r0) {
        goto block_A8;
    }
    temp_sb = var_r4;
loop_3:
    temp_r5 = var_r4;
    var_r4 = (GenObj *)((u8 *)var_r4 + 8);
    if (var_r4 == temp_r0) {
        var_r4 = var_r6->unk0;
    }
    if (func_08007510(temp_r5, temp_r5->unk4) == 1) {
        goto block_B8;
    }
    if (var_r4 != temp_sb) {
        goto loop_3;
    }
block_A8:
    func_08007128(arg0);
    var_r0 = func_0800745C(arg0, var_r4->unk4);
    goto block_CA;
block_B8:
    var_r6->unk10 = var_r4;
    var_r4 = temp_r5;
    goto block_A8;
block_BE:
    func_08007128(arg0);
    var_r0 = func_0800736C(arg0);
block_CA:
    arg0->unk4 = var_r0;
    return arg0;
}
