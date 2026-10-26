extern s32 gUnk_081043BC;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkA;
    struct GenObj *unkC;
} GenObj;
void *func_080A1CBC(GenObj *arg0, s32 arg2) {
    GenObj *sp0;
    s32 sp4;
    s32 spC;
    s32 temp_r0;
    s32 var_r0;
    void *temp_r2;

    temp_r0 = arg2 * 0xC;
    temp_r2 = temp_r0 + &gUnk_081043BC;
    sp0 = temp_r2->unk0;
    sp4 = *((u8 *)temp_r0 + (&gUnk_081043BC + 4));
    sp0.unk8 = (u16) temp_r2->unk8;
    sp0.unkA = (u16) temp_r2->unkA;
    switch (sp0) {                                  /* irregular */
    case 21:
    case 19:
        var_r0 = 1;
        break;
    case 20:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    spC = var_r0;
    arg0->unk0 = (s32) sp0.unk0;
    arg0->unk4 = (s32) sp0.unk4;
    arg0->unk8 = (s32) sp0.unk8;
    arg0->unkC = (s32) sp0.unkC;
    return arg0;
}
