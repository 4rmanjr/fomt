extern s32 gUnk_0810787C;

typedef struct GenObj {
    u8 _pad0[2180];
    s32 unk884;
    u8 _pad888[88];
    s32 unk8E0;
} GenObj;
void func_080B34DC(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if (arg0->unk8E0 == *((u8 *)var_r2 + &gUnk_0810787C)) {
        arg0->unk884 = var_r2;
        return;
    }
    var_r2 += 1;
    if (var_r2 > 4) {
        arg0->unk884 = 5;
        return;
    }
    goto loop_1;
}
