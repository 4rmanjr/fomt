s32 func_0805E860(s32);                               /* extern */

void func_08038398(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    u16 temp_r1;
    void *temp_r0;
    void *temp_r4;

    var_r3 = 0x15;
    if ((u32) (arg1 + 0xFFFFFCC8) > 0x3DU) {

    } else {
        switch (arg1) {
        case -4294966468:
            var_r3 = 0x19;
            break;
        case -4294966464:
            var_r3 = 0x1D;
            break;
        case -4294966460:
            var_r3 = 0x21;
            break;
        case -4294966456:
            var_r3 = 0x25;
            break;
        case -4294966452:
            var_r3 = 0x29;
            break;
        case -4294966411:
            var_r3 = 0x2D;
            break;
        }
    }
    temp_r1 = var_r3 + arg2;
    if (temp_r1 != arg0->unk28) {
        temp_r4 = arg0->unk10;
        if (temp_r4 != 0) {
            func_0805E860(temp_r4 + 0x30);
            temp_r0 = temp_r4 + 0x44;
            temp_r4->unk44 = 1;
            temp_r0->unk2 = 0;
            (temp_r0 + 2)->unk1 = 1;
        }
        arg0->unk28 = temp_r1;
    }
}
