typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[72];
    s32 unk4C;
    u8 _pad50[360];
    s32 unk1B8;
    s32 unk1BB;
} GenObj;
s32 func_080E3874(GenObj *arg0) {
    s32 var_r1;

    if (arg0->unk1B8 != 0) {
        if (arg0->unk1BB != 0) {
            return 0;
        }
        return 1;
    }
    var_r1 = 0;
    if (((void (*)(void *,...))(arg0->unk0->unk4C))(arg0) == 0) {
        var_r1 = 1;
    }
    return var_r1;
}
