typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    s32 unk8;
    u8 _padC[280];
    s32 unk124;
} GenObj;
s32 func_0809B084(GenObj *arg0) {
    s32 *var_r1;
    GenObj *temp_r1;

    temp_r1 = (GenObj *)((u8 *)arg0 + 8) + (((arg0->unk8 - 1) * 8) + 4);
    var_r1 = (GenObj *)((u8 *)temp_r1 + 4);
    if ((u32) arg0->unk124 >= (u32) temp_r1->unk4) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0x124);
    }
    return *var_r1;
}
