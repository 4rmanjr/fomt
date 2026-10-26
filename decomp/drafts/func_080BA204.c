typedef struct GenObj {
    u8 _pad0[28];
    s32 unk1C;
    s32 unk20;
    u8 _pad24[6];
    s32 unk2A;
} GenObj;
void func_080BA204(GenObj *arg0) {
    u16 var_r0;
    u8 temp_r0;

    temp_r0 = arg0->unk1C;
    switch ((u32) temp_r0) {                        /* irregular */
    case 0x9:
        var_r0 = arg0->unk20 + 0xFFFFFCB0;
block_15:
        arg0->unk2A = var_r0;
        break;
    case 0x13:
        var_r0 = arg0->unk20 + 0xFFFFFA00;
        goto block_15;
    case 0x1D:
        var_r0 = arg0->unk20 + 0xFFFFF800;
        goto block_15;
    case 0x27:
        var_r0 = arg0->unk20 + 0xFFFFFA00;
        goto block_15;
    case 0x31:
        var_r0 = arg0->unk20 + 0xFFFFFCB0;
        goto block_15;
    default:
        var_r0 = arg0->unk20;
        goto block_15;
    }
}
