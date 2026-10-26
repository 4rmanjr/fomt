u16 func_080074C0(void *, s32);                     /* extern */
u8 *func_08008920(s32);                             /* extern */

void func_0805C63C(s32 arg0, void *arg1, s32 arg2, void *arg3, s32 arg4) {
    u32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_r2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r3;
    s8 var_r5;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r2_2;
    u32 var_r0;
    u32 var_r4;
    u32 var_r6;
    u8 *temp_r0_3;
    u8 temp_r2_4;
    u8 temp_r7;
    void *temp_r0_2;
    void *temp_r1_2;
    void *var_sb;

    sp8 = arg0;
    var_sb = arg1;
    temp_r2 = (arg2 * 8) + var_sb;
    spC = temp_r2;
    if (var_sb == temp_r2) {
        return;
    }
loop_2:
    sp0 = var_sb->unk0;
    sp4 = var_sb->unk4;
    var_r3 = (s32) (sp0 << 7) >> 0x17;
    var_r5 = sp0.unk0;
    temp_r0 = (u32) (sp0 << 0x10) >> 0x1E;
    temp_r1 = sp0 >> 0x1E;
    if (temp_r0 == 0) {
        var_r6 = 8 << temp_r1;
        var_r4 = var_r6;
    } else {
        temp_r2_2 = 8 << (((u32) (temp_r1 + 1) >> 1) + 1);
        var_r0 = 8;
        if (temp_r1 != 1) {
            var_r0 = temp_r2_2 >> 1;
        }
        if (temp_r0 != 1) {
            var_r6 = temp_r2_2;
            var_r4 = var_r0;
        } else {
            var_r6 = var_r0;
            var_r4 = temp_r2_2;
        }
    }
    temp_r7 = arg3->unk10;
    if (1 & temp_r7) {
        var_r3 = 0 - (var_r3 + var_r4);
        sp0 = (0xEFFFFFFF & sp0) | (((((u32) (sp0 * 8) >> 0x1F) ^ 1) & 1) << 0x1C);
    }
    if (2 & temp_r7) {
        var_r5 = 0 - (var_r5 + var_r6);
        sp0 = (0xDFFFFFFF & sp0) | (((((u32) (sp0 * 4) >> 0x1F) ^ 1) & 1) << 0x1D);
    }
    temp_r3 = var_r3 + arg3->unk0;
    temp_r5 = var_r5 + arg3->unk2;
    if (((s32) (temp_r3 + var_r4) > 0) && (temp_r3 <= 0xEF) && ((s32) (temp_r5 + var_r6) > 0) && (temp_r5 <= 0x9F)) {
        sp0 = (((sp0 & 0xFE00FFFF) | ((temp_r3 & 0x1FF) << 0x10)) & 0xFFFFFF00) | (u8) temp_r5;
        temp_r0_2 = (((u32) (sp4 << 0x10) >> 0x1C) * 8) + arg4 + 8;
        temp_r2_3 = (sp4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_2, temp_r0_2->unk4) & 0xF) << 0xC);
        sp4 = (((0xFFFFFC00 & temp_r2_3) | ((u32) ((((u32) (temp_r2_3 << 0x16) >> 0x16) + arg3->unk6) << 0x16) >> 0x16)) & 0xFFFFF3FF) | ((arg3->unk8 & 3) << 0xA);
        sp0 = (((((sp0 & 0xFFFFF3FF) | ((arg3->unkC & 3) << 0xA)) & 0xFFFFFCFF) | ((arg3->unk14 & 3) << 8)) & 0xFFFFEFFF) | ((arg3->unk18 & 1) << 0xC);
        temp_r0_3 = func_08008920(sp8);
        temp_r2_4 = *temp_r0_3;
        if ((u32) temp_r2_4 <= 0x7FU) {
            temp_r1_2 = temp_r0_3 + ((temp_r2_4 * 8) + 4);
            temp_r1_2->unk0 = sp0;
            temp_r1_2->unk4 = (u16) sp0.unk4;
            *temp_r0_3 = temp_r2_4 + 1;
        }
    }
    var_sb += 8;
    if (var_sb != spC) {
        goto loop_2;
    }
}
