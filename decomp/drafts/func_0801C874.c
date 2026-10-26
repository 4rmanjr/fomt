s32 func_0801740C(s32);                             /* extern */
u32 func_0801C6EC(void *, s32, s32, s32);             /* extern */
s32 func_080AB68C(s32, s32, s32, s32);                /* extern */
s32 method_0800A78C__C9FieldPlot(s32);              /* extern */

s32 func_0801C874(void *arg0, s32 arg1, s32 arg2, ? arg3) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 var_r6;
    s32 var_r8;
    u32 var_sb;

    temp_r4 = arg0->unk1038 + 0x9DC + ((arg1 + (arg2 * 0x2B)) * 4);
    var_r6 = arg1;
    var_r8 = arg2;
    if ((method_0800A78C__C9FieldPlot(temp_r4) << 0x18) != 0) {
        temp_r0 = func_0801740C(temp_r4);
        switch (temp_r0) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            var_r6 -= 1;
            break;
        case 2:                                     /* switch 1 */
            var_r8 -= 1;
            break;
        case 3:                                     /* switch 1 */
            var_r6 -= 1;
            var_r8 -= 1;
            break;
        }
        var_sb = func_0801C6EC(arg0, var_r6, var_r8, arg3);
        temp_r5 = var_r6 + 1;
        func_0801C6EC(arg0, temp_r5, var_r8, arg3);
        temp_r4_2 = var_r8 + 1;
        func_0801C6EC(arg0, var_r6, temp_r4_2, arg3);
        func_0801C6EC(arg0, temp_r5, temp_r4_2, arg3);
    } else {
        var_sb = func_0801C6EC(arg0, var_r6, var_r8, arg3);
    }
    if (arg0->unk0->unk14(arg0) == 2) {
        switch (var_sb) {                           /* switch 2 */
        case 3:                                     /* switch 2 */
            func_080AB68C(arg0->unk1028, (var_r6 * 0x10) + 0x118, (var_r8 * 0x10) + 0xC0, 3);
            break;
        case 4:                                     /* switch 2 */
            func_080AB68C(arg0->unk1028, (var_r6 * 0x10) + 0x118, (var_r8 * 0x10) + 0xC0, 1);
            break;
        case 5:                                     /* switch 2 */
            func_080AB68C(arg0->unk1028, (var_r6 * 0x10) + 0x118, (var_r8 * 0x10) + 0xC0, 2);
            break;
        case 7:                                     /* switch 2 */
            func_080AB68C(arg0->unk1028, (var_r6 * 0x10) + 0x120, (var_r8 * 0x10) + 0xD0, 8);
            break;
        case 8:                                     /* switch 2 */
            func_080AB68C(arg0->unk1028, (var_r6 * 0x10) + 0x120, (var_r8 * 0x10) + 0xD0, 6);
            break;
        }
    }
    return 0;
}
