s32 func_0809A58C(s32 *);                               /* extern */
extern u16 gUnk_081010E8;

u16 func_080977A0(void *arg2) {
s32 sp0;
    s32 var_r3;
    u16 *var_r1;
    u16 *var_r2;
    u16 temp_r0;

    func_0809A58C(&sp0);
    arg2->unk0 = (s32) sp0.unk0;
    arg2->unk4 = (s32) sp0.unk4;
    arg2->unk8 = (s32) sp0.unk8;
    arg2->unkC = (s32) sp0.unkC;
    (arg2 + 0xC)->unk4 = (s32) (&sp0 + 0xC)->unk4;
    temp_r0 = (u16) arg2->unk0;
    if (temp_r0 == 0) {
        arg2->unk2 = temp_r0;
        arg2->unk4 = temp_r0;
        var_r3 = 0;
        var_r2 = &gUnk_081010E8 + 2;
        var_r1 = &gUnk_081010E8;
loop_2:
        if (*var_r1 & arg2->unk6) {
            arg2->unk0 = (u16) *var_r2;
        } else {
            var_r2 += 4;
            var_r1 += 4;
            var_r3 += 1;
            if (var_r3 <= 7) {
                goto loop_2;
            }
        }
        if ((u16) arg2->unk0 == 0) {
            arg2->unk0 = (u16) gUnk_081010E8.unk22;
        }
    }
    return (u16) arg2->unk0;
}
