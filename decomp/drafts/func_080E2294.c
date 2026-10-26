void *func_080D3BC0(s32);                           /* extern */
s32 func_080E21E0(void *, void *);                    /* extern */
void *malloc(s32);                                  /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
} GenObj;
void **func_080E2294(void **arg0, GenObj *arg1, s32 arg2, GenObj *arg3, GenObj *arg4, s32 arg5) {
    s32 var_r2;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r4;

    if (arg3 != arg1->unk4) {
        if (arg5 == 0) {
            if (arg2 == 0) {
                var_r2 = 0;
                if ((u32) arg4->unk0 < (u32) arg3->unk10) {
                    var_r2 = 1;
                }
                if (var_r2 != 0) {
                    goto block_6;
                }
                goto block_14;
            }
            goto block_6;
        }
block_14:
        var_r2_2 = malloc(0x18);
        if (var_r2_2 == 0) {
            var_r2_2 = func_080D3BC0(0x18);
        }
        temp_r1 = (GenObj *)((u8 *)var_r2_2 + 0x10);
        if (temp_r1 != 0) {
            var_r2_2->unk10 = (u32) arg4->unk0;
            temp_r1->unk4 = (s32) arg4->unk4;
        }
        var_r4 = var_r2_2;
        arg3->unkC = var_r4;
        temp_r1_2 = arg1->unk4;
        if (arg3 == temp_r1_2->unkC) {
            temp_r1_2->unkC = var_r4;
        }
    } else {
block_6:
        var_r2_3 = malloc(0x18);
        if (var_r2_3 == 0) {
            var_r2_3 = func_080D3BC0(0x18);
        }
        temp_r1_3 = (GenObj *)((u8 *)var_r2_3 + 0x10);
        if (temp_r1_3 != 0) {
            var_r2_3->unk10 = (u32) arg4->unk0;
            temp_r1_3->unk4 = (s32) arg4->unk4;
        }
        var_r4 = var_r2_3;
        arg3->unk8 = var_r4;
        temp_r1_4 = arg1->unk4;
        if (arg3 == temp_r1_4) {
            arg3->unk4 = var_r4;
            arg1->unk4->unkC = var_r4;
        } else if (arg3 == temp_r1_4->unk8) {
            temp_r1_4->unk8 = var_r4;
        }
    }
    var_r4->unk4 = arg3;
    var_r4->unk8 = 0;
    var_r4->unkC = 0;
    func_080E21E0(var_r4, arg1->unk4 + 4);
    arg1->unk8 = (s32) (arg1->unk8 + 1);
    *arg0 = var_r4;
    return arg0;
}
