s32 func_080088D4(void *);                          /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[56];
    s32 unk38;
    s32 unk39;
    s32 unk3A;
    u8 _pad3E[1036];
    s32 unk44A;
} GenObj;
s32 func_0806E164(GenObj *arg0) {
    s32 var_r5;
    s32 var_r7;

    var_r7 = 0;
    var_r5 = 0;
    if ((func_080088D4() & 1) || (func_080088D4(arg0) & 8)) {
        var_r5 = 1;
    }
    if (var_r5 != 0) {
        func_08008B6C(arg0 + 0x14, 0x6A);
        if (arg0->unk39 == 0) {
            arg0->unk3A = (u8) arg0->unk38;
            arg0->unk39 = (s8) (((s32) (arg0->unk44A - 1) / 7) + 1);
            arg0->unk38 = (u8) ((((s32) (arg0->unk44A - 1) % 7) * 2) + 1);
        } else {
            var_r7 = 1;
        }
    }
    return var_r7;
}
