typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[60];
    struct GenObj *unk4C;
} GenObj;
void func_080DE184(GenObj *arg0) {
    void **var_r4;
    GenObj *temp_r2;
    void *temp_r5;

    var_r4 = (GenObj *)((u8 *)arg0 + 0xC);
    temp_r5 = (arg0->unk8 * 4) + (GenObj *)((u8 *)arg0 + 0xC);
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                ((void (*)(void *,...))(temp_r2->unk4C->unkC))(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
}
