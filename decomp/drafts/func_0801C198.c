u32 func_0809D8A0(s32);                             /* extern */
s32 func_0809D8A4(s32);                             /* extern */
s32 func_0809D8B8(s32);                             /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    u8 _padA[4142];
    s32 unk1038;
} GenObj;
s32 func_0801C198(GenObj *arg0, GenObj *arg1, GenObj *arg2) {
    s32 sp0;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_sb;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r2;

    var_sb = 0;
    if ((u32) (((u32) (arg1->unk0 << 0x16) >> 0x16) - 0x34) <= 0x1FFU) {
        temp_r6 = arg0->unk1038 + 0x2E58;
        var_r0 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        temp_r5 = var_r0 >> 3;
        var_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
        if ((s32) var_r0_2 < 0) {
            var_r0_2 += 7;
        }
        temp_r4 = var_r0_2 >> 3;
        temp_r0 = func_0809D8A0(temp_r6);
        switch (temp_r0) {
        case 1:
            break;
        case 3:
            break;
        default:
        case 0:
        case 2:
        case 4:
            break;
        }
        if (((u32) temp_r5 >= 2U) && ((u32) temp_r4 >= 7U)) {
            sp0 = 7;
            if (((u32) ((func_0809D8A4(temp_r6) * 2) + 2) > (u32) temp_r5) && ((u32) (sp0 + (func_0809D8B8(temp_r6) * 2)) > (u32) temp_r4)) {
                temp_r2 = (u32) (temp_r5 - 2) >> 1;
                temp_r1 = (u32) (temp_r4 - sp0) >> 1;
                arg2->unk0 = (s16) ((temp_r2 * 2) + 2);
                arg2->unk2 = (s16) (sp0 + (temp_r1 * 2));
                arg2->unk4 = (s16) temp_r2;
                arg2->unk6 = (s16) temp_r1;
                var_sb = 1;
            }
        }
    }
    return var_sb;
}
