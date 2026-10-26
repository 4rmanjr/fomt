s32 func_0803260C();                                  /* extern */
s32 func_0805E8F0(void *);                          /* extern */

typedef struct GenObj {
    void *unk0;
    u8 _pad4[52];
    s32 unk38;
    u8 _pad3C[143];
    s32 unkCB;
} GenObj;
void func_0802BFA0(GenObj *arg0) {
    s32 var_r1;
    s8 *var_r1_2;
    s8 var_r0;

    func_0803260C();
    var_r1 = 0;
    if (arg0->unk0->unk38 == 1) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        var_r1_2 = arg0 + 0xCB;
        if (arg0->unkCB == 0) {
            if ((s32) (func_0805E8F0(arg0 + 0xB4) << 0x1E) < 0) {
                var_r1_2 = arg0 + 0xC8;
                var_r0 = 1;
                goto block_7;
            }
        } else {
            var_r0 = 0;
block_7:
            *var_r1_2 = var_r0;
        }
    }
}
