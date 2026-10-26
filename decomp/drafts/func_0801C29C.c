s32 func_0801C0F8(void *, u16 *, s32 *);            /* extern */
s32 func_080AA6D0(s32, u16, u16, s32, s32);           /* extern */
s32 method_0800A190__9FieldPlotb(s32, s32);         /* extern */
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(void *, void *, void *); /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
    u8 _padE[6];
    s32 unk14;
    u8 _pad18[4128];
    void *unk1038;
    u8 _pad103C[72];
    s32 unk1084;
    s32 unk1086;
} GenObj;
s32 func_0801C29C(GenObj *arg0, u16 *arg1) {
    GenObj *sp4;
    s32 temp_r1;
    s32 temp_r2_2;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r6;
    u16 temp_r2;
    u16 temp_r3;
    u32 var_r4;
    u8 *var_r2_2;
    u8 temp_r1_2;
    void *temp_r4;
    void *var_r1_2;
    void *var_r2;
    GenObj *var_r3;

    var_r6 = 0;
    sp4 = 0;
    sp4.unk4 = 0U;
    sp4.unk6 = 0U;
    sp4.unk8 = 0U;
    sp4.unkA = 0U;
    if ((func_0801C0F8(arg0, arg1, &sp4) << 0x18) == 0) {

    } else {
        var_r1 = 0;
        if (arg0->unk1038->unk8 == 0) {
            var_r1 = 1;
        }
        var_r6 = method_0800A190__9FieldPlotb(sp4, var_r1);
        if (((void (*)(void *,...))(arg0->unk0->unk14))(arg0) == ((u32) (*arg1 << 0x16) >> 0x16)) {
            temp_r8 = arg0->unk4;
            temp_r4 = arg0->unk1038 + 0x9DC;
            temp_r3 = sp4.unk8;
            temp_r2 = sp4.unkA;
            temp_r1 = temp_r2 + 1;
            var_r0 = 0;
            if (((s32) temp_r3 >= 0) && (temp_r1 >= 0) && ((s32) temp_r3 <= 0x2A) && (temp_r1 <= 0x18)) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                var_r1_2 = temp_r4 + ((temp_r3 + (temp_r1 * 0x2B)) * 4);
            } else {
                var_r1_2 = 0;
            }
            temp_r2_2 = temp_r2 - 1;
            var_r0_2 = 0;
            if (((s32) temp_r3 >= 0) && (temp_r2_2 >= 0) && ((s32) temp_r3 <= 0x2A) && (temp_r2_2 <= 0x18)) {
                var_r0_2 = 1;
            }
            if (var_r0_2 != 0) {
                var_r2 = temp_r4 + ((temp_r3 + (temp_r2_2 * 0x2B)) * 4);
            } else {
                var_r2 = 0;
            }
            func_080AA6D0(temp_r8, sp4.unk4, sp4.unk6, sp4, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r4 + ((temp_r3 + (temp_r2 * 0x2B)) * 4), var_r1_2, var_r2));
        }
        if (var_r6 == 3) {
            var_r4 = 0;
            var_r2_2 = (GenObj *)((u8 *)arg0 + 0x1081);
            var_r3 = arg0;
loop_25:
            temp_r1_2 = *var_r2_2;
            if ((temp_r1_2 << 0x1E) != 0) {
                var_r2_2 += 0xC;
                var_r3 += 0xC;
                var_r4 += 1;
                if (var_r4 <= 3U) {
                    goto loop_25;
                }
            } else {
                *var_r2_2 = (-4 & temp_r1_2) | 2;
                var_r3->unk1084 = (u16) sp4.unk4;
                var_r3->unk1086 = (u16) sp4.unk6;
            }
        }
    }
    return var_r6;
}
