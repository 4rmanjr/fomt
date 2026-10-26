typedef struct GenObj {
    u8 _pad0[128];
    s32 unk80;
} GenObj;
void func_080B97FC(GenObj *arg0, s32 arg1) {
    s32 *var_r1;
    s32 var_r0;

    if ((arg1 << 0x18) != 0) {
        arg0->unk80 = 4;
        var_r1 = arg0 + 0x80 + 0x40;
        var_r0 = 2;
    } else {
        arg0->unk80 = 2;
        var_r1 = arg0 + 0x80 + 0x40;
        var_r0 = 4;
    }
    *var_r1 = var_r0;
}
