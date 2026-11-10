typedef struct GenObj {
    u8 _pad0[1573];
    u8 unk625;
    u8 unk626;
} GenObj;
u8 func_0809DFAC(GenObj *arg0) {
    u32 var_r1;
    u32 b;

    b = arg0->unk625;
    var_r1 = (b << 0x1A) >> 0x1F;
    if ((s32) (b << 0x19) < 0) {
        var_r1 += 1;
    }
    if ((b >> 7) != 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    b = arg0->unk626;
    if ((b << 0x1F) != 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (b << 0x1E) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (b << 0x1D) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (b << 0x1C) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (b << 0x1B) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (b << 0x1A) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    return (u8) var_r1;
}
