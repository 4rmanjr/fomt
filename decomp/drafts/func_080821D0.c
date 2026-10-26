s32 func_080C7F58();                                  /* extern */
extern s32 vtable_unk_080E7CE8;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    s32 unk6A4;
    s32 unk6A8;
    u8 _pad6AC[16940];
    s32 unk48D8;
    s32 unk48DC;
    s32 unk48E0;
    s32 unk48E4;
} GenObj;
void *func_080821D0(GenObj *arg0, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_r0;
    u32 var_r1;

    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7CE8;
    if (arg5 != 0) {
        arg0->unk6A4 = 9;
    } else {
        arg0->unk6A4 = arg5;
    }
    var_r1 = 1;
    if (arg2 == 0) {
        var_r1 = (u32) ((0 - arg5) | arg5) >> 0x1F;
    }
    arg0->unk6A8 = (s8) var_r1;
    var_r0 = 0xA;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    arg0->unk48D8 = arg3;
    arg0->unk48DC = arg4;
    arg0->unk48E0 = arg5;
    arg0->unk48E4 = arg6;
    return arg0;
}
