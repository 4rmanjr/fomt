typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[68];
    s32 unk5C;
    u8 _pad60[28];
    s32 unk7C;
} GenObj;
void func_08016F60(GenObj *arg0) {
    u32 var_r5;
    void ***temp_r6;
    void **temp_r0;
    void *temp_r0_2;

    var_r5 = 0x2E;
    temp_r6 = arg0->unk4 + 0xA8;
    do {
        temp_r0 = *temp_r6;
        temp_r0_2 = (*temp_r0)->unk40(temp_r0, var_r5);
        if ((temp_r0_2 != 0) && ((((void (*)(void *,...))(temp_r0_2->unk14->unk5C))(temp_r0_2) << 0x18) != 0)) {
            ((void (*)(void *,...))(temp_r0_2->unk14->unk7C))(temp_r0_2);
        }
        var_r5 += 1;
    } while (var_r5 <= 0x45U);
}
