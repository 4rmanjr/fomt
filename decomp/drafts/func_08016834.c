s32 method_0800CB7C__4CoopUi(s32, s32);               /* extern */
s32 method_0800D80C__4BarnUi(s32, s32);               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
} GenObj;
void func_08016834(GenObj *arg0, u32 arg1, s32 arg2) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    switch (arg1) {
    case 0:
        temp_r0 = temp_r4->unkA8;
        (*temp_r0)->unk3C(temp_r0, 0x2C);
        return;
    case 4:
        temp_r0_2 = temp_r4->unkA8;
        (*temp_r0_2)->unk3C(temp_r0_2, 0x2B);
        return;
    case 1:
    case 2:
        method_0800D80C__4BarnUi(temp_r4->unk8C + 0x5F0, arg2);
        temp_r0_3 = temp_r4->unkA8;
        (*temp_r0_3)->unk3C(temp_r0_3, arg2 + 0x36);
        return;
    case 3:
        method_0800CB7C__4CoopUi(temp_r4->unk8C + 0x410, arg2);
        temp_r0_4 = temp_r4->unkA8;
        (*temp_r0_4)->unk3C(temp_r0_4, arg2 + 0x2E);
        /* fallthrough */
    default:
        return;
    }
}
