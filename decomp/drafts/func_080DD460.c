s32 func_0803A350(void *, s32);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_080AB788(s32);                             /* extern */
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[71];
    s32 unk47;
    u8 _pad4B[21];
    s32 unk60;
    s32 unk62;
} GenObj;
void func_080DD460(GenObj *arg0) {
    s8 *var_r1;
    s8 temp_r0;
    s8 var_r0;
    s8 var_r0_2;
    u16 temp_r0_2;

    temp_r0 = arg0->unk62;
    switch (temp_r0) {                              /* irregular */
    case 0:
        if ((rand() >> 4) & 3) {
            func_0803A350(arg0, 0xCF);
        }
        arg0->unk60 = (u16) ((func_080AB788(2) + 6) * 0x3C);
        var_r0 = 1;
block_8:
        arg0->unk62 = var_r0;
        break;
    case 1:
        temp_r0_2 = arg0->unk60 - 1;
        arg0->unk60 = temp_r0_2;
        if ((s32) (temp_r0_2 << 0x10) < 0) {
            var_r0 = 0;
            goto block_8;
        }
        break;
    }
    var_r1 = arg0 + 0x47;
    if (arg0->unk47 == 0) {
        if ((s32) (func_0805E8F0(arg0 + 0x30) << 0x1E) < 0) {
            var_r1 = arg0 + 0x44;
            var_r0_2 = 1;
            goto block_13;
        }
    } else {
        var_r0_2 = 0;
block_13:
        *var_r1 = var_r0_2;
    }
}
