typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
    u8 _padC[8];
    struct GenObj *unk14;
    u8 _pad18[12];
    s32 unk24;
    u8 _pad28[4112];
    void *unk1038;
    s32 unk103C;
    u8 _pad1040[9348];
    s32 unk34C4;
} GenObj;
void func_0801D948(GenObj *arg0) {
    void **var_r4;
    GenObj *temp_r2;
    void *temp_r5;

    arg0->unk103C = 0;
    if (arg0->unk1038->unk34C4 != 0) {
        arg0->((void (*)(void *,...))(unk8->unk14->unk24))();
        return;
    }
    var_r4 = (GenObj *)((u8 *)arg0 + 8);
    temp_r5 = (GenObj *)((u8 *)arg0 + 0x198);
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                ((void (*)(void *,...))(temp_r2->unk14->unk24))(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
}
