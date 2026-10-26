s32 func_08008B6C(s32);                               /* extern */
s32 func_08008B88(s32);                               /* extern */
s32 func_08008BB0(s32);                               /* extern */
s32 func_08008CD0(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[200];
    struct GenObj *unkD0;
} GenObj;
void func_08012464(GenObj *arg0, s32 arg1, u16 arg2) {
    s32 *var_r4;
    s32 temp_r5;
    s32 var_r3;
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    var_r4 = temp_r0->unkD0;
    temp_r5 = ((GenObj *)((u8 *)temp_r0 + 0xD0))->unk4;
    if (var_r4 != temp_r5) {
loop_1:
        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
            var_r4 += 4;
            if (var_r4 == temp_r5) {
                goto block_3;
            }
            goto loop_1;
        }
        var_r3 = *var_r4;
    } else {
block_3:
        var_r3 = *(temp_r5 - 4);
    }
    switch (arg1) {                                 /* irregular */
    case 0:
        func_08008B6C(var_r3);
        return;
    case 1:
        func_08008B88(var_r3);
        return;
    case 2:
        func_08008BB0(var_r3);
        return;
    }
}
