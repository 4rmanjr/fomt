extern void *gUnk_0300040C;

void func_08012B24(void *arg1, s32 arg2) {
    s32 *var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    void *temp_r2;
    void *var_r3;

    switch (arg2) {                                 /* irregular */
    case 0:
        temp_r0 = gUnk_0300040C->unk378;
        if (temp_r0 <= 1U) {
            temp_r2 = gUnk_0300040C + 0x378 + ((temp_r0 * 8) + 4);
            if (temp_r2 != 0) {
                temp_r2->unk0 = (s32) arg1->unk0;
                temp_r2->unk4 = (s32) arg1->unk4;
            }
            gUnk_0300040C->unk378 = (u32) (gUnk_0300040C->unk378 + 1);
            return;
        }
        return;
    case 1:
        var_r2 = gUnk_0300040C + 0x38C;
        temp_r0_2 = gUnk_0300040C->unk38C;
        if (temp_r0_2 <= 0x27U) {
            var_r3 = var_r2 + ((temp_r0_2 * 8) + 4);
block_14:
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) arg1->unk0;
                var_r3->unk4 = (s32) arg1->unk4;
            }
            *var_r2 += 1;
        }
        break;
    case 2:
        var_r2 = gUnk_0300040C + 0x4D0;
        if (gUnk_0300040C->unk4D0 == 0) {
            var_r3 = gUnk_0300040C + 0x4D4;
            goto block_14;
        }
        break;
    }
}
