typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    struct GenObj *unk9;
    struct GenObj *unkA;
    u8 _padE[146];
    s32 unkA0;
    u8 _padA4[2928];
    s32 unkC14;
} GenObj;
u8 func_080AC96C(GenObj *arg0, s8 arg1) {
    u32 temp_r7;
    u8 temp_r3;
    void *temp_r0;
    GenObj *var_r1;

    temp_r0 = arg0 + (arg1 * 0x84);
    temp_r7 = (u32) (~temp_r0->unkA0 << 0x18) >> 0x1F;
    if (temp_r7 != 0) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xB78) + ((s8) temp_r0->unkA0 * 0xC);
        goto block_2;
    }
    temp_r3 = arg0->unkC14;
    if ((u32) temp_r3 < 0xDU) {
        arg0->unkC14 = (u8) (temp_r3 + 1);
        var_r1 = (GenObj *)((u8 *)arg0 + 0xB78) + (temp_r3 * 0xC);
        if (var_r1->unk9 != arg1) {
            var_r1->unk9 = arg1;
            var_r1->unkA = (s8) temp_r7;
        }
        if ((s8) temp_r0->unkA0 != temp_r3) {
            temp_r0->unkA0 = temp_r3;
        }
block_2:
        return var_r1->unk8;
    }
    return -1U;
}
