u16 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(s32, s32);                        /* extern */
u8 *func_08008920(void *);                          /* extern */
s32 func_0809A3E0();                                  /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[764];
    s32 unk304;
} GenObj;
void func_08099000(GenObj *arg0, u8 arg1) {
    s32 sp0;
    s32 sp4;
    s32 var_r1;
    s32 var_r5;
    s32 var_r6;
    u8 *temp_r0_2;
    u8 temp_r2;
    GenObj *temp_r0;
    void *temp_r0_3;

    func_0809A3E0();
    if (arg1 == 1) {
        sp0 = ((((sp0 & 0xFFFFFCFF & 0xFFFFF3FF) | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF) | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
        temp_r0 = (GenObj *)((u8 *)arg0 + 0x308);
        sp4 = ((u16) ((sp4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0, temp_r0->unk4) & 0xF) << 0xC)) & 0xFFFFF3FF) | 0x400;
        var_r1 = 0;
        do {
            var_r5 = 0;
            var_r6 = 0x98;
loop_3:
            sp0 = (((sp0 & 0xFE00FFFF) | ((0x1FF & var_r6) << 0x10)) & 0xFFFFFF00) | (u8) ((var_r1 * 0x10) + 0x10);
            sp0.unk4 = (s32) ((sp0.unk4 & 0xFFFFFC00) | ((u32) ((func_08007D4C((GenObj *)((u8 *)arg0 + 0x300), arg0->unk304) + ((var_r5 * 2) + (var_r1 * 0x14))) << 0x16) >> 0x16));
            temp_r0_2 = func_08008920(arg0);
            temp_r2 = *temp_r0_2;
            if ((u32) temp_r2 <= 0x7FU) {
                temp_r0_3 = temp_r0_2 + ((temp_r2 * 8) + 4);
                temp_r0_3->unk0 = sp0;
                temp_r0_3->unk4 = (u16) sp0.unk4;
                *temp_r0_2 = temp_r2 + 1;
            }
            var_r6 += 8;
            var_r5 += 1;
            if (var_r5 <= 9) {
                goto loop_3;
            }
            var_r1 += 1;
        } while (var_r1 <= 4);
    }
}
