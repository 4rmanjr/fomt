s32 func_080D6EEC(void *);                            /* extern */
u32 func_080D74F0(u8 *, u32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    u8 _pad8[56];
    s32 unk40;
} GenObj;
s32 func_080D7568(GenObj *arg0, u32 arg1) {
    s32 sp0;
    s32 var_r0;
    s32 var_r3;
    u32 temp_r0;
    u32 var_r1;
    u8 *var_r4;
    u8 temp_r5;

    if (arg1 <= 8U) {
        var_r3 = 0;
        var_r4 = arg0 + 4;
loop_2:
        temp_r5 = *var_r4;
        if (temp_r5 == 0) {
            sp0 = var_r3;
            temp_r0 = func_080D74F0(var_r4, arg1);
            var_r0 = 0;
            if (temp_r0 <= 0xFFU) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                arg0->unk1 = temp_r5;
                var_r1 = 0;
                if (arg0->unk4 != 0) {
                    var_r1 = (u32) (0 - arg0->unk40) >> 0x1F;
                }
                arg0->unk0 = (s8) var_r1;
                return (var_r3 << 8) | temp_r0;
            }
            goto block_9;
        }
block_9:
        var_r4 += 0x3C;
        var_r3 += 1;
        if (var_r3 > 1) {
            goto block_14;
        }
        goto loop_2;
    }
    if ((arg1 == 9) && (arg0->unk1 != 0)) {
        func_080D6EEC(arg0);
        return 0;
    }
block_14:
    return 0x200;
}
