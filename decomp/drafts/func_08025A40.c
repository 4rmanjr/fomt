s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800EC4C(s32);                             /* extern */
s32 func_0800ECB0(s32);                             /* extern */
s32 func_08025944();                                /* extern */
s32 func_0802A510(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[48];
    s32 unk38;
    s32 unk3C;
} GenObj;
void func_08025A40(GenObj *arg0, u8 arg1) {
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    void *temp_r0;
    void *temp_r0_2;

    if ((func_08025944() << 0x18) != 0) {
        temp_r0 = (*arg0->unk0)->unk14C();
        var_r4 = temp_r0->unk0;
        temp_r6 = temp_r0->unk4;
        if (var_r4 != temp_r6) {
loop_2:
            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                var_r4 += 4;
                if (var_r4 == temp_r6) {
                    goto block_4;
                }
                goto loop_2;
            }
            var_r0 = *var_r4;
        } else {
block_4:
            var_r0 = *(temp_r6 - 4);
        }
        func_08008B6C(var_r0, 0xC7);
        arg0->unk3C = 0;
        return;
    }
    if (arg1 == 0) {
        var_r0_2 = func_0800EC4C(arg0->unk38);
    } else {
        var_r0_2 = func_0800ECB0(arg0->unk38);
    }
    if (var_r0_2 != 0) {
        arg0->unk3C = 0x15;
        (arg0 + 0x3C)->unk1 = 0x14;
        func_0802A510(arg0);
        temp_r0_2 = (*arg0->unk0)->unk14C();
        var_r4_2 = temp_r0_2->unk0;
        temp_r5 = temp_r0_2->unk4;
        if (var_r4_2 != temp_r5) {
loop_13:
            if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                var_r4_2 += 4;
                if (var_r4_2 == temp_r5) {
                    goto block_15;
                }
                goto loop_13;
            }
            var_r0_3 = *var_r4_2;
        } else {
block_15:
            var_r0_3 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0_3, 0xBC);
    }
}
