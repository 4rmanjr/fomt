s32 func_0805E8F0(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[71];
    s32 unk47;
} GenObj;
void func_080DD3D4(GenObj *arg0) {
    s8 *var_r1;
    s8 var_r0;

    var_r1 = arg0 + 0x47;
    if (arg0->unk47 == 0) {
        if ((s32) (func_0805E8F0(arg0 + 0x30) << 0x1E) < 0) {
            var_r1 = arg0 + 0x44;
            var_r0 = 1;
            goto block_4;
        }
    } else {
        var_r0 = 0;
block_4:
        *var_r1 = var_r0;
    }
}
