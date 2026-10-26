extern s32 gUnk_0810563C;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    u8 _pad8[12];
    s32 unk14;
} GenObj;
s32 func_080A45A8(GenObj *arg0) {
    s32 *var_r2;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r4;
    s32 var_r8;

    var_r8 = 7;
    var_r0 = ((arg0->unk2 & 0x3FF) << 6) | ((u8) arg0->unk1 >> 2);
    if ((s32) var_r0 < 0) {
        var_r0 += 7;
    }
    temp_r5 = var_r0 >> 3;
    var_r0_2 = ((arg0->unk4 & 0x3FF) << 6) | ((u8) arg0->unk3 >> 2);
    if ((s32) var_r0_2 < 0) {
        var_r0_2 += 7;
    }
    temp_r3 = var_r0_2 >> 3;
    var_r4 = 0;
    var_r2 = &gUnk_0810563C;
    var_r1 = 0;
loop_5:
    if ((((u32) (arg0->unk0 << 0x16) >> 0x16) == var_r2->unk0) && (temp_r5 >= (s32) *((u8 *)var_r1 + (&gUnk_0810563C + 4))) && (temp_r5 <= (s32) *((u8 *)var_r1 + (&gUnk_0810563C + 0xC))) && (temp_r3 >= (s32) *((u8 *)var_r1 + (&gUnk_0810563C + 8))) && (temp_r3 <= (s32) *((u8 *)var_r1 + (&gUnk_0810563C + 0x10)))) {
        var_r8 = var_r2->unk14;
    } else {
        var_r2 += 0x18;
        var_r1 += 0x18;
        var_r4 += 1;
        if (var_r4 <= 7) {
            goto loop_5;
        }
    }
    return var_r8;
}
