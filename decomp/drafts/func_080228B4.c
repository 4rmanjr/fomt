s32 GetGrowthStage__C7Chicken(s32);                 /* extern */
s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08020080(void *, s32);                       /* extern */
s32 func_08022980();                                /* extern */
s32 func_080229A4(void *, u8);                      /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_080323C8(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[28];
    s32 unk20;
    s32 unk22;
    u8 _pad26[14];
    s32 unk34;
    s32 unk38;
} GenObj;
void func_080228B4(GenObj *arg0, u8 arg1, s32 arg2) {
    s32 var_r1;
    s32 var_r6;

    if (arg0->unk22 != func_08022980()) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_080229A4(arg0, arg1));
    if (arg1 != arg0->unk38) {
        var_r6 = -1;
        var_r1 = 0;
        if (GetGrowthStage__C7Chicken(arg0->unk34) != 0) {
            var_r1 = 3;
        }
        if ((arg1 == var_r1) && ((u32) (((u32) ((*arg0->unk0)->unk144()->unkA << 0x1B) >> 0x1B) - 6) > 0xEU)) {
            var_r6 = 8;
        }
        if (var_r6 >= 0) {
            func_08032384(arg0, var_r6, 1);
        } else {
            func_080323C8(arg0);
        }
    }
    arg0->unk38 = arg1;
}
