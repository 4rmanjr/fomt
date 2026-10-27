typedef struct GenObj {
    u8 _pad0[2];
    u16 unk2;
} GenObj;
s32 func_08011498(GenObj *arg0, u32 arg1) {
    u32 var_r1;
    u16 temp_r2;
    u32 mask;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk2;
    if ((u32) ((u32) (temp_r2 << 0x17) >> 0x19) < var_r1) {
        var_r1 &= 0x7F;
        var_r1 *= 4;
        mask = 0xFFFFFE03;
        mask &= temp_r2;
        arg0->unk2 = var_r1 | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE opencode: b via andeq/muleq (r1) + mask-var andeq (dst r0): ands r0,r2 + orrs r0,r1. */
