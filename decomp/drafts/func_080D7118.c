s32 func_080D6EEC(void *);                            /* extern */
s32 func_080D7094(void *, u32, u32);                  /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    u8 _pad8[56];
    s32 unk40;
} GenObj;
void func_080D7118(GenObj *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 temp_r0;
    u32 temp_r2;
    u32 var_r1;
    u32 var_r1_2;

    sp0 = arg2;
    if ((arg1 <= 0x1FFU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0x1FFU)) {
            func_080D6EEC(arg0);
            return;
        }
        if (arg1 <= 0xFFU) {
            temp_r0 = 0x100 - arg1;
            sp4 = temp_r0;
            var_r2 = &sp0;
            if (sp0 > temp_r0) {
                var_r2 = &sp4;
            }
            func_080D7094(arg0 + 4, arg1, *var_r2);
        }
        temp_r2 = arg1 + sp0;
        if (temp_r2 > 0x100U) {
            var_r1 = 0;
            if (arg1 > 0xFFU) {
                var_r1 = arg1 + 0xFFFFFF00;
            }
            func_080D7094(arg0 + 0x40, var_r1, (temp_r2 - 0x100) - var_r1);
        }
        var_r1_2 = 0;
        if (arg0->unk4 != 0) {
            var_r1_2 = (u32) (0 - arg0->unk40) >> 0x1F;
        }
        arg0->unk0 = (s8) var_r1_2;
        arg0->unk1 = 0;
    }
}
