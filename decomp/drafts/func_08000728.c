extern u16 gUnk_03000400;

void func_08000728(u16 arg1) {
    s32 var_r2;
    u16 temp_r3;

    temp_r3 = arg1;
    switch (temp_r3) {                              /* irregular */
    case 0x1:
        var_r2 = 1;
block_26:
        gUnk_03000400 |= var_r2;
        return;
    case 0x2:
        var_r2 = 2;
        goto block_26;
    case 0x100:
    case 0x200:
        gUnk_03000400 |= temp_r3;
        return;
    case 0x4:
        var_r2 = 4;
        goto block_26;
    case 0x20:
        var_r2 = 0x20;
        goto block_26;
    case 0x8:
        var_r2 = 8;
        goto block_26;
    case 0x10:
        var_r2 = 0x10;
        goto block_26;
    case 0x40:
        var_r2 = 0x40;
        goto block_26;
    case 0x80:
        var_r2 = 0x80;
        goto block_26;
    }
}
