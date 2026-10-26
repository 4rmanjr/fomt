typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    s32 unk8;
    u8 _padC[240];
    s32 unkFC;
    u8 _pad100[32];
    s32 unk120;
    u8 _pad124[4];
    s32 unk128;
} GenObj;
void *func_080D6B40(GenObj *arg0, GenObj *arg1) {
    s32 temp_r7;
    s32 temp_r7_2;
    u8 temp_r3;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_2;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r3;
    GenObj *var_r3_2;

    arg0->unk0 = (s32) arg1->unk0;
    temp_r3 = arg1->unk4;
    arg0->unk4 = (u8) ((((-2 & arg0->unk4) | ((u32) (temp_r3 << 0x1F) >> 0x1F)) & ~2) | (2 & temp_r3));
    arg0->unk8 = 0;
    temp_r7 = arg1->unk8;
    temp_r1 = (GenObj *)((u8 *)arg1 + 0xC);
    temp_r4 = (temp_r7 * 8) + temp_r1;
    var_r2 = temp_r1;
    var_r3 = (GenObj *)((u8 *)arg0 + 0xC);
    if (var_r2 != temp_r4) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
            }
            var_r2 += 8;
            var_r3 += 8;
        } while (var_r2 != temp_r4);
    }
    arg0->unk8 = temp_r7;
    arg0->unkFC = 0;
    temp_r7_2 = arg1->unkFC;
    temp_r1_2 = (GenObj *)((u8 *)arg1 + 0x100);
    temp_r4_2 = (temp_r7_2 * 8) + temp_r1_2;
    var_r2_2 = temp_r1_2;
    var_r3_2 = (GenObj *)((u8 *)arg0 + 0x100);
    if (var_r2_2 != temp_r4_2) {
        do {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) var_r2_2->unk0;
                var_r3_2->unk4 = (s32) var_r2_2->unk4;
            }
            var_r2_2 += 8;
            var_r3_2 += 8;
        } while (var_r2_2 != temp_r4_2);
    }
    arg0->unkFC = temp_r7_2;
    arg0->unk120 = (s32) arg1->unk120;
    ((GenObj *)((u8 *)arg0 + 0x120))->unk4 = (s32) ((GenObj *)((u8 *)arg1 + 0x120))->unk4;
    arg0->unk128 = (s32) arg1->unk128;
    ((GenObj *)((u8 *)arg0 + 0x128))->unk4 = (s32) ((GenObj *)((u8 *)arg1 + 0x128))->unk4;
    return arg0;
}
