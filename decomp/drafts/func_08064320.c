u32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__C4CoopUi(s32, u32);                 /* extern */
s32 GetGrowthStage__C7Chicken();                    /* extern */
s32 func_08062E9C(void *, s32, ?, s32, s32 *);            /* extern */
s32 func_08063EB8(void *, s32, s32, s32 *, s32 *);        /* extern */
s32 func_08075E24(s32, s16);                          /* extern */
extern s32 gUnk_080FB880;
extern s32 gUnk_0875268C;
extern s32 gUnk_0875270C;
extern s32 gUnk_0875272C;
extern s32 gUnk_087527AC;
extern s32 vtable_unk_080E7A58;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[1412];
    s32 unk58C;
    u8 _pad590[36];
    void *unk5B4;
} GenObj;
void *func_08064320(GenObj *arg0, ? arg1, ? arg2) {
    s32 *var_r0;
    s32 *var_r3;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r6;
    u32 temp_r0;
    u32 var_r7;

    func_08062E9C(arg0, arg1, arg2, 0x2D, &gUnk_080FB880);
    arg0->unk5B4 = &vtable_unk_080E7A58;
    var_r6 = 0;
    var_r7 = 0;
    temp_r0 = GetCapacity__C4Coop(arg0->unk58C + 0x410);
    if (temp_r0 > 0U) {
        do {
            temp_r0_2 = GetChicken__C4CoopUi(arg0->unk58C + 0x410, var_r7);
            if (temp_r0_2 != 0) {
                temp_r0_3 = GetGrowthStage__C7Chicken();
                if ((temp_r0_3 != 0) && (temp_r0_3 == 1)) {
                    var_r3 = &gUnk_0875268C;
                    var_r0 = &gUnk_0875270C;
                } else {
                    var_r3 = &gUnk_0875272C;
                    var_r0 = &gUnk_087527AC;
                }
                func_08063EB8(arg0, var_r6, temp_r0_2, var_r3, var_r0);
                var_r6 += 1;
            }
            var_r7 += 1;
        } while (var_r7 < temp_r0);
    }
    func_08075E24(arg0->unk4, (s16) (((var_r6 * 5) + 5) * 8));
    return arg0;
}
