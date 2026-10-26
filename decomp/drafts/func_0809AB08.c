s32 func_0809A58C(s32 *);                               /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[3];
    s32 unk13;
    u8 _pad17[2543];
    s32 unkA06;
} GenObj;
void *func_0809AB08(GenObj *arg0, GenObj *arg1, s32 arg2) {
s32 sp0;
GenObj sp14;
    s32 var_r2;
    s32 var_r6;
    GenObj *var_r3;

    sp0 = 0;
    var_r6 = 0;
    var_r2 = 0;
    if ((s32) arg1->unkA06 > 0) {
        var_r3 = arg1;
loop_2:
        if (((u32) var_r3->unk0 <= 0xABU) && ((s32) (var_r3->unk13 << 0x1B) < 0)) {
            if (var_r6 == arg2) {
                func_0809A58C(&sp14);
                sp0 = (s32) sp14;
                sp0.unk4 = (s32) sp14.unk4;
                sp0.unk8 = (s32) sp14.unk8;
                sp0.unkC = (s32) sp14.unkC;
                (&(GenObj *)((u8 *)sp0 + 0xC))->unk4 = (s32) (&(GenObj *)((u8 *)sp14 + 0xC))->unk4;
            } else {
                var_r6 += 1;
                goto block_7;
            }
        } else {
block_7:
            var_r3 += 0x14;
            var_r2 += 1;
            if (var_r2 < (s32) arg1->unkA06) {
                goto loop_2;
            }
        }
    }
    arg0->unk0 = (s32) sp0;
    arg0->unk4 = (s32) sp0.unk4;
    arg0->unk8 = (s32) sp0.unk8;
    arg0->unkC = (s32) sp0.unkC;
    ((GenObj *)((u8 *)arg0 + 0xC))->unk4 = (s32) (&(GenObj *)((u8 *)sp0 + 0xC))->unk4;
    return arg0;
}
