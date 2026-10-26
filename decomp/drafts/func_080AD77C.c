s32 __builtin_new(s32);                             /* extern */
void *func_080A4A00(s32, s32, u16, void *, s32, s32); /* extern */
s32 func_080AC5D0(s32 *, s16, s16);                   /* extern */

s32 func_080AD77C(void *arg0, void *arg1, u16 arg2) {
    u8 sp8;
s32 spC;
    s32 sp18;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r7;
    u8 temp_r8;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r4;

    arg0->unk0->unk34(&spC, arg0, (u32) (arg1->unk0 << 0x16) >> 0x16);
    temp_r8 = func_080AC5D0(&spC, (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)), (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2))) ^ 1;
    sp18.unk0 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2));
    sp18.unk2 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2));
    temp_r4 = arg0 + 0x102C;
    temp_r7 = arg0->unk0->unk64(arg0);
    temp_r4->unk4 = sp18;
    temp_r1 = arg0->unk102C;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk24->unk8(temp_r1, 3);
    }
    arg0->unk102C = 0;
    temp_r4->unk8 = temp_r8;
    if (temp_r8 != 0) {
        temp_r0 = __builtin_new(0x40);
        sp8 = 0;
        temp_r0_2 = func_080A4A00(temp_r0, temp_r7, arg2, arg0, 2, 3);
        temp_r1_2 = arg0->unk102C;
        if ((temp_r0_2 != temp_r1_2) && (temp_r1_2 != 0)) {
            temp_r1_2->unk24->unk8(temp_r1_2, 3);
        }
        arg0->unk102C = temp_r0_2;
        temp_r4->unk9 = 0x10;
        temp_r4->unkA = 0;
        return 0x10;
    }
    temp_r0_3 = __builtin_new(0x40);
    sp8 = temp_r8;
    temp_r0_4 = func_080A4A00(temp_r0_3, temp_r7, 0x1A9U, arg0, 2, 3);
    temp_r1_3 = arg0->unk102C;
    if ((temp_r0_4 != temp_r1_3) && (temp_r1_3 != 0)) {
        temp_r1_3->unk24->unk8(temp_r1_3, 3);
    }
    arg0->unk102C = temp_r0_4;
    return 0;
}
