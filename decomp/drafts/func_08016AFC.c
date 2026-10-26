s32 GetUnkEnt__C4Coop(void *);                      /* extern */
s32 method_0800D058__C4Barn(void *);                /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[8460];
    struct GenObj *unk219C;
} GenObj;
s32 func_08016AFC(GenObj *arg0, u32 arg1) {
    s32 var_r0;
    s32 var_r1;
    GenObj *temp_r2;
    void *temp_r2_2;

    temp_r2 = arg0->unk4;
    switch (arg1) {
    case 0:
        temp_r2_2 = temp_r2->unk8C;
        if (!(2 & temp_r2_2->unk219A) && !(4 & temp_r2_2->unk21A1)) {
        default:
            var_r1 = -1;
        } else {
block_6:
            var_r1 = 0;
        }
        break;
    case 4:
        var_r1 = -1;
        if (0x10 & temp_r2->unk8C->unk219C) {
            goto block_6;
        }
        break;
    case 1:
    case 2:
        var_r0 = method_0800D058__C4Barn(temp_r2->unk8C + 0x5F0);
block_9:
        var_r1 = var_r0;
        break;
    case 3:
        var_r0 = GetUnkEnt__C4Coop(temp_r2->unk8C + 0x410);
        goto block_9;
    }
    return var_r1;
}
