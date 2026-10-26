typedef struct GenObj {
    s32 unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[56];
    struct GenObj *unk4C;
} GenObj;
void func_080DE134(GenObj *arg0, GenObj *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_sb;
    void **var_r5;
    GenObj *temp_r1;
    void *temp_r6;

    temp_sb = *arg0->unk0;
    temp_r8 = arg1->unk8;
    temp_r7 = arg1->unk0;
    var_r5 = (GenObj *)((u8 *)arg0 + 0xC);
    temp_r6 = (arg0->unk8 * 4) + (GenObj *)((u8 *)arg0 + 0xC);
    if (var_r5 != temp_r6) {
        do {
            temp_r1 = *var_r5;
            if (temp_r1 != 0) {
                ((void (*)(void *,...))(temp_r1->unk4C->unk10))(temp_r1, temp_sb, temp_r8, temp_r7);
            }
            var_r5 += 4;
        } while (var_r5 != temp_r6);
    }
}
