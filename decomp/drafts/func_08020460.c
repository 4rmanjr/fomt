typedef struct Sub_08020460 { u8 _pad20[0x20]; s32 unk20; } Sub_08020460;

typedef struct GenObj {
    u8 _pad0[0x34];
    Sub_08020460 *unk34;
} GenObj;
s32 func_08020460(GenObj *arg0) {
    s32 var_r1;

    var_r1 = 0;
    if (arg0->unk34->unk20 == 5) {
        var_r1 = 1;
    }
    return var_r1;
}
