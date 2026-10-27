s32 GetId__C4Tool(s32);                             /* extern */

u32 func_080246BC(u32 arg0, s32 arg1) {
    u32 var_r4;
    u32 var_r0;

    var_r4 = arg0;
    switch (GetId__C4Tool(arg1) - 0x20) {
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    case 3:
        var_r0 = 3;
        break;
    case 4:
        var_r0 = 4;
        break;
    case 5:
    case 6:
        var_r0 = 5;
        break;
    case 7:
        var_r0 = 6;
        break;
    default:
        return var_r4;
    }
    if (var_r0 > var_r4) {
        var_r4 = var_r0;
    }
    return var_r4;
}

/* ATTEMPT-NOTE opencode: switch polos (jump-table) bukan compare-chain; default return. */
