s32 func_080ADD5C(s32, s32, s32);                       /* extern */
s32 func_080ADD78(s32, void *, s32 **);               /* extern */
extern s32 vtable_unk_080E78F0;

typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
    s32 unk16;
    s32 unk19;
} GenObj;
void func_080507F8(s32 arg0, u8 *arg1, s32 arg2, ? arg3) {
    s32 *sp0;
    s32 temp_r0_2;
    s32 temp_r4;
    u32 var_r0;
    u32 var_r0_2;
    u8 temp_r0;
    void *temp_r5;

    temp_r0 = *arg1;
    temp_r5 = arg0 + 0xD0;
    var_r0 = (u32) (temp_r0 << 0x1E) >> 0x1E;
    if (var_r0 > 2U) {
        var_r0 = var_r0 % 3U;
    }
    temp_r5->unk16 = (s16) var_r0;
    var_r0_2 = (u32) (temp_r0 << 0x19) >> 0x1B;
    if (var_r0_2 > 0x1BU) {
        var_r0_2 = var_r0_2 % 28U;
    }
    temp_r5->unk14 = (s16) var_r0_2;
    temp_r5->unk19 = 0;
    temp_r4 = arg0 + 0xEC;
    func_080ADD5C(temp_r4, arg2, arg3);
    do {
        sp0 = &vtable_unk_080E78F0;
        temp_r0_2 = func_080ADD78(temp_r4, temp_r5, &sp0);
        sp0 = &vtable_unk_080E78F0;
    } while (temp_r0_2 == 1);
}
