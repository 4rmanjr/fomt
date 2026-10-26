typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
    u8 _pad38[33];
    s32 unk59;
} GenObj;
s32 func_0802BC48(GenObj *arg0) {
    s32 var_r1;
    u8 temp_r0;

    var_r1 = 0x192;
    temp_r0 = arg0->unk34;
    switch (temp_r0) {
    case 0:
        var_r1 = 0x152;
        if (arg0->unk59 == 0) {
            var_r1 = 0x192;
        }
        break;
    case 1:
    case 2:
        var_r1 = 0x19E;
        break;
    case 3:
        var_r1 = 0x146;
        break;
    case 4:
        var_r1 = 0x42;
        break;
    }
    return var_r1;
}
