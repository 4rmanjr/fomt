typedef struct GenObj {
    u8 _pad0[3];
    s32 unk3;
} GenObj;
void *func_080A0A04(GenObj *arg0) {
    void *var_r2;

    var_r2 = 0;
    if ((s32) (arg0->unk3 << 0x1E) < 0) {
        var_r2 = arg0 + 4;
    }
    return var_r2;
}
