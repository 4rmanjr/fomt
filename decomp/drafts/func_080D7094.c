s32 func_080D6ECC(void *);                            /* extern */
s32 func_080D7014(void *, u32, u32);                  /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    u8 _pad8[24];
    s32 unk20;
} GenObj;
void func_080D7094(GenObj *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 var_r1;
    u32 var_r1_2;

    sp0 = arg2;
    if ((arg1 <= 0xFFU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0xFFU)) {
            func_080D6ECC(arg0);
            return;
        }
        if (arg1 <= 0x7FU) {
            temp_r0 = 0x80 - arg1;
            sp4 = temp_r0;
            var_r2 = &sp0;
            if (sp0 > temp_r0) {
                var_r2 = &sp4;
            }
            func_080D7014(arg0 + 4, arg1, *var_r2);
        }
        temp_r0_2 = arg1 + sp0;
        if (temp_r0_2 > 0x80U) {
            var_r1 = 0;
            if (arg1 > 0x7FU) {
                var_r1 = arg1 - 0x80;
            }
            func_080D7014(arg0 + 0x20, var_r1, (temp_r0_2 - 0x80) - var_r1);
        }
        var_r1_2 = 0;
        if (arg0->unk4 != 0) {
            var_r1_2 = (u32) (0 - arg0->unk20) >> 0x1F;
        }
        arg0->unk0 = (s8) var_r1_2;
        arg0->unk1 = 0;
    }
}
