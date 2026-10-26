typedef struct GenObj {
    u8 _pad0[7];
    s32 unk7;
    s32 unk8;
    s32 unk9;
    s32 unkA;
    s32 unkB;
    s32 unkC;
} GenObj;
u32 func_080A1EF4(GenObj *arg0, u32 arg1) {
    u32 temp_r0;
    u32 var_r0;
    u32 var_r1;
    u8 var_r0_2;

    var_r1 = 0;
    if (arg1 > 0x5FU) {
        temp_r0 = arg1 - 0x60;
        switch (temp_r0) {
        case 0:
            var_r0 = arg0->unk7 << 0x1D;
block_19:
            var_r1 = var_r0 >> 0x1D;
            break;
        case 1:
            var_r0 = arg0->unk7 << 0x1A;
            goto block_19;
        case 2:
            var_r1 = ((arg0->unk8 & 1) * 4) | ((u8) arg0->unk7 >> 6);
            break;
        case 3:
            var_r0 = arg0->unk8 << 0x1C;
            goto block_19;
        case 4:
            var_r0 = arg0->unk8 << 0x19;
            goto block_19;
        case 5:
            var_r0 = (u16) arg0->unk8 << 0x16;
            goto block_19;
        case 6:
            var_r0_2 = arg0->unk9;
block_18:
            var_r0 = var_r0_2 << 0x1B;
            goto block_19;
        case 7:
            var_r1 = (u8) arg0->unk9 >> 5;
            break;
        case 8:
            var_r0 = arg0->unkA << 0x1D;
            goto block_19;
        case 9:
            var_r0 = arg0->unkA << 0x1A;
            goto block_19;
        case 10:
            var_r0 = (u16) arg0->unkA << 0x17;
            goto block_19;
        case 11:
            var_r0 = arg0->unkB << 0x1C;
            goto block_19;
        case 12:
            var_r0 = arg0->unkB << 0x19;
            goto block_19;
        case 13:
            var_r1 = ((arg0->unkC & 3) * 2) | ((u8) arg0->unkB >> 7);
            break;
        case 14:
            var_r0_2 = arg0->unkC;
            goto block_18;
        }
    }
    return var_r1;
}
