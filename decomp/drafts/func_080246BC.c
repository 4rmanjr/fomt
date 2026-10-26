s32 GetId__C4Tool(s32);                             /* extern */

u32 func_080246BC(u32 arg0, s32 arg1) {
    u32 temp_r0;
    u32 var_r0;
    u32 var_r4;

    var_r4 = arg0;
    temp_r0 = GetId__C4Tool(arg1) - 0x20;
    switch (temp_r0) {
    case 0:
        var_r0 = 0;
block_9:
        if (var_r0 > var_r4) {
            var_r4 = var_r0;
        }
        break;
    case 1:
        var_r0 = 1;
        goto block_9;
    case 2:
        var_r0 = 2;
        goto block_9;
    case 3:
        var_r0 = 3;
        goto block_9;
    case 4:
        var_r0 = 4;
        goto block_9;
    case 5:
    case 6:
        var_r0 = 5;
        goto block_9;
    case 7:
        var_r0 = 6;
        goto block_9;
    }
    return var_r4;
}
