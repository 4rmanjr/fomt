typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[244];
    s32 unkFC;
    u8 _pad100[44];
    s32 unk12C;
} GenObj;
s32 func_0809B0D8(GenObj *arg0) {
    s32 *var_r1;
    GenObj *temp_r1;

    temp_r1 = (GenObj *)((u8 *)arg0 + 0xFC) + (((arg0->unkFC - 1) * 8) + 4);
    var_r1 = (GenObj *)((u8 *)temp_r1 + 4);
    if ((u32) arg0->unk12C >= (u32) temp_r1->unk4) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0x12C);
    }
    return *var_r1;
}
