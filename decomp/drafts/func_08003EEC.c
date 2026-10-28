s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_080E86C0;
extern s32 gUnk_080E8770;
extern s32 gUnk_080E877C;
extern s32 gUnk_080E878C;
extern s32 gUnk_080E87A4;
extern s32 gUnk_080E87FC;
extern s32 gUnk_080E8828;
extern s32 gUnk_080E8878;

typedef struct GenObj {
    u8 _pad0[128];
    s32 unk80;
    u8 unk84;
    u8 unk85;
    u8 _pad86[14];
    u8 unk94;
} GenObj;
void func_08003EEC(GenObj *arg0) {
    s32 *var_r1;
    u32 temp_r0;

    var_r1 = 0;
    temp_r0 = arg0->unk80;
    switch (temp_r0) {
    case 0:
        var_r1 = &gUnk_080E877C;
        if (arg0->unk84 != 0) {
            var_r1 = &gUnk_080E8770;
        }
        break;
    case 1: {
        u8 *q = (u8 *)arg0 + (arg0->unk85 << 7);
        if (q[0x98] != 0) {
            var_r1 = (s32 *)(q + 0x98);
        } else {
            var_r1 = &gUnk_080E878C;
        }
        break;
    }
    case 2:
        var_r1 = &gUnk_080E87A4;
        break;
    case 3:
        var_r1 = &gUnk_080E87FC;
        break;
    case 4:
        var_r1 = &gUnk_080E8828;
        break;
    case 5:
        var_r1 = &gUnk_080E8878;
        break;
    }
    if (var_r1 == 0) {
        var_r1 = &gUnk_080E86C0;
    }
    func_08050DC8((u8 *)arg0 + 0x10, var_r1, 0, 0);
}
