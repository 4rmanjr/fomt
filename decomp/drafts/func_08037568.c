s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, s32 *); /* extern */
s32 SetMap__7AEntityUi(void *, s32);                  /* extern */
s32 func_08037618(void *, s32);                     /* extern */
s32 func_080A17A0(s32 *, u32);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[4];
    s32 unk8;
    s32 unk9;
    s32 unkA;
    u8 _padE[20];
    s32 unk22;
    u8 _pad26[30];
    s32 unk44;
} GenObj;
void func_08037568(GenObj *arg0) {
s32 sp0;
    u32 var_r3;
    u8 temp_r3;
    void *temp_r0;

    temp_r0 = (*arg0->unk0)->unk144();
    if ((u32) (((u32) (temp_r0->unkA << 0x1B) >> 0x1B) - 6) <= 9U) {
        temp_r3 = temp_r0->unk9;
        var_r3 = ((u32) (temp_r3 << 0x19) >> 0x1B) + ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) (temp_r0->unk8 << 0x1D) >> 0x1D) + 6) * 0x78));
        if (var_r3 > 6U) {
            var_r3 = var_r3 % 7U;
        }
        if ((var_r3 & 7) && (temp_r0->unk0 == 0)) {
            func_080A17A0(&sp0, (u32) (arg0->unk44 << 0x1E) >> 0x1E);
            SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp0);
            if (arg0->unk22 != func_08037618(arg0, 0)) {
                SetAnim__12AActorEntityUi(arg0);
            }
        } else {
            goto block_7;
        }
    } else {
block_7:
        SetMap__7AEntityUi(arg0, 0x234);
    }
}
