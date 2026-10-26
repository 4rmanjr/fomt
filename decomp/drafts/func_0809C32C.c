typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk5;
    s32 unk6;
    s32 unk7;
    s32 unk8;
    s32 unk9;
    s32 unkA;
    s32 unkB;
} GenObj;
u32 func_0809C32C(GenObj *arg0) {
    u32 var_r3;

    var_r3 = 0;
    if (((s32) ((0 - arg0->unk1) | (0 - arg0->unk7)) < 0) && ((s32) ((0 - arg0->unk0) | (0 - arg0->unk6)) < 0) && ((s32) ((0 - arg0->unk2) | (0 - arg0->unk8)) < 0) && ((s32) ((0 - arg0->unk3) | (0 - arg0->unk9)) < 0) && ((s32) ((0 - arg0->unk4) | (0 - arg0->unkA)) < 0)) {
        var_r3 = (u32) ((0 - arg0->unk5) | (0 - arg0->unkB)) >> 0x1F;
    }
    return var_r3;
}
