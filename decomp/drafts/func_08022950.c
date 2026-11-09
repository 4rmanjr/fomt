typedef struct Obj22950 {
    u8 _pad[0x24];
    s32 unk24;
    u8 _p2[2];
    u8 unk2A;
} Obj22950;
typedef struct GenObj {
    u8 _pad0[0x34];
    Obj22950 *unk34;
} GenObj;
u8 func_08022950(GenObj *arg0) {
    s32 temp_r1;
    u8 var_r1;
    s32 v;
    Obj22950 *temp_r0;

    temp_r0 = arg0->unk34;
    temp_r1 = temp_r0->unk24;
    switch (temp_r1) {
    case 0:
        return temp_r0->unk2A;
    case 1:
        {
            v = 0x7F & temp_r0->unk2A;
            var_r1 = 1;
            if (v != 0) {
                var_r1 = 4;
            }
            return var_r1;
        }
    default:
        return 0U;
    }
}
