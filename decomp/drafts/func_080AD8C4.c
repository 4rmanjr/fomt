s32 func_080AB68C(s32, s32, s32, u32);                /* extern */

void func_080AD8C4(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 var_r2;
    s32 var_r3;

    var_r2 = 0;
    var_r3 = 0;
    switch (arg3) {
    case 0:
    case 1:
    case 2:
    case 3:
        var_r2 = 8;
        var_r3 = 0x10;
        break;
    case 4:
        var_r2 = 8;
        var_r3 = 0xB;
        break;
    case 6:
    case 7:
    case 8:
        var_r2 = 0x10;
        var_r3 = 0x20;
        break;
    }
    func_080AB68C(arg0->unk1028, (arg1 * 0x10) + var_r2, (arg2 * 0x10) + (var_r3 + 0x38), arg3);
}
