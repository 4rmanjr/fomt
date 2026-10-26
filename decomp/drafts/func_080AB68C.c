s32 func_08007B54(void *, s32);                     /* extern */
s32 func_08007C28(void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk1;
    s32 unk2;
    s32 unk4;
    s32 unk5;
    s32 unk6;
    s32 unk8;
} GenObj;
void func_080AB68C(void **arg0, s16 arg1, s16 arg2, s8 arg3) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r1;
    s8 *var_sb;
    s8 var_r2;
    u32 var_r4;
    u32 var_r6;
    void *temp_r3;
    void *temp_r5;
    GenObj *temp_r5_2;
    GenObj *temp_r7;
    void *var_r4_2;

    var_r2 = arg3;
    temp_r7 = *arg0;
    var_r4 = 0;
loop_1:
    temp_r3 = temp_r7 + ((var_r4 * 8) + 0x368);
    if (temp_r3->unk4 == 0) {
        temp_r3->unk0 = arg1;
        temp_r3->unk2 = arg2;
        temp_r3->unk4 = 1U;
        temp_r3->unk5 = 0xC;
        temp_r3->unk6 = var_r2;
        var_sb = (GenObj *)((u8 *)temp_r7 + 0x364);
        if (((var_r2 * 0x54) + temp_r7)->unk8 == 0) {
            switch (var_r2) {
            case 1:
            case 2:
                var_r1 = 2;
                break;
            default:
                var_r1 = 3;
                break;
            case 6:
            case 7:
                var_r1 = 5;
                break;
            case 8:
                var_r1 = 4;
                break;
            case 9:
                var_r1 = 6;
                break;
            }
            temp_r5 = (0x54 * var_r2) + temp_r7;
            temp_r5_2 = (GenObj *)((u8 *)temp_r5 + 8);
            var_r6 = 0;
            var_sb = (GenObj *)((u8 *)temp_r7 + 0x364);
            var_r4_2 = (GenObj *)((u8 *)temp_r5_2 + 0x44);
loop_11:
            sp0 = (s32) var_r2;
            func_08007C28(var_r4_2, var_r4_2->unk4);
            temp_r0 = func_08007B54(var_r4_2, var_r1);
            var_r4_2->unk4 = temp_r0;
            if ((s32) ((0 - temp_r0) | temp_r0) < 0) {
                var_r4_2 += 8;
                var_r6 += 1;
                if (var_r6 > 1U) {
                    temp_r5->unk8 = 1;
                    temp_r5_2->unk1 = 1;
                } else {
                    goto loop_11;
                }
            }
            temp_r7->unk5 = 1;
        }
        temp_r7->unk6 = 1;
        *var_sb = var_r2;
        return;
    }
    var_r4 += 1;
    if (var_r4 > 0xFU) {
        return;
    }
    goto loop_1;
}
