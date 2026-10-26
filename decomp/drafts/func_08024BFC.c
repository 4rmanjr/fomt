s32 func_0803240C(s32 *, void *);                     /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unkA;
    s32 unkE;
    u8 _pad12[2];
    struct GenObj *unk14;
    u8 _pad18[40];
    s32 unk40;
} GenObj;
void *func_08024BFC(GenObj *arg0, GenObj *arg1) {
    s32 sp0;
    s32 sp8;
    s16 temp_r1;
    s16 temp_r2;
    s32 var_r0;
    s32 var_r1;

    if ((((void (*)(void *,...))(arg1->unk14->unk40))(arg1) << 0x18) != 0) {
        temp_r1 = arg1->unkA;
        temp_r2 = arg1->unkE;
        sp0 = (s16) (temp_r1 - 7);
        sp0.unk2 = (s16) (temp_r2 - 9);
        sp0.unk4 = (s16) (temp_r1 + 7);
        sp0.unk6 = (s16) (temp_r2 + 5);
        var_r0 = sp0;
        var_r1 = sp4;
    } else {
        func_0803240C(&sp8, arg1);
        var_r0 = sp8;
        var_r1 = spC;
    }
    arg0->unk0 = var_r0;
    arg0->unk4 = var_r1;
    return arg0;
}
