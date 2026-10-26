typedef struct GenObj {
    u8 _pad0[36];
    struct GenObj *unk24;
    u8 _pad28[2];
    struct GenObj *unk2A;
    u8 _pad2E[6];
    s32 unk34;
} GenObj;
u8 func_08022950(GenObj *arg0) {
    s32 temp_r1;
    u8 var_r1;
    GenObj *temp_r0;

    temp_r0 = arg0->unk34;
    temp_r1 = temp_r0->unk24;
    switch (temp_r1) {                              /* irregular */
    case 0:
        return temp_r0->unk2A;
    case 1:
        var_r1 = 1;
        if (0x7F & temp_r0->unk2A) {
            var_r1 = 4;
        }
        return var_r1;
    default:
        return 0U;
    }
}
