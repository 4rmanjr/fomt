s32 func_080088D4();                                /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[53];
    s32 unk39;
    s32 unk3A;
    u8 _pad3E[4];
    s32 unk42;
} GenObj;
s32 func_0806E1E8(GenObj *arg0) {
    s32 var_r5;
    void *temp_r0;

    var_r5 = 0;
    if (func_080088D4() & 2) {
        func_08008B6C(arg0 + 0x14, 0x6C);
        if ((s32) arg0->unk39 > 0) {
            temp_r0 = (arg0 + 0x3A) - 2;
            temp_r0->unk0 = (u8) arg0->unk3A;
            arg0->unk39 = 0;
            temp_r0->unk42 = 0x22;
            (temp_r0 + 0x42)->unk8 = 0x22;
        } else {
            var_r5 = 1;
        }
    }
    return var_r5;
}
